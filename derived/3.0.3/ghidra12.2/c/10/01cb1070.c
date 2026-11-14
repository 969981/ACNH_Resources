
void FUN_01cb1070(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_1 + 0x2e);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 7) {
      if (param_2 != param_3) {
        FUN_01c68940(param_2,*param_3,param_3[1],param_3[1] - *param_3 >> 3);
      }
      param_2[3] = param_3[3];
      (**(code **)(param_3[4] + 0x10))(param_3 + 4,param_2 + 4);
      *(char *)(param_2 + 8) = (char)param_3[8];
      return;
    }
    (*(code *)(&PTR_LAB_04a454c8)[uVar2])(&uStack_21,param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[2] = 0;
  lVar7 = *param_3;
  lVar1 = param_3[1];
  lVar3 = lVar1 - lVar7;
  if (lVar3 != 0) {
    if (lVar3 < 0) {
      FUN_01c6892c(param_1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x1cb11b8);
      (*pcVar4)();
    }
    lVar5 = FUN_00187df4();
    lVar6 = 0;
    param_1[2] = lVar5 + (lVar3 >> 3) * 8;
    *param_1 = lVar5;
    param_1[1] = lVar5;
    do {
      *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar7 + lVar6);
      lVar6 = lVar6 + 8;
    } while (lVar7 + lVar6 != lVar1);
    param_1[1] = lVar5 + lVar6;
  }
  lVar7 = param_3[3];
  param_1[4] = (long)(PTR_DAT_04bc0f90 + 0x10);
  param_1[3] = lVar7;
  (**(code **)(param_3[4] + 0x10))(param_3 + 4,param_1 + 4);
  *(char *)(param_1 + 8) = (char)param_3[8];
  *(undefined4 *)(param_1 + 0x2e) = 7;
  return;
}

