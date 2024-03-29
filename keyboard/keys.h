#define HYPER(key)   LS(LC(LA(LG(key))))
#define MEH(key)     LS(LC(LA(key)))
#define GCA(key)     LG(LC(LA(key)))
#define GCS(key)     LG(LC(LS(key)))

//#define _TT_NEW      HYPER(N)

#define _ZOOM_OUT    LG(MINUS)
#define _ZOOM_IN     LG(EQUAL)
#define _LOCK        LG(LC(Q))

#define _SS_CLPBRD   LG(LC(LS(N4)))
#define _SS_TOOL     LG(LS(N5))

#define _OS_LIGHT    HYPER(RBKT)
#define _OS_DARK     HYPER(LBKT)

#define _BRGHT_UP    HYPER(SQT)
#define _BRGHT_DN    HYPER(SCLN)

#define _APP1        GCA(N1)
#define _APP2        GCA(N2)
#define _APP3        GCA(N3)
#define _LAST_APP    LG(TAB)
#define _NEXT_WIN    LG(GRAVE)
#define _TERM        LC(Q)
#define _FULL_SCREEN LC(LA(UP))

#define _PREV_TAB    LG(LS(LBKT))
#define _NEXT_TAB    LG(LS(RBKT))
//#define _PREV_TAB    LG(LA(LEFT))
//#define _NEXT_TAB    LG(LA(RIGHT))
#define _GO_BACK     LG(LBKT)
#define _GO_FRWD     LG(RBKT)


#define _CLPBRD_MGR  LG(LA(C))
#define _UNDO        LG(Z)
#define _CUT         LG(X)
#define _COPY        LG(C)
#define _PASTE       LG(V)

#define _SEARCH      GCA(S)
#define _NEW_TT      HYPER(N)
#define _BKMRKS      HYPER(B)
#define _PROJECTS    HYPER(P)
#define _LMB         HYPER(T)


