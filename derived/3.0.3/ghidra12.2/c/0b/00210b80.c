
undefined8 FUN_00210b80(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)&PTR_FUN_0483f048;
  FUN_0019d6e8(param_1 + 3,0xc);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = (long)(param_1 + 9);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_0019b310(param_1 + 3,param_1);
  FUN_0019c050();
  lVar4 = FUN_00185a6c(0x38);
  if (lVar4 != 0) {
    FUN_002107f0(lVar4);
  }
  param_1[2] = lVar4;
  plVar5 = (long *)FUN_00185a6c(0xe8);
  plVar5[0x1a] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[0x1c] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar7 = plVar5 + 0x1b;
  *plVar7 = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  FUN_001facb8(plVar5,0);
  puVar3 = PTR_DAT_04bccd70;
  *plVar7 = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1a] = (long)plVar7;
  param_1[7] = (long)plVar5;
  *plVar5 = (long)(puVar3 + 0x10);
  FUN_001fab4c(plVar5,8);
  puVar3 = PTR_DAT_04bcb900;
  lVar4 = param_1[7];
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar5 == 0) || (lVar8 = *(long *)(*plVar5 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar12 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  plVar7 = param_1 + 9;
  plVar5 = (long *)*plVar7;
  if (plVar5 == (long *)0x0) {
    plVar10 = plVar7;
  }
  else {
    plVar9 = plVar7;
    plVar10 = plVar5;
    do {
      plVar1 = plVar10;
      if (*(ushort *)(plVar10 + 4) < 0xe) {
        plVar1 = plVar9;
        plVar10 = plVar10 + 1;
      }
      plVar10 = (long *)*plVar10;
      plVar9 = plVar1;
    } while (plVar10 != (long *)0x0);
    if ((plVar1 != plVar7) && (*(ushort *)(plVar1 + 4) < 0xf)) {
      uVar11 = 0;
      goto LAB_00210e4c;
    }
    do {
      while (plVar7 = plVar5, 0xe < *(ushort *)(plVar7 + 4)) {
        plVar5 = (long *)*plVar7;
        plVar10 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_00210df4;
      }
      plVar5 = plVar7;
      if (0xd < *(ushort *)(plVar7 + 4)) goto LAB_00210e44;
      plVar5 = (long *)plVar7[1];
    } while ((long *)plVar7[1] != (long *)0x0);
    plVar10 = plVar7 + 1;
  }
LAB_00210df4:
  plVar5 = (long *)FUN_00187df4(0x30);
  plVar5[5] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar7;
  *plVar10 = (long)plVar5;
  lVar8 = *(long *)param_1[8];
  *(undefined2 *)(plVar5 + 4) = 0xe;
  plVar7 = plVar5;
  if (lVar8 != 0) {
    param_1[8] = lVar8;
    plVar7 = (long *)*plVar10;
  }
  FUN_03876250(param_1[9],plVar7);
  param_1[10] = param_1[10] + 1;
LAB_00210e44:
  plVar5[5] = lVar4;
  uVar11 = 1;
LAB_00210e4c:
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return uVar11;
}

