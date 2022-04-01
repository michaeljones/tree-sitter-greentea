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
        content: ($) => repeat1(choice($.generalText, $.value, $.builder, $.if_statement)),

        if_statement: ($) => seq($.if_block, $.content, $.if_end_block),
        if_block: ($) => seq("{%", "if", $.variable, "%}"),
        if_end_block: ($) => token(seq("{%", "endif", "%}")),

        value: ($) => seq("{{", $.variable, "}}"),
        builder: ($) => seq("{[", $.variable, "]}"),
        generalText: ($) => /(([^{][^{])|([^{][^\[])|([^{][^%])|([^{][^>]))+/,

        variable: ($) => /[a-z][a-zA-Z]+/,
        type: ($) => /[A-Z][a-zA-Z]+/,
    },
});
