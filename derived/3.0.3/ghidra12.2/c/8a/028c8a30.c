
void FUN_028c8a30(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  plVar9 = (long *)param_1[1];
  if ((((plVar9 != (long *)0x0) && (param_1[2] != 0)) && ((long *)*param_1 != (long *)0x0)) &&
     (*(long *)*param_1 == 0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      plVar9 = malloc(0x98);
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x98,8);
    }
    puVar1 = PTR_DAT_04bc38c8;
    plVar12 = plVar9 + 1;
    *plVar12 = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    *plVar9 = (long)(puVar1 + 0x10);
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    puVar7 = PTR_FUN_04bc38b8;
    puVar1 = PTR_DAT_04bc38c0 + 0x10;
    *(undefined8 *)((long)plVar9 + 0x5e) = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0xffffffff;
    plVar9[0x11] = (long)puVar7;
    plVar9[0x12] = 0;
    plVar9[0xf] = (long)puVar1;
    plVar9[0x10] = (long)plVar12;
    *(long **)*param_1 = plVar9;
    lVar5 = param_1[3];
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    lVar6 = param_1[4];
    lVar4 = param_1[1];
    uVar2 = uVar3;
    if (9 < uVar3) {
      uVar2 = 0;
    }
    uVar8 = FUN_027b78b0(param_1[2],(&DAT_05573f48)[(int)uVar2]);
    lVar10 = FUN_027b7ad4(param_1[2],uVar8);
    iVar11 = *(int *)((long)plVar9 + 0x74);
    if (iVar11 == 0) {
      plVar9[0xd] = lVar10;
      *(int *)(plVar9 + 10) = (int)lVar5;
      *(uint *)((long)plVar9 + 0x54) = uVar3;
      *(int *)(plVar9 + 0xe) = (int)lVar6;
      plVar9[9] = lVar4;
      FUN_028b5ff0(plVar12);
      iVar11 = *(int *)((long)plVar9 + 0x74);
    }
    if (iVar11 == 2) {
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      return;
    }
    if (iVar11 == 3) {
      uVar8 = 1;
      goto LAB_028c8a70;
    }
    if (iVar11 == 4) {
      uVar8 = 2;
      goto LAB_028c8a70;
    }
  }
  uVar8 = 3;
LAB_028c8a70:
  *(undefined4 *)((long)param_1 + 0x24) = uVar8;
  return;
}

