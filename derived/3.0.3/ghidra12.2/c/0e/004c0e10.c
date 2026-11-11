
void FUN_004c0e10(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0x1c) == 5) {
    uVar2 = FUN_00428440(param_3);
    if ((uVar2 & 0x1f) != 8) {
      param_3 = 0;
    }
    FUN_00426d90(param_3);
    iVar1 = FUN_00426fc0();
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar5 = 0;
      do {
        if (*(uint *)(param_2 + 0x1c) < 6 &&
            (1 << (ulong)(*(uint *)(param_2 + 0x1c) & 0x1f) & 0x32U) != 0) {
          uVar4 = *(undefined8 *)(param_2 + 0x10);
        }
        else {
          uVar4 = 0;
        }
        uVar3 = FUN_00426d90(param_3);
        FUN_004c0e10(param_1,uVar4,uVar3,param_4,param_5,param_6);
        iVar5 = iVar5 + 1;
        param_5 = param_5 + iVar1;
      } while (iVar5 < *(int *)(param_2 + 0x18));
    }
  }
  else if (*(int *)(param_2 + 0x1c) == 3) {
    FUN_004c0f40(*(undefined8 *)(param_2 + 0x10),param_4,param_5,param_6);
    return;
  }
  return;
}

