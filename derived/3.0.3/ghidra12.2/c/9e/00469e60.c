
undefined1  [16] FUN_00469e60(long *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((int)param_1[1] < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      iVar1 = strcmp(*(char **)(*param_1 + lVar3),param_2);
      if (iVar1 == 0) goto LAB_00469ec8;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while ((long)uVar2 < (long)(int)param_1[1]);
    uVar2 = 0xffffffff;
  }
LAB_00469ec8:
  auVar4._8_8_ = uVar2 & 0xffffffff;
  auVar4._0_8_ = param_1;
  return auVar4;
}

