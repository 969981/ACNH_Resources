
undefined8 FUN_0054e3e0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  case 0:
    if (param_1 == param_3) {
      return 1;
    }
    uVar3 = *param_1;
    iVar2 = *(int *)(param_1 + 1);
    break;
  case 1:
    if (param_1 + 2 == param_3) {
      return 1;
    }
    uVar3 = param_1[2];
    iVar2 = *(int *)(param_1 + 3);
    break;
  case 2:
    if (param_1 + 4 == param_3) {
      return 1;
    }
    uVar3 = param_1[4];
    iVar2 = *(int *)(param_1 + 5);
    break;
  case 3:
    if (param_1 + 6 == param_3) {
      return 1;
    }
    uVar3 = param_1[6];
    iVar2 = *(int *)(param_1 + 7);
    break;
  case 4:
    if (param_1 + 8 == param_3) {
      return 1;
    }
    uVar3 = param_1[8];
    iVar2 = *(int *)(param_1 + 9);
    break;
  default:
    return 0;
  }
  uVar1 = *param_3;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < iVar2) {
    uVar1 = FUN_004267f0(PTR_DAT_048607b8,iVar2,4,uVar1,*(undefined4 *)(param_3 + 1));
    *param_3 = uVar1;
  }
  FUN_0043aa30(uVar1,uVar3,(long)iVar2 << 2);
  *(int *)(param_3 + 1) = iVar2;
  return 1;
}

