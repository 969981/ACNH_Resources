
undefined8 FUN_02b698e0(uint *param_1,int *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  while( true ) {
    piVar1 = (int *)(DAT_05636ea0 + (long)(int)(uVar5 * DAT_05636e98) * 4);
    if (DAT_05636e9c <= uVar5) {
      piVar1 = (int *)0x0;
    }
    iVar4 = 0;
    if (*piVar1 == param_3) break;
    lVar2 = DAT_05636ea0 + (long)(int)(uVar5 * DAT_05636e98) * 4;
    if (DAT_05636e9c <= uVar5) {
      lVar2 = 0;
    }
    iVar4 = 1;
    if (*(int *)(lVar2 + (long)(int)(uint)(1 < DAT_05636e98) * 4) == param_3) break;
    lVar2 = DAT_05636ea0 + (long)(int)(uVar5 * DAT_05636e98) * 4;
    if (DAT_05636e9c <= uVar5) {
      lVar2 = 0;
    }
    iVar4 = 2;
    iVar3 = iVar4;
    if (DAT_05636e98 < 3) {
      iVar3 = 0;
    }
    if (*(int *)(lVar2 + (long)iVar3 * 4) == param_3) break;
    lVar2 = DAT_05636ea0 + (long)(int)(uVar5 * DAT_05636e98) * 4;
    if (DAT_05636e9c <= uVar5) {
      lVar2 = 0;
    }
    iVar4 = 3;
    iVar3 = iVar4;
    if (DAT_05636e98 < 4) {
      iVar3 = 0;
    }
    if (*(int *)(lVar2 + (long)iVar3 * 4) == param_3) break;
    lVar2 = DAT_05636ea0 + (long)(int)(uVar5 * DAT_05636e98) * 4;
    if (DAT_05636e9c <= uVar5) {
      lVar2 = 0;
    }
    iVar4 = 4;
    iVar3 = iVar4;
    if (DAT_05636e98 < 5) {
      iVar3 = 0;
    }
    if (*(int *)(lVar2 + (long)iVar3 * 4) == param_3) break;
    lVar2 = DAT_05636ea0 + (long)(int)(uVar5 * DAT_05636e98) * 4;
    if (DAT_05636e9c <= uVar5) {
      lVar2 = 0;
    }
    iVar4 = 5;
    iVar3 = iVar4;
    if (DAT_05636e98 < 6) {
      iVar3 = 0;
    }
    if (*(int *)(lVar2 + (long)iVar3 * 4) == param_3) break;
    uVar6 = 8;
    if ((int)uVar5 < 8) {
      uVar6 = uVar5 + 1;
    }
    uVar5 = uVar6;
    if (uVar6 == 8) {
      return 0;
    }
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar5;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  return 1;
}

