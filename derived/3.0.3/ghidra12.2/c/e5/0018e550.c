
void FUN_0018e550(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  *param_1 = (long)(PTR_DAT_04bcbe40 + 0x10);
  plVar6 = param_1 + 4;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  while (param_1[0xf] != 0) {
    plVar9 = (long *)param_1[0xd];
    plVar7 = (long *)plVar9[1];
    plVar8 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar8[2];
        bVar3 = (long *)*plVar5 != plVar8;
        plVar8 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar7;
        plVar7 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    param_1[0xd] = (long)plVar5;
    param_1[0xf] = param_1[0xf] + -1;
    FUN_00192390(param_1[0xe],plVar9);
    if (plVar9 != (long *)0x0) {
      plVar9 = plVar9 + -2;
      if ((code *)*plVar9 == (code *)0x0) {
        free(plVar9);
      }
      else {
        (*(code *)*plVar9)(plVar9);
      }
    }
  }
  (**(code **)(param_1[4] + 0x20))(plVar6);
  FUN_00192c88(param_1 + 0xd,param_1[0xe]);
  param_1[4] = (long)(PTR_DAT_04bcbc98 + 0x10);
  FUN_00187b50(param_1 + 10);
  FUN_0018885c(param_1 + 5);
  *param_1 = (long)&PTR_FUN_04838c68;
  lVar2 = DAT_04c58a60;
  if (DAT_04c58a00 == '\0') {
    return;
  }
  plVar8 = (long *)(DAT_04c58a60 + 0x30);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  plVar6 = *(long **)(lVar2 + 0x10);
  plVar7 = *(long **)(lVar2 + 0x20);
  if (plVar6 != plVar7) {
    lVar4 = *(long *)(lVar2 + 0x28);
    do {
      plVar9 = param_1;
      if (plVar6 != param_1) {
        plVar9 = plVar6;
        do {
          plVar9 = (long *)plVar9[1];
        } while (plVar9 != plVar7 && plVar9 != param_1);
      }
      if (plVar9 == plVar7) break;
      plVar6 = (long *)plVar9[1];
      lVar1 = plVar9[2];
      if (lVar1 != 0) {
        *(long **)(lVar1 + 8) = plVar6;
      }
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        plVar6[2] = lVar1;
      }
      plVar9[1] = 0;
      if (*(long **)(lVar2 + 0x10) == plVar9) {
        *(long **)(lVar2 + 0x10) = plVar6;
        plVar7 = *(long **)(lVar2 + 0x18);
      }
      else {
        plVar7 = *(long **)(lVar2 + 0x18);
      }
      if (plVar7 == plVar9) {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      plVar7 = *(long **)(lVar2 + 0x20);
      lVar4 = lVar4 + -1;
      *(long *)(lVar2 + 0x28) = lVar4;
    } while (plVar6 != plVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0018e740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

