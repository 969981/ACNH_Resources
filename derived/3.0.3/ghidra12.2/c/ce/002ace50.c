
void FUN_002ace50(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_002aaa28();
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  else {
    lVar3 = FUN_002aaa54(param_1);
    uVar2 = *(int *)(lVar3 + 8) - 0x30;
    uVar1 = *(uint *)(param_1 + 0xb);
    if (uVar2 <= *(uint *)(param_1 + 0xb)) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0xb) = uVar1 + *(int *)((long)param_1 + 0x54);
  }
  (**(code **)(*param_1 + 0x88))(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
                    /* WARNING: Could not recover jumptable at 0x002acecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}

