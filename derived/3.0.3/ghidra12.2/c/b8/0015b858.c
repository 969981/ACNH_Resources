
ulong FUN_0015b858(undefined8 param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_2 < 10) {
    if (param_2 == 2) {
      uVar4 = FUN_00144b34(&DAT_040d2120,param_1,2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (param_4 != 0) {
        pcVar3 = param_3 + param_4;
        while( true ) {
          while (*param_3 == ' ' || *param_3 == '\t') {
            param_3 = param_3 + 1;
            if (param_3 == pcVar3) {
              return 1;
            }
          }
          if ((ulong)((long)pcVar3 - (long)param_3) < 8) break;
          iVar2 = FUN_00144b34("trailers",param_3,8);
          if (iVar2 != 0) {
            param_3 = param_3 + 8;
            if (param_3 == pcVar3) {
              return 2;
            }
            while ((cVar1 = *param_3, cVar1 == '\t' || (cVar1 == ' '))) {
              param_3 = param_3 + 1;
              if (param_3 == pcVar3) {
                return 2;
              }
            }
            if (cVar1 == ',') {
              return 2;
            }
          }
          if (param_3 == pcVar3) {
            return 1;
          }
          while (pcVar6 = param_3 + 1, *param_3 != ',') {
            param_3 = pcVar6;
            if (pcVar6 == pcVar3) {
              return 1;
            }
          }
          param_3 = param_3 + 1;
          if (pcVar6 == pcVar3) {
            return 1;
          }
        }
      }
      return 1;
    }
    if (param_2 != 7) {
      return 0;
    }
    pcVar3 = "upgrade";
    uVar5 = 7;
  }
  else if (param_2 == 10) {
    iVar2 = FUN_00144b34("connection",param_1,10);
    if (iVar2 != 0) {
      return 1;
    }
    pcVar3 = "keep-alive";
    uVar5 = 10;
  }
  else if (param_2 == 0x10) {
    pcVar3 = "proxy-connection";
    uVar5 = 0x10;
  }
  else {
    if (param_2 != 0x11) {
      return 0;
    }
    pcVar3 = "transfer-encoding";
    uVar5 = 0x11;
  }
  iVar2 = FUN_00144b34(pcVar3,param_1,uVar5);
  return (ulong)(iVar2 != 0);
}

