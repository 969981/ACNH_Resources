
void FUN_003c6570(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  param_1[0x24] = param_2[2];
  uVar4 = *(uint *)(param_2 + 1);
  if (uVar4 == 0) {
    uVar4 = (**(code **)(*(long *)*param_2 + 0x20))();
    if (uVar4 < 0x80000000) goto LAB_003c6604;
  }
  else {
    iVar6 = 0;
    do {
      uVar1 = uVar4 & 1;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
      iVar6 = iVar6 + uVar1;
    } while (bVar2);
    iVar3 = (**(code **)(*(long *)*param_2 + 0x20))();
    if (iVar6 <= iVar3) {
LAB_003c6604:
      uVar4 = *(uint *)(param_2 + 1);
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          if (((uVar4 & 1) != 0) &&
             (lVar5 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_1),
             uVar7 < 0x10)) {
            param_1[uVar7 + 0x28] = lVar5;
            FUN_003bd9cc(lVar5,uVar7 & 0xffffffff);
          }
          uVar7 = uVar7 + 1;
          bVar2 = 1 < uVar4;
          uVar4 = uVar4 >> 1;
        } while (bVar2);
      }
      param_1[0x25] = *param_2;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003c65e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

