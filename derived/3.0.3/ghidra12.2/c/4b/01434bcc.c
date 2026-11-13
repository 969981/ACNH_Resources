
void FUN_01434bcc(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_1[0x50] == 1) {
    uVar1 = (**(code **)(*param_1 + 0x198))(param_1);
    if (3 < uVar1) {
      uVar2 = (**(code **)(*param_1 + 0x1b0))(param_1);
      if (((uVar2 & 1) == 0) || ((int)param_1[0x50] != 3)) {
        uVar4 = 3;
        uVar3 = 3;
        goto LAB_01434c8c;
      }
    }
  }
  else if (((int)param_1[0x50] == 0) &&
          (uVar1 = (**(code **)(*param_1 + 0x198))(param_1), 2 < uVar1)) {
    uVar2 = (**(code **)(*param_1 + 0x1b0))(param_1);
    if (((uVar2 & 1) == 0) || ((int)param_1[0x50] != 2)) {
      uVar4 = 2;
      uVar3 = 2;
LAB_01434c8c:
      FUN_03ebb160(param_1 + 0x4f,uVar3);
                    /* WARNING: Could not recover jumptable at 0x01434cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x218))(param_1,uVar4,0);
      return;
    }
  }
  return;
}

