module.exports = grammar({
  name: 'greentea',

  rules: {
    source_file: $ => seq(repeat(choice($.import_statement, $.with_statement)), $.body),

    import_statement: $ => seq("{>", "import", $.variable, repeat(seq('/', $.variable))),

    with_statement: $ => seq("{>", "with", $.variable, "as", $.type),

    body: $ => repeat1(choice($.value, $.builder)),

    value: $ => seq("{{", $.variable, "}}"),
    builder: $ => seq("{[", $.variable, "]}"),

    variable: $ => /[a-z][a-zA-Z]+/,
    type: $ => /[A-Z][a-zA-Z]+/,
  }
});

