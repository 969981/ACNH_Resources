
void FUN_00514830(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  iVar6 = *(int *)(*(long *)(param_2 + 0x10) + 0x134);
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar10 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      if ((int)plVar5[-1] == iVar6) {
        if (*plVar5 != 0) {
          lVar10 = *(long *)(*plVar5 + 0x18);
          lVar12 = *(long *)(*(long *)(lVar7 + 0x60) + (long)iVar6 * 8);
          if (*(char *)(lVar7 + 0x90) == '\0') goto LAB_005148fc;
          goto LAB_005148cc;
        }
        break;
      }
      lVar10 = lVar10 + 1;
      plVar5 = plVar5 + 2;
    } while (lVar10 < *(int *)(param_1 + 0x90));
  }
  lVar10 = 0;
  lVar12 = *(long *)(*(long *)(lVar7 + 0x60) + (long)iVar6 * 8);
  if (*(char *)(lVar7 + 0x90) != '\0') {
LAB_005148cc:
    lVar7 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar7 != 0) {
      FUN_00443d90(lVar7,
                   "PdNOTE: Cloth Setup was executed at runtime. This may cause a performance spike."
                  );
    }
    lVar7 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar7 != 0) {
      FUN_00443dc0();
    }
  }
LAB_005148fc:
  *(undefined4 *)(param_2 + 0x24) = 0;
  plVar5 = (long *)(lVar12 + 0x30);
  if (lVar10 != 0) {
    plVar5 = (long *)(lVar10 + 0x28);
  }
  lVar7 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar7 != 0) {
    FUN_00443a00(lVar7,"TtDisplay Prepare");
  }
  if (0 < (int)plVar5[1]) {
    lVar10 = 0;
    lVar7 = 0;
    do {
      piVar1 = (int *)(*plVar5 + lVar10);
      iVar3 = *piVar1;
      iVar6 = piVar1[3];
      plVar11 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x20) + (long)iVar3 * 8);
      if (*(char *)(param_2 + 0x20) != '\0') {
        (**(code **)(*plVar11 + 0x30))(plVar11,piVar1 + 1);
      }
      if (iVar6 != iVar3) {
        lVar9 = plVar11[0x1a];
        lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x20) + (long)iVar6 * 8);
        *(int *)(plVar11 + 0x22) = iVar6;
        *(long *)(lVar8 + 0xd8) = plVar11[0x1b];
        *(long *)(lVar8 + 0xd0) = lVar9;
        lVar9 = plVar11[0x1c];
        *(long *)(lVar8 + 0xe8) = plVar11[0x1d];
        *(long *)(lVar8 + 0xe0) = lVar9;
        lVar9 = plVar11[0x1e];
        *(long *)(lVar8 + 0xf8) = plVar11[0x1f];
        *(long *)(lVar8 + 0xf0) = lVar9;
        lVar9 = plVar11[0x20];
        *(long *)(lVar8 + 0x108) = plVar11[0x21];
        *(long *)(lVar8 + 0x100) = lVar9;
        lVar9 = plVar11[0x12];
        *(long *)(lVar8 + 0x98) = plVar11[0x13];
        *(long *)(lVar8 + 0x90) = lVar9;
        lVar9 = plVar11[0x14];
        *(long *)(lVar8 + 0xa8) = plVar11[0x15];
        *(long *)(lVar8 + 0xa0) = lVar9;
        lVar9 = plVar11[0x16];
        *(long *)(lVar8 + 0xb8) = plVar11[0x17];
        *(long *)(lVar8 + 0xb0) = lVar9;
        lVar9 = plVar11[0x18];
        *(long *)(lVar8 + 200) = plVar11[0x19];
        *(long *)(lVar8 + 0xc0) = lVar9;
        if (*(int *)(lVar8 + 0x38) == 0) {
          lVar9 = plVar11[6];
          *(undefined8 *)(lVar8 + 0x36) = *(undefined8 *)((long)plVar11 + 0x36);
          *(long *)(lVar8 + 0x30) = lVar9;
          if (*(int *)(lVar8 + 0x20) == 0) goto LAB_00514960;
LAB_00514a60:
          if (*(int *)(lVar8 + 0x48) != 0) goto LAB_00514a68;
LAB_00514978:
          lVar9 = plVar11[8];
          lVar2 = plVar11[9];
          *(int *)(lVar8 + 0x50) = (int)plVar11[10];
          *(long *)(lVar8 + 0x40) = lVar9;
          *(long *)(lVar8 + 0x48) = lVar2;
          if (*(int *)(lVar8 + 0x60) == 0) goto LAB_00514990;
LAB_00514a70:
          iVar6 = *(int *)(lVar8 + 0x78);
        }
        else {
          if (*(int *)(lVar8 + 0x20) != 0) goto LAB_00514a60;
LAB_00514960:
          lVar9 = plVar11[3];
          lVar2 = plVar11[4];
          *(int *)(lVar8 + 0x28) = (int)plVar11[5];
          *(long *)(lVar8 + 0x18) = lVar9;
          *(long *)(lVar8 + 0x20) = lVar2;
          if (*(int *)(lVar8 + 0x48) == 0) goto LAB_00514978;
LAB_00514a68:
          if (*(int *)(lVar8 + 0x60) != 0) goto LAB_00514a70;
LAB_00514990:
          lVar9 = plVar11[0xb];
          lVar2 = plVar11[0xc];
          *(int *)(lVar8 + 0x68) = (int)plVar11[0xd];
          *(long *)(lVar8 + 0x58) = lVar9;
          *(long *)(lVar8 + 0x60) = lVar2;
          iVar6 = *(int *)(lVar8 + 0x78);
        }
        if (iVar6 == 0) {
          lVar9 = plVar11[0xe];
          lVar2 = plVar11[0xf];
          *(int *)(lVar8 + 0x80) = (int)plVar11[0x10];
          *(long *)(lVar8 + 0x70) = lVar9;
          *(long *)(lVar8 + 0x78) = lVar2;
        }
      }
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar7 < (int)plVar5[1]);
  }
  lVar7 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar7 != 0) {
    FUN_00443a70(lVar7,&DAT_04085310);
  }
  iVar6 = *(int *)(lVar12 + 0x48);
  if (0 < iVar6) {
    lVar10 = 0;
    lVar7 = 0;
    do {
      if (*(char *)(param_2 + 0x20) != '\0') {
        plVar5 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x30) +
                           (long)*(int *)(*(long *)(lVar12 + 0x40) + lVar10) * 8);
        (**(code **)(*plVar5 + 0x20))(plVar5,*(long *)(lVar12 + 0x40) + lVar10 + 8);
        iVar6 = *(int *)(lVar12 + 0x48);
      }
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0x20;
    } while (lVar7 < iVar6);
  }
  cVar4 = FUN_005126d0(*(undefined8 *)(param_2 + 8));
  if (cVar4 != '\0') {
    FUN_00514bd0(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  }
  lVar7 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar7 != 0) {
    FUN_00443a00(lVar7,"TtOperator Prepare");
  }
  if (0 < *(int *)(lVar12 + 0x28)) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) + 0x50) +
                         (long)*(int *)(*(long *)(lVar12 + 0x20) + lVar7 * 4) * 8);
      (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar12 + 0x28));
  }
  lVar7 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar7 == 0) {
    return;
  }
  FUN_00443a70(lVar7,&DAT_04085310);
  return;
}

