
undefined8 FUN_00171584(long param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  if ((int)(*(int *)(param_2 + 0xcc) - param_3) < iVar1 || (int)(param_3 ^ 0x7fffffff) < iVar1) {
    uVar2 = FUN_0016cb78(param_1,*(undefined4 *)(param_2 + 0xb8),3);
    return uVar2;
  }
  *(uint *)(param_2 + 0xc0) = iVar1 + param_3;
  if (((param_4 == 0) || ((*(byte *)(param_1 + 0x99c) & 1) != 0)) ||
     (*(char *)(param_2 + 0xe7) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001686ac();
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_001717d8(param_1,0,*(undefined4 *)(param_2 + 0xb8),
                             *(undefined4 *)(param_2 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_2 + 0xc0) = 0;
    }
  }
  return uVar2;
}

