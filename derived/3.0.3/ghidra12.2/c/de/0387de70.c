
void FUN_0387de70(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_4 - 1 < 10) {
    uVar2 = *(undefined4 *)(&DAT_041993d8 + (long)(int)(param_4 - 1) * 4);
  }
  else {
    uVar2 = 1;
  }
  if (((*(int *)(param_1 + 0x24) < 2) &&
      ((*(int *)(param_1 + 0x24) < 1 || (1 < *(int *)(param_1 + 0x24))))) ||
     ((*(int *)(param_1 + 0x24) < 2 &&
      ((param_4 < 0xb && ((1 << (ulong)(param_4 & 0x1f) & 0x53eU) != 0)))))) {
    uVar3 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(uint *)(param_1 + 0x38) = param_4;
    *(undefined4 *)(param_1 + 0x3c) = param_5;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  return;
}

