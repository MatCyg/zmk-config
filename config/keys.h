#define _UNDO       LG(Z)
#define _CUT        LG(X)
#define _COPY       LG(C)
#define _PASTE      LG(V)

#define HYPER(key)  LS(LC(LA(LG(key))))
#define MEH(key)    LS(LC(LA(key)))
#define HEM(key)    LG(LC(LA(key)))

#define GCS(key)    LG(LC(LS(key)))

//#define _TT_NEW     HYPER(N)


//function layer
#define _ZOOM_OUT   LG(MINUS)
#define _ZOOM_IN    LG(EQUAL)
#define _LOCK       LG(LC(Q))

#define _SS_CLIP    LG(LC(LS(Q)))
//#define _SS_TOOL    LG(LC(Q))
#define _TT_START   HYPER(H)
#define _TT_SHOW    HYPER(SCLN)


//adjust layer
#define _LAY_BAR    LG(MINUS)
#define _OS_DARK    LG(MINUS)
#define _OS_LIGHT   LG(EQUAL)
#define _TOG_DIACT  LG(EQUAL)


