
int FUN_00100530(ushort *param_1,ushort *param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  do {
    if (param_3 == 0) {
      return 0;
    }
    if ((*param_1 & 0xfc) != 0xd8) {
      sVar3 = 1;
      goto LAB_00100570;
    }
    sVar3 = 1;
    if (param_1[1] != 0) {
      sVar3 = 2;
    }
    uVar4 = (uint)*param_1;
    uVar1 = *param_2;
    if (*param_1 != uVar1) {
LAB_001005ac:
      iVar2 = (uVar4 & 0xff) - (uVar1 & 0xff);
      if (iVar2 == 0) {
        return (uint)*(byte *)((long)param_1 + 1) - (uint)*(byte *)((long)param_2 + 1);
      }
      return iVar2;
    }
    while (uVar4 != 0) {
      sVar3 = sVar3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (sVar3 == 0) break;
LAB_00100570:
      uVar4 = (uint)*param_1;
      uVar1 = *param_2;
      if (*param_1 != uVar1) goto LAB_001005ac;
    }
    param_3 = param_3 + -1;
  } while( true );
}

