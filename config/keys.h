#define HYPER(key)  LS(LC(LA(LG(key))))
#define MEH(key)    LS(LC(LA(key)))
#define GCA(key)    LG(LC(LA(key)))
#define GCS(key)    LG(LC(LS(key)))

//#define _TT_NEW     HYPER(N)


//function layer
#define _ZOOM_OUT   LG(MINUS)
#define _ZOOM_IN    LG(EQUAL)
#define _LOCK       LG(LC(Q))

#define _SS_CLIP    LG(LC(LS(N4)))
//#define _SS_TOOL    LG(LC(Q))
#define _TT_START   HYPER(H)
#define _TT_SHOW    HYPER(SCLN)


//adjust layer
#define _LAY_BAR    HYPER(BSLH)
#define _OS_LIGHT   HYPER(LBKT)
#define _OS_DARK    HYPER(RBKT)
#define _TOG_DIACT  HYPER(SQT)

//nav layer
#define _APP1       GCA(N1)
#define _APP2       GCA(N2)
#define _APP3       GCA(N3)
#define _LAST_APP   LG(TAB)
#define _NEXT_WIN   LG(GRAVE)

#define _PREV_TAB   LG(LS(LBKT))
#define _NEXT_TAB   LG(LS(RBKT))
#define _LMB        HYPER(T)
#define _TERM       LC(Q)

#define _UNDO       LG(Z)
#define _CUT        LG(X)
#define _COPY       LG(C)
#define _PASTE      LG(V)
#define _SEARCH     HYPER(S)


#define _NEW_TT     HYPER(N)
#define _BKMRKS     HYPER(B)
