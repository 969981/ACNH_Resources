
void FUN_00373d90(long *param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_0036013c(param_2);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = FUN_00360154(param_2);
      uVar3 = FUN_00367720(param_4,lVar2 + lVar4);
      (**(code **)(*param_1 + 0x58))(param_1,uVar3);
      lVar4 = lVar4 + 0x24;
    } while (((ulong)uVar1 + (ulong)uVar1 * 8) * 4 != lVar4);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  param_1[0xb] = param_3;
  param_1[0xc] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00373e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}

