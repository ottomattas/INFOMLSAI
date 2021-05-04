/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


#include "nssis.hh"

/* User implementation prologue.  */
#line 67 "parser/nssis.yy"

#include "mcmas-driver.hh"

  extern map < string, int > options;
  extern vector<string *> *string_table;
  extern vector<variable *> *variable_table;
  extern vector<bool_expression *> *logic_expression_table;
  extern vector<bool_expression *> *logic_expression_table1;
  extern map<string, basic_agent *> *is_agents;
  extern vector<basic_agent *> *agents;
  extern map<string, bool_expression *> *is_evaluation;
  extern bool_expression *is_istates;
  extern map<string, set<string> > *is_groups;
  extern vector<modal_formula> *is_formulae;
  extern vector<fairness_expression *> *is_fairness;

  extern int search_string_table(string *s);
  extern int search_variable_table(variable *v);
  extern int search_logic_expression_table(expression *e1, expression *e2);
  extern int search_logic_expression_table1(expression *e1, expression *e2);


/* Line 317 of lalr1.cc.  */
#line 64 "parser/nssis.cc"

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG							\
  for (bool yydebugcond_ = yydebug_; yydebugcond_; yydebugcond_ = false)	\
    (*yycdebug_)

/* Enable debugging if requested.  */
#if YYDEBUG

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab

namespace yy
{
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  mcmas_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  mcmas_parser::mcmas_parser (mcmas_driver& driver_yyarg)
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
      driver (driver_yyarg)
  {
  }

  mcmas_parser::~mcmas_parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  mcmas_parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
        case 77: /* "\"identifier\"" */
#line 234 "parser/nssis.yy"
	{ debug_stream () << *(yyvaluep->sval); };
#line 194 "parser/nssis.cc"
	break;
      case 78: /* "\"number\"" */
#line 274 "parser/nssis.yy"
	{ debug_stream () << (yyvaluep->ival); };
#line 199 "parser/nssis.cc"
	break;
       default:
	  break;
      }
  }


  void
  mcmas_parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif /* ! YYDEBUG */

  void
  mcmas_parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
        case 77: /* "\"identifier\"" */
#line 235 "parser/nssis.yy"
	{ delete (yyvaluep->sval); };
#line 234 "parser/nssis.cc"
	break;
      case 88: /* "obsvardef" */
#line 236 "parser/nssis.yy"
	{ delete (yyvaluep->map_vec_basictype); };
#line 239 "parser/nssis.cc"
	break;
      case 89: /* "varidlist" */
#line 237 "parser/nssis.yy"
	{ delete (yyvaluep->map_vec_basictype); };
#line 244 "parser/nssis.cc"
	break;
      case 90: /* "onevardef" */
#line 238 "parser/nssis.yy"
	{ delete (yyvaluep->_basictype); };
#line 249 "parser/nssis.cc"
	break;
      case 91: /* "enumlist" */
#line 239 "parser/nssis.yy"
	{ delete (yyvaluep->set_string); };
#line 254 "parser/nssis.cc"
	break;
      case 95: /* "envardef" */
#line 241 "parser/nssis.yy"
	{ delete (yyvaluep->map_vec_basictype); };
#line 259 "parser/nssis.cc"
	break;
      case 96: /* "vardef" */
#line 240 "parser/nssis.yy"
	{ delete (yyvaluep->map_vec_basictype); };
#line 264 "parser/nssis.cc"
	break;
      case 100: /* "reddef" */
#line 249 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 269 "parser/nssis.cc"
	break;
      case 102: /* "rboolcond" */
#line 248 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 274 "parser/nssis.cc"
	break;
      case 105: /* "envevdef" */
#line 242 "parser/nssis.yy"
	{ delete (yyvaluep->vector_evolution_line); };
#line 279 "parser/nssis.cc"
	break;
      case 106: /* "envevdeflist" */
#line 243 "parser/nssis.yy"
	{ delete (yyvaluep->vector_evolution_line); };
#line 284 "parser/nssis.cc"
	break;
      case 107: /* "envevline" */
#line 244 "parser/nssis.yy"
	{ delete (yyvaluep->_evolution_line); };
#line 289 "parser/nssis.cc"
	break;
      case 108: /* "boolresult" */
#line 245 "parser/nssis.yy"
	{ delete (yyvaluep->vector_assignment); };
#line 294 "parser/nssis.cc"
	break;
      case 113: /* "agent" */
#line 254 "parser/nssis.yy"
	{ delete (yyvaluep->_basic_agent); };
#line 299 "parser/nssis.cc"
	break;
      case 120: /* "enactiondef" */
#line 256 "parser/nssis.yy"
	{ delete (yyvaluep->set_string); };
#line 304 "parser/nssis.cc"
	break;
      case 121: /* "actiondef" */
#line 255 "parser/nssis.yy"
	{ delete (yyvaluep->set_string); };
#line 309 "parser/nssis.cc"
	break;
      case 122: /* "actionidlist" */
#line 257 "parser/nssis.yy"
	{ delete (yyvaluep->set_string); };
#line 314 "parser/nssis.cc"
	break;
      case 125: /* "enprotdef" */
#line 259 "parser/nssis.yy"
	{ delete (yyvaluep->vector_protocol_line); };
#line 319 "parser/nssis.cc"
	break;
      case 126: /* "protdef" */
#line 258 "parser/nssis.yy"
	{ delete (yyvaluep->vector_protocol_line); };
#line 324 "parser/nssis.cc"
	break;
      case 128: /* "protdeflist" */
#line 260 "parser/nssis.yy"
	{ delete (yyvaluep->vector_protocol_line); };
#line 329 "parser/nssis.cc"
	break;
      case 132: /* "protline" */
#line 261 "parser/nssis.yy"
	{ delete (yyvaluep->_protocol_line); };
#line 334 "parser/nssis.cc"
	break;
      case 134: /* "enabledidlist" */
#line 262 "parser/nssis.yy"
	{ delete (yyvaluep->set_string); };
#line 339 "parser/nssis.cc"
	break;
      case 135: /* "evdef" */
#line 263 "parser/nssis.yy"
	{ delete (yyvaluep->vector_evolution_line); };
#line 344 "parser/nssis.cc"
	break;
      case 136: /* "evdeflist" */
#line 264 "parser/nssis.yy"
	{ delete (yyvaluep->vector_evolution_line); };
#line 349 "parser/nssis.cc"
	break;
      case 137: /* "evline" */
#line 265 "parser/nssis.yy"
	{ delete (yyvaluep->_evolution_line); };
#line 354 "parser/nssis.cc"
	break;
      case 139: /* "lboolcond" */
#line 246 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 359 "parser/nssis.cc"
	break;
      case 161: /* "eboolcond" */
#line 247 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 364 "parser/nssis.cc"
	break;
      case 163: /* "gboolcond" */
#line 266 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 369 "parser/nssis.cc"
	break;
      case 164: /* "varvalue1" */
#line 250 "parser/nssis.yy"
	{ delete (yyvaluep->_expression); };
#line 374 "parser/nssis.cc"
	break;
      case 165: /* "boolvalue" */
#line 267 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_value); };
#line 379 "parser/nssis.cc"
	break;
      case 166: /* "varvalue2" */
#line 251 "parser/nssis.yy"
	{ delete (yyvaluep->_expression); };
#line 384 "parser/nssis.cc"
	break;
      case 167: /* "varvalue3" */
#line 252 "parser/nssis.yy"
	{ delete (yyvaluep->_expression); };
#line 389 "parser/nssis.cc"
	break;
      case 168: /* "varvalue4" */
#line 253 "parser/nssis.yy"
	{ delete (yyvaluep->_expression); };
#line 394 "parser/nssis.cc"
	break;
      case 173: /* "evaboolcond" */
#line 268 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 399 "parser/nssis.cc"
	break;
      case 177: /* "isboolcond" */
#line 269 "parser/nssis.yy"
	{ delete (yyvaluep->_bool_expression); };
#line 404 "parser/nssis.cc"
	break;
      case 184: /* "namelist" */
#line 270 "parser/nssis.yy"
	{ delete (yyvaluep->set_string); };
#line 409 "parser/nssis.cc"
	break;
      case 185: /* "agentname" */
#line 271 "parser/nssis.yy"
	{ delete (yyvaluep->sval); };
#line 414 "parser/nssis.cc"
	break;
      case 202: /* "formula" */
#line 272 "parser/nssis.yy"
	{ delete (yyvaluep->_modal_formula); };
#line 419 "parser/nssis.cc"
	break;

	default:
	  break;
      }
  }

  void
  mcmas_parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

  std::ostream&
  mcmas_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  mcmas_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  mcmas_parser::debug_level_type
  mcmas_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  mcmas_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }


  int
  mcmas_parser::parse ()
  {
    /// Look-ahead and look-ahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the look-ahead.
    semantic_type yylval;
    /// Location of the look-ahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* User initialization code.  */
    #line 29 "parser/nssis.yy"
{
  // Initialize the initial location.
  yylloc.begin.filename = yylloc.end.filename = &driver.file;
}
  /* Line 555 of yacc.c.  */
#line 501 "parser/nssis.cc"
    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;
    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without look-ahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a look-ahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc, driver);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Accept?  */
    if (yyn == yyfinal_)
      goto yyacceptlab;

    /* Shift the look-ahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted unless it is eof.  */
    if (yychar != yyeof_)
      yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 4:
#line 282 "parser/nssis.yy"
    {
    options["smv"] = 0;
 ;}
    break;

  case 5:
#line 285 "parser/nssis.yy"
    {
    options["smv"] = 1;
 ;}
    break;

  case 6:
#line 288 "parser/nssis.yy"
    {
  driver.syntax_error = true;
 ;}
    break;

  case 11:
#line 297 "parser/nssis.yy"
    {
  basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>,
				     new map<string, basictype *>, new vector<basictype *>, NULL, new set<string>, 
				     new vector<protocol_line*>, new vector<evolution_line *>);
  (*is_agents)["Environment"] = env;
  agents->insert(agents->begin(), env);
 ;}
    break;

  case 12:
#line 304 "parser/nssis.yy"
    {
  basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, 
				     new map<string, basictype *>, new vector<basictype *>, NULL, new set<string>, 
				     new vector<protocol_line*>, new vector<evolution_line *>);
  (*is_agents)["Environment"] = env;
  agents->insert(agents->begin(), env);
 ;}
    break;

  case 13:
#line 311 "parser/nssis.yy"
    {
  basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, 
				     new map<string, basictype *>, new vector<basictype *>, NULL, new set<string>, 
				     new vector<protocol_line*>, new vector<evolution_line *>);
  (*is_agents)["Environment"] = env;
  agents->insert(agents->begin(), env);
 ;}
    break;

  case 14:
#line 318 "parser/nssis.yy"
    {
  basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, 
				     new map<string, basictype *>, new vector<basictype *>, NULL, new set<string>, 
				     new vector<protocol_line*>, new vector<evolution_line *>);
  (*is_agents)["Environment"] = env;
  agents->insert(agents->begin(), env);
 ;}
    break;

  case 15:
#line 328 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 16:
#line 331 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 17:
#line 335 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 18:
#line 339 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 19:
#line 343 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 20:
#line 346 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 21:
#line 350 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 22:
#line 354 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 23:
#line 359 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(8) - (1)].ival)==1 && (yysemantic_stack_[(8) - (2)].map_vec_basictype)!=NULL && (yysemantic_stack_[(8) - (3)].map_vec_basictype)!=NULL && (yysemantic_stack_[(8) - (5)].set_string)!=NULL && (yysemantic_stack_[(8) - (6)].vector_protocol_line)!=NULL && (yysemantic_stack_[(8) - (7)].vector_evolution_line)!=NULL && (yysemantic_stack_[(8) - (8)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, (yysemantic_stack_[(8) - (2)].map_vec_basictype)->first, (yysemantic_stack_[(8) - (2)].map_vec_basictype)->second, (yysemantic_stack_[(8) - (3)].map_vec_basictype)->first, (yysemantic_stack_[(8) - (3)].map_vec_basictype)->second, (yysemantic_stack_[(8) - (4)]._bool_expression), (yysemantic_stack_[(8) - (5)].set_string), (yysemantic_stack_[(8) - (6)].vector_protocol_line), (yysemantic_stack_[(8) - (7)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 24:
#line 366 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (1)].ival)==1 && (yysemantic_stack_[(7) - (2)].map_vec_basictype)!=NULL && (yysemantic_stack_[(7) - (3)].map_vec_basictype)!=NULL && (yysemantic_stack_[(7) - (4)].set_string)!=NULL && (yysemantic_stack_[(7) - (5)].vector_protocol_line)!=NULL && (yysemantic_stack_[(7) - (6)].vector_evolution_line)!=NULL && (yysemantic_stack_[(7) - (7)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, (yysemantic_stack_[(7) - (2)].map_vec_basictype)->first, (yysemantic_stack_[(7) - (2)].map_vec_basictype)->second, (yysemantic_stack_[(7) - (3)].map_vec_basictype)->first, (yysemantic_stack_[(7) - (3)].map_vec_basictype)->second, NULL, (yysemantic_stack_[(7) - (4)].set_string), (yysemantic_stack_[(7) - (5)].vector_protocol_line), (yysemantic_stack_[(7) - (6)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 25:
#line 373 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (1)].ival)==1 && (yysemantic_stack_[(7) - (2)].map_vec_basictype)!=NULL && (yysemantic_stack_[(7) - (4)].set_string)!=NULL && (yysemantic_stack_[(7) - (5)].vector_protocol_line)!=NULL && (yysemantic_stack_[(7) - (6)].vector_evolution_line)!=NULL && (yysemantic_stack_[(7) - (7)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, (yysemantic_stack_[(7) - (2)].map_vec_basictype)->first, (yysemantic_stack_[(7) - (2)].map_vec_basictype)->second, (yysemantic_stack_[(7) - (3)]._bool_expression), (yysemantic_stack_[(7) - (4)].set_string), (yysemantic_stack_[(7) - (5)].vector_protocol_line), (yysemantic_stack_[(7) - (6)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 26:
#line 380 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(6) - (1)].ival)==1 && (yysemantic_stack_[(6) - (2)].map_vec_basictype)!=NULL && (yysemantic_stack_[(6) - (3)].set_string)!=NULL && (yysemantic_stack_[(6) - (4)].vector_protocol_line)!=NULL && (yysemantic_stack_[(6) - (5)].vector_evolution_line)!=NULL && (yysemantic_stack_[(6) - (6)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, (yysemantic_stack_[(6) - (2)].map_vec_basictype)->first, (yysemantic_stack_[(6) - (2)].map_vec_basictype)->second, NULL, (yysemantic_stack_[(6) - (3)].set_string), (yysemantic_stack_[(6) - (4)].vector_protocol_line), (yysemantic_stack_[(6) - (5)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 27:
#line 387 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (1)].ival)==1 && (yysemantic_stack_[(7) - (2)].map_vec_basictype)!=NULL && (yysemantic_stack_[(7) - (4)].set_string)!=NULL && (yysemantic_stack_[(7) - (5)].vector_protocol_line)!=NULL && (yysemantic_stack_[(7) - (6)].vector_evolution_line)!=NULL && (yysemantic_stack_[(7) - (7)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, (yysemantic_stack_[(7) - (2)].map_vec_basictype)->first, (yysemantic_stack_[(7) - (2)].map_vec_basictype)->second, new map<string, basictype *>, new vector<basictype *>, (yysemantic_stack_[(7) - (3)]._bool_expression), (yysemantic_stack_[(7) - (4)].set_string), (yysemantic_stack_[(7) - (5)].vector_protocol_line), (yysemantic_stack_[(7) - (6)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 28:
#line 394 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(6) - (1)].ival)==1 && (yysemantic_stack_[(6) - (2)].map_vec_basictype)!=NULL && (yysemantic_stack_[(6) - (3)].set_string)!=NULL && (yysemantic_stack_[(6) - (4)].vector_protocol_line)!=NULL && (yysemantic_stack_[(6) - (5)].vector_evolution_line)!=NULL && (yysemantic_stack_[(6) - (6)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, (yysemantic_stack_[(6) - (2)].map_vec_basictype)->first, (yysemantic_stack_[(6) - (2)].map_vec_basictype)->second, new map<string, basictype *>, new vector<basictype *>, NULL, (yysemantic_stack_[(6) - (3)].set_string), (yysemantic_stack_[(6) - (4)].vector_protocol_line), (yysemantic_stack_[(6) - (5)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 29:
#line 401 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(6) - (1)].ival)==1 && (yysemantic_stack_[(6) - (3)].set_string)!=NULL && (yysemantic_stack_[(6) - (4)].vector_protocol_line)!=NULL && (yysemantic_stack_[(6) - (5)].vector_evolution_line)!=NULL && (yysemantic_stack_[(6) - (6)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, 
				       new map<string, basictype *>, new vector<basictype *>, (yysemantic_stack_[(6) - (2)]._bool_expression), (yysemantic_stack_[(6) - (3)].set_string), (yysemantic_stack_[(6) - (4)].vector_protocol_line), (yysemantic_stack_[(6) - (5)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 30:
#line 409 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (1)].ival)==1 && (yysemantic_stack_[(5) - (2)].set_string)!=NULL && (yysemantic_stack_[(5) - (3)].vector_protocol_line)!=NULL && (yysemantic_stack_[(5) - (4)].vector_evolution_line)!=NULL && (yysemantic_stack_[(5) - (5)].ival)==1) { // redstates is NULL if no red state at all
    basic_agent *env = new basic_agent((*string_table)[0], NULL, new map<string, basictype *>, new vector<basictype *>, 
				       new map<string, basictype *>, new vector<basictype *>, NULL, (yysemantic_stack_[(5) - (2)].set_string), (yysemantic_stack_[(5) - (3)].vector_protocol_line), (yysemantic_stack_[(5) - (4)].vector_evolution_line));
    (*is_agents)["Environment"] = env;
    agents->push_back(env);
  }
 ;}
    break;

  case 31:
#line 417 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 32:
#line 422 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 33:
#line 425 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 34:
#line 429 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 35:
#line 433 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 36:
#line 437 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 37:
#line 440 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 38:
#line 444 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 39:
#line 448 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 40:
#line 452 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.map_vec_basictype) = (yysemantic_stack_[(3) - (2)].map_vec_basictype);
  else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 41:
#line 458 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].ival)==1 && (yysemantic_stack_[(2) - (2)].ival)==1) {
    map<string, basictype *>* a = new map<string, basictype *>;
    vector<basictype *>* b = new vector<basictype *>;
    (yyval.map_vec_basictype) = new pair<map<string, basictype *>*, vector<basictype *>* >(a, b);
  } else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 42:
#line 466 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)]._basictype)!=NULL) {
    map<string, basictype *>* a = new map<string, basictype *>;
    vector<basictype *>* b = new vector<basictype *>;
    (yyval.map_vec_basictype) = new pair<map<string, basictype *>*, vector<basictype *>* >(a, b);
    (*a)[(yysemantic_stack_[(2) - (1)]._basictype)->get_name()] = (yysemantic_stack_[(2) - (1)]._basictype);
    b->push_back((yysemantic_stack_[(2) - (1)]._basictype));
  } else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 43:
#line 476 "parser/nssis.yy"
    {
  (yyval.map_vec_basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._basictype));
 ;}
    break;

  case 44:
#line 481 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].map_vec_basictype)!=NULL && (yysemantic_stack_[(3) - (2)]._basictype)!=NULL) {
    if((yysemantic_stack_[(3) - (1)].map_vec_basictype)->first->find((yysemantic_stack_[(3) - (2)]._basictype)->get_name()) != (yysemantic_stack_[(3) - (1)].map_vec_basictype)->first->end()) {
			if (options["quiet"] == 0)			
				cout << "warning: type " << (yysemantic_stack_[(3) - (2)]._basictype)->get_name() << " has already been defined." << endl;
    } else { 
      (*((yysemantic_stack_[(3) - (1)].map_vec_basictype)->first))[(yysemantic_stack_[(3) - (2)]._basictype)->get_name()] = (yysemantic_stack_[(3) - (2)]._basictype);
      (yysemantic_stack_[(3) - (1)].map_vec_basictype)->second->push_back((yysemantic_stack_[(3) - (2)]._basictype));
      (yyval.map_vec_basictype) = (yysemantic_stack_[(3) - (1)].map_vec_basictype);
    }
  } else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 45:
#line 494 "parser/nssis.yy"
    {
  (yyval.map_vec_basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].map_vec_basictype));
  USE((yysemantic_stack_[(3) - (2)]._basictype));
 ;}
    break;

  case 46:
#line 500 "parser/nssis.yy"
    {
  (yyval.map_vec_basictype) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 47:
#line 505 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL) {
    int i = search_string_table((yysemantic_stack_[(3) - (1)].sval));
    if(i>=0) {
      (yyval._basictype) = new basictype((*string_table)[i]);
      free((yysemantic_stack_[(3) - (1)].sval));
    } else {
      (yyval._basictype) = new basictype((yysemantic_stack_[(3) - (1)].sval));
      string_table->push_back((yysemantic_stack_[(3) - (1)].sval));
    }
  } else
    (yyval._basictype) = NULL;
 ;}
    break;

  case 48:
#line 518 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 49:
#line 523 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 50:
#line 528 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (1)].sval)!=NULL) {
    if((yysemantic_stack_[(5) - (3)].ival)>(yysemantic_stack_[(5) - (5)].ival))
      cout << "Error: the lower bound " << (yysemantic_stack_[(5) - (3)].ival) << " is greater than the upper bound " << (yysemantic_stack_[(5) - (5)].ival) << endl;
    int i = search_string_table((yysemantic_stack_[(5) - (1)].sval));
    if(i>=0) {
      (yyval._basictype) = new rangedint((*string_table)[i], (yysemantic_stack_[(5) - (3)].ival), (yysemantic_stack_[(5) - (5)].ival));
      free((yysemantic_stack_[(5) - (1)].sval));
    } else {
      (yyval._basictype) = new rangedint((yysemantic_stack_[(5) - (1)].sval), (yysemantic_stack_[(5) - (3)].ival), (yysemantic_stack_[(5) - (5)].ival));
      string_table->push_back((yysemantic_stack_[(5) - (1)].sval));
    }
  }
  else
    (yyval._basictype) = NULL;
 ;}
    break;

  case 51:
#line 544 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
 ;}
    break;

  case 52:
#line 549 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
 ;}
    break;

  case 53:
#line 554 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
 ;}
    break;

  case 54:
#line 559 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (1)].sval)!=NULL && (yysemantic_stack_[(5) - (4)].set_string)!=NULL) {
    int i = search_string_table((yysemantic_stack_[(5) - (1)].sval));
    if(i>=0) {
      (yyval._basictype) = new enumerate((*string_table)[i], (yysemantic_stack_[(5) - (4)].set_string));
      free((yysemantic_stack_[(5) - (1)].sval));
    } else {
      (yyval._basictype) = new enumerate((yysemantic_stack_[(5) - (1)].sval), (yysemantic_stack_[(5) - (4)].set_string));
      string_table->push_back((yysemantic_stack_[(5) - (1)].sval));
    }
  } else
    (yyval._basictype) = NULL;
 ;}
    break;

  case 55:
#line 572 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (3)].set_string));
 ;}
    break;

  case 56:
#line 578 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (4)].set_string));
 ;}
    break;

  case 57:
#line 584 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (3)].set_string));
 ;}
    break;

  case 58:
#line 590 "parser/nssis.yy"
    {
  (yyval._basictype) = NULL;
  driver.syntax_error = true;
 ;}
    break;

  case 59:
#line 594 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    (yyval.set_string) = new set<string>;
    (yyval.set_string)->insert(*(yysemantic_stack_[(1) - (1)].sval));
    free ((yysemantic_stack_[(1) - (1)].sval));
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 60:
#line 602 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].set_string)!=NULL && (yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    pair<set<string>::iterator, bool> ret = (yysemantic_stack_[(3) - (1)].set_string)->insert(*(yysemantic_stack_[(3) - (3)].sval));
    if(!ret.second && options["quiet"] == 0)
      cout << "warning: " << *(yysemantic_stack_[(3) - (3)].sval) << " has been defined for the enum type." << endl;
    (yyval.set_string) = (yysemantic_stack_[(3) - (1)].set_string);
    free ((yysemantic_stack_[(3) - (3)].sval));
  } else
    (yyval.set_string) = NULL;
	USE((yysemantic_stack_[(3) - (1)].set_string));
 ;}
    break;

  case 61:
#line 613 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].set_string));
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 62:
#line 619 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 63:
#line 623 "parser/nssis.yy"
    {
  (yyval.ival) = (yysemantic_stack_[(1) - (1)].ival);
 ;}
    break;

  case 64:
#line 626 "parser/nssis.yy"
    {
  (yyval.ival) = 0-(yysemantic_stack_[(2) - (2)].ival);
 ;}
    break;

  case 65:
#line 629 "parser/nssis.yy"
    {
  (yyval.ival) = -1;
  driver.syntax_error = true;
 ;}
    break;

  case 66:
#line 633 "parser/nssis.yy"
    {
  (yyval.ival) = -1;
  driver.syntax_error = true;
  ;}
    break;

  case 67:
#line 639 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 68:
#line 642 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 69:
#line 646 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 70:
#line 650 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 71:
#line 654 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 72:
#line 657 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 73:
#line 661 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 74:
#line 665 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 75:
#line 669 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.map_vec_basictype) = (yysemantic_stack_[(3) - (2)].map_vec_basictype);
  else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 76:
#line 675 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].ival)==1 && (yysemantic_stack_[(2) - (2)].ival)==1) {
    map<string, basictype *>* a = new map<string, basictype *>;
    vector<basictype *>* b = new vector<basictype *>;
    (yyval.map_vec_basictype) = new pair<map<string, basictype *>*, vector<basictype *>* >(a, b);
  } else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 77:
#line 683 "parser/nssis.yy"
    {
  (yyval.map_vec_basictype) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 78:
#line 689 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.map_vec_basictype) = (yysemantic_stack_[(3) - (2)].map_vec_basictype);
  else
    (yyval.map_vec_basictype) = NULL;
 ;}
    break;

  case 79:
#line 695 "parser/nssis.yy"
    {
  (yyval.map_vec_basictype) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 80:
#line 701 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 81:
#line 704 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 82:
#line 708 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 83:
#line 712 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 84:
#line 716 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 85:
#line 719 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 86:
#line 723 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 87:
#line 727 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 88:
#line 732 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression);
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 89:
#line 738 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL; 
 ;}
    break;

  case 90:
#line 741 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 91:
#line 746 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression);
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 92:
#line 752 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL; 
 ;}
    break;

  case 93:
#line 755 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 94:
#line 760 "parser/nssis.yy"
    {
  (yyval._bool_expression) = (yysemantic_stack_[(2) - (1)]._bool_expression);
  ;}
    break;

  case 95:
#line 763 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._bool_expression));
  ;}
    break;

  case 96:
#line 768 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 97:
#line 773 "parser/nssis.yy"
    {
  (yyval._bool_expression) = (yysemantic_stack_[(2) - (1)]._bool_expression);
  ;}
    break;

  case 98:
#line 776 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._bool_expression));
  ;}
    break;

  case 99:
#line 781 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 100:
#line 788 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 101:
#line 791 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 102:
#line 795 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 103:
#line 799 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 104:
#line 803 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 105:
#line 806 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 106:
#line 810 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 107:
#line 814 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 108:
#line 818 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.vector_evolution_line) = (yysemantic_stack_[(3) - (2)].vector_evolution_line);
  else
    (yyval.vector_evolution_line) = NULL;
 ;}
    break;

  case 109:
#line 824 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].ival)==1 && (yysemantic_stack_[(2) - (2)].ival)==1)
    (yyval.vector_evolution_line) = new vector<evolution_line *>;
  else
    (yyval.vector_evolution_line) = NULL;
 ;}
    break;

  case 110:
#line 830 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)]._evolution_line)!=NULL) {
    (yyval.vector_evolution_line) = new vector<evolution_line *>;
    (yyval.vector_evolution_line)->push_back((yysemantic_stack_[(1) - (1)]._evolution_line));
  } else
    (yyval.vector_evolution_line) = NULL;
 ;}
    break;

  case 111:
#line 837 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].vector_evolution_line)!=NULL && (yysemantic_stack_[(2) - (2)]._evolution_line)!=NULL) {
    (yysemantic_stack_[(2) - (1)].vector_evolution_line)->push_back((yysemantic_stack_[(2) - (2)]._evolution_line));
    (yyval.vector_evolution_line) = (yysemantic_stack_[(2) - (1)].vector_evolution_line);
  } else
    (yyval.vector_evolution_line) = NULL;
 ;}
    break;

  case 112:
#line 844 "parser/nssis.yy"
    {
  (yyval.vector_evolution_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 113:
#line 848 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)].vector_assignment)!=NULL && (yysemantic_stack_[(4) - (3)]._bool_expression)!=NULL) 
    (yyval._evolution_line) = new evolution_line((yysemantic_stack_[(4) - (1)].vector_assignment), (yysemantic_stack_[(4) - (3)]._bool_expression));
  else
    (yyval._evolution_line) = NULL;
 ;}
    break;

  case 114:
#line 854 "parser/nssis.yy"
    {
  (yyval._evolution_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 115:
#line 858 "parser/nssis.yy"
    {
  (yyval.vector_assignment) = (yysemantic_stack_[(3) - (2)].vector_assignment);
 ;}
    break;

  case 116:
#line 861 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].vector_assignment)!=NULL && (yysemantic_stack_[(3) - (3)].vector_assignment)!=NULL) {
    (yyval.vector_assignment) = (yysemantic_stack_[(3) - (1)].vector_assignment);
    vector<assignment*>::iterator i;
    for(i=(yysemantic_stack_[(3) - (3)].vector_assignment)->begin(); i != (yysemantic_stack_[(3) - (3)].vector_assignment)->end(); i++)
      (yyval.vector_assignment)->push_back(*i);
  } else
    (yyval.vector_assignment) = NULL;
 ;}
    break;

  case 117:
#line 870 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    assignment *a;
    int i = search_string_table((yysemantic_stack_[(3) - (1)].sval));
    if(i>=0) {
      a = new assignment((*string_table)[i], (yysemantic_stack_[(3) - (3)]._expression));
      free((yysemantic_stack_[(3) - (1)].sval));
    } else {
      a = new assignment((yysemantic_stack_[(3) - (1)].sval), (yysemantic_stack_[(3) - (3)]._expression));
      string_table->push_back((yysemantic_stack_[(3) - (1)].sval));
    }
    (yyval.vector_assignment) = new vector<assignment*>;
    (yyval.vector_assignment)->push_back(a);
  } else
    (yyval.vector_assignment) = NULL;
 ;}
    break;

  case 118:
#line 886 "parser/nssis.yy"
    {
  (yyval.vector_assignment) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 119:
#line 891 "parser/nssis.yy"
    {
  (yyval.vector_assignment) = (yysemantic_stack_[(3) - (2)].vector_assignment);
 ;}
    break;

  case 120:
#line 894 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].vector_assignment)!=NULL && (yysemantic_stack_[(3) - (3)].vector_assignment)!=NULL) {
    (yyval.vector_assignment) = (yysemantic_stack_[(3) - (1)].vector_assignment);
    vector<assignment*>::iterator i;
    for(i=(yysemantic_stack_[(3) - (3)].vector_assignment)->begin(); i != (yysemantic_stack_[(3) - (3)].vector_assignment)->end(); i++)
      (yyval.vector_assignment)->push_back(*i);
  } else
    (yyval.vector_assignment) = NULL;
 ;}
    break;

  case 121:
#line 903 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    assignment *a;
    int i = search_string_table((yysemantic_stack_[(3) - (1)].sval));
    if(i>=0) {
      a = new assignment((*string_table)[i], (yysemantic_stack_[(3) - (3)]._expression));
      free((yysemantic_stack_[(3) - (1)].sval));
    } else {
      a = new assignment((yysemantic_stack_[(3) - (1)].sval), (yysemantic_stack_[(3) - (3)]._expression));
      string_table->push_back((yysemantic_stack_[(3) - (1)].sval));
    }
    (yyval.vector_assignment) = new vector<assignment*>;
    (yyval.vector_assignment)->push_back(a);
  } else
    (yyval.vector_assignment) = NULL;
 ;}
    break;

  case 122:
#line 919 "parser/nssis.yy"
    {
  (yyval.vector_assignment) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 123:
#line 924 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)]._basic_agent)!=NULL) {
    (*is_agents)[(yysemantic_stack_[(1) - (1)]._basic_agent)->get_name()] = (yysemantic_stack_[(1) - (1)]._basic_agent);
    agents->push_back((yysemantic_stack_[(1) - (1)]._basic_agent));
  } 
 ;}
    break;

  case 124:
#line 930 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._basic_agent)!=NULL) {
    if(is_agents->find((yysemantic_stack_[(2) - (2)]._basic_agent)->get_name()) != is_agents->end()) {
			if (options["quiet"] == 0)
				cout << "warning: agent " << (yysemantic_stack_[(2) - (2)]._basic_agent)->get_name() << " already exists." << endl;
    } else
      agents->push_back((yysemantic_stack_[(2) - (2)]._basic_agent));
    (*is_agents)[(yysemantic_stack_[(2) - (2)]._basic_agent)->get_name()] = (yysemantic_stack_[(2) - (2)]._basic_agent);
  }
 ;}
    break;

  case 125:
#line 940 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 126:
#line 944 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 127:
#line 947 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 128:
#line 951 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 129:
#line 954 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 130:
#line 958 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 131:
#line 962 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 132:
#line 967 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(8) - (1)].ival)==1 && (yysemantic_stack_[(8) - (2)].sval)!=NULL && (yysemantic_stack_[(8) - (3)].map_vec_basictype)!=NULL && 
     (yysemantic_stack_[(8) - (5)].set_string)!=NULL && (yysemantic_stack_[(8) - (6)].vector_protocol_line)!=NULL && (yysemantic_stack_[(8) - (7)].vector_evolution_line)!=NULL && (yysemantic_stack_[(8) - (8)].ival)==1) {// redstates is NULL if no red state at all
    int i = search_string_table((yysemantic_stack_[(8) - (2)].sval));
    if(i>=0) {
      (yyval._basic_agent) = new basic_agent((*string_table)[i], NULL, NULL, NULL, (yysemantic_stack_[(8) - (3)].map_vec_basictype)->first, (yysemantic_stack_[(8) - (3)].map_vec_basictype)->second, (yysemantic_stack_[(8) - (4)]._bool_expression), (yysemantic_stack_[(8) - (5)].set_string), (yysemantic_stack_[(8) - (6)].vector_protocol_line), (yysemantic_stack_[(8) - (7)].vector_evolution_line));
      free((yysemantic_stack_[(8) - (2)].sval));
    } else {
      (yyval._basic_agent) = new basic_agent((yysemantic_stack_[(8) - (2)].sval), NULL, NULL, NULL, (yysemantic_stack_[(8) - (3)].map_vec_basictype)->first, (yysemantic_stack_[(8) - (3)].map_vec_basictype)->second, (yysemantic_stack_[(8) - (4)]._bool_expression), (yysemantic_stack_[(8) - (5)].set_string), (yysemantic_stack_[(8) - (6)].vector_protocol_line), (yysemantic_stack_[(8) - (7)].vector_evolution_line));
      string_table->push_back((yysemantic_stack_[(8) - (2)].sval));
    }
  } else
    (yyval._basic_agent) = NULL;
 ;}
    break;

  case 133:
#line 981 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (1)].ival)==1 && (yysemantic_stack_[(7) - (2)].sval)!=NULL && (yysemantic_stack_[(7) - (3)].map_vec_basictype)!=NULL && 
     (yysemantic_stack_[(7) - (4)].set_string)!=NULL && (yysemantic_stack_[(7) - (5)].vector_protocol_line)!=NULL && (yysemantic_stack_[(7) - (6)].vector_evolution_line)!=NULL && (yysemantic_stack_[(7) - (7)].ival)==1) {// redstates is NULL if no red state at all
    int i = search_string_table((yysemantic_stack_[(7) - (2)].sval));
    if(i>=0) {
      (yyval._basic_agent) = new basic_agent((*string_table)[i], NULL, NULL, NULL, (yysemantic_stack_[(7) - (3)].map_vec_basictype)->first, (yysemantic_stack_[(7) - (3)].map_vec_basictype)->second, NULL, (yysemantic_stack_[(7) - (4)].set_string), (yysemantic_stack_[(7) - (5)].vector_protocol_line), (yysemantic_stack_[(7) - (6)].vector_evolution_line));
      free((yysemantic_stack_[(7) - (2)].sval));
    } else {
      (yyval._basic_agent) = new basic_agent((yysemantic_stack_[(7) - (2)].sval), NULL, NULL, NULL, (yysemantic_stack_[(7) - (3)].map_vec_basictype)->first, (yysemantic_stack_[(7) - (3)].map_vec_basictype)->second, NULL, (yysemantic_stack_[(7) - (4)].set_string), (yysemantic_stack_[(7) - (5)].vector_protocol_line), (yysemantic_stack_[(7) - (6)].vector_evolution_line));
      string_table->push_back((yysemantic_stack_[(7) - (2)].sval));
    }
  } else
    (yyval._basic_agent) = NULL;
 ;}
    break;

  case 134:
#line 995 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(9) - (1)].ival)==1 && (yysemantic_stack_[(9) - (2)].sval)!=NULL && (yysemantic_stack_[(9) - (4)].map_vec_basictype)!=NULL && 
     (yysemantic_stack_[(9) - (6)].set_string)!=NULL && (yysemantic_stack_[(9) - (7)].vector_protocol_line)!=NULL && (yysemantic_stack_[(9) - (8)].vector_evolution_line)!=NULL && (yysemantic_stack_[(9) - (9)].ival)==1) {// redstates is NULL if no red state at all
    int i = search_string_table((yysemantic_stack_[(9) - (2)].sval));
    if(i>=0) {
      (yyval._basic_agent) = new basic_agent((*string_table)[i], (yysemantic_stack_[(9) - (3)].map_string_variable), NULL, NULL, (yysemantic_stack_[(9) - (4)].map_vec_basictype)->first, (yysemantic_stack_[(9) - (4)].map_vec_basictype)->second, (yysemantic_stack_[(9) - (5)]._bool_expression), (yysemantic_stack_[(9) - (6)].set_string), (yysemantic_stack_[(9) - (7)].vector_protocol_line), (yysemantic_stack_[(9) - (8)].vector_evolution_line));
      free((yysemantic_stack_[(9) - (2)].sval));
    } else {
      (yyval._basic_agent) = new basic_agent((yysemantic_stack_[(9) - (2)].sval), (yysemantic_stack_[(9) - (3)].map_string_variable), NULL, NULL, (yysemantic_stack_[(9) - (4)].map_vec_basictype)->first, (yysemantic_stack_[(9) - (4)].map_vec_basictype)->second, (yysemantic_stack_[(9) - (5)]._bool_expression), (yysemantic_stack_[(9) - (6)].set_string), (yysemantic_stack_[(9) - (7)].vector_protocol_line), (yysemantic_stack_[(9) - (8)].vector_evolution_line));
      string_table->push_back((yysemantic_stack_[(9) - (2)].sval));
    }
  } else
    (yyval._basic_agent) = NULL;
 ;}
    break;

  case 135:
#line 1009 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(8) - (1)].ival)==1 && (yysemantic_stack_[(8) - (2)].sval)!=NULL && 
     (yysemantic_stack_[(8) - (4)].map_vec_basictype)!=NULL && (yysemantic_stack_[(8) - (5)].set_string)!=NULL && (yysemantic_stack_[(8) - (6)].vector_protocol_line)!=NULL && (yysemantic_stack_[(8) - (7)].vector_evolution_line)!=NULL && (yysemantic_stack_[(8) - (8)].ival)==1) {// redstates is NULL if no red state at all
    int i = search_string_table((yysemantic_stack_[(8) - (2)].sval));
    if(i>=0) {
      (yyval._basic_agent) = new basic_agent((*string_table)[i], (yysemantic_stack_[(8) - (3)].map_string_variable), NULL, NULL, (yysemantic_stack_[(8) - (4)].map_vec_basictype)->first, (yysemantic_stack_[(8) - (4)].map_vec_basictype)->second, NULL, (yysemantic_stack_[(8) - (5)].set_string), (yysemantic_stack_[(8) - (6)].vector_protocol_line), (yysemantic_stack_[(8) - (7)].vector_evolution_line));
      free((yysemantic_stack_[(8) - (2)].sval));
    } else {
      (yyval._basic_agent) = new basic_agent((yysemantic_stack_[(8) - (2)].sval), (yysemantic_stack_[(8) - (3)].map_string_variable), NULL, NULL, (yysemantic_stack_[(8) - (4)].map_vec_basictype)->first, (yysemantic_stack_[(8) - (4)].map_vec_basictype)->second, NULL, (yysemantic_stack_[(8) - (5)].set_string), (yysemantic_stack_[(8) - (6)].vector_protocol_line), (yysemantic_stack_[(8) - (7)].vector_evolution_line));
      string_table->push_back((yysemantic_stack_[(8) - (2)].sval));
    }
  } else
    (yyval._basic_agent) = NULL;
 ;}
    break;

  case 136:
#line 1023 "parser/nssis.yy"
    {
  (yyval._basic_agent) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 137:
#line 1029 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 138:
#line 1032 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 139:
#line 1036 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 140:
#line 1040 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 141:
#line 1044 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 142:
#line 1048 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 143:
#line 1052 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 144:
#line 1056 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 145:
#line 1060 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 146:
#line 1063 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 147:
#line 1067 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 148:
#line 1071 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 149:
#line 1075 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.map_string_variable) = (yysemantic_stack_[(3) - (2)].map_string_variable);
  else
    (yyval.map_string_variable) = NULL;
 ;}
    break;

  case 150:
#line 1081 "parser/nssis.yy"
    {
  (yyval.map_string_variable) = NULL;
 ;}
    break;

  case 151:
#line 1084 "parser/nssis.yy"
    {
  (yyval.map_string_variable) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 152:
#line 1088 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    (yyval.map_string_variable) = new map<string, variable *>;
    if((yyval.map_string_variable)->find(*(yysemantic_stack_[(1) - (1)].sval)) != (yyval.map_string_variable)->end() && options["quiet"] == 0)
      cout << "warning: local observable variable " << *(yysemantic_stack_[(1) - (1)].sval) << " has already been defined." << endl;
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      (*(yyval.map_string_variable))[*(yysemantic_stack_[(1) - (1)].sval)] = new variable((*string_table)[0], (*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      (*(yyval.map_string_variable))[*(yysemantic_stack_[(1) - (1)].sval)] = new variable((*string_table)[0], (yysemantic_stack_[(1) - (1)].sval));
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
  } else
    (yyval.map_string_variable) = NULL;
 ;}
    break;

  case 153:
#line 1104 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].map_string_variable)!=NULL && (yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    if((yysemantic_stack_[(3) - (1)].map_string_variable)->find(*(yysemantic_stack_[(3) - (3)].sval)) != (yyval.map_string_variable)->end() && options["quiet"] == 0)
      cout << "warning: local observable variable " << *(yysemantic_stack_[(3) - (3)].sval) << " has already been defined." << endl;
    int i = search_string_table((yysemantic_stack_[(3) - (3)].sval));
    if(i>=0) {
      (*(yysemantic_stack_[(3) - (1)].map_string_variable))[*(yysemantic_stack_[(3) - (3)].sval)] = new variable((*string_table)[0], (*string_table)[i]);
      free((yysemantic_stack_[(3) - (3)].sval));
    } else {
      (*(yysemantic_stack_[(3) - (1)].map_string_variable))[*(yysemantic_stack_[(3) - (3)].sval)] = new variable((*string_table)[0], (yysemantic_stack_[(3) - (3)].sval));
      string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
    }
    (yyval.map_string_variable) = (yysemantic_stack_[(3) - (1)].map_string_variable);
  } else
    (yyval.map_string_variable) = NULL;
 ;}
    break;

  case 154:
#line 1120 "parser/nssis.yy"
    {
  (yyval.map_string_variable) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].map_string_variable));
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 155:
#line 1126 "parser/nssis.yy"
    {
  (yyval.map_string_variable) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 156:
#line 1133 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 157:
#line 1136 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 158:
#line 1140 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 159:
#line 1144 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 160:
#line 1148 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 161:
#line 1152 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 162:
#line 1156 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 163:
#line 1160 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 164:
#line 1164 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 165:
#line 1167 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 166:
#line 1171 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 167:
#line 1175 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 168:
#line 1179 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.set_string) = (yysemantic_stack_[(3) - (2)].set_string);
  else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 169:
#line 1185 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].ival)==1 && (yysemantic_stack_[(2) - (2)].ival)==1)
    (yyval.set_string) = new set<string>;
  else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 170:
#line 1191 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 171:
#line 1197 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1) 
    (yyval.set_string) = (yysemantic_stack_[(3) - (2)].set_string);
  else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 172:
#line 1203 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 173:
#line 1207 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    (yyval.set_string) = new set<string>;
    (yyval.set_string)->insert(*(yysemantic_stack_[(1) - (1)].sval));
    free ((yysemantic_stack_[(1) - (1)].sval));
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 174:
#line 1215 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].set_string)!=NULL && (yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    pair<set<string>::iterator, bool> ret = (yysemantic_stack_[(3) - (1)].set_string)->insert(*(yysemantic_stack_[(3) - (3)].sval));
    if(!ret.second && options["quiet"] == 0)
      cout << "warning: action " << *(yysemantic_stack_[(3) - (3)].sval) << " has been defined." << endl;
    (yyval.set_string) = (yysemantic_stack_[(3) - (1)].set_string);
    free ((yysemantic_stack_[(3) - (3)].sval));
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 175:
#line 1225 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].set_string));
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 176:
#line 1231 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 177:
#line 1238 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 178:
#line 1241 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 179:
#line 1245 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 180:
#line 1249 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 181:
#line 1253 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 182:
#line 1256 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 183:
#line 1260 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 184:
#line 1264 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 185:
#line 1269 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1) 
    (yyval.vector_protocol_line) = (yysemantic_stack_[(3) - (2)].vector_protocol_line);
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 186:
#line 1275 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)].ival)==1 && (yysemantic_stack_[(4) - (4)].ival)==1) {
    (yyval.vector_protocol_line) = (yysemantic_stack_[(4) - (2)].vector_protocol_line);
    (yyval.vector_protocol_line)->push_back((yysemantic_stack_[(4) - (3)]._protocol_line));
  }
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 187:
#line 1283 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1) {
    (yyval.vector_protocol_line) = new vector<protocol_line*>;
    (yyval.vector_protocol_line)->push_back((yysemantic_stack_[(3) - (2)]._protocol_line));;
  }
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 188:
#line 1291 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].ival)==1 && (yysemantic_stack_[(2) - (2)].ival)==1) 
    (yyval.vector_protocol_line) = new vector<protocol_line*>;
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 189:
#line 1297 "parser/nssis.yy"
    {
  (yyval.vector_protocol_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 190:
#line 1303 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1) 
    (yyval.vector_protocol_line) = (yysemantic_stack_[(3) - (2)].vector_protocol_line);
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 191:
#line 1309 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)].ival)==1 && (yysemantic_stack_[(4) - (4)].ival)==1) {
    (yyval.vector_protocol_line) = (yysemantic_stack_[(4) - (2)].vector_protocol_line);
    (yyval.vector_protocol_line)->push_back((yysemantic_stack_[(4) - (3)]._protocol_line));
  }
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 192:
#line 1317 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1) {
    (yyval.vector_protocol_line) = new vector<protocol_line*>;
    (yyval.vector_protocol_line)->push_back((yysemantic_stack_[(3) - (2)]._protocol_line));;
  }
  else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 193:
#line 1325 "parser/nssis.yy"
    {
  (yyval.vector_protocol_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 194:
#line 1330 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)]._protocol_line)!=NULL) {
    (yyval.vector_protocol_line) = new vector<protocol_line*>;
    (yyval.vector_protocol_line)->push_back((yysemantic_stack_[(1) - (1)]._protocol_line));
  } else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 195:
#line 1337 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].vector_protocol_line)!=NULL && (yysemantic_stack_[(2) - (2)]._protocol_line)!=NULL) {
    (yysemantic_stack_[(2) - (1)].vector_protocol_line)->push_back((yysemantic_stack_[(2) - (2)]._protocol_line));
    (yyval.vector_protocol_line) = (yysemantic_stack_[(2) - (1)].vector_protocol_line);
  } else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 196:
#line 1344 "parser/nssis.yy"
    {
  (yyval.vector_protocol_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 197:
#line 1349 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)]._protocol_line)!=NULL) {
    (yyval.vector_protocol_line) = new vector<protocol_line*>;
    (yyval.vector_protocol_line)->push_back((yysemantic_stack_[(1) - (1)]._protocol_line));
  } else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 198:
#line 1356 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].vector_protocol_line)!=NULL && (yysemantic_stack_[(2) - (2)]._protocol_line)!=NULL) {
    (yysemantic_stack_[(2) - (1)].vector_protocol_line)->push_back((yysemantic_stack_[(2) - (2)]._protocol_line));
    (yyval.vector_protocol_line) = (yysemantic_stack_[(2) - (1)].vector_protocol_line);
  } else
    (yyval.vector_protocol_line) = NULL;
 ;}
    break;

  case 199:
#line 1363 "parser/nssis.yy"
    {
  (yyval.vector_protocol_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 200:
#line 1368 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 201:
#line 1371 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 202:
#line 1375 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 203:
#line 1379 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 204:
#line 1383 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 205:
#line 1386 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 206:
#line 1390 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 207:
#line 1394 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 208:
#line 1398 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(4) - (2)].ival)==1 && (yysemantic_stack_[(4) - (3)].set_string)!=NULL && (yysemantic_stack_[(4) - (4)].ival)==1) 
    (yyval._protocol_line) = new protocol_line((yysemantic_stack_[(4) - (1)]._bool_expression), (yysemantic_stack_[(4) - (3)].set_string));
  else
    (yyval._protocol_line) = NULL;
 ;}
    break;

  case 209:
#line 1404 "parser/nssis.yy"
    {
  (yyval._protocol_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 210:
#line 1409 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(4) - (2)].ival)==1 && (yysemantic_stack_[(4) - (3)].set_string)!=NULL && (yysemantic_stack_[(4) - (4)].ival)==1) 
    (yyval._protocol_line) = new protocol_line((yysemantic_stack_[(4) - (1)]._bool_expression), (yysemantic_stack_[(4) - (3)].set_string));
  else
    (yyval._protocol_line) = NULL;
 ;}
    break;

  case 211:
#line 1415 "parser/nssis.yy"
    {
  (yyval._protocol_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 212:
#line 1420 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (2)].ival)==1 && (yysemantic_stack_[(4) - (3)].set_string)!=NULL && (yysemantic_stack_[(4) - (4)].ival)==1) 
    (yyval._protocol_line) = new protocol_line(new bool_expression(), (yysemantic_stack_[(4) - (3)].set_string));
  else
    (yyval._protocol_line) = NULL;
 ;}
    break;

  case 213:
#line 1426 "parser/nssis.yy"
    {
  (yyval._protocol_line) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (3)].set_string));
 ;}
    break;

  case 214:
#line 1432 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    (yyval.set_string) = new set<string>;
    (yyval.set_string)->insert(*(yysemantic_stack_[(1) - (1)].sval));
    free ((yysemantic_stack_[(1) - (1)].sval));
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 215:
#line 1440 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].set_string)!=NULL && (yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    pair<set<string>::iterator, bool> ret = (yysemantic_stack_[(3) - (1)].set_string)->insert(*(yysemantic_stack_[(3) - (3)].sval));
    if(!ret.second && options["quiet"] == 0)
      cout << "warning: action " << *(yysemantic_stack_[(3) - (3)].sval) << " is repeated." << endl;
    (yyval.set_string) = (yysemantic_stack_[(3) - (1)].set_string);
    free ((yysemantic_stack_[(3) - (3)].sval));
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 216:
#line 1450 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].set_string));
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 217:
#line 1456 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 218:
#line 1463 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    (yyval.vector_evolution_line) = (yysemantic_stack_[(3) - (2)].vector_evolution_line);
  else
    (yyval.vector_evolution_line) = NULL;
;}
    break;

  case 219:
#line 1469 "parser/nssis.yy"
    {
  (yyval.vector_evolution_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 220:
#line 1473 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)]._evolution_line)!=NULL) {
    (yyval.vector_evolution_line) = new vector<evolution_line*>;
    (yyval.vector_evolution_line)->push_back((yysemantic_stack_[(1) - (1)]._evolution_line));
  } else
    (yyval.vector_evolution_line) = NULL;
 ;}
    break;

  case 221:
#line 1480 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (1)].vector_evolution_line)!=NULL && (yysemantic_stack_[(2) - (2)]._evolution_line)!=NULL) {
    (yysemantic_stack_[(2) - (1)].vector_evolution_line)->push_back((yysemantic_stack_[(2) - (2)]._evolution_line));
    (yyval.vector_evolution_line) = (yysemantic_stack_[(2) - (1)].vector_evolution_line);
  } else
    (yyval.vector_evolution_line) = NULL;
 ;}
    break;

  case 222:
#line 1487 "parser/nssis.yy"
    {
  (yyval.vector_evolution_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 223:
#line 1492 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)].vector_assignment)!=NULL)
    (yyval._evolution_line) = new evolution_line((yysemantic_stack_[(4) - (1)].vector_assignment), (yysemantic_stack_[(4) - (3)]._bool_expression));
  else
    (yyval._evolution_line) = NULL;
 ;}
    break;

  case 224:
#line 1498 "parser/nssis.yy"
    {
  (yyval._evolution_line) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].vector_assignment));
  USE((yysemantic_stack_[(4) - (3)]._bool_expression));
 ;}
    break;

  case 225:
#line 1504 "parser/nssis.yy"
    {
  (yyval._evolution_line) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].vector_assignment));
  USE((yysemantic_stack_[(4) - (3)]._bool_expression));
 ;}
    break;

  case 226:
#line 1510 "parser/nssis.yy"
    {
  (yyval._evolution_line) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].vector_assignment));
  USE((yysemantic_stack_[(4) - (3)]._bool_expression));
 ;}
    break;

  case 227:
#line 1516 "parser/nssis.yy"
    {
  (yyval._evolution_line) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 228:
#line 1521 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression); 
 ;}
    break;

  case 229:
#line 1524 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 230:
#line 1529 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 231:
#line 1534 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 232:
#line 1539 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(1, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 233:
#line 1545 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(2, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 234:
#line 1551 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._bool_expression));
  USE((yysemantic_stack_[(3) - (3)]._bool_expression));
 ;}
    break;

  case 235:
#line 1557 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(3, (yysemantic_stack_[(2) - (2)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 236:
#line 1563 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._bool_expression));
 ;}
    break;

  case 237:
#line 1568 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    logic_expression *expr = new logic_expression((yysemantic_stack_[(3) - (2)]._unsigned_char), (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 238:
#line 1575 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 239:
#line 1580 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression); 
 ;}
    break;

  case 240:
#line 1583 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 241:
#line 1588 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 242:
#line 1593 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 243:
#line 1598 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(1, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 244:
#line 1604 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(2, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 245:
#line 1610 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._bool_expression));
  USE((yysemantic_stack_[(3) - (3)]._bool_expression));
 ;}
    break;

  case 246:
#line 1616 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(3, (yysemantic_stack_[(2) - (2)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 247:
#line 1622 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._bool_expression));
 ;}
    break;

  case 248:
#line 1627 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    logic_expression *expr = new logic_expression((yysemantic_stack_[(3) - (2)]._unsigned_char), (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 249:
#line 1634 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
 ;}
    break;

  case 250:
#line 1639 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(5, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 251:
#line 1645 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(6, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 252:
#line 1651 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 253:
#line 1656 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 254:
#line 1659 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(7, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 255:
#line 1665 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(8, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 256:
#line 1671 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 257:
#line 1676 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 258:
#line 1679 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(3) - (2)]._expression);
  ;}
    break;

  case 259:
#line 1682 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 260:
#line 1687 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 261:
#line 1692 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 262:
#line 1696 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(10, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 263:
#line 1702 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(12, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 264:
#line 1708 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 265:
#line 1713 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 266:
#line 1716 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(9, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 267:
#line 1722 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 268:
#line 1727 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 269:
#line 1730 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(11, (yysemantic_stack_[(2) - (2)]._expression), NULL);
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 270:
#line 1736 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._expression));
 ;}
    break;

  case 271:
#line 1741 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 272:
#line 1744 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(3) - (2)]._expression);
  ;}
    break;

  case 273:
#line 1747 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 274:
#line 1752 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 275:
#line 1757 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 276:
#line 1761 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(10, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 277:
#line 1767 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(12, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 278:
#line 1773 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 279:
#line 1778 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 280:
#line 1781 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(9, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 281:
#line 1787 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 282:
#line 1792 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 283:
#line 1795 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(11, (yysemantic_stack_[(2) - (2)]._expression), NULL);
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 284:
#line 1801 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._expression));
 ;}
    break;

  case 285:
#line 1806 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 286:
#line 1809 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(3) - (2)]._expression);
  ;}
    break;

  case 287:
#line 1812 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 288:
#line 1817 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 289:
#line 1822 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 290:
#line 1826 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(10, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 291:
#line 1832 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(12, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 292:
#line 1838 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 293:
#line 1843 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 294:
#line 1846 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(9, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 295:
#line 1852 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 296:
#line 1857 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 297:
#line 1860 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._expression)!=NULL) {
    (yyval._expression) = new bit_expression(11, (yysemantic_stack_[(2) - (2)]._expression), NULL);
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 298:
#line 1866 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._expression));
 ;}
    break;

  case 299:
#line 1871 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 300:
#line 1874 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(3) - (2)]._expression);
  ;}
    break;

  case 301:
#line 1877 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 302:
#line 1882 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 303:
#line 1887 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 304:
#line 1891 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(5, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 305:
#line 1897 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(6, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 306:
#line 1903 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 307:
#line 1908 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 308:
#line 1911 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(7, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 309:
#line 1917 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(8, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 310:
#line 1923 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 311:
#line 1928 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 312:
#line 1931 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(3) - (2)]._expression);
  ;}
    break;

  case 313:
#line 1934 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 314:
#line 1939 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 315:
#line 1944 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 316:
#line 1947 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(5, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 317:
#line 1953 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(6, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 318:
#line 1959 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 319:
#line 1964 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 320:
#line 1967 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(7, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 321:
#line 1973 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    (yyval._expression) = new arithmetic_expression(8, (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
  } else
    (yyval._expression) = NULL;
 ;}
    break;

  case 322:
#line 1979 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._expression));
 ;}
    break;

  case 323:
#line 1984 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 324:
#line 1987 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(3) - (2)]._expression);
  ;}
    break;

  case 325:
#line 1990 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 326:
#line 1995 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._expression));
 ;}
    break;

  case 327:
#line 2000 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._expression);
  ;}
    break;

  case 328:
#line 2006 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression); 
 ;}
    break;

  case 329:
#line 2009 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 330:
#line 2014 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 331:
#line 2019 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 332:
#line 2024 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(1, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 333:
#line 2030 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(2, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 334:
#line 2036 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._bool_expression));
  USE((yysemantic_stack_[(3) - (3)]._bool_expression));
 ;}
    break;

  case 335:
#line 2042 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(3, (yysemantic_stack_[(2) - (2)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 336:
#line 2048 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._bool_expression));
 ;}
    break;

  case 337:
#line 2053 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    logic_expression *expr = new logic_expression((yysemantic_stack_[(3) - (2)]._unsigned_char), (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 338:
#line 2060 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    laction *a = new laction();
    variable *v;
    int i = search_string_table((yysemantic_stack_[(3) - (3)].sval));
    if(i>=0) {
      v = new variable((*string_table)[i]);
      free((yysemantic_stack_[(3) - (3)].sval));
    } else {
      v = new variable((yysemantic_stack_[(3) - (3)].sval));
      string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
    }
    logic_expression *expr = new logic_expression(0, a, v);
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 339:
#line 2077 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 340:
#line 2082 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 341:
#line 2087 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)].sval));
 ;}
    break;

  case 342:
#line 2092 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (1)].sval)!=NULL && (yysemantic_stack_[(5) - (5)].sval)!=NULL) {
    laction *a;
    int i = search_string_table((yysemantic_stack_[(5) - (1)].sval));
    if(i>=0) {
      a = new laction((*string_table)[i]);
      free((yysemantic_stack_[(5) - (1)].sval));
    } else {
      a = new laction((yysemantic_stack_[(5) - (1)].sval));
      string_table->push_back((yysemantic_stack_[(5) - (1)].sval));
    }
    variable *v;
    int j = search_string_table((yysemantic_stack_[(5) - (5)].sval));
    if(j>=0) {
      if(i>=0)
	v = new variable((*string_table)[i], (*string_table)[j]);
      else
	v = new variable((yysemantic_stack_[(5) - (1)].sval), (*string_table)[j]);
      free((yysemantic_stack_[(5) - (5)].sval));
    } else {
      if(i>=0)
	v = new variable((*string_table)[i], (yysemantic_stack_[(5) - (5)].sval));
      else
	v = new variable((yysemantic_stack_[(5) - (1)].sval), (yysemantic_stack_[(5) - (5)].sval));
      string_table->push_back((yysemantic_stack_[(5) - (5)].sval));
    }
    i = search_logic_expression_table(a, v);
    if(i>=0) {
      (yyval._bool_expression) = (*logic_expression_table)[i];
      delete a;
      delete v;
    } else {
			logic_expression *expr = new logic_expression(0, a, v);
			bool_expression *bexpr = new bool_expression(0,  expr);
      (yyval._bool_expression) = bexpr;
      logic_expression_table->push_back(bexpr);
    }
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 343:
#line 2132 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 344:
#line 2138 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 345:
#line 2144 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 346:
#line 2150 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (4)].sval));
 ;}
    break;

  case 347:
#line 2156 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (4)].sval));
 ;}
    break;

  case 348:
#line 2162 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 349:
#line 2168 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 350:
#line 2174 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 351:
#line 2179 "parser/nssis.yy"
    {
  (yyval._unsigned_char) = 2;
 ;}
    break;

  case 352:
#line 2182 "parser/nssis.yy"
    {
  (yyval._unsigned_char) = 3;
  ;}
    break;

  case 353:
#line 2185 "parser/nssis.yy"
    {
  (yyval._unsigned_char) = 4;
  ;}
    break;

  case 354:
#line 2188 "parser/nssis.yy"
    {
  (yyval._unsigned_char) = 5;
  ;}
    break;

  case 355:
#line 2191 "parser/nssis.yy"
    {
  (yyval._unsigned_char) = 0;
  ;}
    break;

  case 356:
#line 2194 "parser/nssis.yy"
    {
  (yyval._unsigned_char) = 1;
  ;}
    break;

  case 357:
#line 2199 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression); 
 ;}
    break;

  case 358:
#line 2202 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 359:
#line 2207 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 360:
#line 2212 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 361:
#line 2217 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(1, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 362:
#line 2223 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(2, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 363:
#line 2229 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._bool_expression));
  USE((yysemantic_stack_[(3) - (3)]._bool_expression));
 ;}
    break;

  case 364:
#line 2235 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(3, (yysemantic_stack_[(2) - (2)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 365:
#line 2241 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._bool_expression));
 ;}
    break;

  case 366:
#line 2246 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    logic_expression *expr = new logic_expression((yysemantic_stack_[(3) - (2)]._unsigned_char), (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 367:
#line 2253 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    laction *a = new laction();
    variable *v;
    int i = search_string_table((yysemantic_stack_[(3) - (3)].sval));
    if(i>=0) {
      v = new variable((*string_table)[i]);
      free((yysemantic_stack_[(3) - (3)].sval));
    } else {
      v = new variable((yysemantic_stack_[(3) - (3)].sval));
      string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
    }
    logic_expression *expr = new logic_expression(0, a, v);
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 368:
#line 2270 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 369:
#line 2275 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 370:
#line 2280 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)].sval));
 ;}
    break;

  case 371:
#line 2285 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (1)].sval)!=NULL && (yysemantic_stack_[(5) - (5)].sval)!=NULL) {
    laction *a;
    int i = search_string_table((yysemantic_stack_[(5) - (1)].sval));
    if(i>=0) {
      a = new laction((*string_table)[i]);
      free((yysemantic_stack_[(5) - (1)].sval));
    } else {
      a = new laction((yysemantic_stack_[(5) - (1)].sval));
      string_table->push_back((yysemantic_stack_[(5) - (1)].sval));
    }
    variable *v;
    int j = search_string_table((yysemantic_stack_[(5) - (5)].sval));
    if(j>=0) {
      if(i>=0)
	v = new variable((*string_table)[i], (*string_table)[j]);
      else
	v = new variable((yysemantic_stack_[(5) - (1)].sval), (*string_table)[j]);
      free((yysemantic_stack_[(5) - (5)].sval));
    } else {
      if(i>=0)
	v = new variable((*string_table)[i], (yysemantic_stack_[(5) - (5)].sval));
      else
	v = new variable((yysemantic_stack_[(5) - (1)].sval), (yysemantic_stack_[(5) - (5)].sval));
      string_table->push_back((yysemantic_stack_[(5) - (5)].sval));
    }
    logic_expression *expr = new logic_expression(0, a, v);
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else 
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 372:
#line 2316 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 373:
#line 2322 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 374:
#line 2328 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 375:
#line 2334 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (4)].sval));
 ;}
    break;

  case 376:
#line 2340 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (4)].sval));
 ;}
    break;

  case 377:
#line 2346 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 378:
#line 2352 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 379:
#line 2358 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (5)].sval)!=NULL) {
    laction *a = new laction((*string_table)[0]);
    variable *v;
    int j = search_string_table((yysemantic_stack_[(5) - (5)].sval));
    if(j>=0) {
      v = new variable((*string_table)[0], (*string_table)[j]);
      free((yysemantic_stack_[(5) - (5)].sval));
    } else { 
      v = new variable((*string_table)[0], (yysemantic_stack_[(5) - (5)].sval));
      string_table->push_back((yysemantic_stack_[(5) - (5)].sval));
    }
    logic_expression *expr = new logic_expression(0, a, v);
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 380:
#line 2375 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 381:
#line 2380 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 382:
#line 2385 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (4)].sval));
 ;}
    break;

  case 383:
#line 2390 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (4)].sval));
 ;}
    break;

  case 384:
#line 2395 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (5)].sval));
 ;}
    break;

  case 385:
#line 2400 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 386:
#line 2405 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 387:
#line 2411 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._bool_value);
 ;}
    break;

  case 388:
#line 2414 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      (yyval._expression) = new variable((*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      (yyval._expression) = new variable((yysemantic_stack_[(1) - (1)].sval)); // can be enumerate value. Will be decided during global syntax checking
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
  ;}
    break;

  case 389:
#line 2424 "parser/nssis.yy"
    {
  (yyval._expression) = new int_value((yysemantic_stack_[(1) - (1)].ival));
  ;}
    break;

  case 390:
#line 2427 "parser/nssis.yy"
    {
  (yyval._bool_value) = new bool_value(true);
  ;}
    break;

  case 391:
#line 2430 "parser/nssis.yy"
    {
  (yyval._bool_value) = new bool_value(false);
  ;}
    break;

  case 392:
#line 2434 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._bool_value);
 ;}
    break;

  case 393:
#line 2437 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      (yyval._expression) = new variable((*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      (yyval._expression) = new variable((yysemantic_stack_[(1) - (1)].sval)); // can be enumerate value. Will be decided during global syntax checking
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
  ;}
    break;

  case 394:
#line 2447 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(3) - (3)].sval));
    variable *var;
    if(i>=0) {
      var = new variable((*string_table)[0], (*string_table)[i]);
      free((yysemantic_stack_[(3) - (3)].sval));
    } else {
      var = new variable((*string_table)[0], (yysemantic_stack_[(3) - (3)].sval)); 
      string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
    }
    i = search_variable_table(var);
    if(i>=0) {
      (yyval._expression) = (*variable_table)[i];
      delete var;
    } else {
      (yyval._expression) = var;
      variable_table->push_back(var);
    }
  ;}
    break;

  case 395:
#line 2466 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
  ;}
    break;

  case 396:
#line 2471 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
  ;}
    break;

  case 397:
#line 2476 "parser/nssis.yy"
    {
  (yyval._expression) = new int_value((yysemantic_stack_[(1) - (1)].ival));
  ;}
    break;

  case 398:
#line 2479 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._bool_value);
 ;}
    break;

  case 399:
#line 2482 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      (yyval._expression) = new variable((*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      (yyval._expression) = new variable((yysemantic_stack_[(1) - (1)].sval)); // can be enumerate value. Will be decided during global syntax checking
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
  ;}
    break;

  case 400:
#line 2492 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(3) - (1)].sval));
    int j = search_string_table((yysemantic_stack_[(3) - (3)].sval));
    variable *var;
    if(i>=0) {
      if(j>=0) {
	var = new variable((*string_table)[i], (*string_table)[j]);
	free((yysemantic_stack_[(3) - (3)].sval));
      } else {
	var = new variable((*string_table)[i], (yysemantic_stack_[(3) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
      }
      free((yysemantic_stack_[(3) - (1)].sval));
    } else {
      if(j>=0) {
	var = new variable((yysemantic_stack_[(3) - (1)].sval), (*string_table)[j]);
	free((yysemantic_stack_[(3) - (3)].sval));
      } else {
	var = new variable((yysemantic_stack_[(3) - (1)].sval), (yysemantic_stack_[(3) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
      }
      string_table->push_back((yysemantic_stack_[(3) - (1)].sval));
    }
    i = search_variable_table(var);
    if(i>=0) {
      (yyval._expression) = (*variable_table)[i];
      delete var;
    } else {
      (yyval._expression) = var;
      variable_table->push_back(var);
    }
  ;}
    break;

  case 401:
#line 2524 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
  USE((yysemantic_stack_[(3) - (3)].sval));
  ;}
    break;

  case 402:
#line 2530 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(3) - (3)].sval));
    variable *var;
    if(i>=0) {
      var = new variable((*string_table)[0], (*string_table)[i]);
      free((yysemantic_stack_[(3) - (3)].sval));
    } else {
      var = new variable((*string_table)[0], (yysemantic_stack_[(3) - (3)].sval)); 
      string_table->push_back((yysemantic_stack_[(3) - (3)].sval));
    }
    i = search_variable_table(var);
    if(i>=0) {
      (yyval._expression) = (*variable_table)[i];
      delete var;
    } else {
      (yyval._expression) = var;
      variable_table->push_back(var);
    }
  ;}
    break;

  case 403:
#line 2549 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
  ;}
    break;

  case 404:
#line 2554 "parser/nssis.yy"
    {
  (yyval._expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)].sval));
  ;}
    break;

  case 405:
#line 2559 "parser/nssis.yy"
    {
  (yyval._expression) = new int_value((yysemantic_stack_[(1) - (1)].ival));
  ;}
    break;

  case 406:
#line 2563 "parser/nssis.yy"
    {
  (yyval._expression) = (yysemantic_stack_[(1) - (1)]._bool_value);
 ;}
    break;

  case 407:
#line 2566 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      (yyval._expression) = new enum_value((*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      (yyval._expression) = new enum_value((yysemantic_stack_[(1) - (1)].sval)); // can be enumerate value. Will be decided during global syntax checking
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
  ;}
    break;

  case 408:
#line 2576 "parser/nssis.yy"
    {
  (yyval._expression) = new int_value((yysemantic_stack_[(1) - (1)].ival));
  ;}
    break;

  case 409:
#line 2581 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 410:
#line 2584 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 411:
#line 2587 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 412:
#line 2591 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 413:
#line 2595 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 415:
#line 2600 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 416:
#line 2604 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)].sval)!=NULL && (yysemantic_stack_[(4) - (3)]._bool_expression)!=NULL) {
    (*is_evaluation)[*(yysemantic_stack_[(4) - (1)].sval)] = (yysemantic_stack_[(4) - (3)]._bool_expression);
    free((yysemantic_stack_[(4) - (1)].sval));
  } 
 ;}
    break;

  case 417:
#line 2610 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (3)]._bool_expression));
 ;}
    break;

  case 418:
#line 2615 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (3)]._bool_expression));
 ;}
    break;

  case 419:
#line 2620 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (1)].sval));
  USE((yysemantic_stack_[(4) - (3)]._bool_expression));
 ;}
    break;

  case 420:
#line 2625 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._bool_expression)!=NULL) {
    if(is_evaluation->find(*(yysemantic_stack_[(5) - (2)].sval)) != is_evaluation->end() && options["quiet"] == 0)
      cout << "warning: atomic proposition " << *(yysemantic_stack_[(5) - (2)].sval) << " has already been defined." << endl;
    (*is_evaluation)[*(yysemantic_stack_[(5) - (2)].sval)] = (yysemantic_stack_[(5) - (4)]._bool_expression);
    free((yysemantic_stack_[(5) - (2)].sval));
  }
 ;}
    break;

  case 421:
#line 2633 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._bool_expression));
 ;}
    break;

  case 422:
#line 2638 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._bool_expression));
 ;}
    break;

  case 423:
#line 2643 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._bool_expression));
 ;}
    break;

  case 424:
#line 2648 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 425:
#line 2652 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression); 
 ;}
    break;

  case 426:
#line 2655 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 427:
#line 2660 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 428:
#line 2665 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 429:
#line 2670 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(1, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 430:
#line 2676 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(2, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 431:
#line 2682 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._bool_expression));USE((yysemantic_stack_[(3) - (3)]._bool_expression));
 ;}
    break;

  case 432:
#line 2687 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(3, (yysemantic_stack_[(2) - (2)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 433:
#line 2693 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._bool_expression));
 ;}
    break;

  case 434:
#line 2698 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._expression)!=NULL && (yysemantic_stack_[(3) - (3)]._expression)!=NULL) {
    logic_expression *expr = new logic_expression((yysemantic_stack_[(3) - (2)]._unsigned_char), (yysemantic_stack_[(3) - (1)]._expression), (yysemantic_stack_[(3) - (3)]._expression));
    (yyval._bool_expression) = new bool_expression(0,  expr);
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 435:
#line 2705 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 436:
#line 2713 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 437:
#line 2716 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 438:
#line 2720 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 439:
#line 2723 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 440:
#line 2727 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 441:
#line 2731 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 442:
#line 2735 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 443:
#line 2739 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 444:
#line 2743 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 445:
#line 2747 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 446:
#line 2751 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].ival)==1 && (yysemantic_stack_[(3) - (3)].ival)==1)
    is_istates = (yysemantic_stack_[(3) - (2)]._bool_expression); 
 ;}
    break;

  case 447:
#line 2755 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 448:
#line 2759 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = (yysemantic_stack_[(3) - (2)]._bool_expression); 
;}
    break;

  case 449:
#line 2762 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 450:
#line 2767 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression));
 ;}
    break;

  case 451:
#line 2772 "parser/nssis.yy"
    { 
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._bool_expression))
 ;}
    break;

  case 452:
#line 2777 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(1, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 453:
#line 2783 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._bool_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(2, (yysemantic_stack_[(3) - (1)]._bool_expression), (yysemantic_stack_[(3) - (3)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 454:
#line 2789 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._bool_expression));USE((yysemantic_stack_[(3) - (3)]._bool_expression));
 ;}
    break;

  case 455:
#line 2794 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._bool_expression)!=NULL)
    (yyval._bool_expression) = new bool_expression(3, (yysemantic_stack_[(2) - (2)]._bool_expression));
  else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 456:
#line 2800 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._bool_expression));
 ;}
    break;

  case 457:
#line 2805 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (1)].sval)!=NULL && (yysemantic_stack_[(7) - (3)].sval)!=NULL && (yysemantic_stack_[(7) - (5)].sval)!=NULL && (yysemantic_stack_[(7) - (7)].sval)!=NULL) {
    int i = search_string_table((yysemantic_stack_[(7) - (1)].sval));
    int j = search_string_table((yysemantic_stack_[(7) - (3)].sval));
    variable *v;
    if(i>=0) {
      if(j>=0) {
	v = new variable((*string_table)[i], (*string_table)[j]);
	free((yysemantic_stack_[(7) - (3)].sval));
      } else {
	v = new variable((*string_table)[i], (yysemantic_stack_[(7) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (3)].sval));
      }
      free((yysemantic_stack_[(7) - (1)].sval));
    } else {
      if(j>=0) {
	v = new variable((yysemantic_stack_[(7) - (1)].sval), (*string_table)[j]);
	free((yysemantic_stack_[(7) - (3)].sval));
      } else {
	v = new variable((yysemantic_stack_[(7) - (1)].sval), (yysemantic_stack_[(7) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (3)].sval));
      }
      string_table->push_back((yysemantic_stack_[(7) - (1)].sval));
    }
    i = search_variable_table(v);
    if(i>=0) {
      delete v;
      v = (*variable_table)[i];
    } else {
      variable_table->push_back(v);
    }

    i = search_string_table((yysemantic_stack_[(7) - (5)].sval));
    j = search_string_table((yysemantic_stack_[(7) - (7)].sval));
    variable *v1;
    if(i>=0) {
      if(j>=0) {
	v1 = new variable((*string_table)[i], (*string_table)[j]);
	free((yysemantic_stack_[(7) - (7)].sval));
      } else {
	v1 = new variable((*string_table)[i], (yysemantic_stack_[(7) - (7)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (7)].sval));
      }
      free((yysemantic_stack_[(7) - (5)].sval));
    } else {
      if(j>=0) {
	v1 = new variable((yysemantic_stack_[(7) - (5)].sval), (*string_table)[j]);
	free((yysemantic_stack_[(7) - (7)].sval));
      } else {
	v1 = new variable((yysemantic_stack_[(7) - (5)].sval), (yysemantic_stack_[(7) - (7)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (7)].sval));
      }
      string_table->push_back((yysemantic_stack_[(7) - (5)].sval));
    }
    i = search_variable_table(v1);
    if(i>=0) {
      delete v1;
      v1 = (*variable_table)[i];
    } else {
      variable_table->push_back(v1);
    }

    i = search_logic_expression_table1(v, v1);
    if(i>=0) {
      (yyval._bool_expression) = (*logic_expression_table1)[i];
      free((yysemantic_stack_[(7) - (5)].sval));
    } else {
			logic_expression *e = new logic_expression(0, v, v1);
			bool_expression *bexpr = new bool_expression(0, e);
      (yyval._bool_expression) = bexpr;
      logic_expression_table1->push_back(bexpr);
    }    
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 458:
#line 2880 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (1)].sval)!=NULL && (yysemantic_stack_[(7) - (3)].sval)!=NULL && (yysemantic_stack_[(7) - (7)].sval)!=NULL) {
    int i = search_string_table((yysemantic_stack_[(7) - (1)].sval));
    int j = search_string_table((yysemantic_stack_[(7) - (3)].sval));
    variable *v;
    if(i>=0) {
      if(j>=0) {
	v = new variable((*string_table)[i], (*string_table)[j]);
	free((yysemantic_stack_[(7) - (3)].sval));
      } else {
	v = new variable((*string_table)[i], (yysemantic_stack_[(7) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (3)].sval));
      }
      free((yysemantic_stack_[(7) - (1)].sval));
    } else {
      if(j>=0) {
	v = new variable((yysemantic_stack_[(7) - (1)].sval), (*string_table)[j]);
	free((yysemantic_stack_[(7) - (3)].sval));
      } else {
	v = new variable((yysemantic_stack_[(7) - (1)].sval), (yysemantic_stack_[(7) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (3)].sval));
      }
      string_table->push_back((yysemantic_stack_[(7) - (1)].sval));
    }
    i = search_variable_table(v);
    if(i>=0) {
      delete v;
      v = (*variable_table)[i];
    } else {
      variable_table->push_back(v);
    }

    j = search_string_table((yysemantic_stack_[(7) - (7)].sval));
    variable *v1;
    if(j>=0) {
      v1 = new variable((*string_table)[0], (*string_table)[j]);
      free((yysemantic_stack_[(7) - (7)].sval));
    } else {
      v1 = new variable((*string_table)[0], (yysemantic_stack_[(7) - (7)].sval));
      string_table->push_back((yysemantic_stack_[(7) - (7)].sval));
    }
    
    i = search_variable_table(v1);
    if(i>=0) {
      delete v1;
      v1 = (*variable_table)[i];
    } else {
      variable_table->push_back(v1);
    }

    i = search_logic_expression_table1(v, v1);
    if(i>=0) {
      (yyval._bool_expression) = (*logic_expression_table1)[i];
    } else {
			logic_expression *e = new logic_expression(0, v, v1);
			bool_expression *bexpr = new bool_expression(0, e);
      (yyval._bool_expression) = bexpr;
      logic_expression_table1->push_back(bexpr);
    }    
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 459:
#line 2942 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (3)].sval)!=NULL && (yysemantic_stack_[(7) - (5)].sval)!=NULL && (yysemantic_stack_[(7) - (7)].sval)!=NULL) {
    int j = search_string_table((yysemantic_stack_[(7) - (3)].sval));
    variable *v;
    if(j>=0) {
      v = new variable((*string_table)[0], (*string_table)[j]);
      free((yysemantic_stack_[(7) - (3)].sval));
    } else {
      v = new variable((*string_table)[0], (yysemantic_stack_[(7) - (3)].sval));
      string_table->push_back((yysemantic_stack_[(7) - (3)].sval));
    }
    int i = search_variable_table(v);
    if(i>=0) {
      delete v;
      v = (*variable_table)[i];
    } else {
      variable_table->push_back(v);
    }

    i = search_string_table((yysemantic_stack_[(7) - (5)].sval));
    j = search_string_table((yysemantic_stack_[(7) - (7)].sval));
    variable *v1;
    if(i>=0) {
      if(j>=0) {
	v1 = new variable((*string_table)[i], (*string_table)[j]);
	free((yysemantic_stack_[(7) - (7)].sval));
      } else {
	v1 = new variable((*string_table)[i], (yysemantic_stack_[(7) - (7)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (7)].sval));
      }
      free((yysemantic_stack_[(7) - (5)].sval));
    } else {
      if(j>=0) {
	v1 = new variable((yysemantic_stack_[(7) - (5)].sval), (*string_table)[j]);
	free((yysemantic_stack_[(7) - (7)].sval));
      } else {
	v1 = new variable((yysemantic_stack_[(7) - (5)].sval), (yysemantic_stack_[(7) - (7)].sval));
	string_table->push_back((yysemantic_stack_[(7) - (7)].sval));
      }
      string_table->push_back((yysemantic_stack_[(7) - (5)].sval));
    }
    i = search_variable_table(v1);
    if(i>=0) {
      delete v1;
      v1 = (*variable_table)[i];
    } else {
      variable_table->push_back(v1);
    }

    i = search_logic_expression_table1(v, v1);
    if(i>=0) {
      (yyval._bool_expression) = (*logic_expression_table1)[i];
      free((yysemantic_stack_[(7) - (5)].sval));
    } else {
			logic_expression *e = new logic_expression(0, v, v1);
			bool_expression *bexpr = new bool_expression(0, e);
      (yyval._bool_expression) = bexpr;
      logic_expression_table1->push_back(bexpr);
    }    
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 460:
#line 3004 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (1)].sval)!=NULL && (yysemantic_stack_[(5) - (3)].sval)!=NULL && (yysemantic_stack_[(5) - (5)]._expression)!=NULL) {
    int i = search_string_table((yysemantic_stack_[(5) - (1)].sval));
    int j = search_string_table((yysemantic_stack_[(5) - (3)].sval));
    variable *v;
    if(i>=0) {
      if(j>=0) {
	v = new variable((*string_table)[i], (*string_table)[j]);
	free((yysemantic_stack_[(5) - (3)].sval));
      } else {
	v = new variable((*string_table)[i], (yysemantic_stack_[(5) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(5) - (3)].sval));
      }
      free((yysemantic_stack_[(5) - (1)].sval));
    } else {
      if(j>=0) {
	v = new variable((yysemantic_stack_[(5) - (1)].sval), (*string_table)[j]);
	free((yysemantic_stack_[(5) - (3)].sval));
      } else {
	v = new variable((yysemantic_stack_[(5) - (1)].sval), (yysemantic_stack_[(5) - (3)].sval));
	string_table->push_back((yysemantic_stack_[(5) - (3)].sval));
      }
      string_table->push_back((yysemantic_stack_[(5) - (1)].sval));
    }
    i = search_variable_table(v);
    if(i>=0) {
      delete v;
      v = (*variable_table)[i];
    } else {
      variable_table->push_back(v);
    }
    i = search_logic_expression_table1(v, (yysemantic_stack_[(5) - (5)]._expression));
    if(i>=0) {
      (yyval._bool_expression) = (*logic_expression_table1)[i];
      free((yysemantic_stack_[(5) - (5)]._expression));
    } else {
			logic_expression *e = new logic_expression(0, v, (yysemantic_stack_[(5) - (5)]._expression));
			bool_expression *bexpr = new bool_expression(0, e);
      (yyval._bool_expression) = bexpr;
      logic_expression_table1->push_back(bexpr);
    }    
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 461:
#line 3048 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 462:
#line 3055 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 463:
#line 3062 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (1)].sval));
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 464:
#line 3069 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(7) - (3)].sval)!=NULL && (yysemantic_stack_[(7) - (7)].sval)!=NULL) {
    int j = search_string_table((yysemantic_stack_[(7) - (3)].sval));
    variable *v;
    if(j>=0) {
      v = new variable((*string_table)[0], (*string_table)[j]);
      free((yysemantic_stack_[(7) - (3)].sval));
    } else {
      v = new variable((*string_table)[0], (yysemantic_stack_[(7) - (3)].sval));
      string_table->push_back((yysemantic_stack_[(7) - (3)].sval));
    }
    int i = search_variable_table(v);
    if(i>=0) {
      delete v;
      v = (*variable_table)[i];
    } else {
      variable_table->push_back(v);
    }

    j = search_string_table((yysemantic_stack_[(7) - (7)].sval));
    variable *v1;
    if(j>=0) {
      v1 = new variable((*string_table)[0], (*string_table)[j]);
      free((yysemantic_stack_[(7) - (7)].sval));
    } else {
      v1 = new variable((*string_table)[0], (yysemantic_stack_[(7) - (7)].sval));
      string_table->push_back((yysemantic_stack_[(7) - (7)].sval));
    }
    i = search_variable_table(v1);
    if(i>=0) {
      delete v1;
      v1 = (*variable_table)[i];
    } else {
      variable_table->push_back(v1);
    }

    i = search_logic_expression_table1(v, v1);
    if(i>=0) {
      (yyval._bool_expression) = (*logic_expression_table1)[i];
    } else {
			logic_expression *e = new logic_expression(0, v, v1);
			bool_expression *bexpr = new bool_expression(0, e);
      (yyval._bool_expression) = bexpr;
      logic_expression_table1->push_back(bexpr);
    }    
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 465:
#line 3117 "parser/nssis.yy"
    {	
  if((yysemantic_stack_[(5) - (3)].sval)!=NULL && (yysemantic_stack_[(5) - (5)]._expression)!=NULL) {
    int j = search_string_table((yysemantic_stack_[(5) - (3)].sval));
    variable *v;
    if(j>=0) {
      v = new variable((*string_table)[0], (*string_table)[j]);
      free((yysemantic_stack_[(5) - (3)].sval));
    } else {
      v = new variable((*string_table)[0], (yysemantic_stack_[(5) - (3)].sval));
      string_table->push_back((yysemantic_stack_[(5) - (3)].sval));
    }
    j = search_variable_table(v);
    if(j>=0) {
      delete v;
      v = (*variable_table)[j];
    } else {
      variable_table->push_back(v);
    }
    j = search_logic_expression_table1(v, (yysemantic_stack_[(5) - (5)]._expression));
    if(j>=0) {
      (yyval._bool_expression) = (*logic_expression_table1)[j];
      free((yysemantic_stack_[(5) - (5)]._expression));
    } else {
			logic_expression *e = new logic_expression(0, v, (yysemantic_stack_[(5) - (5)]._expression));
			bool_expression *bexpr = new bool_expression(0, e);
      (yyval._bool_expression) = bexpr;
      logic_expression_table1->push_back(bexpr);
    }    
  } else
    (yyval._bool_expression) = NULL;
 ;}
    break;

  case 466:
#line 3148 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 467:
#line 3154 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 468:
#line 3160 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 469:
#line 3166 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (2)].sval));
  USE((yysemantic_stack_[(4) - (4)]._expression));
 ;}
    break;

  case 470:
#line 3172 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (3)].sval));
  USE((yysemantic_stack_[(5) - (5)]._expression));
 ;}
    break;

  case 471:
#line 3178 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (2)].sval));
  USE((yysemantic_stack_[(4) - (4)]._expression));
 ;}
    break;

  case 472:
#line 3184 "parser/nssis.yy"
    {
  (yyval._bool_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 473:
#line 3191 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 474:
#line 3194 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 475:
#line 3198 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 476:
#line 3201 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 477:
#line 3205 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 478:
#line 3209 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 481:
#line 3215 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 482:
#line 3219 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 483:
#line 3222 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 484:
#line 3226 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 485:
#line 3230 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 486:
#line 3234 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 487:
#line 3237 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 488:
#line 3241 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 489:
#line 3245 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 490:
#line 3249 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (1)].sval)!=NULL && (yysemantic_stack_[(4) - (2)].ival)==1 && (yysemantic_stack_[(4) - (3)].set_string)!=NULL && (yysemantic_stack_[(4) - (4)].ival)==1) {
    (*is_groups)[*(yysemantic_stack_[(4) - (1)].sval)] = *(yysemantic_stack_[(4) - (3)].set_string);
    free((yysemantic_stack_[(4) - (1)].sval));
  }
 ;}
    break;

  case 491:
#line 3255 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (3)].ival)==1 && (yysemantic_stack_[(5) - (4)].set_string)!=NULL && (yysemantic_stack_[(5) - (5)].ival)==1) {
    if(is_groups->find(*(yysemantic_stack_[(5) - (2)].sval)) != is_groups->end() && options["quiet"] == 0)
      cout << "warning: group " << *(yysemantic_stack_[(5) - (2)].sval) << " already exists." << endl; 
    (*is_groups)[*(yysemantic_stack_[(5) - (2)].sval)] = *(yysemantic_stack_[(5) - (4)].set_string);
    free((yysemantic_stack_[(5) - (2)].sval));
  }
 ;}
    break;

  case 492:
#line 3263 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 493:
#line 3267 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    (yyval.set_string) = new set<string>;
    (yyval.set_string)->insert(*(yysemantic_stack_[(1) - (1)].sval));
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 494:
#line 3274 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].set_string)!=NULL && (yysemantic_stack_[(3) - (3)].sval)!=NULL) {
    pair<set<string>::iterator, bool> ret = (yysemantic_stack_[(3) - (1)].set_string)->insert(*(yysemantic_stack_[(3) - (3)].sval));
    if(!ret.second && options["quiet"] == 0)
      cout << "warning: agent " << *(yysemantic_stack_[(3) - (3)].sval) << " in group definition is redundant." << endl;
    (yyval.set_string) = (yysemantic_stack_[(3) - (1)].set_string);
  } else
    (yyval.set_string) = NULL;
 ;}
    break;

  case 495:
#line 3283 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].set_string));USE((yysemantic_stack_[(3) - (3)].sval));
 ;}
    break;

  case 496:
#line 3288 "parser/nssis.yy"
    {
  (yyval.set_string) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 497:
#line 3292 "parser/nssis.yy"
    {
  (yyval.sval) = (*string_table)[0];
 ;}
    break;

  case 498:
#line 3295 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      (yyval.sval) = (*string_table)[i];
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      (yyval.sval) = (yysemantic_stack_[(1) - (1)].sval);
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
  ;}
    break;

  case 499:
#line 3305 "parser/nssis.yy"
    {
  (yyval.sval) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 500:
#line 3312 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 501:
#line 3315 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 502:
#line 3319 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 503:
#line 3322 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 504:
#line 3326 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 505:
#line 3330 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 508:
#line 3337 "parser/nssis.yy"
    { 
  if((yysemantic_stack_[(2) - (1)]._fairness_expression)!=NULL)
    is_fairness->push_back((yysemantic_stack_[(2) - (1)]._fairness_expression));
 ;}
    break;

  case 509:
#line 3341 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._fairness_expression));
 ;}
    break;

  case 510:
#line 3345 "parser/nssis.yy"
    { 
  if((yysemantic_stack_[(3) - (2)]._fairness_expression)!=NULL)
    is_fairness->push_back((yysemantic_stack_[(3) - (2)]._fairness_expression)); 
 ;}
    break;

  case 511:
#line 3349 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._fairness_expression));
 ;}
    break;

  case 512:
#line 3353 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 513:
#line 3357 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (2)]._fairness_expression)!=NULL && (yysemantic_stack_[(5) - (4)]._fairness_expression)!=NULL)
    (yyval.dual_fairness_expression) = new pair<fairness_expression *, fairness_expression *>((yysemantic_stack_[(5) - (2)]._fairness_expression), (yysemantic_stack_[(5) - (4)]._fairness_expression));
  else
    (yyval.dual_fairness_expression) = NULL;
 ;}
    break;

  case 514:
#line 3363 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 515:
#line 3368 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 516:
#line 3373 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 517:
#line 3378 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 518:
#line 3383 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 519:
#line 3388 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 520:
#line 3393 "parser/nssis.yy"
    {
  (yyval.dual_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._fairness_expression));USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 521:
#line 3398 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._fairness_expression)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_fairness_expression) = new pair<string *, fairness_expression *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._fairness_expression));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_fairness_expression) = new pair<string *, fairness_expression *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._fairness_expression));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
      (yyval.ID_fairness_expression) = NULL;
 ;}
    break;

  case 522:
#line 3411 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 523:
#line 3417 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 524:
#line 3423 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 525:
#line 3429 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 526:
#line 3435 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 527:
#line 3441 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 528:
#line 3447 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 529:
#line 3453 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (4)]._fairness_expression)!=NULL)
    (yyval.ID_fairness_expression) = new pair<string *, fairness_expression *>((*string_table)[0], (yysemantic_stack_[(5) - (4)]._fairness_expression));
  else
    (yyval.ID_fairness_expression) = NULL;
 ;}
    break;

  case 530:
#line 3459 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 531:
#line 3464 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 532:
#line 3469 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 533:
#line 3474 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 534:
#line 3479 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 535:
#line 3484 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 536:
#line 3489 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 537:
#line 3494 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._fairness_expression)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_fairness_expression) = new pair<string *, fairness_expression *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._fairness_expression));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_fairness_expression) = new pair<string *, fairness_expression *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._fairness_expression));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
      (yyval.ID_fairness_expression) = NULL;
 ;}
    break;

  case 538:
#line 3507 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 539:
#line 3513 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 540:
#line 3519 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 541:
#line 3525 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 542:
#line 3531 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 543:
#line 3537 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 544:
#line 3543 "parser/nssis.yy"
    {
  (yyval.ID_fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._fairness_expression));
 ;}
    break;

  case 545:
#line 3550 "parser/nssis.yy"
    { 
  (yyval._fairness_expression) = (yysemantic_stack_[(3) - (2)]._fairness_expression); 
 ;}
    break;

  case 546:
#line 3553 "parser/nssis.yy"
    { 
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._fairness_expression));
 ;}
    break;

  case 547:
#line 3558 "parser/nssis.yy"
    { 
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._fairness_expression));
 ;}
    break;

  case 548:
#line 3563 "parser/nssis.yy"
    { 
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._fairness_expression));
 ;}
    break;

  case 549:
#line 3568 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._fairness_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(1, (yysemantic_stack_[(3) - (1)]._fairness_expression), (yysemantic_stack_[(3) - (3)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 550:
#line 3574 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._fairness_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(2, (yysemantic_stack_[(3) - (1)]._fairness_expression), (yysemantic_stack_[(3) - (3)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 551:
#line 3580 "parser/nssis.yy"
    {
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._fairness_expression));USE((yysemantic_stack_[(3) - (3)]._fairness_expression));
 ;}
    break;

  case 552:
#line 3585 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(3, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 553:
#line 3591 "parser/nssis.yy"
    {
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._fairness_expression));
 ;}
    break;

  case 554:
#line 3596 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._fairness_expression)!=NULL && (yysemantic_stack_[(3) - (3)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(4, (yysemantic_stack_[(3) - (1)]._fairness_expression), (yysemantic_stack_[(3) - (3)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 555:
#line 3602 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(10, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 556:
#line 3608 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(11, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
  ;}
    break;

  case 557:
#line 3614 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(12, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 558:
#line 3620 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(13, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 559:
#line 3626 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(14, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 560:
#line 3632 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._fairness_expression)!=NULL)
    (yyval._fairness_expression) = new fairness_expression(15, (yysemantic_stack_[(2) - (2)]._fairness_expression));
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 561:
#line 3638 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].dual_fairness_expression)!=NULL) {
    (yyval._fairness_expression) = new fairness_expression(16, (yysemantic_stack_[(2) - (2)].dual_fairness_expression)->first, (yysemantic_stack_[(2) - (2)].dual_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].dual_fairness_expression));
  }
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 562:
#line 3646 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].dual_fairness_expression)!=NULL) {
    (yyval._fairness_expression) = new fairness_expression(17, (yysemantic_stack_[(2) - (2)].dual_fairness_expression)->first, (yysemantic_stack_[(2) - (2)].dual_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].dual_fairness_expression));
  }
  else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 563:
#line 3654 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_fairness_expression)->first);
    fairness_expression *a = new fairness_expression(ap);
    (yyval._fairness_expression) = new fairness_expression(30, a, (yysemantic_stack_[(2) - (2)].ID_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 564:
#line 3663 "parser/nssis.yy"
    {
  // Knowledge in a group (everybody knows)
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_fairness_expression)->first);
    fairness_expression *a = new fairness_expression(ap);
    (yyval._fairness_expression) = new fairness_expression(31, a, (yysemantic_stack_[(2) - (2)].ID_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 565:
#line 3673 "parser/nssis.yy"
    {
  // Common knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_fairness_expression)->first);
    fairness_expression *a = new fairness_expression(ap);
    (yyval._fairness_expression) = new fairness_expression(32, a, (yysemantic_stack_[(2) - (2)].ID_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 566:
#line 3683 "parser/nssis.yy"
    {
  // deontic operator
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_fairness_expression)->first);
    fairness_expression *a = new fairness_expression(ap);
    (yyval._fairness_expression) = new fairness_expression(40, a, (yysemantic_stack_[(2) - (2)].ID_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 567:
#line 3693 "parser/nssis.yy"
    {
  // Distributed knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_fairness_expression)->first);
    fairness_expression *a = new fairness_expression(ap);
    (yyval._fairness_expression) = new fairness_expression(42, a, (yysemantic_stack_[(2) - (2)].ID_fairness_expression)->second);
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 568:
#line 3703 "parser/nssis.yy"
    { 
  (yyval._fairness_expression) = NULL;
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression) != NULL)
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  driver.syntax_error = true;
 ;}
    break;

  case 569:
#line 3709 "parser/nssis.yy"
    { 
  (yyval._fairness_expression) = NULL;
  if((yysemantic_stack_[(2) - (2)].ID_fairness_expression) != NULL)
    free((yysemantic_stack_[(2) - (2)].ID_fairness_expression));
  driver.syntax_error = true;
 ;}
    break;

  case 570:
#line 3715 "parser/nssis.yy"
    {	
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    atomic_proposition *ap;
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      ap = new atomic_proposition((yysemantic_stack_[(1) - (1)].sval));
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
    (yyval._fairness_expression) = new fairness_expression(ap);
  } else
    (yyval._fairness_expression) = NULL;
  ;}
    break;

  case 571:
#line 3730 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL) {
    string *newname = new string(*(yysemantic_stack_[(3) - (1)].sval) + ".GreenStates");
    atomic_proposition *ap;
    int i = search_string_table(newname);
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free(newname);
    } else {
      ap = new atomic_proposition(newname);
      string_table->push_back(newname);
    }
    free((yysemantic_stack_[(3) - (1)].sval));
    (yyval._fairness_expression) = new fairness_expression(ap);
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 572:
#line 3747 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL) {
    string *newname = new string(*(yysemantic_stack_[(3) - (1)].sval) + ".RedStates");
    atomic_proposition *ap;
    int i = search_string_table(newname);
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free(newname);
    } else {
      ap = new atomic_proposition(newname);
      string_table->push_back(newname);
    }
    free((yysemantic_stack_[(3) - (1)].sval));
    (yyval._fairness_expression) = new fairness_expression(ap);
  } else
    (yyval._fairness_expression) = NULL;
 ;}
    break;

  case 573:
#line 3764 "parser/nssis.yy"
    {
    string *newname = new string("Environment.GreenStates");
    atomic_proposition *ap;
    int i = search_string_table(newname);
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free(newname);
    } else {
      ap = new atomic_proposition(newname);
      string_table->push_back(newname);
    }
    (yyval._fairness_expression) = new fairness_expression(ap);
 ;}
    break;

  case 574:
#line 3777 "parser/nssis.yy"
    {
  string *newname = new string("Environment.RedStates");
  atomic_proposition *ap;
  int i = search_string_table(newname);
  if(i>=0) {
    ap = new atomic_proposition((*string_table)[i]);
    free(newname);
  } else {
    ap = new atomic_proposition(newname);
    string_table->push_back(newname);
  }
  (yyval._fairness_expression) = new fairness_expression(ap);
 ;}
    break;

  case 575:
#line 3790 "parser/nssis.yy"
    {
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 576:
#line 3795 "parser/nssis.yy"
    {
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 577:
#line 3800 "parser/nssis.yy"
    {
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 578:
#line 3805 "parser/nssis.yy"
    {
  (yyval._fairness_expression) = NULL;
  driver.syntax_error = true;
  ;}
    break;

  case 579:
#line 3812 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 580:
#line 3815 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 581:
#line 3819 "parser/nssis.yy"
    {
  (yyval.ival) = 1;
 ;}
    break;

  case 582:
#line 3822 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 583:
#line 3826 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
 ;}
    break;

  case 584:
#line 3830 "parser/nssis.yy"
    {
  (yyval.ival) = 0;
  driver.syntax_error = true;
  ;}
    break;

  case 586:
#line 3836 "parser/nssis.yy"
    { 
  if((yysemantic_stack_[(2) - (1)]._modal_formula)!=NULL) {
    is_formulae->push_back(*(yysemantic_stack_[(2) - (1)]._modal_formula));
  }
 ;}
    break;

  case 587:
#line 3841 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (2)]._modal_formula)!=NULL) {
    is_formulae->push_back(*(yysemantic_stack_[(3) - (2)]._modal_formula));
  }
;}
    break;

  case 588:
#line 3846 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (2)]._modal_formula)!=NULL) {
    is_formulae->push_back(modal_formula(50, (yysemantic_stack_[(3) - (2)]._modal_formula)));
  }
;}
    break;

  case 589:
#line 3851 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._modal_formula));
 ;}
    break;

  case 590:
#line 3855 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._modal_formula));
 ;}
    break;

  case 591:
#line 3859 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (1)]._modal_formula));
 ;}
    break;

  case 592:
#line 3863 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (2)]._modal_formula)!=NULL) {
    is_formulae->push_back(*(yysemantic_stack_[(3) - (2)]._modal_formula)); 
  }
 ;}
    break;

  case 593:
#line 3868 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (3)]._modal_formula)!=NULL) {
    is_formulae->push_back(*(yysemantic_stack_[(4) - (3)]._modal_formula));
  }
 ;}
    break;

  case 594:
#line 3873 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(4) - (3)]._modal_formula)!=NULL) {
    is_formulae->push_back(modal_formula(50, (yysemantic_stack_[(4) - (3)]._modal_formula)));
  }
 ;}
    break;

  case 595:
#line 3878 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 596:
#line 3882 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  USE((yysemantic_stack_[(4) - (3)]._modal_formula));
 ;}
    break;

  case 597:
#line 3886 "parser/nssis.yy"
    {
  driver.syntax_error = true;
  ;}
    break;

  case 598:
#line 3890 "parser/nssis.yy"
    {
    int i = search_string_table((yysemantic_stack_[(3) - (2)].sval));
    if(i>=0) {
      (yyval.sval) = (*string_table)[i];
      free((yysemantic_stack_[(3) - (2)].sval));
    } else {
      (yyval.sval) = (yysemantic_stack_[(3) - (2)].sval);
      string_table->push_back((yysemantic_stack_[(3) - (2)].sval));
    }
 ;}
    break;

  case 599:
#line 3900 "parser/nssis.yy"
    {
  (yyval.sval) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)].sval));
 ;}
    break;

  case 600:
#line 3905 "parser/nssis.yy"
    { 
  (yyval.sval) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)].sval));
 ;}
    break;

  case 601:
#line 3910 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (2)]._modal_formula)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL)
    (yyval.dual_modal_formula) = new pair<modal_formula *, modal_formula *>((yysemantic_stack_[(5) - (2)]._modal_formula), (yysemantic_stack_[(5) - (4)]._modal_formula));
  else
    (yyval.dual_modal_formula) = NULL;
 ;}
    break;

  case 602:
#line 3916 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 603:
#line 3921 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 604:
#line 3926 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 605:
#line 3931 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 606:
#line 3936 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 607:
#line 3941 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 608:
#line 3946 "parser/nssis.yy"
    {
  (yyval.dual_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)]._modal_formula));USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 609:
#line 3951 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._modal_formula));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._modal_formula));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
    (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 610:
#line 3964 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 611:
#line 3970 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 612:
#line 3976 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 613:
#line 3982 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 614:
#line 3988 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 615:
#line 3994 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 616:
#line 4000 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 617:
#line 4006 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL)
    (yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[0], (yysemantic_stack_[(5) - (4)]._modal_formula));
  else
    (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 618:
#line 4012 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 619:
#line 4017 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 620:
#line 4022 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 621:
#line 4027 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 622:
#line 4032 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 623:
#line 4037 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 624:
#line 4042 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 625:
#line 4047 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._modal_formula));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._modal_formula));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
      (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 626:
#line 4060 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 627:
#line 4066 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 628:
#line 4072 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 629:
#line 4078 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 630:
#line 4084 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 631:
#line 4090 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 632:
#line 4096 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 633:
#line 4103 "parser/nssis.yy"
    { 
  (yyval._modal_formula) = (yysemantic_stack_[(3) - (2)]._modal_formula); 
 ;}
    break;

  case 634:
#line 4106 "parser/nssis.yy"
    { 
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 635:
#line 4111 "parser/nssis.yy"
    { 
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 636:
#line 4116 "parser/nssis.yy"
    { 
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 637:
#line 4121 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(1, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 638:
#line 4127 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(2, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 639:
#line 4133 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._modal_formula));USE((yysemantic_stack_[(3) - (3)]._modal_formula));
 ;}
    break;

  case 640:
#line 4138 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(3, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 641:
#line 4144 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._modal_formula));
 ;}
    break;

  case 642:
#line 4149 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(4, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 643:
#line 4155 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(10, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 644:
#line 4161 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(11, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
  ;}
    break;

  case 645:
#line 4167 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(12, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 646:
#line 4173 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(13, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 647:
#line 4179 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(14, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 648:
#line 4185 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(15, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 649:
#line 4191 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].dual_modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(16, (yysemantic_stack_[(2) - (2)].dual_modal_formula)->first, (yysemantic_stack_[(2) - (2)].dual_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].dual_modal_formula));
  }
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 650:
#line 4199 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].dual_modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(17, (yysemantic_stack_[(2) - (2)].dual_modal_formula)->first, (yysemantic_stack_[(2) - (2)].dual_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].dual_modal_formula));
  }
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 651:
#line 4207 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(30, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 652:
#line 4216 "parser/nssis.yy"
    {
  // Knowledge in a group (everybody knows)
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(31, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 653:
#line 4226 "parser/nssis.yy"
    {
  // Common knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(32, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 654:
#line 4236 "parser/nssis.yy"
    {
  // deontic operator
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(40, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 655:
#line 4246 "parser/nssis.yy"
    {
  // Distributed knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(42, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 656:
#line 4256 "parser/nssis.yy"
    { 
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
 ;}
    break;

  case 657:
#line 4260 "parser/nssis.yy"
    { 
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
 ;}
    break;

  case 658:
#line 4264 "parser/nssis.yy"
    {
  // ATL X operator
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(3) - (1)].sval));
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(45, a, (yysemantic_stack_[(3) - (3)]._modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 659:
#line 4273 "parser/nssis.yy"
    {
  // ATL F operator
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(3) - (1)].sval));
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(46, a, (yysemantic_stack_[(3) - (3)]._modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 660:
#line 4282 "parser/nssis.yy"
    {
  // ATL G operator
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(3) - (1)].sval));
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(47, a, (yysemantic_stack_[(3) - (3)]._modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 661:
#line 4291 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (3)]._modal_formula));
 ;}
    break;

  case 662:
#line 4296 "parser/nssis.yy"
    {
  // ATL U operator
  if((yysemantic_stack_[(2) - (1)].sval)!=NULL && (yysemantic_stack_[(2) - (2)].dual_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (1)].sval));
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(48, a, (yysemantic_stack_[(2) - (2)].dual_modal_formula)->first, (yysemantic_stack_[(2) - (2)].dual_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].dual_modal_formula));
  } else {
    if((yysemantic_stack_[(2) - (2)].dual_modal_formula) != NULL)
       free((yysemantic_stack_[(2) - (2)].dual_modal_formula));
    if((yysemantic_stack_[(2) - (1)].sval) != NULL)
      free((yysemantic_stack_[(2) - (1)].sval));
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 663:
#line 4311 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(1) - (1)]._modal_formula);
;}
    break;

  case 664:
#line 4316 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(3) - (2)]._modal_formula);
 ;}
    break;

  case 665:
#line 4319 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 666:
#line 4324 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 667:
#line 4329 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 668:
#line 4334 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(1, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 669:
#line 4340 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(2, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 670:
#line 4346 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._modal_formula));USE((yysemantic_stack_[(3) - (3)]._modal_formula));
 ;}
    break;

  case 671:
#line 4351 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(3, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 672:
#line 4357 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(4, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 673:
#line 4363 "parser/nssis.yy"
    {
  // LTL G operator
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(61, (yysemantic_stack_[(2) - (2)]._modal_formula));
  } else {
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 674:
#line 4371 "parser/nssis.yy"
    {
  // LTL F operator
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(62, (yysemantic_stack_[(2) - (2)]._modal_formula));
  } else {
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 675:
#line 4379 "parser/nssis.yy"
    {
  // LTL X operator
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(63, (yysemantic_stack_[(2) - (2)]._modal_formula));
  } else {
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 676:
#line 4387 "parser/nssis.yy"
    {
  // LTL U operator.
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(64, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  }
  else {
    if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL) {
      free((yysemantic_stack_[(3) - (1)]._modal_formula));
    }
    if((yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
      free((yysemantic_stack_[(3) - (3)]._modal_formula));
    }
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 677:
#line 4402 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(1) - (1)]._modal_formula);
 ;}
    break;

  case 678:
#line 4405 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(30, a, new modal_formula(50, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second)); // A(...)
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 679:
#line 4414 "parser/nssis.yy"
    {
  // Knowledge in a group (everybody knows)
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(31, a, new modal_formula(50, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second)); // A(...)
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 680:
#line 4424 "parser/nssis.yy"
    {
  // Common knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(32, a, new modal_formula(50, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second)); // A(...)
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 681:
#line 4434 "parser/nssis.yy"
    {
  // Distributed knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(42, a, new modal_formula(50, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second)); // A(...)
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 682:
#line 4445 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._modal_formula));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._modal_formula));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
    (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 683:
#line 4458 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 684:
#line 4464 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 685:
#line 4470 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 686:
#line 4476 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 687:
#line 4482 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 688:
#line 4488 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 689:
#line 4494 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 690:
#line 4500 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL)
    (yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[0], (yysemantic_stack_[(5) - (4)]._modal_formula));
  else
    (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 691:
#line 4506 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 692:
#line 4511 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 693:
#line 4516 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 694:
#line 4521 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 695:
#line 4526 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 696:
#line 4531 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 697:
#line 4536 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 698:
#line 4542 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._modal_formula));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._modal_formula));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
      (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 699:
#line 4555 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 700:
#line 4561 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 701:
#line 4567 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 702:
#line 4573 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 703:
#line 4579 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 704:
#line 4585 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 705:
#line 4591 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 706:
#line 4599 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(3) - (2)]._modal_formula); 
 ;}
    break;

  case 707:
#line 4602 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 708:
#line 4607 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 709:
#line 4612 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 710:
#line 4617 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(1, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 711:
#line 4623 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(2, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 712:
#line 4629 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._modal_formula));USE((yysemantic_stack_[(3) - (3)]._modal_formula));
 ;}
    break;

  case 713:
#line 4634 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(3, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 714:
#line 4640 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(4, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 715:
#line 4646 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(1, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 716:
#line 4652 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(2, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 717:
#line 4658 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(4, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 718:
#line 4664 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(1, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 719:
#line 4670 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(2, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 720:
#line 4676 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(4, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 721:
#line 4682 "parser/nssis.yy"
    {
  // LTL G operator
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(61, (yysemantic_stack_[(2) - (2)]._modal_formula));
  } else {
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 722:
#line 4690 "parser/nssis.yy"
    {
  // LTL F operator
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(62, (yysemantic_stack_[(2) - (2)]._modal_formula));
  } else {
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 723:
#line 4698 "parser/nssis.yy"
    {
  // LTL X operator
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(63, (yysemantic_stack_[(2) - (2)]._modal_formula));
  } else {
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 724:
#line 4706 "parser/nssis.yy"
    {
  // LTL U operator.
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
    (yyval._modal_formula) = new modal_formula(64, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  }
  else {
    if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL) {
      free((yysemantic_stack_[(3) - (1)]._modal_formula));
    }
    if((yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL) {
      free((yysemantic_stack_[(3) - (3)]._modal_formula));
    }
    (yyval._modal_formula) = NULL;
  }
 ;}
    break;

  case 725:
#line 4721 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(1) - (1)]._modal_formula);
 ;}
    break;

  case 726:
#line 4726 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(3) - (2)]._modal_formula);
 ;}
    break;

  case 727:
#line 4729 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 728:
#line 4734 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 729:
#line 4739 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (2)]._modal_formula));
 ;}
    break;

  case 730:
#line 4744 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(1, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 731:
#line 4750 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(2, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 732:
#line 4756 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)]._modal_formula));USE((yysemantic_stack_[(3) - (3)]._modal_formula));
 ;}
    break;

  case 733:
#line 4761 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(3, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 734:
#line 4767 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(2) - (2)]._modal_formula));
 ;}
    break;

  case 735:
#line 4772 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)]._modal_formula)!=NULL && (yysemantic_stack_[(3) - (3)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(4, (yysemantic_stack_[(3) - (1)]._modal_formula), (yysemantic_stack_[(3) - (3)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 736:
#line 4778 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(30, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 737:
#line 4787 "parser/nssis.yy"
    {
  // Knowledge in a group (everybody knows)
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(31, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 738:
#line 4797 "parser/nssis.yy"
    {
  // Common knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(32, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 739:
#line 4807 "parser/nssis.yy"
    {
  // Distributed knowledge in a group
  if((yysemantic_stack_[(2) - (2)].ID_modal_formula)!=NULL) {
    atomic_proposition *ap = new atomic_proposition((yysemantic_stack_[(2) - (2)].ID_modal_formula)->first);
    modal_formula *a = new modal_formula(ap);
    (yyval._modal_formula) = new modal_formula(42, a, (yysemantic_stack_[(2) - (2)].ID_modal_formula)->second);
    free((yysemantic_stack_[(2) - (2)].ID_modal_formula));
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 740:
#line 4817 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
 ;}
    break;

  case 741:
#line 4821 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
 ;}
    break;

  case 742:
#line 4825 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(50, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 743:
#line 4831 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(2) - (2)]._modal_formula)!=NULL)
    (yyval._modal_formula) = new modal_formula(51, (yysemantic_stack_[(2) - (2)]._modal_formula));
  else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 744:
#line 4837 "parser/nssis.yy"
    {
  (yyval._modal_formula) = (yysemantic_stack_[(1) - (1)]._modal_formula);
;}
    break;

  case 745:
#line 4841 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._modal_formula));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._modal_formula));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
    (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 746:
#line 4854 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 747:
#line 4860 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 748:
#line 4866 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 749:
#line 4872 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 750:
#line 4878 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 751:
#line 4884 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 752:
#line 4890 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 753:
#line 4896 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL)
    (yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[0], (yysemantic_stack_[(5) - (4)]._modal_formula));
  else
    (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 754:
#line 4902 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 755:
#line 4907 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 756:
#line 4912 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 757:
#line 4917 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 758:
#line 4922 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 759:
#line 4927 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 760:
#line 4932 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 761:
#line 4938 "parser/nssis.yy"
    {
    if((yysemantic_stack_[(5) - (2)].sval)!=NULL && (yysemantic_stack_[(5) - (4)]._modal_formula)!=NULL) {
      int i = search_string_table((yysemantic_stack_[(5) - (2)].sval));
      if(i>=0) {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((*string_table)[i], (yysemantic_stack_[(5) - (4)]._modal_formula));
	free((yysemantic_stack_[(5) - (2)].sval));
      } else {
	(yyval.ID_modal_formula) = new pair<string *, modal_formula *>((yysemantic_stack_[(5) - (2)].sval), (yysemantic_stack_[(5) - (4)]._modal_formula));
	string_table->push_back((yysemantic_stack_[(5) - (2)].sval));
      }
    } else
      (yyval.ID_modal_formula) = NULL;
 ;}
    break;

  case 762:
#line 4951 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 763:
#line 4957 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 764:
#line 4963 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 765:
#line 4969 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 766:
#line 4975 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 767:
#line 4981 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 768:
#line 4987 "parser/nssis.yy"
    {
  (yyval.ID_modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(5) - (2)].sval));
  USE((yysemantic_stack_[(5) - (4)]._modal_formula));
 ;}
    break;

  case 769:
#line 4994 "parser/nssis.yy"
    { 
  if((yysemantic_stack_[(1) - (1)].sval)!=NULL) {
    atomic_proposition *ap;
    int i = search_string_table((yysemantic_stack_[(1) - (1)].sval));
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free((yysemantic_stack_[(1) - (1)].sval));
    } else {
      ap = new atomic_proposition((yysemantic_stack_[(1) - (1)].sval));
      string_table->push_back((yysemantic_stack_[(1) - (1)].sval));
    }
    (yyval._modal_formula) = new modal_formula(ap);
  } else
    (yyval._modal_formula) = NULL;
  ;}
    break;

  case 770:
#line 5009 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL) {
    string *newname = new string(*(yysemantic_stack_[(3) - (1)].sval) + ".GreenStates");
    atomic_proposition *ap;
    int i = search_string_table(newname);
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free(newname);
    } else {
      ap = new atomic_proposition(newname);
      string_table->push_back(newname);
    }
    free((yysemantic_stack_[(3) - (1)].sval));
    (yyval._modal_formula) = new modal_formula(ap);
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 771:
#line 5026 "parser/nssis.yy"
    {
  if((yysemantic_stack_[(3) - (1)].sval)!=NULL) {
    string *newname = new string(*(yysemantic_stack_[(3) - (1)].sval) + ".RedStates");
    atomic_proposition *ap;
    int i = search_string_table(newname);
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free(newname);
    } else {
      ap = new atomic_proposition(newname);
      string_table->push_back(newname);
    }
    free((yysemantic_stack_[(3) - (1)].sval));
    (yyval._modal_formula) = new modal_formula(ap);
  } else
    (yyval._modal_formula) = NULL;
 ;}
    break;

  case 772:
#line 5043 "parser/nssis.yy"
    {
    string *newname = new string("Environment.GreenStates");
    atomic_proposition *ap;
    int i = search_string_table(newname);
    if(i>=0) {
      ap = new atomic_proposition((*string_table)[i]);
      free(newname);
    } else {
      ap = new atomic_proposition(newname);
      string_table->push_back(newname);
    }
    (yyval._modal_formula) = new modal_formula(ap);
 ;}
    break;

  case 773:
#line 5056 "parser/nssis.yy"
    {
  string *newname = new string("Environment.RedStates");
  atomic_proposition *ap;
  int i = search_string_table(newname);
  if(i>=0) {
    ap = new atomic_proposition((*string_table)[i]);
    free(newname);
  } else {
    ap = new atomic_proposition(newname);
    string_table->push_back(newname);
  }
  (yyval._modal_formula) = new modal_formula(ap);
 ;}
    break;

  case 774:
#line 5069 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 775:
#line 5074 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 776:
#line 5079 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  USE((yysemantic_stack_[(3) - (1)].sval));
 ;}
    break;

  case 777:
#line 5084 "parser/nssis.yy"
    {
  (yyval._modal_formula) = NULL;
  driver.syntax_error = true;
  ;}
    break;


    /* Line 675 of lalr1.cc.  */
#line 8367 "parser/nssis.cc"
	default: break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
	  }
      }

    /* Else will try to reuse look-ahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    if (yyn == yyfinal_)
      goto yyacceptlab;

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the look-ahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		   &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyeof_ && yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  mcmas_parser::yysyntax_error_ (int yystate, int tok)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const short int mcmas_parser::yypact_ninf_ = -1183;
  const short int
  mcmas_parser::yypact_[] =
  {
       146,   431,   145,   313,   553,  1691, -1183,  2288,  1747,   780,
     520, -1183, -1183, -1183, -1183,   196, -1183,   753, -1183,  1789,
     398,   975,  1195,  1209,   287,  1830,   315,  1791,   480,  1942,
     169,   819,   576, -1183,   780,   676, -1183, -1183,   226,   385,
     109,   734,   756, -1183,   115,   429,   661,   307, -1183, -1183,
   -1183, -1183, -1183, -1183,   496,   655,  1218, -1183,   504,   644,
    2692,  1791,  1942,   819,  1979,   409,   512, -1183,  2012,  1942,
     819,  2579,  1057,  3794, -1183, -1183,   804,  3794,    82, -1183,
   -1183, -1183, -1183,   654,   669,  8667,  8296, -1183,   854,  8939,
   -1183, -1183, -1183, -1183,  2010,   819,   814,   726, -1183, -1183,
    1075,   758,  1398,  2039,  1513,   385, -1183,   869,   555,  1848,
   -1183,   324,   946,  2763,  1211,   266,  1818,   271,   541, -1183,
   -1183, -1183, -1183, -1183, -1183, -1183, -1183, -1183, -1183,   170,
      91,   730, -1183,   766, -1183, -1183,   595,  1942,   819,   819,
    1513, -1183, -1183, -1183,  1597, -1183, -1183,   819,  1513,  2792,
   -1183, -1183,  2195,  8701,  2423, -1183, -1183, -1183,  2553,  8246,
    3799, -1183,  2400,  2863,  1128, -1183,   909, -1183,  3493,  3794,
    3794, -1183,   390,   390,   390,   390,   390,   390,  1128, -1183,
   -1183, -1183, -1183, -1183, -1183,  1128,  1128,  1128,  1128,  1128,
    1513, -1183, -1183, -1183,   607,   908, -1183, -1183, -1183, -1183,
    1483,  1129,  1435, -1183,  2329, -1183,   995,  1287,   965,  1496,
      90,  1185,   946,  3706,  3706,   985,   105,  1688, -1183,  2963,
     324,   529,   324,   539,  1554,  1382, -1183, -1183, -1183,   622,
     892,  6768,   269,  5122, -1183, -1183,  1538, -1183,  1064,  1556,
    1042,   512,  3011,   448,  1980,   399,  1447,   887,   858, -1183,
   -1183,  1111,   974,  1818,   342, -1183, -1183,  1183,   653,   342,
     407, -1183,   751, -1183, -1183,   819,  1513,  1513,  1185,  1513,
    1185,  3441, -1183, -1183, -1183,  3465, -1183,  3143, -1183,  3354,
   -1183,  3794,  2863,   563,   939,  3817,  4184,  5098,  3214,   390,
    8328,  8360,  8392, -1183, -1183, -1183,  8973,  9007,  9041,  1381,
   -1183, -1183,  1185, -1183, -1183,  2898, -1183,  1690,   417, -1183,
   -1183,  1150,   417,  1748, -1183, -1183,   995,  1217, -1183,  3728,
     417, -1183, -1183, -1183,   701,  1916,   282,  1174, -1183,   200,
   -1183,  2080,  1235,  1876, -1183,   892,   269, -1183,  2650,  3706,
     781,  3706,   544,  8552, -1183,  1562,  3079, -1183, -1183,  6103,
    8735, -1183, -1183, -1183,  1599,  1804, -1183, -1183, -1183,  3706,
    3706,  1169,  1060,  1312,  2689,  1179,  1194,  1633,  1222,  1230,
    2090,   324,   324,  1626, -1183,   286,   257,  1319, -1183,   627,
    1270,   269, -1183,  2163,   986,  6939,  1248,  6939,  6939,  6939,
    6939,  6939,  6939,  6939,   547,   547,  1000,  1130,  1130,  1000,
    1130,  3921, -1183,  6797,   857, -1183, -1183,  3828,  6125,  1275,
    1380,  6125,  8229,  2786,  5219,  5219,  5219,  5219,  5219,  5219,
    3856,  3856,  1620,  1801,  1801,  1875,  1801,  8145,  8145,  8145,
    4311,  6182,   629,  1200,   802,   803, -1183, -1183, -1183, -1183,
   -1183, -1183, -1183,  2161,  3750,   884,  3750,   566, -1183, -1183,
   -1183,   654,  1987,  1698,  9075, -1183, -1183,  8769,  8424, -1183,
   -1183, -1183,  2057,  1447, -1183,  1075,  1098,  2617,  1931, -1183,
   -1183, -1183,   729,  1363, -1183,  1980,  1447, -1183,  1373, -1183,
    1390,    80,    80, -1183,  1387,    80,    80,  1513,  1185,  1185,
   -1183,  1185, -1183,  1339,  2041, -1183, -1183, -1183, -1183, -1183,
   -1183,  1402,  1402, -1183,  1402, -1183, -1183, -1183, -1183,  1907,
    1128,   749, -1183, -1183,  3772,   282, -1183, -1183, -1183,   269,
   -1183, -1183,  1394,  6419, -1183,  9109,  2946,  9382,  9349,  2707,
    1406,  1472,  3578,  2969,  1131, -1183,  1488,  1534,  1131,  1131,
    1131,  1131,  1131,  1131,   976,   976,   976,   976,   976,   976,
    1516,  3706,  3706, -1183,  2758, -1183,  2072,  2371,  1540,   619,
     641,  3208, -1183,  3311, -1183,  1446,  1529,   324,  1530,  1566,
     408, -1183,  3780,  4346,  4440,  1578,   538, -1183, -1183, -1183,
    1635,  1781,   290,  1617,  1319, -1183, -1183,  1917,  6968, -1183,
   -1183, -1183,  2274, -1183, -1183,  5188,  1105,  1336,  4405,  4499,
    4593,  4687,  4781,  4875,  4969,  6939,  6939, -1183, -1183,   349,
     433, -1183,  1596,  1621, -1183, -1183, -1183, -1183,  1775,  1212,
    5251, -1183,  1377,  6825,  6939,  6939, -1183,  6939,  3894,  6210,
    3396, -1183, -1183,  5063,  1478,  5314, -1183, -1183,  3960,  1826,
    2396,  2652,   258,  1924,  5408,  5502,  5596,  7025,  8229,  8229,
    1981,  1994,  1994,  1994,  8229,  8229,  8229,  1444, -1183,  6525,
    2786,  2786,  8145,  8145,  2005,  2079,  2079,  2079,  1832, -1183,
    4154,  5219,  5219,  2084,  2084,  1875,  2085,  2085,  2085,  5690,
   -1183,  5784,  5878,  5972,  6474,  7515,  3991,  6125,  8145, -1183,
    7608,  7742, -1183,  7756,   507,   515, -1183, -1183,  1638,  1704,
   -1183, -1183, -1183, -1183,   517,   635, -1183, -1183, -1183,  6525,
    8145,  9311,  9427,  9450,  2016,  1290,  1224,   299,  8229,  2786,
   -1183,  2867,  5219,  5219,  5219,  5219,  5219, -1183,  6267,  5219,
    5219, -1183,  5219,  4182,  8145,  8145,  8145,  8145,  6295,  8145,
    8145,  8145,  1639,  1753,  5349,  9409, -1183,  8803,  2937,  9414,
    9377,  1790,  1864,  5443,  2235,  2307, -1183, -1183,  3006,  3750,
    3750, -1183,  2307,  2307,  2307,  2307,  2307,  2307,   978,   978,
     978,   978,   978,   978,  1931, -1183,  2353,   772, -1183,   995,
    1926,   524,   374,  1689, -1183, -1183,  1447,  1931, -1183, -1183,
    1817, -1183, -1183,  1373, -1183, -1183, -1183,  1185, -1183, -1183,
   -1183,   952,   886,  1932, -1183, -1183, -1183, -1183,   875,  3040,
    3772,  1598,  3772,  9140,   854,  2669, -1183, -1183, -1183, -1183,
   -1183,  3508, -1183,   666, -1183,  1010, -1183,  3531, -1183, -1183,
   -1183,  3706,  2969,  1015,  1032, -1183, -1183,  9279,  9298,  9317,
    1567, -1183, -1183,  3246,   976,  8837,  8871,  8905, -1183, -1183,
   -1183,  4534,  4628,  4722,  3618, -1183,  3640, -1183,   641,   973,
   -1183, -1183, -1183, -1183, -1183,   641,   641,   641,   794,   641,
     641,   641,  1140, -1183, -1183, -1183, -1183, -1183, -1183, -1183,
   -1183, -1183, -1183, -1183,  1404, -1183,   290,   861,  7091,  1041,
    1703,  5282, -1183,  5345, -1183, -1183, -1183,  6939,  1637,  1656,
     418,   626,   943,  1020,  1104,  1106, -1183, -1183, -1183, -1183,
   -1183,  6854, -1183,  9452,  9454,  9456,  9474,  1058,  1831,  1078,
    7370, -1183,  4248, -1183,  6563, -1183,  2786, -1183,  4279, -1183,
    6629, -1183,  7703, -1183, -1183, -1183, -1183, -1183,  5219,  8145,
    3535,  6191,  9506,   647,   652, -1183,  1967,  1999, -1183, -1183,
   -1183,  9508,  9512,  9525,  8229,  8229,  8229, -1183,  8229,  8229,
    6656,  8172,  1787,  2849,  9526,   660,   677,  2028,  2033,  2786,
    2786, -1183,  2786,  4342,  6882,  5219,  2036,  2038,  4057,  6324,
    2277,  2565,  1158,  1180,  1213,  1229,  1271,  1318,  1352,  1416,
    1423,  1442, -1183, -1183, -1183, -1183, -1183, -1183, -1183, -1183,
    1568,  2902,  6352, -1183,  9543,  9570,  9572,  9589,  9590,  9607,
    9609,  9634,  9636,  9653,  9654,  9671,  9673,  9698,  9700,  9717,
    9718,  9735,  5596,  9737,  9762,  9764,  7742, -1183,  1581, -1183,
   -1183, -1183,  2062, -1183,  3317, -1183,  3111, -1183, -1183, -1183,
    3750,  2235,  1134,  1184,  5537,  5631,  5725,  9147,  9179,  9211,
    3402, -1183, -1183,  2721,   978,  8456,  8488,  8520, -1183, -1183,
   -1183,  1689,  2473,  1923, -1183, -1183,   995, -1183,  3662,   417,
     126,   389,  2067,  1456,   386, -1183,  2119,  2025, -1183,  1931,
    1689, -1183, -1183, -1183, -1183, -1183, -1183,  2049,  8599,  2423,
    4816,  3799,  3042,  2064,  2089,  4910,   261,   697,  1128,  3772,
    3772,  3772, -1183,  2226,  2330, -1183, -1183, -1183, -1183,  2122,
    2131, -1183, -1183, -1183, -1183,  2134,  2140, -1183,    88,   904,
     456, -1183,  1404,  6939,  6939,  6703,  6939,  6939,  6939,  6703,
    6939,  6939,  6939,  6939,  6939,  6939,  6939,  6939,  6939,  6939,
    6939,  6939,  6939,  6911,  6911,  6441,  6911,  6911,  6911,  6441,
    6911,  7052, -1183,  7118, -1183,  1445,  1476,  1500,  1502,  1555,
    1572,  9781,  9782,  9799,  9801,  9826,  1227,  7184,  1292,  7463,
    6730,  1591,  1678,  1702,  1744,  1757,  1758,  9828,  9845,  9846,
    1304,  6602,  1330,  6733,  1761,  1766,  7277,  5219,  5219,  5219,
    5219,  6911,  6911,  6911,  6911,  6911,  6911,  6911,  6911,  5219,
    5219,  5219,  5219,  5219,  5219,  5219,  5219, -1183,  6409, -1183,
    2425,  2570, -1183, -1183,  1402, -1183,  2086,  2307,  3684,  3684,
     389,   830, -1183, -1183, -1183, -1183, -1183,  1689, -1183, -1183,
     826, -1183,  3574, -1183, -1183, -1183,  2107,  1670, -1183,    87,
    1750,  2409,  5004,  5191,  5819,  2115,  2117,  2118,  2129, -1183,
   -1183, -1183, -1183, -1183, -1183, -1183,  3008,  3182,  3489,  3512,
    3565,  6030,  6439,  6646,  6519,  6647,  6660,  7679,  7689,  7693,
    7769,  7927,  7992,  8057,  8122,  8282,  4088,  6911,  6911,  8594,
    8696,  8730,  8798,  8832,  8968,  9002,  9036,  9070,  9138,  9844,
    9890,  9900,  9901,  9906,  9910,  8229,  8229,  8229,  8229,  8229,
    8229,  8229,  8229,  8229,  8229,  8229,  8229,  2786,  2786,  8219,
    2786,  2786,  2786,  8219,  2786,  2786,  2786,  2786,  2786,  2786,
    2786,  2786,  2786,  6498,  5219,  6498,  5219,  5219,  5219,  5219,
    5219,  9863,  9919,  7050,  9924,  9935,  9944,  9953,  9962,  9966,
    9976,  9979,  9982,  9985,  9996, 10005, 10023, 10028, 10034, 10037,
   10039, -1183, -1183,  1464,  2507,  3684,  1016,  1756,  3684,  9230,
    1698,  2739,  3159, -1183, -1183, -1183,  2130,  2133,  2144, -1183,
    2156,  2164, -1183, -1183, -1183, -1183,  5376, -1183,  5439, -1183,
    5470, -1183,  5533, -1183,  5564, -1183,  5627, -1183,  5658, -1183,
    5721, -1183,  5752, -1183,  5815, -1183,  5846, -1183,  5909, -1183,
    5470, -1183,  5533, -1183,  5658, -1183,  5721, -1183,  5940, -1183,
    6003, -1183,  6034, -1183,  6097, -1183,  4373, -1183,  7766, -1183,
    4436, -1183,  7793, -1183,  4467, -1183,  7831, -1183,  4530, -1183,
    7858, -1183,  4561, -1183,  7896, -1183,  4624, -1183,  7923, -1183,
    4655, -1183,  7961, -1183,  4718, -1183,  7988, -1183,  7056,  7143,
    7149,  7236,  7242,  7329,  7335,  7422,  7428,  7521,  7614,  7862,
    4749, -1183,  4812, -1183,  4843, -1183,  4906, -1183,  4467, -1183,
    7831, -1183,  4530, -1183,  7858, -1183,  4655, -1183,  7961, -1183,
    4718, -1183,  7988, -1183,  4937, -1183,  8026, -1183,  5000, -1183,
    8053, -1183,  5031, -1183,  8091, -1183,  5094, -1183,  8118, -1183,
    2165,  8633,  9409,  5913,  9414,  3097,   446,    86,  2168,  2169,
    6007,   467,  1102,  2307,  1308,  3684,  3684, -1183,  3596, -1183,
   -1183, -1183, -1183, -1183, -1183,  7145, -1183,  7211, -1183,  7238,
   -1183,  7304, -1183,  7331, -1183,  7397, -1183,  7424, -1183,  7490,
   -1183,  7517, -1183,  7583, -1183,  7610, -1183,  7676, -1183, -1183,
    2551, -1183,  3398, -1183,  2178,  2207,  6101,   138,  1828, -1183,
   -1183,  3684,  2181,  1850, -1183,   241,  1863,  2755,  6215,  6297,
    6528, -1183,  2189,  2190, -1183,  2191,  2192, -1183,  2193,  2194,
    2196, -1183,  2202,  2203, -1183, -1183, -1183, -1183, -1183, -1183,
   -1183, -1183, -1183
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned short int
  mcmas_parser::yydefact_[] =
  {
         0,    18,     0,     0,     0,     0,     2,     0,     0,     0,
       0,   123,    16,    17,    15,     0,     1,    18,     3,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,   136,   409,   124,     0,     0,
       0,     0,     0,   160,     0,    82,   161,     0,    34,    32,
      69,    67,    81,    80,    39,     0,     0,    41,     0,     0,
      83,     0,     0,     0,    46,     0,     0,    76,    83,     0,
       0,     0,     0,     0,   390,   391,     0,     0,     0,   388,
      63,   389,    89,     0,     0,     0,     0,   257,     0,     0,
     268,   271,   261,   387,   163,     0,   167,     0,   173,   169,
       0,   180,     0,     0,     0,     0,   424,     0,     0,   437,
     436,     0,     0,    70,     0,     0,     0,     0,     0,     4,
       5,   162,   157,   158,   159,   156,    37,    38,    36,     0,
       0,    39,    40,     0,    43,    42,    82,     0,     0,     0,
       0,    72,    73,    71,    58,    75,    82,     0,     0,     0,
      85,    63,     0,     0,     0,   270,    86,    84,     0,     0,
       0,    64,     0,     0,     0,   269,    87,    88,     0,     0,
       0,    94,     0,     0,     0,     0,     0,     0,     0,   351,
     353,   355,   352,   354,   356,     0,     0,     0,     0,     0,
       0,   166,   165,   164,   167,     0,   168,   178,   179,   177,
       0,     0,     0,   188,     0,   194,     0,     0,   103,     0,
       0,     0,     0,     0,     0,   413,     0,     0,   414,     0,
       0,     0,     0,     0,     0,   501,   500,   473,   579,     0,
       0,     0,     0,     0,    14,   141,     0,    68,   142,     0,
      46,     0,    83,     0,     0,     0,     0,   148,     0,   152,
     150,     0,    70,     0,    62,    49,    59,     0,     0,    48,
       0,    47,     0,    45,    44,     0,     0,     0,     0,     0,
       0,     0,   229,   259,   273,     0,   228,     0,   258,     0,
     272,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   254,   255,     0,     0,     0,     0,
     267,   266,     0,   175,   174,     0,   182,     0,     0,   183,
     181,   203,     0,     0,   185,   195,     0,   184,   187,     0,
       0,   101,   102,   100,   107,     0,     0,     0,   109,     0,
     110,     0,    22,     0,    30,     0,     0,    10,     0,     0,
       0,     0,     0,     0,   405,     0,     0,   296,   299,     0,
       0,   323,   398,   327,     0,     0,   411,   412,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   478,     0,     0,   480,     0,
     501,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,     0,     0,   580,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   663,   143,   138,   139,
     140,   137,    78,     0,     0,     0,     0,     0,   393,   397,
      92,     0,     0,     0,     0,   282,   285,     0,     0,   311,
     392,   315,   163,     0,   176,     0,   180,     0,     0,   147,
     146,   145,   148,     0,   149,     0,     0,    65,    57,    55,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
      28,     0,    26,     0,     0,    29,   201,   202,   200,   217,
     214,     0,     0,   186,     0,   105,   106,   104,   118,     0,
       0,   107,   108,   111,     0,     0,    20,    21,    19,     0,
       8,     9,     0,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   417,     0,   416,     0,     0,     0,     0,
       0,     0,   449,     0,   448,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,   443,     0,   476,   477,   475,
     485,     0,     0,   478,     0,   479,    11,     0,     0,   503,
     568,   569,     0,   504,   502,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   561,   562,     0,
       0,   563,     0,     0,   564,   565,   566,   567,     0,     0,
       0,   507,     0,     0,     0,     0,   508,     0,     0,     0,
       0,   656,   657,     0,     0,     0,   740,   741,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   744,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     663,     0,     0,     0,     0,     0,     0,     0,     0,   649,
       0,     0,   650,     0,     0,     0,   651,   736,     0,     0,
     652,   737,   653,   738,     0,     0,   654,   655,   739,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     585,     0,     0,     0,     0,     0,     0,   662,     0,     0,
       0,   586,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   283,    91,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,     0,     0,   197,     0,
       0,   103,     0,     0,   154,   153,     0,     0,    61,    60,
      66,    53,    51,    56,    54,    52,    50,     0,    24,    27,
      25,   207,     0,     0,   213,   212,   208,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     7,   403,   301,
     325,     0,   426,     0,   300,     0,   324,     0,   425,   404,
     402,     0,     0,     0,     0,   401,   400,     0,     0,     0,
       0,   295,   294,     0,     0,     0,     0,     0,   322,   320,
     321,     0,     0,     0,     0,   421,     0,   420,     0,     0,
     408,   406,   471,   407,   469,     0,     0,     0,     0,     0,
       0,     0,     0,   444,   439,   440,   441,   438,   483,   484,
     482,   496,   497,   498,     0,   493,     0,     0,     0,     0,
       0,     0,   546,     0,   545,   574,   573,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   577,   576,   575,   572,
     571,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,   600,     0,   634,     0,   707,     0,   727,     0,   633,
       0,   706,     0,   726,   599,   598,   773,   772,     0,     0,
       0,     0,     0,     0,     0,   678,     0,     0,   679,   680,
     681,     0,     0,     0,     0,     0,     0,   588,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   776,   775,   774,   771,   770,   582,   583,   581,
       0,     0,     0,   592,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,     0,   240,
     287,   313,     0,   239,     0,   286,     0,   312,   396,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   281,   280,     0,     0,     0,     0,     0,   310,   308,
     309,     0,     0,     0,   190,   198,     0,   192,     0,     0,
     122,     0,     0,     0,     0,   220,   131,     0,   133,     0,
       0,    23,   205,   216,   206,   204,   215,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,   470,   468,   466,   467,     0,
     407,   465,   463,   461,   462,     0,   407,   460,     0,     0,
       0,   490,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   665,     0,   664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   594,     0,   593,
       0,     0,   132,   191,     0,   122,     0,     0,     0,     0,
       0,   107,   218,   221,   129,   130,   128,     0,   135,   339,
       0,   329,     0,   328,   340,   338,     0,     0,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   499,
     487,   495,   488,   486,   494,   491,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   134,   346,     0,     0,     0,   347,
       0,     0,   464,   459,   458,   457,     0,   533,     0,   530,
       0,   525,     0,   522,     0,   531,     0,   529,     0,   523,
       0,   521,     0,   517,     0,   514,     0,   515,     0,   513,
       0,   525,     0,   522,     0,   523,     0,   521,     0,   541,
       0,   538,     0,   539,     0,   537,     0,   621,     0,   757,
       0,   618,     0,   754,     0,   613,     0,   749,     0,   610,
       0,   746,     0,   619,     0,   755,     0,   617,     0,   753,
       0,   611,     0,   747,     0,   609,     0,   745,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   605,     0,   602,     0,   603,     0,   601,     0,   613,
       0,   749,     0,   610,     0,   746,     0,   611,     0,   747,
       0,   609,     0,   745,     0,   629,     0,   765,     0,   626,
       0,   762,     0,   627,     0,   763,     0,   625,     0,   761,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   223,
     348,   343,   344,   345,   342,     0,   694,     0,   691,     0,
     686,     0,   683,     0,   692,     0,   690,     0,   684,     0,
     682,     0,   702,     0,   699,     0,   700,     0,   698,   368,
       0,   358,     0,   357,     0,     0,   396,     0,     0,   369,
     367,     0,     0,     0,   378,     0,     0,     0,     0,     0,
       0,   382,     0,     0,   383,     0,     0,   375,     0,     0,
       0,   376,     0,     0,   384,   380,   381,   379,   377,   372,
     373,   374,   371
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  mcmas_parser::yypgoto_[] =
  {
     -1183, -1183, -1183,  2276, -1183,  -202, -1183, -1183,  2224, -1183,
      46,    16,  2024,    65,     2,   -39,  2266,  2199,   -49,   -66,
     516,  2056, -1183, -1183,  -461,  -327,  -115, -1183,  1989,  -291,
   -1000,  2302, -1183, -1001,   393, -1183,  2068, -1183, -1183,   -87,
     -76,   237,  -180,  2077,  -227,  -201,    49,  -429, -1183, -1183,
    -194,  -498,  2121,  1550,  -192,  -311,  -744, -1183,  1259,   562,
    -223,    -8,   -88,   574,   -50,   -54,  1930,    -9,  -405,  -710,
    1298,  -415,  -323,  -494,  1590,  -320,  -403,  -713,  -650,  -328,
    -495,  1372,  -500,  -314, -1182, -1183,  1187, -1183, -1183,  -425,
   -1183, -1183,  2304, -1183,    17, -1183, -1183,  2236,    -3, -1183,
    1961,  2141,  1768,  1233, -1183,  1473,  1007, -1183,  1959,  -142,
   -1183,  1968,  1707,  1607,  1019, -1183, -1183,  -136, -1183, -1183,
    -373,  -364,  -297,   709,  -127, -1183,  1485,    51,  1151,  -396,
    -346,  -233
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  mcmas_parser::yydefgoto_[] =
  {
        -1,     4,     5,     6,     7,   334,     8,    24,    57,    25,
      58,    59,   257,   449,    26,    67,    27,   116,    28,    82,
      29,   244,    83,   451,   210,   328,   211,   329,   330,   331,
    1073,     9,    10,  1078,    11,   117,   250,   118,   251,    30,
      99,    31,   246,   100,   103,   203,   104,   468,   204,   777,
     308,   804,   205,   778,   206,   501,   783,  1074,  1075,   152,
     744,    85,    86,    87,    88,    89,    90,    91,   453,   454,
     455,   456,   345,   346,   347,   348,   457,   458,   459,   349,
     350,   351,  1242,   187,  1568,    92,   460,   461,   353,   862,
      38,   218,    39,   108,   851,   111,   374,   112,   572,   229,
     378,   230,   582,  1121,   379,   884,   885,   231,   402,   232,
     403,   607,   590,   591,   913,   233,   720,   234,   431,   432,
     689,   631,   632,  1008,  1161,   945,   948,   634,  1020,   636,
     637,   669
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const short int mcmas_parser::yytable_ninf_ = -778;
  const short int
  mcmas_parser::yytable_[] =
  {
       436,   502,   512,   314,   805,   318,   806,   782,   312,   504,
     525,   528,   316,   320,   815,   523,   527,   167,   524,   467,
     452,   154,   535,   160,   196,   268,   697,   145,   746,   245,
    1061,   541,   756,   270,   774,   509,  1361,  1362,   745,   749,
     747,   750,   115,  1080,   837,   838,   839,   787,   692,   845,
     846,   847,  1047,  1048,  1049,  1055,  1056,  1057,   696,   727,
    1212,   706,   155,   153,   463,   159,   490,   243,   492,   165,
     336,  1216,    66,   476,   133,   302,   337,   701,   703,  1228,
     708,   790,   133,   163,   290,   291,   292,  1557,   381,  1249,
     164,   324,   259,    81,   382,  -489,   406,   325,   326,   154,
     495,   260,  1368,    74,    75,   882,   357,    76,   224,    76,
     113,   261,   140,   283,   284,   503,   121,  1558,    76,   148,
     115,  1058,  1059,  1060,   296,   122,   700,   702,    22,   707,
    1250,   297,   298,  -222,  -222,   864,    81,   299,    81,   765,
     155,   153,    81,    81,   190,   114,    13,     1,   358,     2,
     154,   488,   489,  1573,   491,   153,   159,   245,    80,    79,
      80,   241,    14,  1039,  1369,   883,   245,   327,    81,    80,
      96,   254,  1503,  1505,   436,   436,  1510,   450,   436,   658,
      97,   680,   680,   680,   680,   680,   680,   266,   267,   290,
     255,   155,   153,   519,   258,   262,   269,    76,   680,   520,
     521,   511,   442,  -222,   243,   525,   528,   325,   326,   541,
     833,   834,     3,   541,    81,  1574,   363,   364,   840,   367,
    1363,   748,  -126,   753,   816,   296,  1364,   106,    81,    81,
     354,   355,   283,    81,    81,    81,   467,    81,    81,    81,
      81,    81,    81,    81,   780,   586,    98,   256,    80,   467,
      81,    81,    81,    81,    81,   154,  1580,   133,   578,   934,
      41,    42,    63,   154,    70,    81,    95,   240,   697,    81,
     405,   935,   247,   155,   153,   779,  1236,   327,   344,   344,
     493,   494,   248,   508,   434,   657,   798,   799,    54,   800,
     326,   881,  1237,  -492,    55,   786,   155,   153,   138,   139,
     998,   692,   579,   107,   155,   153,   147,   882,   124,  1090,
    1092,   696,  1095,   782,   487,   228,    64,   125,  1581,   701,
     703,   708,    65,  1055,  1047,   219,   782,   746,    15,   837,
     845,   577,   220,  1569,  1570,  1227,    81,   745,  1238,   747,
      81,   221,    81,    56,    81,   999,    81,    81,   249,  1042,
    1043,   747,   750,    81,    81,   526,   529,  1079,   532,   327,
    1050,   746,   222,  -492,    56,   -66,   900,   883,   573,   574,
      81,   745,   797,   747,   265,  1070,   556,   557,    81,   700,
     702,   707,  1071,   817,    81,   757,   109,  1221,   245,   775,
    1215,   288,    56,   325,  1071,   436,   436,  1071,   289,    46,
     464,   223,    37,   344,   344,   436,   344,   344,   483,   873,
     142,    74,    75,    47,   658,   658,   658,    76,   499,  1123,
     477,   658,   658,   658,   344,   344,   901,    37,   143,   110,
     -33,   765,    -6,  1105,    -6,   765,   -33,   680,   680,   680,
    1106,  1107,  1108,  1111,  1112,  1113,  1114,  1117,    12,   443,
     902,  1072,   874,   436,   436,    72,   444,  1249,  1124,   640,
     808,  1554,   645,  1072,   814,   445,  1072,    79,    80,    74,
      75,   690,   693,   882,  -125,    76,    98,  1555,   711,   712,
     713,    71,  1562,   680,   256,   658,   446,    72,    73,   680,
     680,   680,   680,   680,   500,   680,   680,   680,  1563,   680,
    1098,    74,    75,   -46,   525,   131,   -33,    76,  -127,   833,
     903,    55,   524,   144,   126,  1103,  1104,   447,    77,    65,
     940,   941,   942,  1556,   982,   448,    80,   951,   952,   953,
     365,  -219,   984,   883,   988,  1044,  1045,  1046,   -58,   876,
     368,    62,   252,    69,  1564,   533,   791,   792,   605,    78,
     795,   796,   534,    16,   780,   606,   215,    79,    80,   467,
      22,   340,   216,   321,   178,    74,    75,   754,   852,   853,
     366,    76,   274,   -46,   755,    81,  1064,   137,  1067,    81,
     369,    56,   877,   445,   983,  1066,  1069,    74,    75,    56,
      84,  1000,   985,    76,   989,  1081,   -68,    40,   344,   344,
    1243,  1244,   -68,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   782,   344,
     790,   343,    80,   375,   860,   860,   746,  1135,   583,   376,
     722,   185,   217,   186,   376,   158,  1042,   723,   747,   162,
      74,    75,   790,   448,    80,   134,    76,   746,   746,   191,
    1210,  1211,   990,  -127,   481,   166,   127,   745,   745,   747,
     747,    72,    74,    75,  1155,   207,  1136,   832,    76,  1157,
     168,   123,   -68,   128,   534,  -302,   482,  1171,  -302,  -302,
     640,  -302,  -302,   340,   303,   169,   135,    74,    75,   680,
    -302,  -302,  -302,    76,  1173,   680,   859,    80,  1239,   377,
     724,   725,   726,  -302,   584,   680,   170,   505,  -302,  -112,
     962,   171,   991,   690,   693,  -118,  1351,  -118,   863,    80,
    -415,   658,   658,   658,  1156,   658,   658,   192,  1240,  1158,
     285,   286,   287,  -302,  -302,   342,  -302,  1172,   640,   645,
     680,   680,   680,   343,    80,   436,   436,  1222,   126,   293,
     294,   295,   485,  -127,  1174,   505,   -31,  -114,  1214,  1089,
    1091,   640,   814,  -118,  -189,  -118,   207,   263,   193,   680,
      12,   469,   -58,  1063,   486,  1098,   119,  1098,  -112,   201,
     444,    35,   530,    33,  1012,  1013,  1015,  1017,  1019,   445,
    1021,  1023,  1025,    74,    75,   790,  -125,   197,   120,    76,
     155,   153,   159,   733,   738,  1044,   784,   202,   264,  1044,
     446,  1109,  1353,  1360,  1360,    74,    75,  1044,   734,   739,
     101,    76,   531,    36,   102,  -176,  -114,   809,  1162,  1163,
    -127,  1164,  1165,   285,   810,  -331,   505,   285,  -227,   735,
     740,   447,  -331,   285,  -122,  1044,  -122,    74,    75,   448,
      80,   736,   741,    76,  -176,   178,   191,   811,   623,   470,
     737,  -725,  1123,  -331,   812,  1213,   179,   180,  -331,   181,
     213,  1110,    80,   624,    81,    81,   178,    81,   182,   183,
     184,   285,   161,   214,  -117,   751,   344,  1084,   344,  -117,
     344,  -117,   344,   380,   625,    78,   344,   344,  -155,   626,
     471,  1124,   597,   813,    80,  1252,   627,  -227,   344,   344,
     436,   436,   436,   436,   436,   436,   436,   436,   658,   344,
     658,   344,   185,   860,   186,   752,   226,  -155,  1085,   469,
     860,   860,   860,   860,   860,   860,   860,   860,   228,   746,
     279,   150,   433,   185,  1127,   186,  1253,   225,   280,  1502,
    1504,   747,   750,  1360,   680,   680,   680,   680,   436,   436,
     436,   436,   436,   436,   436,   436,   680,   680,   680,   680,
     680,   680,   680,   680,   869,  1012,    48,   843,   -79,  1053,
     226,  1012,  -407,  1128,   844,   304,  1054,   593,   870,  -407,
    1012,   227,   228,   340,  1082,   445,   317,    74,    75,    74,
      75,   609,   201,    76,   321,    76,   -79,   185,   610,   186,
    -407,   843,   640,   237,    49,  -407,   538,  1506,   844,  -326,
     594,  1137,  -326,  -326,   819,  -326,  -326,   340,   356,  1083,
     640,    74,    75,   823,  -326,  -326,  -326,    76,  -326,  -326,
    -326,   824,  1127,   436,   436,   436,  1513,  -326,  1241,   814,
     814,   814,  -326,   343,    80,   448,    80,  1507,   156,  1143,
    1138,   559,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   439,   560,   194,  -326,  -326,  1147,
    -326,  1128,   597,   539,   -58,   540,    97,   343,    80,   157,
     680,   680,   680,   680,   680,   680,   680,   680,  1144,   643,
     539,   369,   540,  1565,  -193,  1139,   893,  1141,  1567,  1360,
    1360,  1360,   472,  1360,   894,   195,   633,   639,  1148,   643,
     644,   624,   248,   679,   681,   682,   683,   684,   685,   282,
     309,   612,   832,  1566,   310,   762,   164,   197,   613,   534,
     721,   790,   625,  1030,  1140,  1360,  1142,  1360,   340,    74,
      75,   473,    74,    75,   627,    76,  1360,  1115,    76,  1143,
     496,    74,    75,    81,    81,    81,    81,    76,  1448,  1449,
    1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,  1459,
     814,  1191,   814,   680,   478,  1034,   332,   680,  1513,   510,
    1513,   680,   333,  1035,   479,   680,    50,    78,  1144,   680,
     342,   728,   763,   680,   764,    79,    80,   680,   343,    80,
      52,   680,   238,   908,  1147,    93,   729,  1116,    80,   129,
    1192,  1012,   306,   480,  -584,   973,   239,   680,  1307,   680,
    1193,   680,   974,   680,    51,   680,   409,   730,   516,   680,
    -777,   410,   731,   680,   909,   910,   558,   680,    53,   732,
     404,   680,   763,  1148,   764,   680,   565,   130,    93,   680,
      93,  -777,   672,   680,    93,    93,  -777,  1308,   643,  1194,
     997,   566,  1195,  -777,   414,   415,   416,   417,   418,   419,
     673,   674,  -580,   675,   676,   677,   425,   678,   319,   597,
      93,   994,   658,  1311,   658,    81,   658,    81,   658,   568,
     658,   630,   658,   169,   658,  1199,   658,   569,   658,  1354,
     658,  1196,   658,   561,   658,  -226,  1355,  -580,  -580,  1197,
     580,   562,   995,   996,   170,  1356,   307,   962,   371,    74,
      75,  1203,  1312,   643,   581,    76,    93,   633,   639,  1357,
     172,  -580,  -580,  -580,  1200,   643,  1358,   633,   273,   372,
      93,    93,   642,  1199,  -456,    93,    93,    93,  1198,    93,
      93,    93,    93,    93,    93,    93,   173,   174,   895,   896,
    1204,   643,    93,    93,    93,    93,    93,   447,   911,   633,
     639,   644,   178,  -474,   435,  1359,    80,    93,   793,  -474,
    -237,    93,  1200,   624,  -580,   980,   981,  -237,   794,   198,
     352,   352,   592,   801,   596,  1118,   598,   599,   600,   601,
     602,   603,   604,   802,   625,  1119,  -481,  1201,  -237,   912,
    -237,   643,   622,  -237,  1203,   633,   627,   480,  -481,  -580,
    -580,  1004,   981,  1005,  1006,  1007,   311,   199,  1009,  1010,
     785,  1011,   803,  1205,  1120,   954,  1295,   865,   466,   185,
     788,   186,   102,  -580,  -580,  -580,  1202,  1218,    93,  -474,
     955,   866,    93,  1204,    93,   762,    93,   789,    93,    93,
    1219,   818,  1220,  -121,   307,    93,    93,  1297,  -121,   924,
    -121,   956,  1206,   829,   305,  1296,   957,   925,   306,  -184,
    -196,    73,    93,   958,   734,   -66,   -66,   322,   -66,  -238,
      93,  1299,   959,  1301,    74,    75,    93,   -66,   -66,   -66,
      76,   -66,   -66,   -66,   208,   735,  1298,   338,  -196,   209,
    -238,    77,   307,  -419,   339,   352,   352,   736,   352,   352,
     867,   869,   763,   340,   764,   323,   737,    74,    75,   437,
    1300,   858,  1302,    76,   868,   870,   352,   352,   438,   830,
     -66,   -66,    78,   -66,   341,   370,  1303,   440,   635,   641,
      79,   151,   646,   538,   668,   835,   441,   871,   538,   954,
     371,   691,   691,  1305,   179,   180,  -434,   181,   691,   691,
     691,   872,   742,  -434,   955,   342,   182,   183,   184,   444,
    -242,   372,  1307,   343,    80,  1304,   373,  -242,   445,  1093,
     550,   -74,    74,    75,  -434,   956,   592,   596,    76,  -434,
    1207,   836,  1306,  1094,   592,   551,   141,   958,  -242,   446,
    -242,   694,   875,  -242,   898,   899,   959,   575,   695,   -74,
     539,  1308,   540,   576,   567,   539,   552,   540,  1131,   592,
     742,   553,  -455,   914,   915,   878,   916,   444,   -66,  -455,
     447,   -66,   -66,   624,   -66,  -249,   445,  1133,   448,    80,
      74,    75,   577,   -66,   -66,   -66,    76,   -66,   -66,   -66,
    -455,  1366,   624,   904,   625,  -455,  -249,   446,  -249,  1315,
     743,  -249,   633,   639,   980,  1367,   627,   633,   639,   359,
    1076,   497,    17,   625,     2,  1132,  1077,    93,   905,   762,
     498,    93,   360,  1311,  1129,   627,   -66,   -66,   447,   -66,
     179,   180,  -570,   181,  1134,   986,   448,   151,  1316,  -570,
     352,   352,   182,   183,   184,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
    -570,   352,  1312,  1130,   619,  1317,   861,   861,    32,   305,
      33,  1370,  -570,   306,  -184,  -209,    73,  1508,  1319,  1321,
     -66,   -66,  1327,   -66,  -238,  1371,   763,  1329,   764,    74,
      75,  1509,   -66,   -66,   -66,    76,   -66,   -66,   -66,   635,
     641,   987,   879,  -209,  1318,  -238,    77,   307,  1170,   635,
     -35,   880,    68,   -77,  -170,    20,   -35,  1320,  1322,    43,
    -163,  1328,   698,   734,    44,   554,  1330,   906,   907,   699,
     635,   963,   964,   691,   691,   -66,   -66,    78,   -66,   242,
     551,   -77,    20,    23,   735,    79,   151,   928,    45,  1575,
    1027,    60,  1145,   926,    20,   929,   736,   635,   641,   646,
    -769,   552,   729,  1576,   921,   737,   555,  -769,   969,    22,
      23,  1578,  1279,  1281,  1283,  1285,  1287,  1289,  1291,  1293,
     635,   641,    23,   730,  1582,  1579,   -35,  1038,  -769,   970,
    1001,  1146,   715,  -769,   971,   732,   704,   517,  1583,   518,
    -769,   972,  -447,   705,   691,  1014,  1016,  1018,   691,  -769,
    1022,  1024,  1026,  -447,  -447,   477,  1331,  1332,  1333,  1334,
    1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,  1279,  1281,
    1335,  1337,  1287,  1289,  1339,  1341,   807,   506,   587,   848,
     849,   850,   507,   515,  1062,   588,  -578,  1068,   306,  -184,
    -211,   444,   781,  -578,   887,   -66,   -66,   209,   -66,  -249,
     445,  1039,   759,    94,    74,    75,    20,   -66,   -66,   -66,
      76,   -66,   -66,   -66,  -578,   387,   936,   937,  -211,  -578,
    -249,   446,   307,   760,   743,   307,  -578,   388,   389,   390,
     391,   392,   393,   394,   395,  -578,   396,   397,   398,   399,
     400,   462,   943,   -74,    20,   633,   639,   644,   758,   944,
     -66,   -66,   447,   -66,   888,   946,    93,    93,   141,    93,
     448,   151,   947,   759,   614,   615,   965,   617,   352,  1086,
     352,   -74,   352,   966,   352,  -170,   -90,  -170,   352,   352,
      43,   -58,    43,  -163,   760,    44,  1225,    44,  1226,   761,
     352,   352,  1283,  1285,  1291,  1293,  1343,  1345,  1347,  1349,
     200,   352,   277,   352,  1159,   861,   201,    73,   992,   993,
     278,   146,   861,   861,   861,   861,   861,   861,   861,   861,
      74,    75,  -172,   742,  1051,  1052,    76,    43,   173,   174,
     444,  -241,    44,   854,   202,   691,  1160,    77,  -241,   445,
     967,   691,  1217,    74,    75,   975,   976,   968,   551,    76,
     691,   219,   723,   977,   514,  1352,   515,   570,   220,  -241,
     446,  -241,  1220,   611,  -241,  1175,   616,   221,    78,   552,
    1176,   635,   641,  1184,   855,  1185,    79,    80,   300,   301,
    1177,  1178,  1224,  1179,  -445,  1251,  1229,  1254,   222,   635,
     641,   447,   841,   842,   571,  -445,  -445,   949,   950,   448,
      80,  1234,  1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1264,  1265,  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,
    1274,  1275,   742,  1245,   587,   -87,  1235,   223,   -99,   444,
    -512,   588,  1246,   -66,   -66,  1247,   -66,  -249,   445,  -578,
     386,  1248,    74,    75,  1365,   -66,   -66,   -66,    76,   -66,
     -66,   -66,  1372,   150,  1373,  1374,   271,   589,  -249,   446,
    -578,   387,   743,  -249,   272,  -578,  1375,  1520,  1572,  -505,
    1521,   169,  -578,   388,   389,   390,   391,   392,   393,   394,
     395,  1522,   396,   397,   398,   399,   400,   544,   -66,   -66,
     447,   -66,   170,  1523,  -236,   820,  1041,  -236,   448,   151,
     401,  1524,  1549,   755,   -66,  1559,  1560,   -66,   -66,   -66,
     -66,   -66,   445,   545,   546,  1571,    74,    75,  1577,   -66,
     -66,   -66,    76,   -66,   -66,   -66,  1584,  1585,  1586,  1587,
    1588,  1589,   -66,  1590,   -66,   891,   743,   -66,  1187,  1591,
    1592,    18,   132,   892,   484,    93,    93,    93,    93,    19,
     624,    61,    20,   729,  1280,  1282,  1284,  1286,  1288,  1290,
    1292,  1294,   -66,   -66,   447,   -66,    21,    22,  1041,   475,
      34,   625,   448,   151,   730,   755,  -553,   253,   513,   474,
      23,   691,   465,   627,   445,   315,   732,  1065,    74,    75,
     313,   825,  -553,  1223,    76,  1188,   201,    73,   105,   826,
     585,   212,  1336,  1338,  1340,  1342,  1344,  1346,  1348,  1350,
      74,    75,   886,   335,  1062,  1255,    76,   545,   546,  1122,
    -199,   444,   621,   608,   202,   -66,   -66,    77,   -66,  -249,
     445,     0,   856,     0,    74,    75,   447,   -66,   -66,   -66,
      76,   -66,   -66,   -66,   448,    80,     0,   551,  -199,     0,
    -249,   446,   307,     0,   743,     0,     0,   930,    78,     0,
       0,   281,     0,     0,     0,   931,    79,    80,   552,  -235,
     178,     0,   734,   857,     0,     0,  -235,    93,  -337,    93,
     -66,   -66,   447,   -66,   178,  -337,   768,   635,   963,   964,
     448,   151,   274,   735,  1031,   179,   180,  -235,   181,  -235,
       0,     0,  -235,     0,     0,   736,  -337,   182,   183,   184,
       0,  -337,   769,   770,   737,     0,     0,     0,  1280,  1282,
    1284,  1286,  1288,  1290,  1292,  1294,  1336,  1338,  1340,  1342,
    1344,  1346,  1348,  1350,   742,     0,     0,   185,     0,   186,
       0,   444,   -66,   496,     0,   -66,   -66,     0,   -66,  -249,
     445,   185,     0,   186,    74,    75,     0,   -66,   -66,   -66,
      76,   -66,   -66,   -66,     0,     0,     0,     0,  1354,     0,
    -249,   446,  -249,     0,   743,  1355,   -66,     0,     0,   -66,
     -66,     0,  1500,  -386,  1356,     0,     0,     0,    74,    75,
       0,   -66,   -66,   -66,    76,   -66,   -66,   -66,  1357,     0,
     -66,   -66,   447,   -66,  -386,  1358,     0,     0,   743,  -386,
     448,   151,  1354,     0,   275,     0,     0,     0,     0,  1355,
    -360,     0,   276,     0,     0,     0,  1189,  -360,  1356,   169,
       0,  1036,    74,    75,   -66,   -66,   447,   -66,    76,  1037,
     149,   729,  1357,   -87,  1501,   151,   -96,    73,  -360,  1358,
     170,   -66,   -66,  -360,   -66,  -238,     0,   769,   770,     0,
      74,    75,   730,   -66,   -66,   -66,    76,   -66,   -66,   -66,
       0,   150,     0,     0,   732,     0,  -238,    77,   776,     0,
     447,  -238,     0,  1190,     0,   444,     0,     0,  1359,    80,
       0,     0,     0,     0,   445,     0,     0,     0,    74,    75,
       0,     0,     0,     0,    76,     0,   -66,   -66,    78,   -66,
       0,   338,   202,   932,     0,   446,    79,   151,   339,   -66,
       0,   933,   -66,   -66,     0,   -66,  -435,   340,   739,     0,
    1099,    74,    75,     0,   -66,   -66,   -66,    76,   -66,   -66,
     -66,     0,     0,     0,     0,  1100,   447,  -435,   341,   740,
     563,   522,  -435,   -70,   448,    80,   -77,  -170,   564,   -70,
       0,   741,    43,  -163,     0,   371,  1101,    44,   827,     0,
    -725,  1102,     0,     0,     0,     0,   828,   -66,   -66,   342,
     -66,     0,  1053,   551,   -77,     0,   372,   343,   151,  1054,
     -66,   136,     0,   -66,   -66,   -66,   -66,   -66,   445,     0,
    1514,     0,    74,    75,   552,   -66,   -66,   -66,    76,   -66,
     -66,   -66,     0,     0,     0,  1515,   762,     0,   -66,   338,
     -66,     0,   743,   -66,  -366,  -418,   339,   -79,     0,   -70,
       0,  -366,     0,   235,  -144,   340,  1516,     0,   236,    74,
      75,  1517,  -151,     0,     0,    76,     0,   659,   -66,   -66,
       0,   -66,  -366,   149,   660,   -79,   341,  -366,   448,   151,
      73,   -66,   237,   410,   -66,   -66,     0,   -66,  -238,     0,
       0,     0,     0,    74,    75,     0,   -66,   -66,   -66,    76,
     -66,   -66,   -66,   763,   661,   764,     0,   342,     0,  -238,
      77,  -238,     0,     0,  -238,   343,    80,     0,     0,     0,
       0,     0,   662,   663,     0,   664,   665,   666,     0,   667,
     932,     0,     0,     0,     0,     0,     0,     0,   933,   -66,
     -66,    78,   -66,   430,   282,   969,     0,     0,  1002,    79,
     151,   164,   -66,     0,     0,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   729,    74,    75,   970,   -66,   -66,   -66,
      76,   -66,   -66,   -66,     0,     0,     0,     0,   972,   149,
     -66,     0,   -66,  1208,   730,   -66,    73,   -66,   496,  1003,
     -66,   -66,     0,   -66,  -238,     0,   732,     0,   969,    74,
      75,     0,   -66,   -66,   -66,    76,   -66,   -66,   -66,     0,
     -66,   -66,    78,   -66,     0,  -238,    77,  -238,  1032,   970,
      79,   151,     0,     0,  1209,     0,  1033,   821,     0,     0,
       0,   972,     0,   759,     0,   822,     0,     0,     0,     0,
       0,     0,   551,     0,   219,   -66,   -66,    78,   -66,     0,
     832,   220,  -472,     0,   760,    79,   151,   534,   -66,  -472,
     221,   -66,   -66,   552,   -66,   -66,   340,     0,  -433,     0,
      74,    75,     0,   -66,   -66,   -66,    76,   -66,   -66,   -66,
    -472,   222,     0,     0,   361,  -472,   -66,   742,     0,  1376,
     522,   -66,     0,   -98,   444,   -93,  -172,  1377,     0,     0,
       0,    43,     0,   445,   624,     0,    44,    74,    75,     0,
       0,     0,     0,    76,     0,     0,   -66,   -66,   342,   -66,
     362,   809,     0,  1232,   446,   625,   343,   151,   810,   -66,
     146,  1233,   -66,   -66,     0,  1087,  -350,   627,  1100,     0,
       0,    74,    75,     0,   -66,   -66,   -66,    76,   -66,   -66,
     -66,   811,     0,     0,     0,   447,     0,  -350,   812,  1101,
     542,     0,  -350,   448,    80,     0,     0,     0,  -293,     0,
       0,  -293,  -293,     0,  -293,  -293,     0,     0,  1552,     0,
       0,     0,     0,  -293,  -293,  -293,  1553,   -66,   -66,    78,
     -66,     0,  1053,  1515,     0,     0,  -293,  1088,   151,  1054,
    -314,  -293,     0,  -314,  -314,  -314,  -314,  -314,   445,     0,
       0,     0,    74,    75,  1516,  -314,  -314,  -314,    76,  -314,
    -314,  -314,     0,     0,   288,     0,   543,  -293,  -314,  -293,
    -314,   289,  -260,  -314,     0,  -260,  -260,  -260,  -260,  -260,
    1518,     0,     0,     0,    74,    75,     0,  -260,  -260,  -260,
      76,  -260,  -260,  -260,     0,  1515,     0,     0,  -314,  -314,
    -260,  -314,  -260,  1378,     0,  -260,     0,     0,   448,    80,
       0,  1379,     0,     0,     0,     0,  1516,     0,   624,     0,
       0,  1519,     0,     0,     0,     0,     0,     0,     0,   219,
    -260,  -260,     0,  -260,     0,   288,   220,  -451,     0,   625,
      79,    80,   289,   -66,  -451,   221,   -66,   -66,   -66,   -66,
     -66,   627,     0,     0,     0,    74,    75,     0,   -66,   -66,
     -66,    76,   -66,   -66,   -66,  -451,   222,   843,     0,     0,
    -451,   -66,     0,   -66,   844,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,   340,     0,     0,     0,    74,    75,     0,
     -66,   -66,   -66,    76,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   223,     0,   522,   -66,     0,
       0,    79,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,   -66,   -66,     0,   -66,     0,  1041,   220,
    -450,     0,     0,   343,   151,   755,  -288,  -450,   221,  -288,
    -288,  -288,  -288,  -288,   445,     0,     0,     0,    74,    75,
       0,  -288,  -288,  -288,    76,     0,     0,     0,  -450,   222,
       0,     0,     0,  -450,  -288,   282,  -288,     0,     0,  -288,
       0,     0,   164,  -274,     0,     0,  -274,  -274,  -274,  -274,
    -274,     0,     0,     0,     0,    74,    75,     0,  -274,  -274,
    -274,    76,     0,     0,  -288,  -288,   447,  -288,   223,     0,
       0,  -274,     0,  -274,   448,    80,  -274,   714,     0,  1354,
       0,     0,     0,   762,     0,  -769,  1355,  -359,     0,   921,
       0,  -248,  -769,     0,  -359,  1356,     0,     0,  -248,    74,
      75,  -274,  -274,    78,  -274,    76,     0,     0,     0,  1357,
       0,    79,    80,  -769,     0,  -359,  1358,   715,  -769,  -248,
    -359,  -248,   149,     0,  -248,  -769,     0,     0,     0,    73,
    -231,     0,     0,     0,  -769,     0,     0,  -231,     0,     0,
       0,     0,    74,    75,     0,     0,   149,   447,    76,     0,
     763,     0,   764,    73,  -230,  1359,    80,     0,  -231,    77,
    -231,  -230,     0,  -231,     0,     0,    74,    75,     0,     0,
    1380,     0,    76,     0,   149,     0,     0,     0,  1381,     0,
     -95,    73,  -230,    77,  -230,   624,     0,  -230,     0,   338,
      78,     0,     0,  1382,    74,    75,   339,  -428,    79,    80,
      76,  1383,     0,     0,  -428,   340,   625,     0,   624,    74,
      75,    77,   338,     0,    78,    76,  1151,     0,   627,   339,
    -427,     0,    79,    80,  1152,  -428,   341,  -427,   340,   625,
    -428,   955,    74,    75,     0,     0,     0,     0,    76,     0,
       0,   627,    78,     0,     0,     0,  1384,     0,  -427,   341,
      79,    80,   956,  -427,  1385,   809,     0,   342,     0,   831,
       0,   624,   810,  -330,   958,   343,    80,  -432,     0,     0,
    -330,     0,     0,   959,  -432,    74,    75,  1354,     0,     0,
     342,    76,   625,  -225,  1355,   811,     0,     0,   343,    80,
       0,  -330,   812,  1356,   627,  -432,  -330,    74,    75,   338,
    -432,     0,     0,    76,     0,  -423,   339,  1357,     0,     0,
       0,     0,     0,     0,  1358,   340,     0,     0,     0,    74,
      75,   338,     0,    78,     0,    76,     0,  -422,   339,     0,
       0,   813,    80,     0,     0,     0,   341,   340,     0,     0,
       0,    74,    75,   742,     0,   447,     0,    76,     0,     0,
     444,     0,   496,  1359,    80,     0,     0,     0,   341,   445,
       0,     0,     0,    74,    75,  1354,     0,   342,     0,    76,
       0,     0,  1355,     0,     0,   343,    80,     0,     0,     0,
     446,  1356,     0,     0,     0,    74,    75,   338,     0,   342,
       0,    76,     0,     0,   339,  1357,     0,   343,    80,     0,
       0,     0,  1358,   340,     0,     0,     0,    74,    75,   149,
       0,   447,     0,    76,     0,     0,    73,     0,   496,   448,
      80,     0,     0,     0,   341,     0,     0,     0,     0,    74,
      75,   742,     0,   447,     0,    76,     0,     0,   444,     0,
       0,  1359,    80,     0,     0,     0,    77,   445,     0,     0,
       0,    74,    75,   809,     0,   342,     0,    76,     0,     0,
     810,   567,     0,   343,    80,     0,     0,     0,   446,  -454,
       0,     0,     0,    74,    75,   149,   371,    78,     0,    76,
     279,     0,    73,   811,     0,    79,    80,     0,   280,     0,
     812,   179,   180,     0,   181,    74,    75,   372,   281,   447,
       0,    76,  -454,   182,   183,   184,  -234,   448,    80,   628,
       0,     0,    77,   169,     0,  -597,   629,     0,     0,     0,
     409,    78,     0,     0,  -777,   410,     0,     0,     0,   813,
      80,     0,     0,     0,   170,     0,  -234,   686,     0,  -234,
       0,     0,     0,    78,   687,  -777,   411,   185,     0,   186,
    -777,    79,    80,   410,     0,  -597,  -597,  -777,   414,   415,
     416,   417,   418,   419,   420,   421,  -777,   422,   423,   424,
     425,   426,     0,     0,   688,   628,     0,     0,     0,   427,
     428,   429,   629,  -777,     0,   630,   409,     0,     0,     0,
    -777,   917,   662,   663,     0,   664,   665,   666,     0,   667,
       0,     0,   618,     0,     0,     0,     0,   427,   428,   429,
    -570,  -777,   411,   430,     0,     0,  -777,  -570,     0,     0,
       0,     0,     0,  -777,   414,   415,   416,   417,   418,   419,
     420,   421,  -777,   422,   423,   424,   425,   426,  -570,     0,
       0,   628,   619,  -570,     0,   427,   428,   429,   629,  -777,
    -570,   918,   409,     0,     0,     0,  -777,   410,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   978,     0,     0,     0,     0,  -777,   411,   979,
    -777,     0,  -777,   409,     0,     0,     0,  -777,   410,  -777,
     414,   415,   416,   417,   418,   419,   420,   421,  -777,   422,
     423,   424,   425,   426,     0,     0,     0,     0,  -777,   411,
       0,   427,   428,   429,     0,     0,     0,   630,     0,     0,
    -777,   414,   415,   416,   417,   418,   419,   420,   421,  -777,
     422,   423,   424,   425,   426,     0,     0,     0,   628,     0,
       0,     0,   427,   428,   429,   629,  -777,     0,   430,   409,
       0,     0,     0,  -777,  1166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   628,
       0,     0,     0,     0,  -777,   411,   629,  -777,     0,     0,
     409,     0,     0,     0,  -777,   410,  -777,   414,   415,   416,
     417,   418,   419,   420,   421,  -777,   422,   423,   424,   425,
     426,     0,     0,     0,     0,  -777,   411,     0,   427,   428,
     429,     0,     0,     0,  1186,     0,     0,  -777,   414,   415,
     416,   417,   418,   419,   420,   421,     0,   422,   423,   424,
     425,   426,     0,     0,     0,   973,     0,     0,     0,   427,
     428,   429,   974,  -777,     0,   630,   409,     0,     0,     0,
    -777,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   709,     0,   281,     0,     0,     0,  -591,
     710,  -777,   672,  -232,  -591,     0,  -777,     0,     0,   410,
    -232,     0,     0,  -777,   414,   415,   416,   417,   418,   419,
     673,   674,  -777,   675,   676,   677,   425,   678,     0,     0,
     688,  -232,     0,  -232,     0,     0,  -232,     0,     0,  -591,
    -591,   630,  -591,  -591,  -591,  -591,  -591,  -591,   662,   663,
       0,   664,   665,   666,  -591,   667,     0,     0,     0,   670,
       0,     0,     0,   427,   428,   429,   671,  -636,     0,   430,
     409,     0,     0,     0,  -636,   410,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     670,     0,     0,     0,     0,  -636,   672,   671,  -635,     0,
    -636,   409,     0,     0,     0,  -635,   410,  -636,   414,   415,
     416,   417,   418,   419,   673,   674,  -636,   675,   676,   677,
     425,   678,   714,     0,     0,     0,  -635,   672,     0,     0,
    -769,  -635,     0,     0,     0,   430,     0,  -769,  -635,   414,
     415,   416,   417,   418,   419,   673,   674,  -635,   675,   676,
     677,   425,   678,   973,     0,     0,     0,   567,  -769,     0,
     974,  -777,   715,  -769,   409,  -452,   430,     0,  -777,  1180,
    -769,     0,  -452,     0,     0,     0,     0,     0,     0,  -769,
       0,     0,     0,     0,   670,     0,     0,     0,     0,  -777,
     672,   671,  -624,  -452,  -777,   409,     0,     0,  -452,  -624,
     410,  -777,   414,   415,   416,   417,   418,   419,   673,   674,
    -777,   675,   676,   677,   425,   678,   897,     0,     0,     0,
    -624,   672,     0,     0,  -552,  -624,     0,     0,     0,  1181,
       0,  -552,  -624,   414,   415,   416,   417,   418,   419,   673,
     674,  -624,   675,   676,   677,   425,   678,   670,     0,     0,
       0,   567,  -552,     0,   671,  -622,     0,  -552,   409,  -453,
     430,     0,  -622,   410,  -552,     0,   371,     0,     0,     0,
       0,     0,     0,  -552,     0,     0,     0,     0,   670,     0,
       0,     0,     0,  -622,   672,   671,  -616,  -453,  -622,   409,
       0,     0,  -453,  -616,   410,  -622,   414,   415,   416,   417,
     418,   419,   673,   674,  -622,   675,   676,   677,   425,   678,
     897,     0,     0,     0,  -616,   672,     0,     0,  -555,  -616,
       0,     0,     0,   430,     0,  -555,  -616,   414,   415,   416,
     417,   418,   419,   673,   674,  -616,   675,   676,   677,   425,
     678,   670,     0,     0,     0,   831,  -555,     0,   671,  -614,
       0,  -555,   409,  -431,   430,     0,  -614,   410,  -555,     0,
     551,     0,     0,     0,     0,     0,     0,  -555,     0,     0,
       0,     0,   670,     0,     0,     0,     0,  -614,   672,   671,
    -623,   552,  -614,   409,     0,     0,  -431,  -623,   410,  -614,
     414,   415,   416,   417,   418,   419,   673,   674,  -614,   675,
     676,   677,   425,   678,   897,     0,     0,     0,  -623,   672,
       0,     0,  -556,  -623,     0,     0,     0,   430,     0,  -556,
    -623,   414,   415,   416,   417,   418,   419,   673,   674,  -623,
     675,   676,   677,   425,   678,   670,     0,     0,     0,   831,
    -556,     0,   671,  -620,     0,  -556,   409,  -429,   430,     0,
    -620,   410,  -556,     0,  -429,     0,     0,     0,     0,     0,
       0,  -556,     0,     0,     0,     0,   670,     0,     0,     0,
       0,  -620,   672,   671,  -615,  -429,  -620,   409,     0,     0,
    -429,  -615,   410,  -620,   414,   415,   416,   417,   418,   419,
     673,   674,  -620,   675,   676,   677,   425,   678,   897,     0,
       0,     0,  -615,   672,     0,     0,  -557,  -615,     0,     0,
       0,   430,     0,  -557,  -615,   414,   415,   416,   417,   418,
     419,   673,   674,  -615,   675,   676,   677,   425,   678,   670,
       0,     0,     0,   831,  -557,     0,   671,  -612,     0,  -557,
     409,  -430,   430,     0,  -612,   410,  -557,     0,   551,     0,
       0,     0,     0,     0,     0,  -557,     0,     0,     0,     0,
     670,     0,     0,     0,     0,  -612,   672,   671,  -608,  -430,
    -612,   409,     0,     0,  -430,  -608,   410,  -612,   414,   415,
     416,   417,   418,   419,   673,   674,  -612,   675,   676,   677,
     425,   678,   897,     0,     0,     0,  -608,   672,     0,     0,
    -558,  -608,     0,     0,     0,   430,     0,  -558,  -608,   414,
     415,   416,   417,   418,   419,   673,   674,  -608,   675,   676,
     677,   425,   678,   670,     0,     0,     0,  1230,  -558,     0,
     671,  -606,     0,  -558,   409,  1231,   430,     0,  -606,   410,
    -558,     0,  1100,     0,     0,     0,     0,     0,     0,  -558,
       0,     0,     0,     0,   670,     0,     0,     0,     0,  -606,
     672,   671,  -607,  1101,  -606,   409,     0,     0,  -336,  -607,
     410,  -606,   414,   415,   416,   417,   418,   419,   673,   674,
    -606,   675,   676,   677,   425,   678,   897,     0,     0,     0,
    -607,   672,     0,     0,  -559,  -607,     0,     0,     0,   430,
       0,  -559,  -607,   414,   415,   416,   417,   418,   419,   673,
     674,  -607,   675,   676,   677,   425,   678,   670,     0,     0,
       0,  1099,  -559,     0,   671,  -604,     0,  -559,   409,  -335,
     430,     0,  -604,   410,  -559,     0,  -335,     0,     0,     0,
       0,     0,     0,  -559,     0,     0,     0,     0,   670,     0,
       0,     0,     0,  -604,   672,   671,  -632,  -335,  -604,   409,
       0,     0,  -335,  -632,   410,  -604,   414,   415,   416,   417,
     418,   419,   673,   674,  -604,   675,   676,   677,   425,   678,
     897,     0,     0,     0,  -632,   672,     0,     0,  -560,  -632,
       0,     0,     0,   430,     0,  -560,  -632,   414,   415,   416,
     417,   418,   419,   673,   674,  -632,   675,   676,   677,   425,
     678,   670,     0,     0,     0,  1099,  -560,     0,   671,  -630,
       0,  -560,   409,  -334,   430,     0,  -630,   410,  -560,     0,
    1100,     0,     0,     0,     0,     0,     0,  -560,     0,     0,
       0,     0,   670,     0,     0,     0,     0,  -630,   672,   671,
    -631,  1101,  -630,   409,     0,     0,  -334,  -631,   410,  -630,
     414,   415,   416,   417,   418,   419,   673,   674,  -630,   675,
     676,   677,   425,   678,   922,     0,     0,     0,  -631,   672,
       0,     0,   923,  -631,     0,     0,     0,   430,     0,   729,
    -631,   414,   415,   416,   417,   418,   419,   673,   674,  -631,
     675,   676,   677,   425,   678,   670,     0,     0,     0,   281,
     730,     0,   671,  -628,     0,  -641,   409,  -233,   430,     0,
    -628,   410,   732,     0,   169,     0,     0,     0,     0,     0,
       0,  -641,     0,   407,     0,     0,     0,     0,     0,     0,
     408,  -628,   672,     0,   409,  -233,  -628,  -233,     0,   410,
    -233,     0,     0,  -628,   414,   415,   416,   417,   418,   419,
     673,   674,  -628,   675,   676,   677,   425,   678,     0,     0,
     411,     0,     0,     0,     0,     0,     0,     0,     0,   412,
     413,   430,   414,   415,   416,   417,   418,   419,   420,   421,
       0,   422,   423,   424,   425,   426,     0,     0,     0,   587,
       0,     0,  1099,   427,   428,   429,   588,  -578,     0,   430,
    -332,     0,     0,     0,  -578,   386,     0,  -332,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     670,     0,     0,     0,     0,  -578,   387,   671,  -332,     0,
    -578,   409,     0,  -332,     0,     0,   410,  -578,   388,   389,
     390,   391,   392,   393,   394,   395,  -578,   396,   397,   398,
     399,   400,   587,     0,     0,     0,     0,   672,     0,   588,
       0,     0,     0,     0,     0,   401,     0,  -578,   386,   414,
     415,   416,   417,   418,   419,   673,   674,     0,   675,   676,
     677,   425,   678,   595,     0,   589,     0,     0,  -578,   387,
     385,  -548,     0,  -578,     0,     0,   430,  -505,  -548,   386,
    -578,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     396,   397,   398,   399,   400,   926,     0,     0,     0,  -548,
     387,     0,     0,   927,  -548,     0,     0,     0,   401,     0,
     739,  -548,   388,   389,   390,   391,   392,   393,   394,   395,
    -548,   396,   397,   398,   399,   400,   595,     0,     0,     0,
    1028,   740,     0,   385,  -547,     0,  -734,     0,  1029,   401,
       0,  -547,   386,   741,     0,   759,     0,     0,     0,     0,
       0,     0,  -725,     0,     0,     0,     0,   595,     0,     0,
       0,     0,  -547,   387,   385,  -536,   760,  -547,  -247,     0,
       0,  -247,  -536,   386,  -547,   388,   389,   390,   391,   392,
     393,   394,   395,  -547,   396,   397,   398,   399,   400,   938,
       0,     0,     0,  -536,   387,     0,     0,  -640,  -536,     0,
       0,     0,   401,     0,  -640,  -536,   388,   389,   390,   391,
     392,   393,   394,   395,  -536,   396,   397,   398,   399,   400,
     595,     0,     0,     0,  1040,  -640,     0,   385,  -534,     0,
    -640,     0,  -246,   401,     0,  -534,   386,  -640,     0,  -246,
       0,     0,     0,     0,     0,     0,  -640,     0,     0,     0,
       0,   595,     0,     0,     0,     0,  -534,   387,   385,  -528,
    -246,  -534,  -246,     0,     0,  -246,  -528,   386,  -534,   388,
     389,   390,   391,   392,   393,   394,   395,  -534,   396,   397,
     398,   399,   400,   939,     0,     0,     0,  -528,   387,     0,
       0,  -713,  -528,     0,     0,     0,   401,     0,  -713,  -528,
     388,   389,   390,   391,   392,   393,   394,   395,  -528,   396,
     397,   398,   399,   400,   595,     0,     0,     0,  1040,  -713,
       0,   385,  -526,     0,  -713,     0,  -245,   401,     0,  -526,
     386,  -713,     0,   759,     0,     0,     0,     0,     0,     0,
     737,     0,     0,     0,     0,   595,     0,     0,     0,     0,
    -526,   387,   385,  -535,   760,  -526,  -245,     0,     0,  -245,
    -535,   386,  -526,   388,   389,   390,   391,   392,   393,   394,
     395,  -526,   396,   397,   398,   399,   400,   926,     0,     0,
       0,  -535,   387,     0,     0,  -725,  -535,     0,     0,     0,
     401,     0,  -725,  -535,   388,   389,   390,   391,   392,   393,
     394,   395,  -535,   396,   397,   398,   399,   400,   595,     0,
       0,     0,  1040,  -725,     0,   385,  -532,     0,  -725,     0,
    -243,   401,     0,  -532,   386,  -725,     0,  -243,     0,     0,
       0,     0,     0,     0,  -725,     0,     0,     0,     0,   595,
       0,     0,     0,     0,  -532,   387,   385,  -527,  -243,  -532,
    -243,     0,     0,  -243,  -527,   386,  -532,   388,   389,   390,
     391,   392,   393,   394,   395,  -532,   396,   397,   398,   399,
     400,   938,     0,     0,     0,  -527,   387,     0,     0,  -643,
    -527,     0,     0,     0,   401,     0,  -643,  -527,   388,   389,
     390,   391,   392,   393,   394,   395,  -527,   396,   397,   398,
     399,   400,   595,     0,     0,     0,  1040,  -643,     0,   385,
    -524,     0,  -643,     0,  -244,   401,     0,  -524,   386,  -643,
       0,   759,     0,     0,     0,     0,     0,     0,  -643,     0,
       0,     0,     0,   595,     0,     0,     0,     0,  -524,   387,
     385,  -520,  -244,  -524,  -244,     0,     0,  -244,  -520,   386,
    -524,   388,   389,   390,   391,   392,   393,   394,   395,  -524,
     396,   397,   398,   399,   400,   938,     0,     0,     0,  -520,
     387,     0,     0,  -644,  -520,     0,     0,     0,   401,     0,
    -644,  -520,   388,   389,   390,   391,   392,   393,   394,   395,
    -520,   396,   397,   398,   399,   400,   595,     0,     0,     0,
    1099,  -644,     0,   385,  -518,     0,  -644,     0,  -333,   401,
       0,  -518,   386,  -644,     0,  1100,     0,     0,     0,     0,
       0,     0,  -644,     0,     0,     0,     0,   595,     0,     0,
       0,     0,  -518,   387,   385,  -519,  -333,  -518,     0,     0,
       0,  -333,  -519,   386,  -518,   388,   389,   390,   391,   392,
     393,   394,   395,  -518,   396,   397,   398,   399,   400,   938,
       0,     0,     0,  -519,   387,     0,     0,  -645,  -519,     0,
       0,     0,   401,     0,  -645,  -519,   388,   389,   390,   391,
     392,   393,   394,   395,  -519,   396,   397,   398,   399,   400,
     595,     0,     0,     0,  1550,  -645,     0,   385,  -516,     0,
    -645,     0,  1551,   401,     0,  -516,   386,  -645,     0,  1515,
       0,     0,     0,     0,     0,     0,  -645,     0,     0,     0,
       0,   595,     0,     0,     0,     0,  -516,   387,   385,  -544,
    1516,  -516,     0,     0,     0,  -365,  -544,   386,  -516,   388,
     389,   390,   391,   392,   393,   394,   395,  -516,   396,   397,
     398,   399,   400,   938,     0,     0,     0,  -544,   387,     0,
       0,  -646,  -544,     0,     0,     0,   401,     0,  -646,  -544,
     388,   389,   390,   391,   392,   393,   394,   395,  -544,   396,
     397,   398,   399,   400,   595,     0,     0,     0,  1561,  -646,
       0,   385,  -542,     0,  -646,     0,  -364,   401,     0,  -542,
     386,  -646,     0,  -364,     0,     0,     0,     0,     0,     0,
    -646,  1386,     0,     0,     0,   595,     0,     0,     0,  1387,
    -542,   387,   385,  -543,  -364,  -542,   624,     0,     0,  -364,
    -543,   386,  -542,   388,   389,   390,   391,   392,   393,   394,
     395,  -542,   396,   397,   398,   399,   400,   625,     0,     0,
       0,  -543,   387,     0,     0,     0,  -543,     0,     0,   627,
     401,     0,     0,  -543,   388,   389,   390,   391,   392,   393,
     394,   395,  -543,   396,   397,   398,   399,   400,   595,     0,
       0,     0,  -385,     0,   544,   385,  -540,     0,     0,     0,
    -385,   401,  -303,  -540,   386,  -303,  -303,  -385,  -303,  -303,
       0,     0,     0,     0,     0,     0,   638,  -303,  -303,  -303,
     545,   546,     0,   408,  -540,   387,     0,   409,  -385,  -540,
    -303,     0,   410,  -385,     0,  -303,  -540,   388,   389,   390,
     391,   392,   393,   394,   395,  -540,   396,   397,   398,   399,
     400,     0,     0,   411,     0,     0,     0,     0,     0,     0,
    -303,  -303,     0,  -303,   401,   414,   415,   416,   417,   418,
     419,   420,   421,   716,   422,   423,   424,   425,   426,   717,
     671,     0,  1153,     0,   409,     0,   427,   428,   429,   410,
    1154,     0,   430,     0,     0,     0,     0,   955,     0,     0,
       0,   638,     0,     0,     0,     0,  1561,     0,   408,     0,
     672,     0,   409,     0,  -363,     0,     0,   919,   956,   718,
     719,  1515,   414,   415,   416,   417,   418,   419,   673,   674,
     958,   675,   676,   677,   425,   678,     0,     0,   411,   959,
       0,     0,  1516,     0,     0,     0,     0,  -363,     0,   430,
     414,   415,   416,   417,   418,   419,   420,   421,   670,   422,
     423,   424,   425,   426,  -589,   671,     0,     0,     0,   409,
       0,   427,   428,   429,   410,     0,     0,   920,     0,     0,
       0,     0,     0,     0,     0,     0,   659,     0,  1561,     0,
       0,     0,  -590,   660,     0,   672,  -361,  -590,     0,     0,
       0,     0,   410,  -361,  -589,  -589,     0,   414,   415,   416,
     417,   418,   419,   673,   674,   638,   675,   676,   677,   425,
     678,     0,   408,   661,  -361,     0,   409,     0,     0,  -361,
       0,  1168,  -590,  -590,   430,  -590,  -590,  -590,  -590,  -590,
    -590,   662,   663,   670,   664,   665,   666,  -590,   667,  -595,
     671,     0,   411,     0,   409,     0,     0,     0,     0,   410,
       0,     0,   430,     0,   414,   415,   416,   417,   418,   419,
     420,   421,     0,   422,   423,   424,   425,   426,     0,     0,
     672,     0,     0,     0,     0,   427,   428,   429,     0,  -595,
    -595,  1169,   414,   415,   416,   417,   418,   419,   673,   674,
     659,   675,   676,   677,   425,   678,  -596,   660,     0,     0,
     538,  -596,     0,     0,     0,     0,   410,     0,   819,   430,
       0,   179,   180,     0,   181,     0,     0,     0,     0,     0,
    1388,     0,  1276,   182,   183,   184,     0,   661,  1389,  1277,
       0,     0,     0,   409,     0,   624,  -596,  -596,   410,  -596,
    -596,  -596,  -596,  -596,  -596,   662,   663,     0,   664,   665,
     666,  -596,   667,   992,   993,   938,   625,     0,     0,  1278,
       0,     0,     0,  -647,     0,     0,   430,   539,   627,   540,
    -647,   414,   415,   416,   417,   418,   419,   420,   421,   670,
     422,   423,   424,   425,   426,     0,   671,     0,     0,     0,
     409,  -647,     0,     0,     0,   410,  -647,     0,   430,     0,
    1392,     0,     0,  -647,     0,     0,   960,     0,  1393,  1561,
     992,   993,  -647,   961,  -777,   624,   672,  -362,     0,     0,
       0,  -777,   410,     0,  1515,     0,     0,     0,   414,   415,
     416,   417,   418,   419,   673,   674,   625,   675,   676,   677,
     425,   678,  -777,   688,   709,  -362,     0,  -777,   627,     0,
    -362,   710,  -709,     0,  -777,   430,     0,  -551,     0,  -709,
     410,   662,   663,  -777,   664,   665,   666,     0,   667,     0,
       0,     0,     0,     0,     0,     0,   427,   428,   429,     0,
    -709,   688,   430,  1323,     0,  -709,     0,     0,     0,     0,
       0,  -769,  -709,     0,     0,   921,     0,     0,  -769,   662,
     663,  -709,   664,   665,   666,     0,   667,     0,     0,     0,
     709,     0,     0,     0,   427,   428,   429,   710,  -708,  -769,
     430,     0,  1324,   715,  -769,  -708,   410,  1390,  1394,     0,
       0,  -769,     0,     0,     0,  1391,  1395,   960,     0,     0,
    -769,  1396,   624,   624,   961,  -777,  -708,   688,     0,  1397,
       0,  -708,  -777,  1166,     0,     0,   624,     0,  -708,     0,
       0,     0,     0,   625,   625,   662,   663,  -708,   664,   665,
     666,     0,   667,  -777,   688,   627,   627,   625,  -777,     0,
     427,   428,   429,     0,   595,  -777,   430,     0,     0,   627,
       0,   385,   662,   663,  -777,   664,   665,   666,  -551,   667,
     386,     0,     0,     0,     0,     0,     0,   427,   428,   429,
       0,   709,     0,  1167,  1325,   906,   907,     0,   710,  -729,
       0,   387,  -769,     0,     0,     0,  -729,   410,     0,  -769,
       0,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,   398,   399,   400,  -729,   688,   383,
    -769,     0,  -729,  1326,   715,   384,   385,     0,     0,  -729,
     401,     0,  -769,     0,     0,   386,   662,   663,  -729,   664,
     665,   666,     0,   667,     0,     0,     0,     0,   620,     0,
       0,   427,   428,   429,   384,   385,   387,   430,     0,     0,
       0,     0,     0,     0,   386,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   595,   396,   397,   398,
     399,   400,  -509,   385,     0,   387,     0,     0,     0,     0,
       0,     0,   386,     0,     0,   401,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   595,   396,   397,   398,   399,
     400,  -511,   385,   387,     0,     0,     0,     0,     0,     0,
       0,   386,     0,     0,   401,   388,   389,   390,   391,   392,
     393,   394,   395,   670,   396,   397,   398,   399,   400,     0,
     671,     0,   387,     0,   409,     0,     0,     0,     0,  1182,
       0,     0,   401,     0,   388,   389,   390,   391,   392,   393,
     394,   395,  1276,   396,   397,   398,   399,   400,     0,  1277,
     672,     0,     0,   409,     0,     0,     0,     0,   410,     0,
       0,   401,   414,   415,   416,   417,   418,   419,   673,   674,
     595,   675,   676,   677,   425,   678,     0,   385,     0,  1278,
       0,     0,     0,     0,     0,     0,   386,     0,     0,  1183,
       0,   414,   415,   416,   417,   418,   419,   420,   421,   595,
     422,   423,   424,   425,   426,     0,   385,   387,     0,     0,
       0,     0,     0,     0,     0,   889,     0,     0,   430,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   396,   397,
     398,   399,   400,     0,     0,     0,   387,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   647,   396,   397,   398,
     399,   400,     0,   648,  -777,     0,     0,     0,     0,     0,
       0,  -777,   410,     0,     0,   890,     0,     0,     0,     0,
       0,  1464,     0,   647,     0,     0,     0,  1525,     0,  1465,
     648,  -667,  -777,   649,     0,  1526,   729,  -777,  -667,   410,
       0,     0,   955,     0,  -777,     0,     0,     0,     0,     0,
       0,     0,     0,  -777,   650,   651,   652,   730,   653,  -667,
     649,     0,  1125,   956,  -667,     0,   654,   655,   656,   732,
    -570,  -667,   430,     0,     0,   958,     0,  -570,  -639,     0,
    -667,   650,   651,   652,   959,   653,     0,     0,     0,   647,
       0,     0,     0,   654,   655,   656,   648,  -666,  -570,   430,
       0,  1126,   619,  -570,  -666,   410,     0,     0,     0,     0,
    -570,     0,     0,     0,  1527,     0,   647,     0,     0,  -570,
    1529,     0,  1528,   648,  -697,  -666,   649,     0,  1530,   955,
    -666,  -697,   410,     0,     0,   955,     0,  -666,     0,     0,
       0,     0,     0,     0,     0,     0,  -666,   650,   651,   652,
     956,   653,  -697,   649,     0,  1309,   956,  -697,     0,   654,
     655,   656,   958,  -769,  -697,   430,     0,     0,   958,     0,
    -769,   959,     0,  -697,   650,   651,   652,   959,   653,     0,
       0,     0,   647,     0,     0,     0,   654,   655,   656,   648,
    -695,  -769,   430,     0,  1310,   715,  -769,  -695,   410,     0,
       0,     0,     0,  -769,     0,     0,     0,  1531,     0,   647,
       0,     0,  -769,  1533,     0,  1532,   648,  -689,  -695,   649,
       0,  1534,   955,  -695,  -689,   410,     0,     0,   955,     0,
    -695,     0,     0,     0,     0,     0,     0,     0,     0,  -695,
     650,   651,   652,   956,   653,  -689,   649,     0,  1309,   956,
    -689,     0,   654,   655,   656,   958,  -769,  -689,   430,     0,
     921,   958,     0,  -769,   959,     0,  -689,   650,   651,   652,
     959,   653,     0,     0,     0,   647,     0,     0,     0,   654,
     655,   656,   648,  -687,  -769,   430,     0,  1310,   715,     0,
    -687,   410,     0,     0,     0,     0,  -769,     0,     0,     0,
    1535,     0,   647,     0,     0,  -769,  1537,     0,  1536,   648,
    -696,  -687,   649,     0,  1538,   955,  -687,  -696,   410,     0,
       0,   955,     0,  -687,     0,     0,     0,     0,     0,     0,
       0,     0,  -687,   650,   651,   652,   956,   653,  -696,   649,
       0,  1149,   956,  -696,     0,   654,   655,   656,   958,  -769,
    -696,   430,     0,     0,   958,     0,  -769,   959,     0,  -696,
     650,   651,   652,   959,   653,     0,     0,     0,   647,     0,
       0,     0,   654,   655,   656,   648,  -693,  -769,   430,     0,
    1150,   715,     0,  -693,   410,     0,     0,     0,     0,  -769,
       0,     0,     0,  1539,     0,   647,     0,     0,  -769,  1541,
       0,  1540,   648,  -688,  -693,   649,     0,  1542,   955,  -693,
    -688,   410,     0,     0,   955,     0,  -693,     0,     0,     0,
       0,     0,     0,     0,     0,  -693,   650,   651,   652,   956,
     653,  -688,   649,     0,  1313,   956,  -688,     0,   654,   655,
     656,   958,  -769,  -688,   430,     0,     0,   958,     0,  -769,
     959,     0,  -688,   650,   651,   652,   959,   653,     0,     0,
       0,   647,     0,     0,     0,   654,   655,   656,   648,  -685,
    -769,   430,     0,  1314,   715,     0,  -685,   410,     0,     0,
       0,     0,  -769,     0,     0,     0,   938,     0,   647,     0,
       0,  -769,  1543,     0,  -648,   648,  -705,  -685,   649,     0,
    1544,  -648,  -685,  -705,   410,     0,     0,   955,     0,  -685,
       0,     0,     0,     0,     0,     0,     0,     0,  -685,   650,
     651,   652,  -648,   653,  -705,   649,     0,  -648,   956,  -705,
       0,   654,   655,   656,  -648,     0,  -705,   430,     0,     0,
     958,     0,     0,  -648,     0,  -705,   650,   651,   652,   959,
     653,     0,     0,     0,   647,     0,     0,     0,   654,   655,
     656,   648,  -703,     0,   430,     0,     0,     0,     0,  -703,
     410,     0,     0,     0,     0,     0,     0,     0,     0,   939,
       0,   647,     0,     0,     0,  1545,     0,  -742,   648,  -704,
    -703,   649,     0,  1546,  -742,  -703,  -704,   410,     0,     0,
     955,     0,  -703,     0,     0,     0,     0,     0,     0,     0,
       0,  -703,   650,   651,   652,  -742,   653,  -704,   649,     0,
    -742,   956,  -704,     0,   654,   655,   656,  -742,     0,  -704,
     430,     0,     0,   958,     0,     0,  -742,     0,  -704,   650,
     651,   652,   959,   653,     0,     0,     0,   647,     0,     0,
    1398,   654,   655,   656,   648,  -701,     0,   430,  1399,     0,
    1400,     0,  -701,   410,  1402,   624,     0,     0,  1401,     0,
       0,     0,  1403,     0,   659,   624,     0,     0,     0,   624,
       0,   660,  -728,  -701,   649,     0,   625,     0,  -701,  -728,
     410,     0,     0,     0,     0,  -701,   625,     0,   627,     0,
     625,     0,     0,     0,  -701,   650,   651,   652,   627,   653,
    -728,   661,   627,   926,     0,  -728,     0,   654,   655,   656,
       0,  -725,  -728,   430,     0,     0,     0,   939,   739,   662,
     663,  -728,   664,   665,   666,  -743,   667,   659,     0,     0,
    1404,     0,  -743,     0,   660,  -760,     0,     0,  1405,   740,
     430,     0,  -760,   410,  -725,   624,     0,     0,     0,     0,
       0,   741,     0,  -743,   659,     0,     0,     0,  -743,     0,
    -725,   660,  -758,  -760,   661,  -743,   625,     0,  -760,  -758,
     410,     0,     0,     0,  -743,  -760,     0,     0,   627,     0,
       0,     0,   662,   663,  -760,   664,   665,   666,     0,   667,
    -758,   661,   659,     0,     0,  -758,     0,     0,     0,   660,
    -752,     0,  -758,   430,     0,     0,     0,  -752,   410,   662,
     663,  -758,   664,   665,   666,     0,   667,     0,     0,   659,
       0,     0,     0,  1547,     0,     0,   660,  -750,  -752,   661,
     430,  1548,     0,  -752,  -750,   410,     0,     0,   955,     0,
    -752,     0,     0,     0,     0,     0,     0,   662,   663,  -752,
     664,   665,   666,     0,   667,  -750,   661,   659,     0,   956,
    -750,     0,     0,     0,   660,  -759,     0,  -750,   430,     0,
       0,   958,  -759,   410,   662,   663,  -750,   664,   665,   666,
     959,   667,     0,     0,   659,     0,     0,     0,  1406,     0,
       0,   660,  -756,  -759,   661,   430,  1407,     0,  -759,  -756,
     410,     0,     0,   624,     0,  -759,     0,     0,     0,     0,
       0,     0,   662,   663,  -759,   664,   665,   666,     0,   667,
    -756,   661,   659,     0,   625,  -756,     0,     0,     0,   660,
    -751,     0,  -756,   430,     0,     0,   627,  -751,   410,   662,
     663,  -756,   664,   665,   666,     0,   667,     0,     0,   659,
       0,     0,     0,  1408,     0,     0,   660,  -748,  -751,   661,
     430,  1409,     0,  -751,  -748,   410,     0,     0,   624,     0,
    -751,     0,     0,     0,     0,     0,     0,   662,   663,  -751,
     664,   665,   666,     0,   667,  -748,   661,   659,     0,   625,
    -748,     0,     0,     0,   660,  -768,     0,  -748,   430,     0,
       0,   627,  -768,   410,   662,   663,  -748,   664,   665,   666,
       0,   667,     0,     0,   659,     0,     0,     0,  1410,     0,
       0,   660,  -766,  -768,   661,   430,  1411,     0,  -768,  -766,
     410,     0,     0,   624,     0,  -768,     0,     0,     0,     0,
       0,     0,   662,   663,  -768,   664,   665,   666,     0,   667,
    -766,   661,   659,     0,   625,  -766,     0,     0,     0,   660,
    -767,     0,  -766,   430,     0,     0,   627,  -767,   410,   662,
     663,  -766,   664,   665,   666,     0,   667,     0,     0,   659,
       0,     0,     0,  1412,     0,     0,   660,  -764,  -767,   661,
     430,  1413,     0,  -767,  -764,   410,     0,     0,   624,     0,
    -767,     0,     0,     0,     0,     0,   709,   662,   663,  -767,
     664,   665,   666,   710,   667,  -764,   661,     0,     0,   625,
    -764,     0,   410,     0,     0,     0,     0,  -764,   430,     0,
       0,   627,     0,   709,   662,   663,  -764,   664,   665,   666,
     710,   667,     0,   688,     0,     0,     0,     0,     0,  1168,
       0,     0,     0,     0,     0,   430,     0,     0,     0,     0,
       0,   662,   663,     0,   664,   665,   666,     0,   667,     0,
     688,     0,     0,     0,     0,     0,   427,   428,   429,     0,
     659,     0,   430,     0,     0,     0,     0,   660,   662,   663,
     647,   664,   665,   666,     0,   667,   410,   648,     0,     0,
       0,     0,     0,   427,   428,   429,   410,   277,     0,  1169,
       0,   992,   993,     0,     0,   278,     0,   661,  -275,  -275,
       0,  -275,     0,     0,     0,     0,     0,   649,     0,     0,
    -275,  -275,  -275,   173,   174,   662,   663,     0,   664,   665,
     666,     0,   667,  1414,     0,     0,     0,     0,   650,   651,
     652,  1415,   653,     0,     0,     0,   430,   175,   624,     0,
     654,   655,   656,     0,     0,  -253,   430,     0,  -253,  -253,
    -253,  -253,  -253,  -275,  -275,     0,  -275,     0,     0,   625,
    -253,  -253,  -253,  -253,  -253,   176,   177,     0,     0,   175,
       0,   627,     0,  -253,     0,  -253,     0,  -252,  -253,     0,
    -252,  -252,  -252,  -252,  -252,     0,     0,     0,     0,     0,
       0,     0,  -252,  -252,  -252,  -252,  -252,   176,   177,     0,
       0,   175,     0,  -253,  -253,  -252,  -253,  -252,     0,  -251,
    -252,     0,  -251,  -251,  -251,  -251,  -251,     0,     0,     0,
       0,     0,     0,     0,  -251,  -251,  -251,  -251,  -251,   176,
     177,     0,     0,   175,     0,  -252,  -252,  -251,  -252,  -251,
       0,  -250,  -251,     0,  -250,  -250,  -250,  -250,  -250,     0,
       0,     0,     0,     0,     0,     0,  -250,  -250,  -250,  -250,
    -250,   176,   177,     0,     0,   771,     0,  -251,  -251,  -250,
    -251,  -250,     0,  -307,  -250,     0,  -307,  -307,  -307,  -307,
    -307,     0,     0,     0,     0,     0,     0,     0,  -307,  -307,
    -307,  -307,  -307,   772,   773,     0,     0,   771,     0,  -250,
    -250,  -307,  -250,  -307,     0,  -306,  -307,     0,  -306,  -306,
    -306,  -306,  -306,     0,     0,     0,     0,     0,     0,     0,
    -306,  -306,  -306,  -306,  -306,   772,   773,     0,     0,   771,
       0,  -307,  -307,  -306,  -307,  -306,     0,  -305,  -306,     0,
    -305,  -305,  -305,  -305,  -305,     0,     0,     0,     0,     0,
       0,     0,  -305,  -305,  -305,  -305,  -305,   772,   773,     0,
       0,   771,     0,  -306,  -306,  -305,  -306,  -305,     0,  -304,
    -305,     0,  -304,  -304,  -304,  -304,  -304,     0,     0,     0,
       0,     0,     0,     0,  -304,  -304,  -304,  -304,  -304,   772,
     773,     0,     0,   536,     0,  -305,  -305,  -304,  -305,  -304,
       0,  -399,  -304,     0,  -399,  -399,     0,  -399,  -399,     0,
       0,     0,     0,     0,     0,     0,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,     0,     0,     0,     0,  -304,  -304,  -399,
    -304,     0,     0,   537,  -399,  1416,     0,     0,     0,     0,
    1096,     0,     0,  1417,     0,     0,     0,     0,  -341,     0,
     729,  -388,  -388,     0,  -388,  -341,     0,     0,     0,  -399,
    -399,     0,  -399,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
       0,   730,     0,     0,  1511,     0,  -341,     0,     0,     0,
    1097,  -341,  -370,   732,     0,  -393,  -393,     0,  -393,  -370,
       0,     0,     0,     0,     0,     0,     0,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,     0,     0,  -388,  -388,   172,  -388,
    -370,     0,     0,     0,  1512,  -370,  -275,     0,     0,  -275,
    -275,  -275,  -275,  -275,     0,     0,     0,     0,     0,     0,
       0,  -275,  -275,  -275,   173,   174,     0,  1418,     0,     0,
    -393,  -393,   172,  -393,  -275,  1419,  -275,     0,     0,  -275,
     273,     0,   969,  -275,  -275,  -275,  -275,  -275,     0,     0,
       0,     0,     0,     0,     0,  -275,  -275,  -275,   173,   174,
       0,  1420,     0,   970,  -275,  -275,   547,  -275,  -275,  1421,
    -275,     0,     0,  -275,  -319,   972,   729,  -319,  -319,     0,
    -319,  -319,     0,     0,     0,     0,     0,     0,     0,  -319,
    -319,  -319,  -319,  -319,   548,   549,     0,   730,  -275,  -275,
     768,  -275,  -319,     0,     0,     0,     0,  -319,  -289,   732,
       0,  -289,  -289,  -289,  -289,  -289,     0,     0,     0,     0,
       0,     0,     0,  -289,  -289,  -289,   769,   770,     0,  1422,
       0,     0,  -319,  -319,   768,  -319,  -289,  1423,  -289,     0,
       0,  -289,  1031,     0,   969,  -289,  -289,  -289,  -289,  -289,
       0,     0,     0,     0,     0,     0,     0,  -289,  -289,  -289,
     769,   770,     0,  1424,     0,   970,  -289,  -289,   547,  -289,
    -289,  1425,  -289,     0,     0,  -289,  -318,   972,   729,  -318,
    -318,     0,  -318,  -318,     0,     0,     0,     0,     0,     0,
       0,  -318,  -318,  -318,  -318,  -318,   548,   549,     0,   730,
    -289,  -289,   547,  -289,  -318,     0,     0,     0,     0,  -318,
    -317,   732,     0,  -317,  -317,     0,  -317,  -317,     0,     0,
       0,     0,     0,     0,     0,  -317,  -317,  -317,  -317,  -317,
     548,   549,     0,     0,  -318,  -318,   547,  -318,  -317,     0,
       0,     0,     0,  -317,  -316,     0,     0,  -316,  -316,     0,
    -316,  -316,     0,     0,     0,     0,     0,     0,     0,  -316,
    -316,  -316,  -316,  -316,   548,   549,     0,     0,  -317,  -317,
     188,  -317,  -316,     0,     0,     0,     0,  -316,  -265,     0,
       0,  -265,  -265,  -265,  -265,  -265,     0,     0,     0,     0,
       0,     0,     0,  -265,  -265,  -265,     0,     0,     0,  1426,
       0,     0,  -316,  -316,   188,  -316,  -265,  1427,  -265,     0,
       0,  -265,  -264,     0,   969,  -264,  -264,  -264,  -264,  -264,
       0,     0,     0,     0,     0,     0,     0,  -264,  -264,  -264,
       0,     0,     0,  1428,     0,   970,   189,  -265,   188,  -265,
    -264,  1429,  -264,     0,     0,  -264,  -262,   972,   729,  -262,
    -262,  -262,  -262,  -262,     0,     0,     0,     0,     0,     0,
       0,  -262,  -262,  -262,     0,     0,     0,  1430,     0,   730,
     189,  -264,   188,  -264,  -262,  1431,  -262,     0,     0,  -262,
    -263,   732,   969,  -263,  -263,  -263,  -263,  -263,     0,     0,
       0,     0,     0,     0,     0,  -263,  -263,  -263,     0,     0,
       0,  1432,     0,   970,   189,  -262,   766,  -262,  -263,  1433,
    -263,     0,     0,  -263,  -279,   972,   729,  -279,  -279,  -279,
    -279,  -279,     0,     0,     0,     0,     0,     0,     0,  -279,
    -279,  -279,     0,     0,     0,     0,     0,   730,   189,  -263,
     544,  -263,  -279,     0,  -279,     0,     0,  -279,   820,   732,
       0,  -303,  -303,     0,  -303,  -303,     0,     0,     0,     0,
       0,     0,     0,  -303,  -303,  -303,   545,   546,     0,  1434,
       0,  1096,   767,  -279,     0,  -279,  -303,  1435,   766,  -388,
       0,  -303,  -388,  -388,   969,  -388,  -278,     0,     0,  -278,
    -278,  -278,  -278,  -278,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -278,  -278,  -278,     0,   970,  -303,  -303,     0,  -303,
     766,  1097,     0,     0,  -278,     0,  -278,   972,  -276,  -278,
       0,  -276,  -276,  -276,  -276,  -276,     0,     0,     0,     0,
       0,     0,     0,  -276,  -276,  -276,     0,  -388,  -388,     0,
    -388,     0,   766,     0,   767,  -278,  -276,  -278,  -276,     0,
    -277,  -276,     0,  -277,  -277,  -277,  -277,  -277,     0,     0,
       0,  1511,     0,     0,     0,  -277,  -277,  -277,     0,  -393,
       0,     0,  -393,  -393,     0,  -393,   767,  -276,  -277,  -276,
    -277,     0,     0,  -277,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1512,     0,     0,     0,     0,     0,     0,   767,  -277,
     542,  -277,     0,     0,     0,     0,     0,     0,  -292,     0,
       0,  -292,  -292,     0,  -292,  -292,     0,  -393,  -393,   542,
    -393,     0,     0,  -292,  -292,  -292,     0,  -290,     0,     0,
    -290,  -290,   939,  -290,  -290,     0,  -292,     0,   542,     0,
    -723,  -292,  -290,  -290,  -290,     0,  -291,  -723,     0,  -291,
    -291,     0,  -291,  -291,     0,  -290,     0,     0,     0,     0,
    -290,  -291,  -291,  -291,     0,     0,   543,  -292,  -723,  -292,
     825,     0,     0,  -723,  -291,     0,     0,     0,   826,  -291,
    -723,  -303,  -303,     0,  -303,   543,  -290,     0,  -290,  -723,
       0,     0,     0,  -303,  -303,  -303,   545,   546,  1036,     0,
       0,     0,     0,   823,   543,  -291,  1037,  -291,     0,  -289,
    -289,   824,  -289,     0,   179,   180,     0,   181,     0,     0,
       0,  -289,  -289,  -289,   769,   770,   182,   183,   184,     0,
     762,     0,     0,     0,     0,  1034,  -303,  -303,  1030,  -303,
       0,   179,   180,  1035,   181,     0,   179,   180,   939,   181,
       0,     0,     0,   182,   183,   184,  -722,     0,   182,   183,
     184,     0,     0,  -722,  -289,  -289,     0,  -289,     0,     0,
     539,   939,   540,   897,     0,   897,     0,   897,     0,  -721,
       0,  -551,     0,  -549,  -722,  -550,  -721,     0,   624,  -722,
    -549,     0,   624,     0,     0,   897,  -722,   763,     0,   764,
       0,     0,   763,  -554,   764,  -722,     0,  -721,     0,   625,
     624,  -549,  -721,  -550,  -551,     0,  -549,     0,  -550,  -721,
       0,   627,     0,  -549,     0,  -550,     0,   954,  -721,   954,
    -551,   625,  -549,   954,  -550,  -671,  -554,  -675,     0,     0,
       0,  -674,  -671,   627,  -675,     0,   954,   926,  -674,     0,
       0,     0,  -554,     0,  -673,  -733,     0,     0,     0,     0,
       0,  -673,  -733,  -671,  1187,  -675,     0,     0,  -671,  -674,
    -675,     0,  -661,     0,  -674,  -671,     0,  -675,     0,   729,
       0,  -674,  -673,  -733,   959,     0,  -675,  -673,  -733,     0,
    -674,   938,     0,   938,  -673,  -733,     0,     0,     0,  -658,
     730,  -659,     0,  -673,  -733,  -661,  -658,     0,  -659,     0,
     938,   938,   732,     0,     0,     0,     0,     0,  -660,  -639,
       0,  1188,     0,     0,     0,  -660,   729,  -658,   938,  -659,
     938,     0,  -658,     0,  -659,     0,  -637,     0,  -638,  -658,
       0,  -659,     0,  -637,     0,   729,  -660,   730,  -658,     0,
    -659,  -660,  -639,     0,     0,   938,     0,   939,  -660,   732,
       0,     0,     0,  -642,  -637,  -712,  -638,  -660,  -639,  -637,
     729,  -638,   734,     0,   939,   926,  -637,     0,  -638,     0,
       0,     0,  -710,  -715,     0,  -637,     0,  -638,     0,  -710,
    -715,   730,   939,   735,   926,     0,  -642,     0,  -712,     0,
    -711,     0,  -716,   732,     0,   736,     0,   734,     0,   739,
    -710,  -715,  -642,     0,   737,  -710,  -715,     0,     0,   939,
       0,   926,  -710,  -715,     0,     0,     0,  -714,  -711,  -717,
    -716,   737,  -715,  -711,   734,  -716,   739,     0,   939,   926,
    -711,     0,  -716,     0,     0,     0,  -724,  -732,     0,   737,
       0,  -716,     0,  -724,   969,   735,   939,   740,   939,     0,
    -714,     0,  -717,     0,  -718,     0,  -719,   736,     0,   741,
       0,  -718,     0,   734,  -724,   970,   737,     0,  -717,  -724,
    -732,     0,     0,   926,     0,   939,  -724,   972,     0,     0,
       0,  -725,  -718,  -720,  -719,  -724,  -732,  -718,   739,  -719,
     734,     0,   954,   954,  -718,     0,  -719,     0,     0,     0,
    -670,  -668,     0,   737,     0,   737,     0,   955,  -668,  -725,
     954,   735,   954,     0,  -725,     0,  -720,     0,  -669,     0,
    -672,  -725,     0,   736,     0,   955,     0,   955,   956,  -668,
    -725,     0,   737,  -670,  -668,     0,     0,   954,     0,   926,
     958,  -668,     0,     0,     0,  -676,  -669,  -730,   956,   959,
     959,  -669,  -676,  -672,  -730,  1436,   926,   926,  -669,     0,
     958,     0,     0,  1437,  -731,  -735,     0,   959,     0,   959,
     729,   969,   969,  -676,  1460,  -730,     0,     0,  -676,     0,
    -730,     0,  1461,     0,     0,  -676,     0,  -730,     0,   729,
       0,   730,  -731,   970,  -676,     0,  -730,  -731,  -735,     0,
       0,  1438,     0,   732,  -731,   972,     0,     0,     0,  1439,
     730,  1440,  1442,  -731,  -735,  -639,   969,  1444,     0,  1441,
    1443,  1446,   732,     0,     0,  1445,   729,   969,     0,  1447,
    1462,  -639,   729,     0,     0,  1466,   969,   970,  1463,     0,
       0,     0,     0,  1467,     0,   729,  1468,   730,   970,   972,
     729,     0,     0,   730,  1469,  1470,     0,   970,     0,   732,
     972,   729,     0,  1471,  1472,   732,   730,     0,     0,   972,
     969,   730,  1473,  1474,     0,     0,     0,  1476,   732,   729,
       0,  1475,   730,   732,     0,  1477,     0,  1478,   969,     0,
    1480,   970,   729,  1482,   732,  1479,  1484,     0,  1481,     0,
     730,  1483,   969,   972,  1485,   729,     0,  1486,   969,   970,
       0,   729,   732,   730,     0,  1487,  1488,     0,     0,     0,
       0,   972,   969,   970,  1489,   732,   730,     0,     0,   970,
       0,   729,   730,     0,  1490,   972,     0,     0,   732,  1492,
       0,   972,  1491,   970,   732,  1494,     0,  1493,  1496,   969,
    1498,     0,   730,  1495,   729,   972,  1497,     0,  1499,     0,
     969,     0,     0,   729,   732,   969,     0,     0,     0,     0,
     970,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,   970,   972,     0,   730,     0,   970,   732,     0,     0,
       0,     0,     0,   972,     0,     0,   732,     0,   972
  };

  /* YYCHECK.  */
  const short int
  mcmas_parser::yycheck_[] =
  {
       233,   312,   329,   204,   502,   206,   504,   468,   202,   320,
     338,   339,   204,   207,   514,   338,   339,    83,   338,   246,
     243,    71,   342,    73,   100,   140,   422,    66,   443,   116,
     774,   345,   447,   148,   463,   326,  1218,  1219,   443,   444,
     443,   444,    40,   787,   538,   539,   540,   476,   421,   544,
     545,   546,   762,   763,   764,   768,   769,   770,   422,   432,
    1061,   425,    71,    71,   244,    73,   268,   116,   270,    78,
     212,  1071,    26,   253,    58,   190,   212,   423,   424,  1080,
     426,     1,    66,     1,   172,   173,   174,     1,   230,     1,
       8,     1,     1,    28,   230,     7,   232,     7,     8,   149,
     302,    10,    15,    21,    22,    17,     1,    27,   111,    27,
       1,    20,    63,   163,   164,   316,     1,    31,    27,    70,
     118,   771,   772,   773,   178,    10,   423,   424,    19,   426,
      42,   185,   186,     7,     8,   560,    71,   187,    73,   453,
     149,   149,    77,    78,    95,    36,     1,     1,    43,     3,
     200,   266,   267,    15,   269,   163,   164,   244,    78,    77,
      78,   115,    17,    77,    77,    77,   253,    77,   103,    78,
       1,     1,  1354,  1355,   407,   408,  1358,   243,   411,   412,
      11,   414,   415,   416,   417,   418,   419,   138,   139,   277,
      20,   200,   200,   335,   129,   130,   147,    27,   431,   335,
     336,     1,   241,    77,   253,   533,   534,     7,     8,   523,
     533,   534,    66,   527,   149,    77,   219,   220,   541,   222,
    1220,   444,    77,   446,   515,   279,  1227,     1,   163,   164,
     213,   214,   282,   168,   169,   170,   463,   172,   173,   174,
     175,   176,   177,   178,   467,   381,    77,    77,    78,   476,
     185,   186,   187,   188,   189,   305,    15,   241,     1,     1,
      64,    65,    25,   313,    27,   200,    29,     1,   664,   204,
       1,    13,     1,   282,   282,   467,    15,    77,   213,   214,
     288,   289,    11,     1,   233,   412,   488,   489,     1,   491,
       8,     1,    31,     7,     7,   475,   305,   305,    61,    62,
       1,   674,    45,    77,   313,   313,    69,    17,     1,   809,
     810,   675,   812,   774,   265,    46,     1,    10,    77,   665,
     666,   667,     7,  1036,  1034,     1,   787,   742,    15,   823,
     825,    45,     8,  1515,  1516,  1079,   271,   742,    77,   742,
     275,    17,   277,    77,   279,    46,   281,   282,    77,   754,
     755,   754,   755,   288,   289,   338,   339,   786,   341,    77,
     765,   776,    38,    77,    77,    23,    17,    77,   371,   372,
     305,   776,   487,   776,   137,     1,   359,   360,   313,   676,
     677,   678,     8,   519,   319,   451,     1,     1,   475,   465,
       1,     1,    77,     7,     8,   628,   629,     8,     8,     1,
       1,    77,     9,   338,   339,   638,   341,   342,     1,     1,
       1,    21,    22,    15,   647,   648,   649,    27,     1,     1,
      78,   654,   655,   656,   359,   360,    77,    34,    19,    44,
       1,   745,     1,   858,     3,   749,     7,   670,   671,   672,
     865,   866,   867,   868,   869,   870,   871,   872,    17,     1,
      17,    77,    44,   686,   687,     7,     8,     1,    40,   408,
     510,    15,   411,    77,   514,    17,    77,    77,    78,    21,
      22,   420,   421,    17,    43,    27,    77,    31,   427,   428,
     429,     1,    15,   716,    77,   718,    38,     7,     8,   722,
     723,   724,   725,   726,    77,   728,   729,   730,    31,   732,
     814,    21,    22,     7,   832,     1,    77,    27,    77,   832,
      77,     7,   832,     1,    18,   843,   844,    69,    38,     7,
     647,   648,   649,    77,    17,    77,    78,   654,   655,   656,
       1,     7,    17,    77,    17,   758,   759,   760,    42,     1,
       1,    25,     1,    27,    77,     1,   481,   482,     1,    69,
     485,   486,     8,     0,   777,     8,     1,    77,    78,   786,
      19,    17,     7,    39,     1,    21,    22,     1,   551,   552,
      41,    27,     9,    77,     8,   510,   777,    61,   779,   514,
      41,    77,    44,    17,    77,   777,   780,    21,    22,    77,
      28,   718,    77,    27,    77,   797,     1,    77,   533,   534,
    1100,  1101,     7,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,  1079,   554,
       1,    77,    78,     1,   559,   560,  1041,     1,     1,     7,
       1,    68,    77,    70,     7,    73,  1041,     8,  1041,    77,
      21,    22,     1,    77,    78,     1,    27,  1062,  1063,    42,
    1053,  1054,    17,    77,     1,     1,     1,  1062,  1063,  1062,
    1063,     7,    21,    22,    17,   103,    40,     1,    27,    17,
       1,    10,    77,    18,     8,     9,    23,    17,    12,    13,
     629,    15,    16,    17,    77,    16,    42,    21,    22,   922,
      24,    25,    26,    27,    17,   928,    77,    78,     1,    77,
      71,    72,    73,    37,    77,   938,    37,     6,    42,     8,
     659,    42,    77,   662,   663,    14,  1214,    16,    77,    78,
      44,   954,   955,   956,    77,   958,   959,     1,    31,    77,
     168,   169,   170,    67,    68,    69,    70,    77,   687,   688,
     973,   974,   975,    77,    78,   978,   979,  1074,    18,   175,
     176,   177,     1,    77,    77,     6,     3,     8,  1069,   809,
     810,   710,   812,    14,     6,    16,   204,     1,    42,  1002,
      17,    42,    42,     1,    23,  1089,    42,  1091,    77,     7,
       8,     1,     1,     3,   733,   734,   735,   736,   737,    17,
     739,   740,   741,    21,    22,     1,    43,    39,    42,    27,
     809,   809,   810,     1,     1,  1028,    77,    35,    42,  1032,
      38,    17,  1217,  1218,  1219,    21,    22,  1040,    16,    16,
       1,    27,    41,    43,     5,    11,    77,     1,   955,   956,
      77,   958,   959,   271,     8,     9,     6,   275,     8,    37,
      37,    69,    16,   281,    14,  1068,    16,    21,    22,    77,
      78,    49,    49,    27,    40,     1,    42,    31,     1,     1,
      58,    58,     1,    37,    38,  1066,    12,    13,    42,    15,
       1,    77,    78,    16,   809,   810,     1,   812,    24,    25,
      26,   319,    78,    14,     9,     1,   821,     1,   823,    14,
     825,    16,   827,     1,    37,    69,   831,   832,    11,    42,
      42,    40,    41,    77,    78,     1,    49,    77,   843,   844,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,   854,
    1153,   856,    68,   858,    70,    41,    34,    40,    42,    42,
     865,   866,   867,   868,   869,   870,   871,   872,    46,  1354,
       1,    32,   233,    68,     1,    70,    42,     1,     9,  1354,
    1355,  1354,  1355,  1358,  1187,  1188,  1189,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1205,  1206,     1,   924,     1,     1,     4,     1,
      34,   930,     9,    40,     8,    77,     8,     1,    15,    16,
     939,    45,    46,    17,    42,    17,     1,    21,    22,    21,
      22,     1,     7,    27,    39,    27,    32,    68,     8,    70,
      37,     1,   961,    39,    39,    42,     1,     1,     8,     9,
      34,     1,    12,    13,     9,    15,    16,    17,    43,    77,
     979,    21,    22,     1,    24,    25,    26,    27,    28,    29,
      30,     9,     1,  1276,  1277,  1278,  1360,    37,  1098,  1099,
    1100,  1101,    42,    77,    78,    77,    78,    41,     1,     1,
      40,     1,  1295,  1296,  1297,  1298,  1299,  1300,  1301,  1302,
    1303,  1304,  1305,  1306,    10,    15,     1,    67,    68,     1,
      70,    40,    41,    68,    42,    70,    11,    77,    78,    32,
    1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,    40,    41,
      68,    41,    70,     1,     6,     1,     1,     1,  1513,  1514,
    1515,  1516,     1,  1518,     9,    40,   407,   408,    40,    41,
     411,    16,    11,   414,   415,   416,   417,   418,   419,     1,
       1,     1,     1,    31,     5,     1,     8,    39,     8,     8,
     431,     1,    37,     9,    40,  1550,    40,  1552,    17,    21,
      22,    40,    21,    22,    49,    27,  1561,    17,    27,     1,
      10,    21,    22,  1098,  1099,  1100,  1101,    27,  1295,  1296,
    1297,  1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,
    1230,     1,  1232,  1416,     1,     1,     1,  1420,  1502,    15,
    1504,  1424,     7,     9,    11,  1428,     1,    69,    40,  1432,
      69,     1,    68,  1436,    70,    77,    78,  1440,    77,    78,
       1,  1444,     1,     1,     1,    28,    16,    77,    78,     1,
      40,  1170,     5,    40,     0,     1,    15,  1460,     1,  1462,
       1,  1464,     8,  1466,    39,  1468,    12,    37,     3,  1472,
      16,    17,    42,  1476,    32,    33,    77,  1480,    39,    49,
     231,  1484,    68,    40,    70,  1488,    77,    39,    71,  1492,
      73,    37,    38,  1496,    77,    78,    42,    40,    41,    40,
      46,    77,     1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    12,    59,    60,    61,    62,    63,     1,    41,
     103,     1,  1525,     1,  1527,  1230,  1529,  1232,  1531,    77,
    1533,    77,  1535,    16,  1537,     1,  1539,    77,  1541,     1,
    1543,    40,  1545,     1,  1547,     7,     8,    47,    48,     1,
       1,     9,    32,    33,    37,    17,    39,  1276,    16,    21,
      22,     1,    40,    41,    15,    27,   149,   628,   629,    31,
       1,    71,    72,    73,    40,    41,    38,   638,     9,    37,
     163,   164,    77,     1,    42,   168,   169,   170,    40,   172,
     173,   174,   175,   176,   177,   178,    27,    28,    32,    33,
      40,    41,   185,   186,   187,   188,   189,    69,     1,   670,
     671,   672,     1,     1,   233,    77,    78,   200,     1,     7,
       9,   204,    40,    16,    12,   686,   687,    16,    11,     1,
     213,   214,   383,     1,   385,     1,   387,   388,   389,   390,
     391,   392,   393,    11,    37,    11,    34,     1,    37,    42,
      39,    41,   403,    42,     1,   716,    49,    40,    46,    47,
      48,   722,   723,   724,   725,   726,     1,    39,   729,   730,
      77,   732,    40,     1,    40,     1,     1,     1,     1,    68,
      77,    70,     5,    71,    72,    73,    40,     1,   271,    77,
      16,    15,   275,    40,   277,     1,   279,    77,   281,   282,
      14,    77,    16,     9,    39,   288,   289,     1,    14,     1,
      16,    37,    40,    77,     1,    40,    42,     9,     5,     6,
       7,     8,   305,    49,    16,    12,    13,     1,    15,    16,
     313,     1,    58,     1,    21,    22,   319,    24,    25,    26,
      27,    28,    29,    30,     1,    37,    40,     1,    35,     6,
      37,    38,    39,     7,     8,   338,   339,    49,   341,   342,
       1,     1,    68,    17,    70,    39,    58,    21,    22,     1,
      40,     1,    40,    27,    15,    15,   359,   360,    10,    77,
      67,    68,    69,    70,    38,     1,     1,     1,   407,   408,
      77,    78,   411,     1,   413,    77,    10,     1,     1,     1,
      16,   420,   421,     1,    12,    13,     9,    15,   427,   428,
     429,    15,     1,    16,    16,    69,    24,    25,    26,     8,
       9,    37,     1,    77,    78,    40,    42,    16,    17,     1,
       1,     4,    21,    22,    37,    37,   587,   588,    27,    42,
      42,    77,    40,    15,   595,    16,    19,    49,    37,    38,
      39,     1,    44,    42,   605,   606,    58,     1,     8,    32,
      68,    40,    70,     7,     1,    68,    37,    70,     1,   620,
       1,    42,     9,   624,   625,    10,   627,     8,     9,    16,
      69,    12,    13,    16,    15,    16,    17,     1,    77,    78,
      21,    22,    45,    24,    25,    26,    27,    28,    29,    30,
      37,     1,    16,    77,    37,    42,    37,    38,    39,     1,
      41,    42,   973,   974,   975,    15,    49,   978,   979,     1,
       1,     1,     1,    37,     3,    58,     7,   510,    77,     1,
      10,   514,    14,     1,     1,    49,    67,    68,    69,    70,
      12,    13,     9,    15,    58,    77,    77,    78,    40,    16,
     533,   534,    24,    25,    26,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
      37,   554,    40,    40,    41,     1,   559,   560,     1,     1,
       3,     1,    49,     5,     6,     7,     8,     1,     1,     1,
      12,    13,     1,    15,    16,    15,    68,     1,    70,    21,
      22,    15,    24,    25,    26,    27,    28,    29,    30,   628,
     629,    77,     1,    35,    40,    37,    38,    39,     1,   638,
       1,    10,     1,     4,     5,     4,     7,    40,    40,    10,
      11,    40,     1,    16,    15,     1,    40,    32,    33,     8,
     659,   660,   661,   662,   663,    67,    68,    69,    70,     1,
      16,    32,     4,    32,    37,    77,    78,     1,    39,     1,
      77,     1,     1,     1,     4,     9,    49,   686,   687,   688,
       9,    37,    16,    15,    13,    58,    42,    16,    16,    19,
      32,     1,  1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,
     709,   710,    32,    37,     1,    15,    77,    77,    37,    37,
     719,    40,    41,    42,    42,    49,     1,     1,    15,     3,
      49,    49,    34,     8,   733,   734,   735,   736,   737,    58,
     739,   740,   741,    45,    46,    78,  1187,  1188,  1189,  1190,
    1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,  1203,  1204,  1205,  1206,     9,     1,     1,   547,
     548,   549,     6,    16,     1,     8,     9,     1,     5,     6,
       7,     8,     1,    16,    17,    12,    13,     6,    15,    16,
      17,    77,    16,     1,    21,    22,     4,    24,    25,    26,
      27,    28,    29,    30,    37,    38,    32,    33,    35,    42,
      37,    38,    39,    37,    41,    39,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     1,     1,     4,     4,  1276,  1277,  1278,     1,     8,
      67,    68,    69,    70,    77,     1,   809,   810,    19,   812,
      77,    78,     8,    16,   397,   398,     1,   400,   821,    77,
     823,    32,   825,     8,   827,     5,     4,     5,   831,   832,
      10,    42,    10,    11,    37,    15,     1,    15,     3,    42,
     843,   844,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,
       1,   854,     1,   856,    77,   858,     7,     8,    32,    33,
       9,    39,   865,   866,   867,   868,   869,   870,   871,   872,
      21,    22,     5,     1,   766,   767,    27,    10,    27,    28,
       8,     9,    15,     1,    35,   924,    77,    38,    16,    17,
       1,   930,    15,    21,    22,     1,     1,     8,    16,    27,
     939,     1,     8,     8,    14,     9,    16,     7,     8,    37,
      38,    39,    16,   396,    42,    77,   399,    17,    69,    37,
      77,   960,   961,    77,    42,    77,    77,    78,   188,   189,
     969,   970,     3,   972,    34,  1118,    77,  1120,    38,   978,
     979,    69,   542,   543,    44,    45,    46,   652,   653,    77,
      78,    77,  1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,
    1141,  1142,     1,    41,     1,     4,    77,    77,     7,     8,
       7,     8,    41,    12,    13,    41,    15,    16,    17,    16,
      17,    41,    21,    22,    77,    24,    25,    26,    27,    28,
      29,    30,    77,    32,    77,    77,     1,    34,    37,    38,
      37,    38,    41,    42,     9,    42,    77,    77,     1,    46,
      77,    16,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    77,    59,    60,    61,    62,    63,     1,    67,    68,
      69,    70,    37,    77,    39,     9,     1,    42,    77,    78,
      77,    77,    77,     8,     9,    77,    77,    12,    13,    14,
      15,    16,    17,    27,    28,    77,    21,    22,    77,    24,
      25,    26,    27,    28,    29,    30,    77,    77,    77,    77,
      77,    77,    37,    77,    39,     1,    41,    42,     1,    77,
      77,     5,    58,     9,   260,  1098,  1099,  1100,  1101,     1,
      16,    25,     4,    16,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,    67,    68,    69,    70,    18,    19,     1,   253,
       8,    37,    77,    78,    37,     8,    42,   118,   329,   251,
      32,  1170,   245,    49,    17,   204,    49,   777,    21,    22,
       1,     1,    58,  1074,    27,    58,     7,     8,    34,     9,
     379,   105,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
      21,    22,   584,   212,     1,  1122,    27,    27,    28,   886,
       7,     8,   403,   395,    35,    12,    13,    38,    15,    16,
      17,    -1,     1,    -1,    21,    22,    69,    24,    25,    26,
      27,    28,    29,    30,    77,    78,    -1,    16,    35,    -1,
      37,    38,    39,    -1,    41,    -1,    -1,     1,    69,    -1,
      -1,     1,    -1,    -1,    -1,     9,    77,    78,    37,     9,
       1,    -1,    16,    42,    -1,    -1,    16,  1230,     9,  1232,
      67,    68,    69,    70,     1,    16,     1,  1276,  1277,  1278,
      77,    78,     9,    37,     9,    12,    13,    37,    15,    39,
      -1,    -1,    42,    -1,    -1,    49,    37,    24,    25,    26,
      -1,    42,    27,    28,    58,    -1,    -1,    -1,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,
    1319,  1320,  1321,  1322,     1,    -1,    -1,    68,    -1,    70,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    68,    -1,    70,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,     1,    -1,
      37,    38,    39,    -1,    41,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      67,    68,    69,    70,    37,    38,    -1,    -1,    41,    42,
      77,    78,     1,    -1,     1,    -1,    -1,    -1,    -1,     8,
       9,    -1,     9,    -1,    -1,    -1,     1,    16,    17,    16,
      -1,     1,    21,    22,    67,    68,    69,    70,    27,     9,
       1,    16,    31,     4,    77,    78,     7,     8,    37,    38,
      37,    12,    13,    42,    15,    16,    -1,    27,    28,    -1,
      21,    22,    37,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    49,    -1,    37,    38,     1,    -1,
      69,    42,    -1,    58,    -1,     8,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    -1,    27,    -1,    67,    68,    69,    70,
      -1,     1,    35,     1,    -1,    38,    77,    78,     8,     9,
      -1,     9,    12,    13,    -1,    15,    16,    17,    16,    -1,
       1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    16,    69,    37,    38,    37,
       1,    41,    42,     1,    77,    78,     4,     5,     9,     7,
      -1,    49,    10,    11,    -1,    16,    37,    15,     1,    -1,
      58,    42,    -1,    -1,    -1,    -1,     9,    67,    68,    69,
      70,    -1,     1,    16,    32,    -1,    37,    77,    78,     8,
       9,    39,    -1,    12,    13,    14,    15,    16,    17,    -1,
       1,    -1,    21,    22,    37,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    16,     1,    -1,    37,     1,
      39,    -1,    41,    42,     9,     7,     8,     4,    -1,    77,
      -1,    16,    -1,    10,    11,    17,    37,    -1,    15,    21,
      22,    42,    19,    -1,    -1,    27,    -1,     1,    67,    68,
      -1,    70,    37,     1,     8,    32,    38,    42,    77,    78,
       8,     9,    39,    17,    12,    13,    -1,    15,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    68,    38,    70,    -1,    69,    -1,    37,
      38,    39,    -1,    -1,    42,    77,    78,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    59,    60,    61,    -1,    63,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    67,
      68,    69,    70,    77,     1,    16,    -1,    -1,     1,    77,
      78,     8,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    16,    21,    22,    37,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    49,     1,
      37,    -1,    39,     1,    37,    42,     8,     9,    10,    42,
      12,    13,    -1,    15,    16,    -1,    49,    -1,    16,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    -1,
      67,    68,    69,    70,    -1,    37,    38,    39,     1,    37,
      77,    78,    -1,    -1,    42,    -1,     9,     1,    -1,    -1,
      -1,    49,    -1,    16,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,     1,    67,    68,    69,    70,    -1,
       1,     8,     9,    -1,    37,    77,    78,     8,     9,    16,
      17,    12,    13,    37,    15,    16,    17,    -1,    42,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      37,    38,    -1,    -1,    41,    42,    37,     1,    -1,     1,
      41,    42,    -1,     7,     8,     4,     5,     9,    -1,    -1,
      -1,    10,    -1,    17,    16,    -1,    15,    21,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    67,    68,    69,    70,
      77,     1,    -1,     1,    38,    37,    77,    78,     8,     9,
      39,     9,    12,    13,    -1,    15,    16,    49,    16,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    69,    -1,    37,    38,    37,
       1,    -1,    42,    77,    78,    -1,    -1,    -1,     9,    -1,
      -1,    12,    13,    -1,    15,    16,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    24,    25,    26,     9,    67,    68,    69,
      70,    -1,     1,    16,    -1,    -1,    37,    77,    78,     8,
       9,    42,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    37,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,     1,    -1,    67,    68,    37,    70,
      39,     8,     9,    42,    -1,    12,    13,    14,    15,    16,
       1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    -1,    16,    -1,    -1,    67,    68,
      37,    70,    39,     1,    -1,    42,    -1,    -1,    77,    78,
      -1,     9,    -1,    -1,    -1,    -1,    37,    -1,    16,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      67,    68,    -1,    70,    -1,     1,     8,     9,    -1,    37,
      77,    78,     8,     9,    16,    17,    12,    13,    14,    15,
      16,    49,    -1,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    37,    38,     1,    -1,    -1,
      42,    37,    -1,    39,     8,     9,    42,    -1,    12,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    67,    68,    37,    70,    77,    -1,    41,    42,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    67,    68,    -1,    70,    -1,     1,     8,
       9,    -1,    -1,    77,    78,     8,     9,    16,    17,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    42,    37,     1,    39,    -1,    -1,    42,
      -1,    -1,     8,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    67,    68,    69,    70,    77,    -1,
      -1,    37,    -1,    39,    77,    78,    42,     1,    -1,     1,
      -1,    -1,    -1,     1,    -1,     9,     8,     9,    -1,    13,
      -1,     9,    16,    -1,    16,    17,    -1,    -1,    16,    21,
      22,    67,    68,    69,    70,    27,    -1,    -1,    -1,    31,
      -1,    77,    78,    37,    -1,    37,    38,    41,    42,    37,
      42,    39,     1,    -1,    42,    49,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    58,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,     1,    69,    27,    -1,
      68,    -1,    70,     8,     9,    77,    78,    -1,    37,    38,
      39,    16,    -1,    42,    -1,    -1,    21,    22,    -1,    -1,
       1,    -1,    27,    -1,     1,    -1,    -1,    -1,     9,    -1,
       7,     8,    37,    38,    39,    16,    -1,    42,    -1,     1,
      69,    -1,    -1,     1,    21,    22,     8,     9,    77,    78,
      27,     9,    -1,    -1,    16,    17,    37,    -1,    16,    21,
      22,    38,     1,    -1,    69,    27,     1,    -1,    49,     8,
       9,    -1,    77,    78,     9,    37,    38,    16,    17,    37,
      42,    16,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    49,    69,    -1,    -1,    -1,     1,    -1,    37,    38,
      77,    78,    37,    42,     9,     1,    -1,    69,    -1,     1,
      -1,    16,     8,     9,    49,    77,    78,     9,    -1,    -1,
      16,    -1,    -1,    58,    16,    21,    22,     1,    -1,    -1,
      69,    27,    37,     7,     8,    31,    -1,    -1,    77,    78,
      -1,    37,    38,    17,    49,    37,    42,    21,    22,     1,
      42,    -1,    -1,    27,    -1,     7,     8,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    17,    -1,    -1,    -1,    21,
      22,     1,    -1,    69,    -1,    27,    -1,     7,     8,    -1,
      -1,    77,    78,    -1,    -1,    -1,    38,    17,    -1,    -1,
      -1,    21,    22,     1,    -1,    69,    -1,    27,    -1,    -1,
       8,    -1,    10,    77,    78,    -1,    -1,    -1,    38,    17,
      -1,    -1,    -1,    21,    22,     1,    -1,    69,    -1,    27,
      -1,    -1,     8,    -1,    -1,    77,    78,    -1,    -1,    -1,
      38,    17,    -1,    -1,    -1,    21,    22,     1,    -1,    69,
      -1,    27,    -1,    -1,     8,    31,    -1,    77,    78,    -1,
      -1,    -1,    38,    17,    -1,    -1,    -1,    21,    22,     1,
      -1,    69,    -1,    27,    -1,    -1,     8,    -1,    10,    77,
      78,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    21,
      22,     1,    -1,    69,    -1,    27,    -1,    -1,     8,    -1,
      -1,    77,    78,    -1,    -1,    -1,    38,    17,    -1,    -1,
      -1,    21,    22,     1,    -1,    69,    -1,    27,    -1,    -1,
       8,     1,    -1,    77,    78,    -1,    -1,    -1,    38,     9,
      -1,    -1,    -1,    21,    22,     1,    16,    69,    -1,    27,
       1,    -1,     8,    31,    -1,    77,    78,    -1,     9,    -1,
      38,    12,    13,    -1,    15,    21,    22,    37,     1,    69,
      -1,    27,    42,    24,    25,    26,     9,    77,    78,     1,
      -1,    -1,    38,    16,    -1,     7,     8,    -1,    -1,    -1,
      12,    69,    -1,    -1,    16,    17,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    37,    -1,    39,     1,    -1,    42,
      -1,    -1,    -1,    69,     8,    37,    38,    68,    -1,    70,
      42,    77,    78,    17,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    38,     1,    -1,    -1,    -1,    71,
      72,    73,     8,     9,    -1,    77,    12,    -1,    -1,    -1,
      16,    17,    56,    57,    -1,    59,    60,    61,    -1,    63,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    71,    72,    73,
       9,    37,    38,    77,    -1,    -1,    42,    16,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    37,    -1,
      -1,     1,    41,    42,    -1,    71,    72,    73,     8,     9,
      49,    77,    12,    -1,    -1,    -1,    16,    17,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    37,    38,     8,
       9,    -1,    42,    12,    -1,    -1,    -1,    16,    17,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    37,    38,
      -1,    71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    71,    72,    73,     8,     9,    -1,    77,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    37,    38,     8,     9,    -1,    -1,
      12,    -1,    -1,    -1,    16,    17,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    37,    38,    -1,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    -1,     1,    -1,    -1,    -1,    71,
      72,    73,     8,     9,    -1,    77,    12,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     1,    -1,    -1,    -1,     7,
       8,    37,    38,     9,    12,    -1,    42,    -1,    -1,    17,
      16,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      38,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    47,
      48,    77,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    71,    72,    73,     8,     9,    -1,    77,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    37,    38,     8,     9,    -1,
      42,    12,    -1,    -1,    -1,    16,    17,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     1,    -1,    -1,    -1,    37,    38,    -1,    -1,
       9,    42,    -1,    -1,    -1,    77,    -1,    16,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     1,    -1,    -1,    -1,     1,    37,    -1,
       8,     9,    41,    42,    12,     9,    77,    -1,    16,    17,
      49,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    37,
      38,     8,     9,    37,    42,    12,    -1,    -1,    42,    16,
      17,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     1,    -1,    -1,    -1,
      37,    38,    -1,    -1,     9,    42,    -1,    -1,    -1,    77,
      -1,    16,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     1,    -1,    -1,
      -1,     1,    37,    -1,     8,     9,    -1,    42,    12,     9,
      77,    -1,    16,    17,    49,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    37,    38,     8,     9,    37,    42,    12,
      -1,    -1,    42,    16,    17,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       1,    -1,    -1,    -1,    37,    38,    -1,    -1,     9,    42,
      -1,    -1,    -1,    77,    -1,    16,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     1,    -1,    -1,    -1,     1,    37,    -1,     8,     9,
      -1,    42,    12,     9,    77,    -1,    16,    17,    49,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    37,    38,     8,
       9,    37,    42,    12,    -1,    -1,    42,    16,    17,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     1,    -1,    -1,    -1,    37,    38,
      -1,    -1,     9,    42,    -1,    -1,    -1,    77,    -1,    16,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     1,    -1,    -1,    -1,     1,
      37,    -1,     8,     9,    -1,    42,    12,     9,    77,    -1,
      16,    17,    49,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    37,    38,     8,     9,    37,    42,    12,    -1,    -1,
      42,    16,    17,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     1,    -1,
      -1,    -1,    37,    38,    -1,    -1,     9,    42,    -1,    -1,
      -1,    77,    -1,    16,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     1,
      -1,    -1,    -1,     1,    37,    -1,     8,     9,    -1,    42,
      12,     9,    77,    -1,    16,    17,    49,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    37,    38,     8,     9,    37,
      42,    12,    -1,    -1,    42,    16,    17,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     1,    -1,    -1,    -1,    37,    38,    -1,    -1,
       9,    42,    -1,    -1,    -1,    77,    -1,    16,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     1,    -1,    -1,    -1,     1,    37,    -1,
       8,     9,    -1,    42,    12,     9,    77,    -1,    16,    17,
      49,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    37,
      38,     8,     9,    37,    42,    12,    -1,    -1,    42,    16,
      17,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     1,    -1,    -1,    -1,
      37,    38,    -1,    -1,     9,    42,    -1,    -1,    -1,    77,
      -1,    16,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     1,    -1,    -1,
      -1,     1,    37,    -1,     8,     9,    -1,    42,    12,     9,
      77,    -1,    16,    17,    49,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    37,    38,     8,     9,    37,    42,    12,
      -1,    -1,    42,    16,    17,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       1,    -1,    -1,    -1,    37,    38,    -1,    -1,     9,    42,
      -1,    -1,    -1,    77,    -1,    16,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     1,    -1,    -1,    -1,     1,    37,    -1,     8,     9,
      -1,    42,    12,     9,    77,    -1,    16,    17,    49,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    37,    38,     8,
       9,    37,    42,    12,    -1,    -1,    42,    16,    17,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     1,    -1,    -1,    -1,    37,    38,
      -1,    -1,     9,    42,    -1,    -1,    -1,    77,    -1,    16,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     1,    -1,    -1,    -1,     1,
      37,    -1,     8,     9,    -1,    42,    12,     9,    77,    -1,
      16,    17,    49,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    37,    38,    -1,    12,    37,    42,    39,    -1,    17,
      42,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    77,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    -1,     1,
      -1,    -1,     1,    71,    72,    73,     8,     9,    -1,    77,
       9,    -1,    -1,    -1,    16,    17,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    37,    38,     8,    37,    -1,
      42,    12,    -1,    42,    -1,    -1,    17,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     1,    -1,    -1,    -1,    -1,    38,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    16,    17,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,     1,    -1,    34,    -1,    -1,    37,    38,
       8,     9,    -1,    42,    -1,    -1,    77,    46,    16,    17,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,     1,    -1,    -1,    -1,    37,
      38,    -1,    -1,     9,    42,    -1,    -1,    -1,    77,    -1,
      16,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     1,    -1,    -1,    -1,
       1,    37,    -1,     8,     9,    -1,    42,    -1,     9,    77,
      -1,    16,    17,    49,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    37,    38,     8,     9,    37,    42,    39,    -1,
      -1,    42,    16,    17,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     1,
      -1,    -1,    -1,    37,    38,    -1,    -1,     9,    42,    -1,
      -1,    -1,    77,    -1,    16,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       1,    -1,    -1,    -1,     1,    37,    -1,     8,     9,    -1,
      42,    -1,     9,    77,    -1,    16,    17,    49,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    37,    38,     8,     9,
      37,    42,    39,    -1,    -1,    42,    16,    17,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     1,    -1,    -1,    -1,    37,    38,    -1,
      -1,     9,    42,    -1,    -1,    -1,    77,    -1,    16,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     1,    -1,    -1,    -1,     1,    37,
      -1,     8,     9,    -1,    42,    -1,     9,    77,    -1,    16,
      17,    49,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      37,    38,     8,     9,    37,    42,    39,    -1,    -1,    42,
      16,    17,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     1,    -1,    -1,
      -1,    37,    38,    -1,    -1,     9,    42,    -1,    -1,    -1,
      77,    -1,    16,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     1,    -1,
      -1,    -1,     1,    37,    -1,     8,     9,    -1,    42,    -1,
       9,    77,    -1,    16,    17,    49,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    37,    38,     8,     9,    37,    42,
      39,    -1,    -1,    42,    16,    17,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     1,    -1,    -1,    -1,    37,    38,    -1,    -1,     9,
      42,    -1,    -1,    -1,    77,    -1,    16,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     1,    -1,    -1,    -1,     1,    37,    -1,     8,
       9,    -1,    42,    -1,     9,    77,    -1,    16,    17,    49,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    37,    38,
       8,     9,    37,    42,    39,    -1,    -1,    42,    16,    17,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     1,    -1,    -1,    -1,    37,
      38,    -1,    -1,     9,    42,    -1,    -1,    -1,    77,    -1,
      16,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     1,    -1,    -1,    -1,
       1,    37,    -1,     8,     9,    -1,    42,    -1,     9,    77,
      -1,    16,    17,    49,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    37,    38,     8,     9,    37,    42,    -1,    -1,
      -1,    42,    16,    17,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     1,
      -1,    -1,    -1,    37,    38,    -1,    -1,     9,    42,    -1,
      -1,    -1,    77,    -1,    16,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       1,    -1,    -1,    -1,     1,    37,    -1,     8,     9,    -1,
      42,    -1,     9,    77,    -1,    16,    17,    49,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    37,    38,     8,     9,
      37,    42,    -1,    -1,    -1,    42,    16,    17,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     1,    -1,    -1,    -1,    37,    38,    -1,
      -1,     9,    42,    -1,    -1,    -1,    77,    -1,    16,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     1,    -1,    -1,    -1,     1,    37,
      -1,     8,     9,    -1,    42,    -1,     9,    77,    -1,    16,
      17,    49,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      58,     1,    -1,    -1,    -1,     1,    -1,    -1,    -1,     9,
      37,    38,     8,     9,    37,    42,    16,    -1,    -1,    42,
      16,    17,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    37,    -1,    -1,
      -1,    37,    38,    -1,    -1,    -1,    42,    -1,    -1,    49,
      77,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     1,    -1,
      -1,    -1,     1,    -1,     1,     8,     9,    -1,    -1,    -1,
       9,    77,     9,    16,    17,    12,    13,    16,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    24,    25,    26,
      27,    28,    -1,     8,    37,    38,    -1,    12,    37,    42,
      37,    -1,    17,    42,    -1,    42,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    77,    50,    51,    52,    53,    54,
      55,    56,    57,     1,    59,    60,    61,    62,    63,     7,
       8,    -1,     1,    -1,    12,    -1,    71,    72,    73,    17,
       9,    -1,    77,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     1,    -1,     8,    -1,
      38,    -1,    12,    -1,     9,    -1,    -1,    17,    37,    47,
      48,    16,    50,    51,    52,    53,    54,    55,    56,    57,
      49,    59,    60,    61,    62,    63,    -1,    -1,    38,    58,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    77,
      50,    51,    52,    53,    54,    55,    56,    57,     1,    59,
      60,    61,    62,    63,     7,     8,    -1,    -1,    -1,    12,
      -1,    71,    72,    73,    17,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     1,    -1,
      -1,    -1,     7,     8,    -1,    38,     9,    12,    -1,    -1,
      -1,    -1,    17,    16,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,     1,    59,    60,    61,    62,
      63,    -1,     8,    38,    37,    -1,    12,    -1,    -1,    42,
      -1,    17,    47,    48,    77,    50,    51,    52,    53,    54,
      55,    56,    57,     1,    59,    60,    61,    62,    63,     7,
       8,    -1,    38,    -1,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    77,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,    47,
      48,    77,    50,    51,    52,    53,    54,    55,    56,    57,
       1,    59,    60,    61,    62,    63,     7,     8,    -1,    -1,
       1,    12,    -1,    -1,    -1,    -1,    17,    -1,     9,    77,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     1,    24,    25,    26,    -1,    38,     9,     8,
      -1,    -1,    -1,    12,    -1,    16,    47,    48,    17,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    32,    33,     1,    37,    -1,    -1,    38,
      -1,    -1,    -1,     9,    -1,    -1,    77,    68,    49,    70,
      16,    50,    51,    52,    53,    54,    55,    56,    57,     1,
      59,    60,    61,    62,    63,    -1,     8,    -1,    -1,    -1,
      12,    37,    -1,    -1,    -1,    17,    42,    -1,    77,    -1,
       1,    -1,    -1,    49,    -1,    -1,     1,    -1,     9,     1,
      32,    33,    58,     8,     9,    16,    38,     9,    -1,    -1,
      -1,    16,    17,    -1,    16,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    37,    59,    60,    61,
      62,    63,    37,    38,     1,    37,    -1,    42,    49,    -1,
      42,     8,     9,    -1,    49,    77,    -1,    58,    -1,    16,
      17,    56,    57,    58,    59,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      37,    38,    77,     1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,     9,    49,    -1,    -1,    13,    -1,    -1,    16,    56,
      57,    58,    59,    60,    61,    -1,    63,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    71,    72,    73,     8,     9,    37,
      77,    -1,    40,    41,    42,    16,    17,     1,     1,    -1,
      -1,    49,    -1,    -1,    -1,     9,     9,     1,    -1,    -1,
      58,     1,    16,    16,     8,     9,    37,    38,    -1,     9,
      -1,    42,    16,    17,    -1,    -1,    16,    -1,    49,    -1,
      -1,    -1,    -1,    37,    37,    56,    57,    58,    59,    60,
      61,    -1,    63,    37,    38,    49,    49,    37,    42,    -1,
      71,    72,    73,    -1,     1,    49,    77,    -1,    -1,    49,
      -1,     8,    56,    57,    58,    59,    60,    61,    58,    63,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,     1,    -1,    77,     1,    32,    33,    -1,     8,     9,
      -1,    38,     9,    -1,    -1,    -1,    16,    17,    -1,    16,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    37,    38,     1,
      37,    -1,    42,    40,    41,     7,     8,    -1,    -1,    49,
      77,    -1,    49,    -1,    -1,    17,    56,    57,    58,    59,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    71,    72,    73,     7,     8,    38,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,     1,    59,    60,    61,
      62,    63,     7,     8,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    77,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,     1,    59,    60,    61,    62,
      63,     7,     8,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    77,    50,    51,    52,    53,    54,
      55,    56,    57,     1,    59,    60,    61,    62,    63,    -1,
       8,    -1,    38,    -1,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    77,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,     1,    59,    60,    61,    62,    63,    -1,     8,
      38,    -1,    -1,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    77,    50,    51,    52,    53,    54,    55,    56,    57,
       1,    59,    60,    61,    62,    63,    -1,     8,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    77,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,     1,
      59,    60,    61,    62,    63,    -1,     8,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    77,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,     1,    59,    60,    61,
      62,    63,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     1,    -1,    -1,    -1,     1,    -1,     9,
       8,     9,    37,    38,    -1,     9,    16,    42,    16,    17,
      -1,    -1,    16,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    37,    63,    37,
      38,    -1,     1,    37,    42,    -1,    71,    72,    73,    49,
       9,    49,    77,    -1,    -1,    49,    -1,    16,    58,    -1,
      58,    59,    60,    61,    58,    63,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    71,    72,    73,     8,     9,    37,    77,
      -1,    40,    41,    42,    16,    17,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,     1,    -1,     1,    -1,    -1,    58,
       1,    -1,     9,     8,     9,    37,    38,    -1,     9,    16,
      42,    16,    17,    -1,    -1,    16,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      37,    63,    37,    38,    -1,     1,    37,    42,    -1,    71,
      72,    73,    49,     9,    49,    77,    -1,    -1,    49,    -1,
      16,    58,    -1,    58,    59,    60,    61,    58,    63,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    71,    72,    73,     8,
       9,    37,    77,    -1,    40,    41,    42,    16,    17,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,     1,    -1,     1,
      -1,    -1,    58,     1,    -1,     9,     8,     9,    37,    38,
      -1,     9,    16,    42,    16,    17,    -1,    -1,    16,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    37,    63,    37,    38,    -1,     1,    37,
      42,    -1,    71,    72,    73,    49,     9,    49,    77,    -1,
      13,    49,    -1,    16,    58,    -1,    58,    59,    60,    61,
      58,    63,    -1,    -1,    -1,     1,    -1,    -1,    -1,    71,
      72,    73,     8,     9,    37,    77,    -1,    40,    41,    -1,
      16,    17,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
       1,    -1,     1,    -1,    -1,    58,     1,    -1,     9,     8,
       9,    37,    38,    -1,     9,    16,    42,    16,    17,    -1,
      -1,    16,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    37,    63,    37,    38,
      -1,     1,    37,    42,    -1,    71,    72,    73,    49,     9,
      49,    77,    -1,    -1,    49,    -1,    16,    58,    -1,    58,
      59,    60,    61,    58,    63,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    71,    72,    73,     8,     9,    37,    77,    -1,
      40,    41,    -1,    16,    17,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,     1,    -1,     1,    -1,    -1,    58,     1,
      -1,     9,     8,     9,    37,    38,    -1,     9,    16,    42,
      16,    17,    -1,    -1,    16,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    37,
      63,    37,    38,    -1,     1,    37,    42,    -1,    71,    72,
      73,    49,     9,    49,    77,    -1,    -1,    49,    -1,    16,
      58,    -1,    58,    59,    60,    61,    58,    63,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    71,    72,    73,     8,     9,
      37,    77,    -1,    40,    41,    -1,    16,    17,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,     1,    -1,     1,    -1,
      -1,    58,     1,    -1,     9,     8,     9,    37,    38,    -1,
       9,    16,    42,    16,    17,    -1,    -1,    16,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    37,    63,    37,    38,    -1,    42,    37,    42,
      -1,    71,    72,    73,    49,    -1,    49,    77,    -1,    -1,
      49,    -1,    -1,    58,    -1,    58,    59,    60,    61,    58,
      63,    -1,    -1,    -1,     1,    -1,    -1,    -1,    71,    72,
      73,     8,     9,    -1,    77,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     1,    -1,    -1,    -1,     1,    -1,     9,     8,     9,
      37,    38,    -1,     9,    16,    42,    16,    17,    -1,    -1,
      16,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    37,    63,    37,    38,    -1,
      42,    37,    42,    -1,    71,    72,    73,    49,    -1,    49,
      77,    -1,    -1,    49,    -1,    -1,    58,    -1,    58,    59,
      60,    61,    58,    63,    -1,    -1,    -1,     1,    -1,    -1,
       1,    71,    72,    73,     8,     9,    -1,    77,     9,    -1,
       1,    -1,    16,    17,     1,    16,    -1,    -1,     9,    -1,
      -1,    -1,     9,    -1,     1,    16,    -1,    -1,    -1,    16,
      -1,     8,     9,    37,    38,    -1,    37,    -1,    42,    16,
      17,    -1,    -1,    -1,    -1,    49,    37,    -1,    49,    -1,
      37,    -1,    -1,    -1,    58,    59,    60,    61,    49,    63,
      37,    38,    49,     1,    -1,    42,    -1,    71,    72,    73,
      -1,     9,    49,    77,    -1,    -1,    -1,     1,    16,    56,
      57,    58,    59,    60,    61,     9,    63,     1,    -1,    -1,
       1,    -1,    16,    -1,     8,     9,    -1,    -1,     9,    37,
      77,    -1,    16,    17,    42,    16,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    37,     1,    -1,    -1,    -1,    42,    -1,
      58,     8,     9,    37,    38,    49,    37,    -1,    42,    16,
      17,    -1,    -1,    -1,    58,    49,    -1,    -1,    49,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      37,    38,     1,    -1,    -1,    42,    -1,    -1,    -1,     8,
       9,    -1,    49,    77,    -1,    -1,    -1,    16,    17,    56,
      57,    58,    59,    60,    61,    -1,    63,    -1,    -1,     1,
      -1,    -1,    -1,     1,    -1,    -1,     8,     9,    37,    38,
      77,     9,    -1,    42,    16,    17,    -1,    -1,    16,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    -1,    63,    37,    38,     1,    -1,    37,
      42,    -1,    -1,    -1,     8,     9,    -1,    49,    77,    -1,
      -1,    49,    16,    17,    56,    57,    58,    59,    60,    61,
      58,    63,    -1,    -1,     1,    -1,    -1,    -1,     1,    -1,
      -1,     8,     9,    37,    38,    77,     9,    -1,    42,    16,
      17,    -1,    -1,    16,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      37,    38,     1,    -1,    37,    42,    -1,    -1,    -1,     8,
       9,    -1,    49,    77,    -1,    -1,    49,    16,    17,    56,
      57,    58,    59,    60,    61,    -1,    63,    -1,    -1,     1,
      -1,    -1,    -1,     1,    -1,    -1,     8,     9,    37,    38,
      77,     9,    -1,    42,    16,    17,    -1,    -1,    16,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    -1,    63,    37,    38,     1,    -1,    37,
      42,    -1,    -1,    -1,     8,     9,    -1,    49,    77,    -1,
      -1,    49,    16,    17,    56,    57,    58,    59,    60,    61,
      -1,    63,    -1,    -1,     1,    -1,    -1,    -1,     1,    -1,
      -1,     8,     9,    37,    38,    77,     9,    -1,    42,    16,
      17,    -1,    -1,    16,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      37,    38,     1,    -1,    37,    42,    -1,    -1,    -1,     8,
       9,    -1,    49,    77,    -1,    -1,    49,    16,    17,    56,
      57,    58,    59,    60,    61,    -1,    63,    -1,    -1,     1,
      -1,    -1,    -1,     1,    -1,    -1,     8,     9,    37,    38,
      77,     9,    -1,    42,    16,    17,    -1,    -1,    16,    -1,
      49,    -1,    -1,    -1,    -1,    -1,     1,    56,    57,    58,
      59,    60,    61,     8,    63,    37,    38,    -1,    -1,    37,
      42,    -1,    17,    -1,    -1,    -1,    -1,    49,    77,    -1,
      -1,    49,    -1,     1,    56,    57,    58,    59,    60,    61,
       8,    63,    -1,    38,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    59,    60,    61,    -1,    63,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
       1,    -1,    77,    -1,    -1,    -1,    -1,     8,    56,    57,
       1,    59,    60,    61,    -1,    63,    17,     8,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    17,     1,    -1,    77,
      -1,    32,    33,    -1,    -1,     9,    -1,    38,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      24,    25,    26,    27,    28,    56,    57,    -1,    59,    60,
      61,    -1,    63,     1,    -1,    -1,    -1,    -1,    59,    60,
      61,     9,    63,    -1,    -1,    -1,    77,     1,    16,    -1,
      71,    72,    73,    -1,    -1,     9,    77,    -1,    12,    13,
      14,    15,    16,    67,    68,    -1,    70,    -1,    -1,    37,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,     1,
      -1,    49,    -1,    37,    -1,    39,    -1,     9,    42,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,     1,    -1,    67,    68,    37,    70,    39,    -1,     9,
      42,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,     1,    -1,    67,    68,    37,    70,    39,
      -1,     9,    42,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,     1,    -1,    67,    68,    37,
      70,    39,    -1,     9,    42,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,     1,    -1,    67,
      68,    37,    70,    39,    -1,     9,    42,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,     1,
      -1,    67,    68,    37,    70,    39,    -1,     9,    42,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,     1,    -1,    67,    68,    37,    70,    39,    -1,     9,
      42,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,     1,    -1,    67,    68,    37,    70,    39,
      -1,     9,    42,    -1,    12,    13,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    67,    68,    37,
      70,    -1,    -1,    41,    42,     1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     9,    -1,    -1,    -1,    -1,     9,    -1,
      16,    12,    13,    -1,    15,    16,    -1,    -1,    -1,    67,
      68,    -1,    70,    24,    25,    26,    27,    28,    29,    30,
      -1,    37,    -1,    -1,     1,    -1,    37,    -1,    -1,    -1,
      41,    42,     9,    49,    -1,    12,    13,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    67,    68,     1,    70,
      37,    -1,    -1,    -1,    41,    42,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,     1,    -1,    -1,
      67,    68,     1,    70,    37,     9,    39,    -1,    -1,    42,
       9,    -1,    16,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,     1,    -1,    37,    67,    68,     1,    70,    37,     9,
      39,    -1,    -1,    42,     9,    49,    16,    12,    13,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    -1,    37,    67,    68,
       1,    70,    37,    -1,    -1,    -1,    -1,    42,     9,    49,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,     1,
      -1,    -1,    67,    68,     1,    70,    37,     9,    39,    -1,
      -1,    42,     9,    -1,    16,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,     1,    -1,    37,    67,    68,     1,    70,
      37,     9,    39,    -1,    -1,    42,     9,    49,    16,    12,
      13,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    -1,    37,
      67,    68,     1,    70,    37,    -1,    -1,    -1,    -1,    42,
       9,    49,    -1,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    67,    68,     1,    70,    37,    -1,
      -1,    -1,    -1,    42,     9,    -1,    -1,    12,    13,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    67,    68,
       1,    70,    37,    -1,    -1,    -1,    -1,    42,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,     1,
      -1,    -1,    67,    68,     1,    70,    37,     9,    39,    -1,
      -1,    42,     9,    -1,    16,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,     1,    -1,    37,    67,    68,     1,    70,
      37,     9,    39,    -1,    -1,    42,     9,    49,    16,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,     1,    -1,    37,
      67,    68,     1,    70,    37,     9,    39,    -1,    -1,    42,
       9,    49,    16,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,     1,    -1,    37,    67,    68,     1,    70,    37,     9,
      39,    -1,    -1,    42,     9,    49,    16,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    37,    67,    68,
       1,    70,    37,    -1,    39,    -1,    -1,    42,     9,    49,
      -1,    12,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,     1,
      -1,     1,    67,    68,    -1,    70,    37,     9,     1,     9,
      -1,    42,    12,    13,    16,    15,     9,    -1,    -1,    12,
      13,    14,    15,    16,    24,    25,    26,    27,    28,    29,
      30,    24,    25,    26,    -1,    37,    67,    68,    -1,    70,
       1,    41,    -1,    -1,    37,    -1,    39,    49,     9,    42,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    67,    68,    -1,
      70,    -1,     1,    -1,    67,    68,    37,    70,    39,    -1,
       9,    42,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    24,    25,    26,    -1,     9,
      -1,    -1,    12,    13,    -1,    15,    67,    68,    37,    70,
      39,    -1,    -1,    42,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
       1,    70,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    13,    -1,    15,    16,    -1,    67,    68,     1,
      70,    -1,    -1,    24,    25,    26,    -1,     9,    -1,    -1,
      12,    13,     1,    15,    16,    -1,    37,    -1,     1,    -1,
       9,    42,    24,    25,    26,    -1,     9,    16,    -1,    12,
      13,    -1,    15,    16,    -1,    37,    -1,    -1,    -1,    -1,
      42,    24,    25,    26,    -1,    -1,    67,    68,    37,    70,
       1,    -1,    -1,    42,    37,    -1,    -1,    -1,     9,    42,
      49,    12,    13,    -1,    15,    67,    68,    -1,    70,    58,
      -1,    -1,    -1,    24,    25,    26,    27,    28,     1,    -1,
      -1,    -1,    -1,     1,    67,    68,     9,    70,    -1,    12,
      13,     9,    15,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    24,    25,    26,    -1,
       1,    -1,    -1,    -1,    -1,     1,    67,    68,     9,    70,
      -1,    12,    13,     9,    15,    -1,    12,    13,     1,    15,
      -1,    -1,    -1,    24,    25,    26,     9,    -1,    24,    25,
      26,    -1,    -1,    16,    67,    68,    -1,    70,    -1,    -1,
      68,     1,    70,     1,    -1,     1,    -1,     1,    -1,     9,
      -1,     9,    -1,     9,    37,     9,    16,    -1,    16,    42,
      16,    -1,    16,    -1,    -1,     1,    49,    68,    -1,    70,
      -1,    -1,    68,     9,    70,    58,    -1,    37,    -1,    37,
      16,    37,    42,    37,    42,    -1,    42,    -1,    42,    49,
      -1,    49,    -1,    49,    -1,    49,    -1,     1,    58,     1,
      58,    37,    58,     1,    58,     9,    42,     9,    -1,    -1,
      -1,     9,    16,    49,    16,    -1,     1,     1,    16,    -1,
      -1,    -1,    58,    -1,     9,     9,    -1,    -1,    -1,    -1,
      -1,    16,    16,    37,     1,    37,    -1,    -1,    42,    37,
      42,    -1,     9,    -1,    42,    49,    -1,    49,    -1,    16,
      -1,    49,    37,    37,    58,    -1,    58,    42,    42,    -1,
      58,     1,    -1,     1,    49,    49,    -1,    -1,    -1,     9,
      37,     9,    -1,    58,    58,    42,    16,    -1,    16,    -1,
       1,     1,    49,    -1,    -1,    -1,    -1,    -1,     9,     9,
      -1,    58,    -1,    -1,    -1,    16,    16,    37,     1,    37,
       1,    -1,    42,    -1,    42,    -1,     9,    -1,     9,    49,
      -1,    49,    -1,    16,    -1,    16,    37,    37,    58,    -1,
      58,    42,    42,    -1,    -1,     1,    -1,     1,    49,    49,
      -1,    -1,    -1,     9,    37,     9,    37,    58,    58,    42,
      16,    42,    16,    -1,     1,     1,    49,    -1,    49,    -1,
      -1,    -1,     9,     9,    -1,    58,    -1,    58,    -1,    16,
      16,    37,     1,    37,     1,    -1,    42,    -1,    42,    -1,
       9,    -1,     9,    49,    -1,    49,    -1,    16,    -1,    16,
      37,    37,    58,    -1,    58,    42,    42,    -1,    -1,     1,
      -1,     1,    49,    49,    -1,    -1,    -1,     9,    37,     9,
      37,    58,    58,    42,    16,    42,    16,    -1,     1,     1,
      49,    -1,    49,    -1,    -1,    -1,     9,     9,    -1,    58,
      -1,    58,    -1,    16,    16,    37,     1,    37,     1,    -1,
      42,    -1,    42,    -1,     9,    -1,     9,    49,    -1,    49,
      -1,    16,    -1,    16,    37,    37,    58,    -1,    58,    42,
      42,    -1,    -1,     1,    -1,     1,    49,    49,    -1,    -1,
      -1,     9,    37,     9,    37,    58,    58,    42,    16,    42,
      16,    -1,     1,     1,    49,    -1,    49,    -1,    -1,    -1,
       9,     9,    -1,    58,    -1,    58,    -1,    16,    16,    37,
       1,    37,     1,    -1,    42,    -1,    42,    -1,     9,    -1,
       9,    49,    -1,    49,    -1,    16,    -1,    16,    37,    37,
      58,    -1,    58,    42,    42,    -1,    -1,     1,    -1,     1,
      49,    49,    -1,    -1,    -1,     9,    37,     9,    37,    58,
      58,    42,    16,    42,    16,     1,     1,     1,    49,    -1,
      49,    -1,    -1,     9,     9,     9,    -1,    58,    -1,    58,
      16,    16,    16,    37,     1,    37,    -1,    -1,    42,    -1,
      42,    -1,     9,    -1,    -1,    49,    -1,    49,    -1,    16,
      -1,    37,    37,    37,    58,    -1,    58,    42,    42,    -1,
      -1,     1,    -1,    49,    49,    49,    -1,    -1,    -1,     9,
      37,     1,     1,    58,    58,    42,    16,     1,    -1,     9,
       9,     1,    49,    -1,    -1,     9,    16,    16,    -1,     9,
       1,    58,    16,    -1,    -1,     1,    16,    37,     9,    -1,
      -1,    -1,    -1,     9,    -1,    16,     1,    37,    37,    49,
      16,    -1,    -1,    37,     9,     1,    -1,    37,    -1,    49,
      49,    16,    -1,     9,     1,    49,    37,    -1,    -1,    49,
      16,    37,     9,     1,    -1,    -1,    -1,     1,    49,    16,
      -1,     9,    37,    49,    -1,     9,    -1,     1,    16,    -1,
       1,    37,    16,     1,    49,     9,     1,    -1,     9,    -1,
      37,     9,    16,    49,     9,    16,    -1,     1,    16,    37,
      -1,    16,    49,    37,    -1,     9,     1,    -1,    -1,    -1,
      -1,    49,    16,    37,     9,    49,    37,    -1,    -1,    37,
      -1,    16,    37,    -1,     1,    49,    -1,    -1,    49,     1,
      -1,    49,     9,    37,    49,     1,    -1,     9,     1,    16,
       1,    -1,    37,     9,    16,    49,     9,    -1,     9,    -1,
      16,    -1,    -1,    16,    49,    16,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    37,    49,    -1,    37,    -1,    37,    49,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    49,    -1,    49
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  mcmas_parser::yystos_[] =
  {
         0,     1,     3,    66,    80,    81,    82,    83,    85,   110,
     111,   113,    17,     1,    17,    15,     0,     1,    82,     1,
       4,    18,    19,    32,    86,    88,    93,    95,    97,    99,
     118,   120,     1,     3,   110,     1,    43,   113,   169,   171,
      77,    64,    65,    10,    15,    39,     1,    15,     1,    39,
       1,    39,     1,    39,     1,     7,    77,    87,    89,    90,
       1,    95,    99,   120,     1,     7,    89,    94,     1,    99,
     120,     1,     7,     8,    21,    22,    27,    38,    69,    77,
      78,    92,    98,   101,   138,   140,   141,   142,   143,   144,
     145,   146,   164,   165,     1,   120,     1,    11,    77,   119,
     122,     1,     5,   123,   125,   171,     1,    77,   172,     1,
      44,   174,   176,     1,    36,    93,    96,   114,   116,    42,
      42,     1,    10,    10,     1,    10,    18,     1,    18,     1,
      39,     1,    87,    90,     1,    42,    39,    99,   120,   120,
     125,    19,     1,    19,     1,    94,    39,   120,   125,     1,
      32,    78,   138,   140,   143,   146,     1,    32,   138,   140,
     143,    78,   138,     1,     8,   146,     1,    98,     1,    16,
      37,    42,     1,    27,    28,     1,    29,    30,     1,    12,
      13,    15,    24,    25,    26,    68,    70,   162,     1,    67,
     125,    42,     1,    42,     1,    40,   119,    39,     1,    39,
       1,     7,    35,   124,   127,   131,   133,   138,     1,     6,
     103,   105,   176,     1,    14,     1,     7,    77,   170,     1,
       8,    17,    38,    77,   177,     1,    34,    45,    46,   178,
     180,   186,   188,   194,   196,    10,    15,    39,     1,    15,
       1,    89,     1,    97,   100,   118,   121,     1,    11,    77,
     115,   117,     1,    96,     1,    20,    77,    91,    92,     1,
      10,    20,    92,     1,    42,   120,   125,   125,   105,   125,
     105,     1,     9,     9,     9,     1,     9,     1,     9,     1,
       9,     1,     1,   143,   143,   138,   138,   138,     1,     8,
     141,   141,   141,   142,   142,   142,   144,   144,   144,   143,
     145,   145,   105,    77,    77,     1,     5,    39,   129,     1,
       5,     1,   129,     1,   124,   131,   133,     1,   124,     1,
     129,    39,     1,    39,     1,     7,     8,    77,   104,   106,
     107,   108,     1,     7,    84,   180,   188,   196,     1,     8,
      17,    38,    69,    77,    92,   151,   152,   153,   154,   158,
     159,   160,   165,   167,   173,   173,    43,     1,    43,     1,
      14,    41,    77,   177,   177,     1,    41,   177,     1,    41,
       1,    16,    37,    42,   175,     1,     7,    77,   179,   183,
       1,   188,   196,     1,     7,     8,    17,    38,    50,    51,
      52,    53,    54,    55,    56,    57,    59,    60,    61,    62,
      63,    77,   187,   189,   193,     1,   196,     1,     8,    12,
      17,    38,    47,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    59,    60,    61,    62,    63,    71,    72,    73,
      77,   197,   198,   202,   206,   207,   210,     1,    10,    10,
       1,    10,    94,     1,     8,    17,    38,    69,    77,    92,
      98,   102,   139,   147,   148,   149,   150,   155,   156,   157,
     165,   166,     1,   121,     1,   122,     1,   123,   126,    42,
       1,    42,     1,    40,   115,   100,   121,    78,     1,    11,
      40,     1,    23,     1,    91,     1,    23,   125,   105,   105,
      84,   105,    84,   140,   140,    84,    10,     1,    10,     1,
      77,   134,   134,   124,   134,     6,     1,     6,     1,   108,
      15,     1,   104,   107,    14,    16,     3,     1,     3,   188,
     196,   196,    41,   151,   154,   158,   173,   151,   158,   173,
       1,    41,   173,     1,     8,   154,     1,    41,     1,    68,
      70,   162,     1,    67,     1,    27,    28,     1,    29,    30,
       1,    16,    37,    42,     1,    42,   173,   173,    77,     1,
      15,     1,     9,     1,     9,    77,    77,     1,    77,    77,
       7,    44,   177,   177,   177,     1,     7,    45,     1,    45,
       1,    15,   181,     1,    77,   179,   196,     1,     8,    34,
     191,   192,   193,     1,    34,     1,   193,    41,   193,   193,
     193,   193,   193,   193,   193,     1,     8,   190,   190,     1,
       8,   191,     1,     8,   192,   192,   191,   192,     1,    41,
       1,   187,   193,     1,    16,    37,    42,    49,     1,     8,
      77,   200,   201,   202,   206,   207,   208,   209,     1,   202,
     206,   207,    77,    41,   202,   206,   207,     1,     8,    38,
      59,    60,    61,    63,    71,    72,    73,   203,   210,     1,
       8,    38,    56,    57,    59,    60,    61,    63,   207,   210,
       1,     8,    38,    56,    57,    59,    60,    61,    63,   202,
     210,   202,   202,   202,   202,   202,     1,     8,    38,   199,
     206,   207,   199,   206,     1,     8,   200,   208,     1,     8,
     201,   209,   201,   209,     1,     8,   200,   201,   209,     1,
       8,   206,   206,   206,     1,    41,     1,     7,    47,    48,
     195,   202,     1,     8,    71,    72,    73,   199,     1,    16,
      37,    42,    49,     1,    16,    37,    49,    58,     1,    16,
      37,    49,     1,    41,   139,   147,   150,   155,   139,   147,
     155,     1,    41,   139,     1,     8,   150,    98,     1,    16,
      37,    42,     1,    68,    70,   162,     1,    67,     1,    27,
      28,     1,    29,    30,   126,   119,     1,   128,   132,   133,
     139,     1,   103,   135,    77,    77,   121,   126,    77,    77,
       1,    92,    92,     1,    11,    92,    92,   105,    84,    84,
      84,     1,    11,    40,   130,   130,   130,     9,   143,     1,
       8,    31,    38,    77,   143,   161,   108,   196,    77,     9,
       9,     1,     9,     1,     9,     1,     9,     1,     9,    77,
      77,     1,     1,   151,   151,    77,    77,   152,   152,   152,
     151,   153,   153,     1,     8,   159,   159,   159,   160,   160,
     160,   173,   173,   173,     1,    42,     1,    42,     1,    77,
      92,   165,   168,    77,   168,     1,    15,     1,    15,     1,
      15,     1,    15,     1,    44,    44,     1,    44,    10,     1,
      10,     1,    17,    77,   184,   185,   181,    17,    77,    17,
      77,     1,     9,     1,     9,    32,    33,     1,   193,   193,
      17,    77,    17,    77,    77,    77,    32,    33,     1,    32,
      33,     1,    42,   193,   193,   193,   193,    17,    77,    17,
      77,    13,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,    13,    32,    33,     1,     1,
     203,   203,   203,     1,     8,   204,     1,     8,   205,   205,
     205,   203,   203,   203,     1,    16,    37,    42,    49,    58,
       1,     8,   206,   207,   207,     1,     8,     1,     8,    16,
      37,    42,    49,     1,     8,     1,     1,     8,     1,     8,
     202,   202,    17,    77,    17,    77,    77,    77,    17,    77,
      17,    77,    32,    33,     1,    32,    33,    46,     1,    46,
     203,   207,     1,    42,   202,   202,   202,   202,   202,   202,
     202,   202,   206,   206,   207,   206,   207,   206,   207,   206,
     207,   206,   207,   206,   207,   206,   207,    77,     1,     9,
       9,     9,     1,     9,     1,     9,     1,     9,    77,    77,
       1,     1,   147,   147,   139,   139,   139,   148,   148,   148,
     147,   149,   149,     1,     8,   156,   156,   156,   157,   157,
     157,   135,     1,     1,   124,   132,   133,   124,     1,   129,
       1,     8,    77,   109,   136,   137,     1,     7,   112,   126,
     135,    84,    42,    77,     1,    42,    77,    15,    77,   143,
     161,   143,   161,     1,    15,   161,     1,    41,   162,     1,
      16,    37,    42,   158,   158,   168,   168,   168,   168,    17,
      77,   168,   168,   168,   168,    17,    77,   168,     1,    11,
      40,   182,   184,     1,    40,     1,    40,     1,    40,     1,
      40,     1,    58,     1,    58,     1,    40,     1,    40,     1,
      40,     1,    40,     1,    40,     1,    40,     1,    40,     1,
      40,     1,     9,     1,     9,    17,    77,    17,    77,    77,
      77,   203,   203,   203,   203,   203,    17,    77,    17,    77,
       1,    17,    77,    17,    77,    77,    77,   207,   207,   207,
      17,    77,    17,    77,    77,    77,    77,     1,    58,     1,
      58,     1,    40,     1,    40,     1,    40,     1,    40,     1,
      40,     1,    40,     1,    40,     1,    40,    42,     1,    42,
     155,   155,   112,   124,   134,     1,   109,    15,     1,    14,
      16,     1,   104,   137,     3,     1,     3,   135,   112,    77,
       1,     9,     1,     9,    77,    77,    15,    31,    77,     1,
      31,   143,   161,   161,   161,    41,    41,    41,    41,     1,
      42,   185,     1,    42,   185,   182,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,     1,     8,    38,   202,
     207,   202,   207,   202,   207,   202,   207,   202,   207,   202,
     207,   202,   207,   202,   207,     1,    40,     1,    40,     1,
      40,     1,    40,     1,    40,     1,    40,     1,    40,     1,
      40,     1,    40,     1,    40,     1,    40,     1,    40,     1,
      40,     1,    40,     1,    40,     1,    40,     1,    40,     1,
      40,   202,   202,   202,   202,   202,   207,   202,   207,   202,
     207,   202,   207,   202,   207,   202,   207,   202,   207,   202,
     207,   130,     9,   147,     1,     8,    17,    31,    38,    77,
     147,   163,   163,   109,   112,    77,     1,    15,    15,    77,
       1,    15,    77,    77,    77,    77,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
       1,     9,     1,     9,     1,     9,     1,     9,     1,     9,
      15,    77,   147,   163,   147,   163,     1,    41,     1,    15,
     163,     1,    41,   162,     1,    16,    37,    42,     1,    42,
      77,    77,    77,    77,    77,     1,     9,     1,     9,     1,
       9,     1,     9,     1,     9,     1,     9,     1,     9,     1,
       9,     1,     9,     1,     9,     1,     9,     1,     9,    77,
       1,     9,     1,     9,    15,    31,    77,     1,    31,    77,
      77,     1,    15,    31,    77,     1,    31,   147,   163,   163,
     163,    77,     1,    15,    77,     1,    15,    77,     1,    15,
      15,    77,     1,    15,    77,    77,    77,    77,    77,    77,
      77,    77,    77
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  mcmas_parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  mcmas_parser::yyr1_[] =
  {
         0,    79,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      88,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    92,    92,    92,    92,    93,    93,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   102,   102,
     103,   103,   103,   103,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     112,   112,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   117,   117,   118,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   120,   120,
     120,   121,   121,   122,   122,   122,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   127,   127,   127,   128,   128,   128,
     129,   129,   129,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   140,   141,   141,   141,   141,   142,   142,
     142,   142,   143,   143,   143,   143,   144,   144,   144,   145,
     145,   145,   146,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   155,   155,   155,   155,   156,   156,
     156,   156,   157,   157,   157,   157,   158,   158,   158,   158,
     159,   159,   159,   159,   160,   160,   160,   160,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   164,   164,
     165,   165,   166,   166,   166,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   168,   169,
     170,   170,   170,   170,   171,   171,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   178,   178,   179,   179,   179,   179,   180,
     180,   180,   181,   181,   181,   181,   182,   182,   182,   182,
     183,   183,   183,   184,   184,   184,   184,   185,   185,   185,
     186,   186,   187,   187,   187,   187,   188,   188,   189,   189,
     189,   189,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   194,
     194,   195,   195,   195,   195,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   198,   198,
     198,   199,   199,   199,   199,   199,   199,   199,   199,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   201,   201,   201,   201,   201,
     201,   201,   201,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   205,   205,
     205,   205,   205,   205,   205,   205,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   209,   209,   209,   209,   209,   209,   209,   209,   210,
     210,   210,   210,   210,   210,   210,   210,   210
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  mcmas_parser::yyr2_[] =
  {
         0,     2,     1,     2,     4,     4,     1,     7,     6,     6,
       5,     6,     5,     5,     4,     2,     2,     2,     1,     2,
       2,     2,     1,     8,     7,     7,     6,     7,     6,     6,
       5,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       3,     2,     2,     2,     3,     3,     1,     3,     3,     3,
       5,     5,     5,     5,     5,     4,     5,     4,     1,     1,
       3,     3,     1,     1,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     2,     1,     3,     2,     1,     3,     1,
       2,     2,     2,     1,     2,     2,     2,     1,     3,     2,
       1,     3,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     2,     1,     2,     2,     2,     1,     3,     2,
       1,     2,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     1,     8,     7,     9,     8,     1,     3,     3,     3,
       3,     2,     2,     3,     1,     2,     2,     2,     1,     3,
       2,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       2,     2,     3,     1,     2,     2,     2,     1,     3,     2,
       1,     3,     1,     1,     3,     3,     1,     2,     2,     2,
       1,     2,     2,     2,     1,     3,     4,     3,     2,     1,
       3,     4,     3,     1,     1,     2,     1,     1,     2,     1,
       2,     2,     2,     1,     2,     2,     2,     1,     4,     1,
       4,     1,     4,     4,     1,     3,     3,     1,     3,     1,
       1,     2,     1,     4,     4,     4,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     1,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     2,     5,     5,     5,     5,     4,     4,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     3,     3,
       2,     5,     5,     5,     5,     4,     4,     5,     3,     5,
       5,     5,     4,     4,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     3,     1,     4,     4,     4,     4,
       5,     5,     5,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     1,     1,     3,     3,
       3,     3,     2,     2,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     7,     7,     7,
       5,     5,     5,     5,     7,     5,     5,     5,     5,     4,
       5,     4,     1,     1,     1,     2,     2,     2,     1,     3,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       4,     5,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     3,     2,     2,
       3,     3,     1,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     2,     2,     2,     1,     3,     2,     3,     3,     2,
       2,     2,     3,     4,     4,     3,     4,     1,     3,     3,
       3,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     2,     2,     2,     3,     1,     2,     2,
       2,     2,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     1,
       3,     3,     3,     3,     3,     3,     3,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const mcmas_parser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "AGENT", "ACTIONS",
  "PROTOCOL", "EVOLUTION", "END", "LB", "RB", "LCB", "RCB", "LT", "GT",
  "IF", "EQ", "AND", "ENVIRONMENT", "OBSVARS", "VARS", "BOOLEAN", "BTRUE",
  "BFALSE", "TO", "LE", "GE", "NEQ", "MINUS", "PLUS", "TIMES", "DIVIDE",
  "ACTION", "REDSTATES", "GREENSTATES", "FAIRNESS", "OTHER", "LOBSVARS",
  "OR", "NOT", "COLON", "COMMA", "DOT", "SEMICOLON", "EVALUATION",
  "INITSTATES", "GROUPS", "FORMULAE", "LTLPREFIX", "CTLSPREFIX", "IMPLIES",
  "AG", "EG", "AX", "EX", "AF", "EF", "A", "E", "UNTIL", "K", "GK", "GCK",
  "O", "DK", "MULTIASSIGNMENT", "SINGLEASSIGNMENT", "SEMANTICS", "BITAND",
  "BITOR", "BITNOT", "BITXOR", "X", "F", "G", "LSB", "RSB", "QUESTION",
  "\"identifier\"", "\"number\"", "$accept", "eis", "semantics", "is",
  "envprefix", "envsuffix", "environment", "obsprefix", "obssuffix",
  "obsvardef", "varidlist", "onevardef", "enumlist", "integer",
  "varprefix", "varsuffix", "envardef", "vardef", "redprefix", "redsuffix",
  "enreddef", "reddef", "enrboolcond", "rboolcond", "evprefix", "evsuffix",
  "envevdef", "envevdeflist", "envevline", "boolresult", "boolresult1",
  "agents", "agprefix", "agsuffix", "agent", "lobsprefix", "lobssuffix",
  "lobsvarsdef", "lobsvaridlist", "actprefix", "actsuffix", "enactiondef",
  "actiondef", "actionidlist", "protprefix", "protsuffix", "enprotdef",
  "protdef", "enprotdeflist", "protdeflist", "plprefix", "plsuffix",
  "enprotline", "protline", "otherbranch", "enabledidlist", "evdef",
  "evdeflist", "evline", "enlboolcond", "lboolcond", "expr1", "term1",
  "element1", "expr4", "term4", "factor4", "element4", "expr5", "term5",
  "factor5", "element5", "expr6", "term6", "factor6", "element6", "expr2",
  "term2", "element2", "expr3", "term3", "element3", "eboolcond",
  "logicop", "gboolcond", "varvalue1", "boolvalue", "varvalue2",
  "varvalue3", "varvalue4", "evaprefix", "evasuffix", "evaluation",
  "evalist", "evaboolcond", "iniprefix", "inisuffix", "istates",
  "isboolcond", "groupprefix", "groupsuffix", "groups", "gplprefix",
  "gplsufffix", "groupdeflist", "namelist", "agentname", "fairprefix",
  "fairsuffix", "fairness", "fformlist", "untilprefixfair",
  "epistemicprefixfair", "gepistemicprefixfair", "fformula", "forprefix",
  "forsuffix", "formulae", "formlist", "atlprefix", "untilprefix",
  "epistemicprefix", "gepistemicprefix", "formula", "ltlformula",
  "epistemicprefixltl", "gepistemicprefixltl", "pathformula",
  "ctlsformula", "epistemicprefixctls", "gepistemicprefixctls",
  "terminalformula", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const mcmas_parser::rhs_number_type
  mcmas_parser::yyrhs_[] =
  {
        80,     0,    -1,    82,    -1,    81,    82,    -1,    66,    15,
      64,    42,    -1,    66,    15,    65,    42,    -1,     1,    -1,
      85,   110,   171,   176,   180,   188,   196,    -1,    85,   110,
     171,   176,   180,   196,    -1,    85,   110,   171,   176,   188,
     196,    -1,    85,   110,   171,   176,   196,    -1,   110,   171,
     176,   180,   188,   196,    -1,   110,   171,   176,   180,   196,
      -1,   110,   171,   176,   188,   196,    -1,   110,   171,   176,
     196,    -1,     3,    17,    -1,     1,    17,    -1,     3,     1,
      -1,     1,    -1,     7,     3,    -1,     1,     3,    -1,     7,
       1,    -1,     1,    -1,    83,    88,    95,    99,   120,   125,
     105,    84,    -1,    83,    88,    95,   120,   125,   105,    84,
      -1,    83,    95,    99,   120,   125,   105,    84,    -1,    83,
      95,   120,   125,   105,    84,    -1,    83,    88,    99,   120,
     125,   105,    84,    -1,    83,    88,   120,   125,   105,    84,
      -1,    83,    99,   120,   125,   105,    84,    -1,    83,   120,
     125,   105,    84,    -1,     1,    -1,    18,    39,    -1,     1,
      39,    -1,    18,     1,    -1,     1,    -1,     7,    18,    -1,
       1,    18,    -1,     7,     1,    -1,     1,    -1,    86,    89,
      87,    -1,    86,    87,    -1,    90,    42,    -1,    90,     1,
      -1,    89,    90,    42,    -1,    89,    90,     1,    -1,     1,
      -1,    77,    39,    20,    -1,    77,    39,     1,    -1,    77,
       1,    20,    -1,    77,    39,    92,    23,    92,    -1,    77,
       1,    92,    23,    92,    -1,    77,    39,    92,     1,    92,
      -1,    77,     1,    92,     1,    92,    -1,    77,    39,    10,
      91,    11,    -1,    77,     1,    91,    11,    -1,    77,    39,
      10,    91,     1,    -1,    77,     1,    91,     1,    -1,     1,
      -1,    77,    -1,    91,    40,    77,    -1,    91,     1,    77,
      -1,     1,    -1,    78,    -1,    27,    78,    -1,     1,    78,
      -1,     1,    -1,    19,    39,    -1,     1,    39,    -1,    19,
       1,    -1,     1,    -1,     7,    19,    -1,     1,    19,    -1,
       7,     1,    -1,     1,    -1,    93,    89,    94,    -1,    93,
      94,    -1,     1,    -1,    93,    89,    94,    -1,     1,    -1,
      32,    39,    -1,    32,     1,    -1,     1,    39,    -1,     1,
      -1,     7,    32,    -1,     1,    32,    -1,     7,     1,    -1,
       1,    -1,    97,   101,    98,    -1,    97,    98,    -1,     1,
      -1,    97,   102,    98,    -1,    97,    98,    -1,     1,    -1,
     138,    42,    -1,   138,     1,    -1,     1,    -1,   139,    42,
      -1,   139,     1,    -1,     1,    -1,     6,    39,    -1,     1,
      39,    -1,     6,     1,    -1,     1,    -1,     7,     6,    -1,
       1,     6,    -1,     7,     1,    -1,     1,    -1,   103,   106,
     104,    -1,   103,   104,    -1,   107,    -1,   106,   107,    -1,
       1,    -1,   108,    14,   161,    42,    -1,     1,    -1,     8,
     108,     9,    -1,   108,    16,   108,    -1,    77,    15,   143,
      -1,     1,    -1,     8,   109,     9,    -1,   109,    16,   109,
      -1,    77,    15,   147,    -1,     1,    -1,   113,    -1,   110,
     113,    -1,     1,    -1,     3,    -1,     1,    -1,     7,     3,
      -1,     1,     3,    -1,     7,     1,    -1,     1,    -1,   111,
      77,    96,   100,   121,   126,   135,   112,    -1,   111,    77,
      96,   121,   126,   135,   112,    -1,   111,    77,   116,    96,
     100,   121,   126,   135,   112,    -1,   111,    77,   116,    96,
     121,   126,   135,   112,    -1,     1,    -1,    36,    15,    10,
      -1,     1,    15,    10,    -1,    36,     1,    10,    -1,    36,
      15,     1,    -1,     1,    10,    -1,    36,     1,    -1,     1,
      15,     1,    -1,     1,    -1,    11,    42,    -1,    11,     1,
      -1,     1,    42,    -1,     1,    -1,   114,   117,   115,    -1,
     114,   115,    -1,     1,    -1,    77,    -1,   117,    40,    77,
      -1,   117,     1,    77,    -1,     1,    -1,     4,    15,    10,
      -1,     1,    15,    10,    -1,     4,     1,    10,    -1,     4,
      15,     1,    -1,     1,    10,    -1,     4,     1,    -1,     1,
      15,     1,    -1,     1,    -1,    11,    42,    -1,    11,     1,
      -1,     1,    42,    -1,     1,    -1,   118,   122,   119,    -1,
     118,   119,    -1,     1,    -1,   118,   122,   119,    -1,     1,
      -1,    77,    -1,   122,    40,    77,    -1,   122,     1,    77,
      -1,     1,    -1,     5,    39,    -1,     1,    39,    -1,     5,
       1,    -1,     1,    -1,     7,     5,    -1,     1,     5,    -1,
       7,     1,    -1,     1,    -1,   123,   127,   124,    -1,   123,
     127,   133,   124,    -1,   123,   133,   124,    -1,   123,   124,
      -1,     1,    -1,   123,   128,   124,    -1,   123,   128,   133,
     124,    -1,   123,   133,   124,    -1,     1,    -1,   131,    -1,
     127,   131,    -1,     1,    -1,   132,    -1,   128,   132,    -1,
       1,    -1,    39,    10,    -1,     1,    10,    -1,    39,     1,
      -1,     1,    -1,    11,    42,    -1,     1,    42,    -1,    11,
       1,    -1,     1,    -1,   138,   129,   134,   130,    -1,     1,
      -1,   139,   129,   134,   130,    -1,     1,    -1,    35,   129,
     134,   130,    -1,     1,   129,   134,   130,    -1,    77,    -1,
     134,    40,    77,    -1,   134,     1,    77,    -1,     1,    -1,
     103,   136,   104,    -1,     1,    -1,   137,    -1,   136,   137,
      -1,     1,    -1,   109,    14,   163,    42,    -1,   109,     1,
     163,    42,    -1,   109,    14,   163,     1,    -1,   109,     1,
     163,     1,    -1,     1,    -1,     8,   138,     9,    -1,     1,
     138,     9,    -1,     8,   138,     1,    -1,     1,   138,     1,
      -1,   138,    16,   138,    -1,   138,    37,   138,    -1,   138,
       1,   138,    -1,    38,   138,    -1,     1,   138,    -1,   143,
     162,   143,    -1,     1,    -1,     8,   139,     9,    -1,     1,
     139,     9,    -1,     8,   139,     1,    -1,     1,   139,     1,
      -1,   139,    16,   139,    -1,   139,    37,   139,    -1,   139,
       1,   139,    -1,    38,   139,    -1,     1,   139,    -1,   147,
     162,   147,    -1,     1,    -1,   140,    28,   141,    -1,   140,
      27,   141,    -1,   140,     1,   141,    -1,   141,    -1,   141,
      29,   142,    -1,   141,    30,   142,    -1,   141,     1,   142,
      -1,   142,    -1,     8,   140,     9,    -1,     1,   140,     9,
      -1,     8,   140,     1,    -1,   164,    -1,   143,    68,   144,
      -1,   143,    70,   144,    -1,   143,     1,   144,    -1,   144,
      -1,   144,    67,   145,    -1,   144,     1,   145,    -1,   145,
      -1,    69,   146,    -1,     1,   146,    -1,   146,    -1,     8,
     143,     9,    -1,     1,   143,     9,    -1,     8,   143,     1,
      -1,   140,    -1,   147,    68,   148,    -1,   147,    70,   148,
      -1,   147,     1,   148,    -1,   148,    -1,   148,    67,   149,
      -1,   148,     1,   149,    -1,   149,    -1,    69,   150,    -1,
       1,   150,    -1,   150,    -1,     8,   147,     9,    -1,     1,
     147,     9,    -1,     8,   147,     1,    -1,   155,    -1,   151,
      68,   152,    -1,   151,    70,   152,    -1,   151,     1,   152,
      -1,   152,    -1,   152,    67,   153,    -1,   152,     1,   153,
      -1,   153,    -1,    69,   154,    -1,     1,   154,    -1,   154,
      -1,     8,   151,     9,    -1,     1,   151,     9,    -1,     8,
     151,     1,    -1,   158,    -1,   155,    28,   156,    -1,   155,
      27,   156,    -1,   155,     1,   156,    -1,   156,    -1,   156,
      29,   157,    -1,   156,    30,   157,    -1,   156,     1,   157,
      -1,   157,    -1,     8,   155,     9,    -1,     1,   155,     9,
      -1,     8,   155,     1,    -1,   166,    -1,   158,    28,   159,
      -1,   158,    27,   159,    -1,   158,     1,   159,    -1,   159,
      -1,   159,    29,   160,    -1,   159,    30,   160,    -1,   159,
       1,   160,    -1,   160,    -1,     8,   158,     9,    -1,     1,
     158,     9,    -1,     8,   158,     1,    -1,   167,    -1,     8,
     161,     9,    -1,     1,   161,     9,    -1,     8,   161,     1,
      -1,     1,   161,     1,    -1,   161,    16,   161,    -1,   161,
      37,   161,    -1,   161,     1,   161,    -1,    38,   161,    -1,
       1,   161,    -1,   143,   162,   143,    -1,    31,    15,    77,
      -1,     1,    15,    77,    -1,    31,     1,    77,    -1,     1,
      77,    -1,    77,    41,    31,    15,    77,    -1,    77,     1,
      31,    15,    77,    -1,    77,    41,     1,    15,    77,    -1,
      77,    41,    31,     1,    77,    -1,    77,     1,    15,    77,
      -1,    77,    41,     1,    77,    -1,    77,     1,    31,     1,
      77,    -1,    77,     1,    77,    -1,     1,    -1,    12,    -1,
      24,    -1,    13,    -1,    25,    -1,    15,    -1,    26,    -1,
       8,   163,     9,    -1,     1,   163,     9,    -1,     8,   163,
       1,    -1,     1,   163,     1,    -1,   163,    16,   163,    -1,
     163,    37,   163,    -1,   163,     1,   163,    -1,    38,   163,
      -1,     1,   163,    -1,   147,   162,   147,    -1,    31,    15,
      77,    -1,     1,    15,    77,    -1,    31,     1,    77,    -1,
       1,    77,    -1,    77,    41,    31,    15,    77,    -1,    77,
       1,    31,    15,    77,    -1,    77,    41,     1,    15,    77,
      -1,    77,    41,    31,     1,    77,    -1,    77,     1,    15,
      77,    -1,    77,    41,     1,    77,    -1,    77,     1,    31,
       1,    77,    -1,    77,     1,    77,    -1,    17,    41,    31,
      15,    77,    -1,    17,    41,     1,    15,    77,    -1,    17,
      41,    31,     1,    77,    -1,    17,     1,    15,    77,    -1,
      17,    41,     1,    77,    -1,    17,     1,    31,     1,    77,
      -1,    17,     1,    77,    -1,     1,    -1,   165,    -1,    77,
      -1,    92,    -1,    21,    -1,    22,    -1,   165,    -1,    77,
      -1,    17,    41,    77,    -1,     1,    41,    77,    -1,    17,
       1,    77,    -1,    92,    -1,   165,    -1,    77,    -1,    77,
      41,    77,    -1,    77,     1,    77,    -1,    17,    41,    77,
      -1,     1,    41,    77,    -1,    17,     1,    77,    -1,    92,
      -1,   165,    -1,    77,    -1,    92,    -1,    43,    -1,     7,
      43,    -1,     1,    43,    -1,     7,     1,    -1,     1,    -1,
     169,   172,   170,    -1,     1,    -1,    77,    14,   173,    42,
      -1,    77,     1,   173,    42,    -1,    77,    14,   173,     1,
      -1,    77,     1,   173,     1,    -1,   172,    77,    14,   173,
      42,    -1,   172,    77,     1,   173,    42,    -1,   172,    77,
      14,   173,     1,    -1,   172,    77,     1,   173,     1,    -1,
       1,    -1,     8,   173,     9,    -1,     1,   173,     9,    -1,
       8,   173,     1,    -1,     1,   173,     1,    -1,   173,    16,
     173,    -1,   173,    37,   173,    -1,   173,     1,   173,    -1,
      38,   173,    -1,     1,   173,    -1,   151,   162,   151,    -1,
       1,    -1,    44,    -1,     1,    -1,    42,     7,    44,    -1,
       1,     7,    44,    -1,    42,     1,    44,    -1,    42,     7,
       1,    -1,     1,    44,    -1,    42,     1,    -1,     1,     7,
       1,    -1,     1,    -1,   174,   177,   175,    -1,     1,    -1,
       8,   177,     9,    -1,     1,   177,     9,    -1,     8,   177,
       1,    -1,     1,   177,     1,    -1,   177,    16,   177,    -1,
     177,    37,   177,    -1,   177,     1,   177,    -1,    38,   177,
      -1,     1,   177,    -1,    77,    41,    77,    15,    77,    41,
      77,    -1,    77,    41,    77,    15,    17,    41,    77,    -1,
      17,    41,    77,    15,    77,    41,    77,    -1,    77,    41,
      77,    15,   168,    -1,    77,     1,    77,    15,   168,    -1,
      77,    41,    77,     1,   168,    -1,    77,     1,    77,     1,
     168,    -1,    17,    41,    77,    15,    17,    41,    77,    -1,
      17,    41,    77,    15,   168,    -1,    17,     1,    77,    15,
     168,    -1,    17,    41,    77,     1,   168,    -1,    17,     1,
      77,     1,   168,    -1,     1,    77,    15,   168,    -1,     1,
      41,    77,     1,   168,    -1,     1,    77,     1,   168,    -1,
       1,    -1,    45,    -1,     1,    -1,     7,    45,    -1,     1,
      45,    -1,     7,     1,    -1,     1,    -1,   178,   183,   179,
      -1,   178,   179,    -1,     1,    -1,    15,    10,    -1,     1,
      10,    -1,    15,     1,    -1,     1,    -1,    11,    42,    -1,
       1,    42,    -1,    11,     1,    -1,     1,    -1,    77,   181,
     184,   182,    -1,   183,    77,   181,   184,   182,    -1,     1,
      -1,   185,    -1,   184,    40,   185,    -1,   184,     1,   185,
      -1,     1,    -1,    17,    -1,    77,    -1,     1,    -1,    34,
      -1,     1,    -1,     7,    34,    -1,     1,    34,    -1,     7,
       1,    -1,     1,    -1,   186,   187,    -1,   186,   189,   187,
      -1,   193,    42,    -1,   193,     1,    -1,   189,   193,    42,
      -1,   189,   193,     1,    -1,     1,    -1,     8,   193,    58,
     193,     9,    -1,     1,   193,    58,   193,     9,    -1,     8,
     193,     1,   193,     9,    -1,     8,   193,    58,   193,     1,
      -1,     1,   193,     1,   193,     9,    -1,     1,   193,    58,
     193,     1,    -1,     8,   193,     1,   193,     1,    -1,     1,
     193,     1,   193,     1,    -1,     8,    77,    40,   193,     9,
      -1,     1,    77,    40,   193,     9,    -1,     8,    77,     1,
     193,     9,    -1,     8,    77,    40,   193,     1,    -1,     1,
      77,     1,   193,     9,    -1,     1,    77,    40,   193,     1,
      -1,     8,    77,     1,   193,     1,    -1,     1,    77,     1,
     193,     1,    -1,     8,    17,    40,   193,     9,    -1,     1,
      17,    40,   193,     9,    -1,     8,    17,     1,   193,     9,
      -1,     8,    17,    40,   193,     1,    -1,     1,    17,     1,
     193,     9,    -1,     1,    17,    40,   193,     1,    -1,     8,
      17,     1,   193,     1,    -1,     1,    17,     1,   193,     1,
      -1,     8,    77,    40,   193,     9,    -1,     1,    77,    40,
     193,     9,    -1,     8,    77,     1,   193,     9,    -1,     8,
      77,    40,   193,     1,    -1,     1,    77,     1,   193,     9,
      -1,     1,    77,    40,   193,     1,    -1,     8,    77,     1,
     193,     1,    -1,     1,    77,     1,   193,     1,    -1,     8,
     193,     9,    -1,     1,   193,     9,    -1,     8,   193,     1,
      -1,     1,   193,     1,    -1,   193,    16,   193,    -1,   193,
      37,   193,    -1,   193,     1,   193,    -1,    38,   193,    -1,
       1,   193,    -1,   193,    49,   193,    -1,    50,   193,    -1,
      51,   193,    -1,    52,   193,    -1,    53,   193,    -1,    54,
     193,    -1,    55,   193,    -1,    56,   190,    -1,    57,   190,
      -1,    59,   191,    -1,    60,   192,    -1,    61,   192,    -1,
      62,   191,    -1,    63,   192,    -1,     1,   191,    -1,     1,
     192,    -1,    77,    -1,    77,    41,    33,    -1,    77,    41,
      32,    -1,    17,    41,    33,    -1,    17,    41,    32,    -1,
      77,    41,     1,    -1,    77,     1,    33,    -1,    77,     1,
      32,    -1,     1,    -1,    46,    -1,     1,    -1,     7,    46,
      -1,     1,    46,    -1,     7,     1,    -1,     1,    -1,   194,
     197,   195,    -1,   202,    42,    -1,    48,   207,    42,    -1,
      47,   203,    42,    -1,   202,     1,    -1,   207,     1,    -1,
     206,     1,    -1,   197,   202,    42,    -1,   197,    48,   207,
      42,    -1,   197,    47,   203,    42,    -1,   197,   202,     1,
      -1,   197,    48,   207,     1,    -1,     1,    -1,    12,    77,
      13,    -1,    12,    77,     1,    -1,     1,    77,    13,    -1,
       8,   202,    58,   202,     9,    -1,     1,   202,    58,   202,
       9,    -1,     8,   202,     1,   202,     9,    -1,     8,   202,
      58,   202,     1,    -1,     1,   202,     1,   202,     9,    -1,
       1,   202,    58,   202,     1,    -1,     8,   202,     1,   202,
       1,    -1,     1,   202,     1,   202,     1,    -1,     8,    77,
      40,   202,     9,    -1,     1,    77,    40,   202,     9,    -1,
       8,    77,     1,   202,     9,    -1,     8,    77,    40,   202,
       1,    -1,     1,    77,     1,   202,     9,    -1,     1,    77,
      40,   202,     1,    -1,     8,    77,     1,   202,     1,    -1,
       1,    77,     1,   202,     1,    -1,     8,    17,    40,   202,
       9,    -1,     1,    17,    40,   202,     9,    -1,     8,    17,
       1,   202,     9,    -1,     8,    17,    40,   202,     1,    -1,
       1,    17,     1,   202,     9,    -1,     1,    17,    40,   202,
       1,    -1,     8,    17,     1,   202,     1,    -1,     1,    17,
       1,   202,     1,    -1,     8,    77,    40,   202,     9,    -1,
       1,    77,    40,   202,     9,    -1,     8,    77,     1,   202,
       9,    -1,     8,    77,    40,   202,     1,    -1,     1,    77,
       1,   202,     9,    -1,     1,    77,    40,   202,     1,    -1,
       8,    77,     1,   202,     1,    -1,     1,    77,     1,   202,
       1,    -1,     8,   202,     9,    -1,     1,   202,     9,    -1,
       8,   202,     1,    -1,     1,   202,     1,    -1,   202,    16,
     202,    -1,   202,    37,   202,    -1,   202,     1,   202,    -1,
      38,   202,    -1,     1,   202,    -1,   202,    49,   202,    -1,
      50,   202,    -1,    51,   202,    -1,    52,   202,    -1,    53,
     202,    -1,    54,   202,    -1,    55,   202,    -1,    56,   199,
      -1,    57,   199,    -1,    59,   200,    -1,    60,   201,    -1,
      61,   201,    -1,    62,   200,    -1,    63,   201,    -1,     1,
     200,    -1,     1,   201,    -1,   198,    71,   202,    -1,   198,
      72,   202,    -1,   198,    73,   202,    -1,   198,     1,   202,
      -1,   198,   199,    -1,   210,    -1,     8,   203,     9,    -1,
       1,   203,     9,    -1,     8,   203,     1,    -1,     1,   203,
       1,    -1,   203,    16,   203,    -1,   203,    37,   203,    -1,
     203,     1,   203,    -1,    38,   203,    -1,   203,    49,   203,
      -1,    73,   203,    -1,    72,   203,    -1,    71,   203,    -1,
     203,    58,   203,    -1,   210,    -1,    59,   204,    -1,    60,
     205,    -1,    61,   205,    -1,    63,   205,    -1,     8,    77,
      40,   203,     9,    -1,     1,    77,    40,   203,     9,    -1,
       8,    77,     1,   203,     9,    -1,     8,    77,    40,   203,
       1,    -1,     1,    77,     1,   203,     9,    -1,     1,    77,
      40,   203,     1,    -1,     8,    77,     1,   203,     1,    -1,
       1,    77,     1,   203,     1,    -1,     8,    17,    40,   203,
       9,    -1,     1,    17,    40,   203,     9,    -1,     8,    17,
       1,   203,     9,    -1,     8,    17,    40,   203,     1,    -1,
       1,    17,     1,   203,     9,    -1,     1,    17,    40,   203,
       1,    -1,     8,    17,     1,   203,     1,    -1,     1,    17,
       1,   203,     1,    -1,     8,    77,    40,   203,     9,    -1,
       1,    77,    40,   203,     9,    -1,     8,    77,     1,   203,
       9,    -1,     8,    77,    40,   203,     1,    -1,     1,    77,
       1,   203,     9,    -1,     1,    77,    40,   203,     1,    -1,
       8,    77,     1,   203,     1,    -1,     1,    77,     1,   203,
       1,    -1,     8,   206,     9,    -1,     1,   206,     9,    -1,
       8,   206,     1,    -1,     1,   206,     1,    -1,   206,    16,
     206,    -1,   206,    37,   206,    -1,   206,     1,   206,    -1,
      38,   206,    -1,   206,    49,   206,    -1,   206,    16,   207,
      -1,   206,    37,   207,    -1,   206,    49,   207,    -1,   207,
      16,   206,    -1,   207,    37,   206,    -1,   207,    49,   206,
      -1,    73,   206,    -1,    72,   206,    -1,    71,   206,    -1,
     206,    58,   206,    -1,   207,    -1,     8,   207,     9,    -1,
       1,   207,     9,    -1,     8,   207,     1,    -1,     1,   206,
       1,    -1,   207,    16,   207,    -1,   207,    37,   207,    -1,
     207,     1,   207,    -1,    38,   207,    -1,     1,   207,    -1,
     207,    49,   207,    -1,    59,   208,    -1,    60,   209,    -1,
      61,   209,    -1,    63,   209,    -1,     1,   208,    -1,     1,
     209,    -1,    56,   206,    -1,    57,   206,    -1,   210,    -1,
       8,    77,    40,   207,     9,    -1,     1,    77,    40,   207,
       9,    -1,     8,    77,     1,   207,     9,    -1,     8,    77,
      40,   207,     1,    -1,     1,    77,     1,   207,     9,    -1,
       1,    77,    40,   207,     1,    -1,     8,    77,     1,   207,
       1,    -1,     1,    77,     1,   207,     1,    -1,     8,    17,
      40,   207,     9,    -1,     1,    17,    40,   207,     9,    -1,
       8,    17,     1,   207,     9,    -1,     8,    17,    40,   207,
       1,    -1,     1,    17,     1,   207,     9,    -1,     1,    17,
      40,   207,     1,    -1,     8,    17,     1,   207,     1,    -1,
       1,    17,     1,   207,     1,    -1,     8,    77,    40,   207,
       9,    -1,     1,    77,    40,   207,     9,    -1,     8,    77,
       1,   207,     9,    -1,     8,    77,    40,   207,     1,    -1,
       1,    77,     1,   207,     9,    -1,     1,    77,    40,   207,
       1,    -1,     8,    77,     1,   207,     1,    -1,     1,    77,
       1,   207,     1,    -1,    77,    -1,    77,    41,    33,    -1,
      77,    41,    32,    -1,    17,    41,    33,    -1,    17,    41,
      32,    -1,    77,    41,     1,    -1,    77,     1,    33,    -1,
      77,     1,    32,    -1,     1,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  mcmas_parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    13,    18,    20,    28,    35,
      42,    48,    55,    61,    67,    72,    75,    78,    81,    83,
      86,    89,    92,    94,   103,   111,   119,   126,   134,   141,
     148,   154,   156,   159,   162,   165,   167,   170,   173,   176,
     178,   182,   185,   188,   191,   195,   199,   201,   205,   209,
     213,   219,   225,   231,   237,   243,   248,   254,   259,   261,
     263,   267,   271,   273,   275,   278,   281,   283,   286,   289,
     292,   294,   297,   300,   303,   305,   309,   312,   314,   318,
     320,   323,   326,   329,   331,   334,   337,   340,   342,   346,
     349,   351,   355,   358,   360,   363,   366,   368,   371,   374,
     376,   379,   382,   385,   387,   390,   393,   396,   398,   402,
     405,   407,   410,   412,   417,   419,   423,   427,   431,   433,
     437,   441,   445,   447,   449,   452,   454,   456,   458,   461,
     464,   467,   469,   478,   486,   496,   505,   507,   511,   515,
     519,   523,   526,   529,   533,   535,   538,   541,   544,   546,
     550,   553,   555,   557,   561,   565,   567,   571,   575,   579,
     583,   586,   589,   593,   595,   598,   601,   604,   606,   610,
     613,   615,   619,   621,   623,   627,   631,   633,   636,   639,
     642,   644,   647,   650,   653,   655,   659,   664,   668,   671,
     673,   677,   682,   686,   688,   690,   693,   695,   697,   700,
     702,   705,   708,   711,   713,   716,   719,   722,   724,   729,
     731,   736,   738,   743,   748,   750,   754,   758,   760,   764,
     766,   768,   771,   773,   778,   783,   788,   793,   795,   799,
     803,   807,   811,   815,   819,   823,   826,   829,   833,   835,
     839,   843,   847,   851,   855,   859,   863,   866,   869,   873,
     875,   879,   883,   887,   889,   893,   897,   901,   903,   907,
     911,   915,   917,   921,   925,   929,   931,   935,   939,   941,
     944,   947,   949,   953,   957,   961,   963,   967,   971,   975,
     977,   981,   985,   987,   990,   993,   995,   999,  1003,  1007,
    1009,  1013,  1017,  1021,  1023,  1027,  1031,  1033,  1036,  1039,
    1041,  1045,  1049,  1053,  1055,  1059,  1063,  1067,  1069,  1073,
    1077,  1081,  1083,  1087,  1091,  1095,  1097,  1101,  1105,  1109,
    1111,  1115,  1119,  1123,  1125,  1129,  1133,  1137,  1139,  1143,
    1147,  1151,  1155,  1159,  1163,  1167,  1170,  1173,  1177,  1181,
    1185,  1189,  1192,  1198,  1204,  1210,  1216,  1221,  1226,  1232,
    1236,  1238,  1240,  1242,  1244,  1246,  1248,  1250,  1254,  1258,
    1262,  1266,  1270,  1274,  1278,  1281,  1284,  1288,  1292,  1296,
    1300,  1303,  1309,  1315,  1321,  1327,  1332,  1337,  1343,  1347,
    1353,  1359,  1365,  1370,  1375,  1381,  1385,  1387,  1389,  1391,
    1393,  1395,  1397,  1399,  1401,  1405,  1409,  1413,  1415,  1417,
    1419,  1423,  1427,  1431,  1435,  1439,  1441,  1443,  1445,  1447,
    1449,  1452,  1455,  1458,  1460,  1464,  1466,  1471,  1476,  1481,
    1486,  1492,  1498,  1504,  1510,  1512,  1516,  1520,  1524,  1528,
    1532,  1536,  1540,  1543,  1546,  1550,  1552,  1554,  1556,  1560,
    1564,  1568,  1572,  1575,  1578,  1582,  1584,  1588,  1590,  1594,
    1598,  1602,  1606,  1610,  1614,  1618,  1621,  1624,  1632,  1640,
    1648,  1654,  1660,  1666,  1672,  1680,  1686,  1692,  1698,  1704,
    1709,  1715,  1720,  1722,  1724,  1726,  1729,  1732,  1735,  1737,
    1741,  1744,  1746,  1749,  1752,  1755,  1757,  1760,  1763,  1766,
    1768,  1773,  1779,  1781,  1783,  1787,  1791,  1793,  1795,  1797,
    1799,  1801,  1803,  1806,  1809,  1812,  1814,  1817,  1821,  1824,
    1827,  1831,  1835,  1837,  1843,  1849,  1855,  1861,  1867,  1873,
    1879,  1885,  1891,  1897,  1903,  1909,  1915,  1921,  1927,  1933,
    1939,  1945,  1951,  1957,  1963,  1969,  1975,  1981,  1987,  1993,
    1999,  2005,  2011,  2017,  2023,  2029,  2033,  2037,  2041,  2045,
    2049,  2053,  2057,  2060,  2063,  2067,  2070,  2073,  2076,  2079,
    2082,  2085,  2088,  2091,  2094,  2097,  2100,  2103,  2106,  2109,
    2112,  2114,  2118,  2122,  2126,  2130,  2134,  2138,  2142,  2144,
    2146,  2148,  2151,  2154,  2157,  2159,  2163,  2166,  2170,  2174,
    2177,  2180,  2183,  2187,  2192,  2197,  2201,  2206,  2208,  2212,
    2216,  2220,  2226,  2232,  2238,  2244,  2250,  2256,  2262,  2268,
    2274,  2280,  2286,  2292,  2298,  2304,  2310,  2316,  2322,  2328,
    2334,  2340,  2346,  2352,  2358,  2364,  2370,  2376,  2382,  2388,
    2394,  2400,  2406,  2412,  2416,  2420,  2424,  2428,  2432,  2436,
    2440,  2443,  2446,  2450,  2453,  2456,  2459,  2462,  2465,  2468,
    2471,  2474,  2477,  2480,  2483,  2486,  2489,  2492,  2495,  2499,
    2503,  2507,  2511,  2514,  2516,  2520,  2524,  2528,  2532,  2536,
    2540,  2544,  2547,  2551,  2554,  2557,  2560,  2564,  2566,  2569,
    2572,  2575,  2578,  2584,  2590,  2596,  2602,  2608,  2614,  2620,
    2626,  2632,  2638,  2644,  2650,  2656,  2662,  2668,  2674,  2680,
    2686,  2692,  2698,  2704,  2710,  2716,  2722,  2726,  2730,  2734,
    2738,  2742,  2746,  2750,  2753,  2757,  2761,  2765,  2769,  2773,
    2777,  2781,  2784,  2787,  2790,  2794,  2796,  2800,  2804,  2808,
    2812,  2816,  2820,  2824,  2827,  2830,  2834,  2837,  2840,  2843,
    2846,  2849,  2852,  2855,  2858,  2860,  2866,  2872,  2878,  2884,
    2890,  2896,  2902,  2908,  2914,  2920,  2926,  2932,  2938,  2944,
    2950,  2956,  2962,  2968,  2974,  2980,  2986,  2992,  2998,  3004,
    3006,  3010,  3014,  3018,  3022,  3026,  3030,  3034
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  mcmas_parser::yyrline_[] =
  {
         0,   278,   278,   279,   282,   285,   288,   293,   294,   295,
     296,   297,   304,   311,   318,   328,   331,   335,   339,   343,
     346,   350,   354,   359,   366,   373,   380,   387,   394,   401,
     409,   417,   422,   425,   429,   433,   437,   440,   444,   448,
     452,   458,   466,   476,   481,   494,   500,   505,   518,   523,
     528,   544,   549,   554,   559,   572,   578,   584,   590,   594,
     602,   613,   619,   623,   626,   629,   633,   639,   642,   646,
     650,   654,   657,   661,   665,   669,   675,   683,   689,   695,
     701,   704,   708,   712,   716,   719,   723,   727,   732,   738,
     741,   746,   752,   755,   760,   763,   768,   773,   776,   781,
     788,   791,   795,   799,   803,   806,   810,   814,   818,   824,
     830,   837,   844,   848,   854,   858,   861,   870,   886,   891,
     894,   903,   919,   924,   930,   940,   944,   947,   951,   954,
     958,   962,   967,   981,   995,  1009,  1023,  1029,  1032,  1036,
    1040,  1044,  1048,  1052,  1056,  1060,  1063,  1067,  1071,  1075,
    1081,  1084,  1088,  1104,  1120,  1126,  1133,  1136,  1140,  1144,
    1148,  1152,  1156,  1160,  1164,  1167,  1171,  1175,  1179,  1185,
    1191,  1197,  1203,  1207,  1215,  1225,  1231,  1238,  1241,  1245,
    1249,  1253,  1256,  1260,  1264,  1269,  1275,  1283,  1291,  1297,
    1303,  1309,  1317,  1325,  1330,  1337,  1344,  1349,  1356,  1363,
    1368,  1371,  1375,  1379,  1383,  1386,  1390,  1394,  1398,  1404,
    1409,  1415,  1420,  1426,  1432,  1440,  1450,  1456,  1463,  1469,
    1473,  1480,  1487,  1492,  1498,  1504,  1510,  1516,  1521,  1524,
    1529,  1534,  1539,  1545,  1551,  1557,  1563,  1568,  1575,  1580,
    1583,  1588,  1593,  1598,  1604,  1610,  1616,  1622,  1627,  1634,
    1639,  1645,  1651,  1656,  1659,  1665,  1671,  1676,  1679,  1682,
    1687,  1692,  1696,  1702,  1708,  1713,  1716,  1722,  1727,  1730,
    1736,  1741,  1744,  1747,  1752,  1757,  1761,  1767,  1773,  1778,
    1781,  1787,  1792,  1795,  1801,  1806,  1809,  1812,  1817,  1822,
    1826,  1832,  1838,  1843,  1846,  1852,  1857,  1860,  1866,  1871,
    1874,  1877,  1882,  1887,  1891,  1897,  1903,  1908,  1911,  1917,
    1923,  1928,  1931,  1934,  1939,  1944,  1947,  1953,  1959,  1964,
    1967,  1973,  1979,  1984,  1987,  1990,  1995,  2000,  2006,  2009,
    2014,  2019,  2024,  2030,  2036,  2042,  2048,  2053,  2060,  2077,
    2082,  2087,  2092,  2132,  2138,  2144,  2150,  2156,  2162,  2168,
    2174,  2179,  2182,  2185,  2188,  2191,  2194,  2199,  2202,  2207,
    2212,  2217,  2223,  2229,  2235,  2241,  2246,  2253,  2270,  2275,
    2280,  2285,  2316,  2322,  2328,  2334,  2340,  2346,  2352,  2358,
    2375,  2380,  2385,  2390,  2395,  2400,  2405,  2411,  2414,  2424,
    2427,  2430,  2434,  2437,  2447,  2466,  2471,  2476,  2479,  2482,
    2492,  2524,  2530,  2549,  2554,  2559,  2563,  2566,  2576,  2581,
    2584,  2587,  2591,  2595,  2599,  2600,  2604,  2610,  2615,  2620,
    2625,  2633,  2638,  2643,  2648,  2652,  2655,  2660,  2665,  2670,
    2676,  2682,  2687,  2693,  2698,  2705,  2713,  2716,  2720,  2723,
    2727,  2731,  2735,  2739,  2743,  2747,  2751,  2755,  2759,  2762,
    2767,  2772,  2777,  2783,  2789,  2794,  2800,  2805,  2880,  2942,
    3004,  3048,  3055,  3062,  3069,  3117,  3148,  3154,  3160,  3166,
    3172,  3178,  3184,  3191,  3194,  3198,  3201,  3205,  3209,  3213,
    3214,  3215,  3219,  3222,  3226,  3230,  3234,  3237,  3241,  3245,
    3249,  3255,  3263,  3267,  3274,  3283,  3288,  3292,  3295,  3305,
    3312,  3315,  3319,  3322,  3326,  3330,  3334,  3335,  3337,  3341,
    3345,  3349,  3353,  3357,  3363,  3368,  3373,  3378,  3383,  3388,
    3393,  3398,  3411,  3417,  3423,  3429,  3435,  3441,  3447,  3453,
    3459,  3464,  3469,  3474,  3479,  3484,  3489,  3494,  3507,  3513,
    3519,  3525,  3531,  3537,  3543,  3550,  3553,  3558,  3563,  3568,
    3574,  3580,  3585,  3591,  3596,  3602,  3608,  3614,  3620,  3626,
    3632,  3638,  3646,  3654,  3663,  3673,  3683,  3693,  3703,  3709,
    3715,  3730,  3747,  3764,  3777,  3790,  3795,  3800,  3805,  3812,
    3815,  3819,  3822,  3826,  3830,  3834,  3836,  3841,  3846,  3851,
    3855,  3859,  3863,  3868,  3873,  3878,  3882,  3886,  3890,  3900,
    3905,  3910,  3916,  3921,  3926,  3931,  3936,  3941,  3946,  3951,
    3964,  3970,  3976,  3982,  3988,  3994,  4000,  4006,  4012,  4017,
    4022,  4027,  4032,  4037,  4042,  4047,  4060,  4066,  4072,  4078,
    4084,  4090,  4096,  4103,  4106,  4111,  4116,  4121,  4127,  4133,
    4138,  4144,  4149,  4155,  4161,  4167,  4173,  4179,  4185,  4191,
    4199,  4207,  4216,  4226,  4236,  4246,  4256,  4260,  4264,  4273,
    4282,  4291,  4296,  4311,  4316,  4319,  4324,  4329,  4334,  4340,
    4346,  4351,  4357,  4363,  4371,  4379,  4387,  4402,  4405,  4414,
    4424,  4434,  4445,  4458,  4464,  4470,  4476,  4482,  4488,  4494,
    4500,  4506,  4511,  4516,  4521,  4526,  4531,  4536,  4542,  4555,
    4561,  4567,  4573,  4579,  4585,  4591,  4599,  4602,  4607,  4612,
    4617,  4623,  4629,  4634,  4640,  4646,  4652,  4658,  4664,  4670,
    4676,  4682,  4690,  4698,  4706,  4721,  4726,  4729,  4734,  4739,
    4744,  4750,  4756,  4761,  4767,  4772,  4778,  4787,  4797,  4807,
    4817,  4821,  4825,  4831,  4837,  4841,  4854,  4860,  4866,  4872,
    4878,  4884,  4890,  4896,  4902,  4907,  4912,  4917,  4922,  4927,
    4932,  4938,  4951,  4957,  4963,  4969,  4975,  4981,  4987,  4994,
    5009,  5026,  5043,  5056,  5069,  5074,  5079,  5084
  };

  // Print the state stack on the debug stream.
  void
  mcmas_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  mcmas_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "), ";
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  mcmas_parser::token_number_type
  mcmas_parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int mcmas_parser::yyeof_ = 0;
  const int mcmas_parser::yylast_ = 10088;
  const int mcmas_parser::yynnts_ = 132;
  const int mcmas_parser::yyempty_ = -2;
  const int mcmas_parser::yyfinal_ = 16;
  const int mcmas_parser::yyterror_ = 1;
  const int mcmas_parser::yyerrcode_ = 256;
  const int mcmas_parser::yyntokens_ = 79;

  const unsigned int mcmas_parser::yyuser_token_number_max_ = 333;
  const mcmas_parser::token_number_type mcmas_parser::yyundef_token_ = 2;

} // namespace yy

#line 5089 "parser/nssis.yy"

void
yy::mcmas_parser::error (const yy::mcmas_parser::location_type& l,
                          const std::string& m)
{
  driver.error (l, m);
}

