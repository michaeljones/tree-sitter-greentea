module.exports = grammar({
    name: "greentea",

    extras: ($) => [/\s/],

    externals: ($) => [$._openValue, $._openBuilder, $._openBlock, $._openLine, $.text],

    rules: {
        source_file: ($) =>
            choice(seq($._headers, optional("\n")), seq($._headers, "\n", $.body), $.body),

        _headers: ($) => prec.right(1, seq($._header, repeat(seq("\n", $._header)))),
        _header: ($) => choice($.import_statement, $.with_statement),

        import_statement: ($) => seq($._openLine, "import", field("module", $.module)),
        module: ($) => seq($.variable, repeat(seq("/", $.variable))),

        with_statement: ($) => seq($._openLine, "with", $.variable, "as", $.type),

        body: ($) => $.content,
        content: ($) =>
            prec.right(1, repeat1(choice($.value, $.builder, $.if_statement, $.for_loop, $.text))),

        if_statement: ($) =>
            seq(
                $._if_block,
                optional($.content),
                optional(seq($._else_block, optional($.content))),
                $._if_end_block
            ),
        _if_block: ($) => seq($._openBlock, "if", $.variable, "%}"),
        _else_block: ($) => seq($._openBlock, "else", "%}"),
        _if_end_block: ($) => seq($._openBlock, "endif", "%}"),

        for_loop: ($) => seq($._for_block, optional($.content), $._for_end_block),
        _for_block: ($) =>
            seq(
                $._openBlock,
                "for",
                $.variable,
                optional(seq("as", $.type)),
                "in",
                $.variable,
                "%}"
            ),
        _for_end_block: ($) => seq($._openBlock, "endfor", "%}"),

        value: ($) => seq($._openValue, $.variable, "}}"),
        builder: ($) => seq($._openBuilder, $.variable, "]}"),

        variable: ($) => /[a-z][a-zA-Z_]+/,
        type: ($) => /[A-Z][a-zA-Z_]+/,
    },
});
