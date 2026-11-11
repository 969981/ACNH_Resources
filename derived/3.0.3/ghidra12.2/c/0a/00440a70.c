
void FUN_00440a70(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  if (*param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  uVar1 = FUN_004274f0(param_2[1]);
  lVar3 = param_2[1];
  if ((uVar1 >> 3 & 1) != 0) {
    lVar3 = *(long *)(lVar3 + 8);
  }
  FUN_0044e1c0(&local_38,param_2,lVar3);
  iVar2 = FUN_0044eea0(&local_38,param_2);
  if (-1 < iVar2) {
    *param_1 = local_38;
    param_1[1] = local_30;
    param_1[2] = local_28;
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((local_28 & 1) != 0) {
    FUN_0043dd50(local_28 & 0xfffffffffffffffe);
  }
  return;
}

