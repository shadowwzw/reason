bla#=10;

bla#=(Some 10);

bla#=(someFunc (Some 10));

test##var#=(Some (-10));

obj##.prop;

obj##.prod := exp;

preview##style##border#=(
                          Js.string "1px black dashed"
                        );

preview##(style##border)#=args somenum;

x##y##z#=(xxxx##yyyy##zzzz);

let result =
  js_method_run1 (!react)#createElement foo;

add zz##yy xx##ww;

/* These should print the same */
let res = x##y + z##q; /* AST */

let res = x##y + z##q; /* Minimum parens */

/* These should print the same */
let res = y + z##q##a; /* AST */

let res = y + z##q##a; /* Min parens */

/* Make sure it's actually parsed as left precedence
 * and that is maintained when printed */
let res = z##(q##a); /* AST */

let res = z##(q##a); /* Min parens */

/* These should print the same */
let res = !x##y; /* AST */

let res = !x##y; /* Minimum parens */

/* These should print the same */
let res = !z##q##a; /* AST */

let res = !z##q##a; /* Min parens */

/* These should print the same */
let res = ?!!x##y; /* AST */

let res = ?!!x##y; /* Minimum parens */

/* These should print the same */
let res = ?!!z##(q##a); /* AST */

let res = ?!!z##(q##a); /* Min parens */

res#=?!!z##q;

res#=?!!z##(q##a);

let result = myFunction (x y##z) (a b#=c);

(!x)##y##(b##c);