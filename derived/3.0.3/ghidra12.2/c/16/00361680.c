
void FUN_00361680(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN_0036013c(param_2);
  param_1[9] = param_4;
  *(uint *)(param_1 + 10) = (uint)uVar1;
  if (uVar1 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_00360154(param_2);
      uVar3 = FUN_00367720(param_3,lVar2 + lVar4);
      *(undefined8 *)(param_1[9] + lVar5 * 8) = uVar3;
      (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(param_1[9] + lVar5 * 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x24;
    } while (lVar5 < (int)param_1[10]);
  }
                    /* WARNING: Could not recover jumptable at 0x00361740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}

