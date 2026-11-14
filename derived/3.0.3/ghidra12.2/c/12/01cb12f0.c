
void FUN_01cb12f0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_21;
  
  uVar3 = *(uint *)(param_1 + 0x2e);
  if (uVar3 != 0xffffffff) {
    if (uVar3 == 10) {
      if (param_2 != param_3) {
        FUN_01c68940(param_2,*param_3,param_3[1],param_3[1] - *param_3 >> 3);
      }
      *(char *)(param_2 + 3) = (char)param_3[3];
      (**(code **)(param_3[4] + 0x10))(param_3 + 4,param_2 + 4);
      *(char *)(param_2 + 8) = (char)param_3[8];
      return;
    }
    (*(code *)(&PTR_LAB_04a454c8)[uVar3])(&uStack_21,param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[2] = 0;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  lVar4 = lVar2 - lVar1;
  if (lVar4 != 0) {
    if (lVar4 < 0) {
      FUN_01c6892c(param_1);
                    /* WARNING: Does not return */
      pcVar5 = (code *)UndefinedInstructionException(0,0x1cb1438);
      (*pcVar5)();
    }
    lVar6 = FUN_00187df4();
    lVar7 = 0;
    param_1[2] = lVar6 + (lVar4 >> 3) * 8;
    *param_1 = lVar6;
    param_1[1] = lVar6;
    do {
      *(undefined8 *)(lVar6 + lVar7) = *(undefined8 *)(lVar1 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar1 + lVar7 != lVar2);
    param_1[1] = lVar6 + lVar7;
  }
  lVar1 = param_3[3];
  param_1[4] = (long)(PTR_DAT_04bc0f90 + 0x10);
  *(char *)(param_1 + 3) = (char)lVar1;
  (**(code **)(param_3[4] + 0x10))(param_3 + 4,param_1 + 4);
  *(char *)(param_1 + 8) = (char)param_3[8];
  *(undefined4 *)(param_1 + 0x2e) = 10;
  return;
}

