module.exports = grammar({
    name: "greentea",

    extras: ($) => [/\s/],

    rules: {
        source_file: ($) =>
            choice(seq($._headers, optional("\n")), seq($._headers, "\n", $.body), $.body),

        _headers: ($) => prec.right(1, seq($._header, repeat(seq("\n", $._header)))),
        _header: ($) => choice($.import_statement, $.with_statement),

        import_statement: ($) => seq("{>", "import", field("module", $.module)),
        module: ($) => seq($.variable, repeat(seq("/", $.variable))),

        with_statement: ($) => seq("{>", "with", $.variable, "as", $.type),

        body: ($) => $.content,
        content: ($) =>
            prec.right(1, repeat1(choice($.generalText, $.value, $.builder, $.if_statement))),

        if_statement: ($) => seq($._if_block, $.content, $._if_end_block),
        _if_block: ($) => seq("{%", "if", $.variable, "%}"),
        _if_end_block: ($) => seq("{%", "endif", "%}"),

        value: ($) => seq("{{", $.variable, "}}"),
        builder: ($) => seq("{[", $.variable, "]}"),
        generalText: ($) => /(([^{][^{])|([^{][^\[])|([^{][^%])|([^{][^>]))+/,

        variable: ($) => /[a-z][a-zA-Z_]+/,
        type: ($) => /[A-Z][a-zA-Z_]+/,
    },
});
