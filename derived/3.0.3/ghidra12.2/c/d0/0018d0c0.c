
void FUN_0018d0c0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  *param_1 = (long)(PTR_DAT_04bcbe18 + 0x10);
  puVar3 = PTR_DAT_04bcbd48;
  if (*PTR_DAT_04bcbd48 != '\0') {
    plVar8 = param_1 + 6;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)param_1[4]) {
      do {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != (long *)param_1[4]);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  *puVar3 = 0;
  param_1[6] = (long)(PTR_DAT_04bcbc98 + 0x10);
  FUN_00187b50(param_1 + 0xc);
  FUN_0018885c(param_1 + 7);
  param_1[1] = (long)(PTR_DAT_04bcbe20 + 0x10);
  lVar4 = param_1[4];
  if (param_1[2] != lVar4) {
    lVar5 = param_1[5];
    lVar6 = param_1[2];
    do {
      lVar1 = *(long *)(lVar6 + 8);
      lVar2 = *(long *)(lVar6 + 0x10);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      *(undefined8 *)(lVar6 + 0x10) = 0;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
      *(undefined8 *)(lVar6 + 8) = 0;
      if (param_1[2] == lVar6) {
        param_1[2] = lVar1;
        lVar7 = param_1[3];
      }
      else {
        lVar7 = param_1[3];
      }
      if (lVar7 == lVar6) {
        param_1[3] = lVar2;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar1;
    } while (lVar1 != lVar4);
    param_1[5] = lVar5;
  }
  return;
}

