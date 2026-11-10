
void FUN_00100260(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = ((long)PTR_DAT_04bb1e60 - (long)PTR_DAT_04bb1e58 >> 3) * -0x5555555555555555;
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  if (param_2 < uVar3) {
    plVar4 = (long *)(PTR_DAT_04bb1e58 + uVar3 * 0x18 + -8);
    uVar2 = param_2;
    do {
      uVar1 = DAT_04c57a00;
      if (*plVar4 == param_1) {
        (*(code *)plVar4[-2])(plVar4[-1],uVar2,DAT_04c57a00);
      }
      uVar3 = uVar3 - 1;
      FUN_00100260(param_1,uVar1,DAT_04c57a00);
      plVar4 = plVar4 + -3;
      uVar2 = extraout_x1;
    } while (param_2 < uVar3);
  }
  return;
}

