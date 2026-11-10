
undefined8 FUN_00171428(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x950);
  if ((int)(*(int *)(param_1 + 0x95c) - param_2) < iVar1 || (int)(param_2 ^ 0x7fffffff) < iVar1) {
    uVar2 = FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),3,0);
    return uVar2;
  }
  *(uint *)(param_1 + 0x950) = iVar1 + param_2;
  if (((*(byte *)(param_1 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0x9ac) == '\0')) {
    uVar2 = FUN_001686ac();
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_001717d8(param_1,0,0,*(undefined4 *)(param_1 + 0x950)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x950) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

