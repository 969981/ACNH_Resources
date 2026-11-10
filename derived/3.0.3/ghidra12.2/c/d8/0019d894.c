
void FUN_0019d894(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = 0;
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar5 = param_2[5];
  *param_1 = (long)&PTR_FUN_048397e0;
  if (lVar5 == param_2[2]) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    iVar1 = (int)lVar5 - (int)param_2[2];
    lVar2 = 0;
    lVar5 = 0;
    if (iVar1 != 0) {
      uVar4 = (ulong)iVar1;
      if (uVar4 < 0xb) {
        uVar4 = 10;
      }
      lVar2 = FUN_00187df4(uVar4);
      lVar3 = param_1[6];
      lVar5 = lVar2 + uVar4;
    }
    param_1[4] = lVar2 + lVar3;
    param_1[5] = lVar5;
    param_1[2] = lVar2;
    param_1[3] = lVar2 + lVar3;
  }
  if ((param_2 == param_1) || (lVar3 = param_2[3], lVar3 == 0)) {
    return;
  }
  lVar5 = 0;
  if (param_2[4] != lVar3) {
    lVar5 = (long)((int)param_2[4] - (int)lVar3);
  }
  FUN_0019da50(param_1,lVar3,lVar5);
  return;
}

