
void FUN_001c4d1c(long *param_1,long param_2,undefined8 param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined8 local_70;
  undefined2 local_64 [2];
  
  *param_1 = (long)(PTR_DAT_04bcc310 + 0x10);
  FUN_001b8358(param_1 + 2,param_3);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar14 = PTR_DAT_04bcc678 + 0x10;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = (long)puVar14;
  param_1[1] = param_2;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  param_1[0x19] = (long)puVar8;
  param_1[0x1b] = (long)(puVar8 + 1);
  *puVar8 = 0;
  param_1[0x1a] = (long)(puVar8 + 1);
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  param_1[0x1c] = (long)puVar8;
  param_1[0x1e] = (long)(puVar8 + 1);
  uVar17 = *(uint *)(param_2 + 8);
  *puVar8 = 0;
  param_1[0x1d] = (long)(puVar8 + 1);
  puVar14 = PTR_DAT_04bcbb78;
  puVar5 = PTR_DAT_04bcb910;
  puVar4 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c4e2c:
    puVar13 = puVar14 + (ulong)uVar17 * 0x2a8 + 0x18;
  }
  else {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar9 == 0) goto LAB_001c4e2c;
    puVar13 = (undefined *)
              (*(long *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148);
  }
  FUN_001d6548(param_1 + 0x24,*(undefined4 *)(puVar13 + 0xdc));
  puVar13 = PTR_DAT_04bcc320;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar13 = puVar13 + 0x10;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x33] = 0;
  param_1[0x29] = (long)puVar13;
  param_1[0x2b] = (long)puVar13;
  param_1[0x2e] = (long)puVar13;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  param_1[0x37] = (long)puVar8;
  param_1[0x39] = (long)(puVar8 + 1);
  *puVar8 = 0;
  param_1[0x38] = (long)(puVar8 + 1);
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  puVar10 = (undefined1 *)FUN_00187df4(1);
  param_1[0x3a] = (long)puVar10;
  param_1[0x3c] = (long)(puVar10 + 1);
  *puVar10 = 0;
  param_1[0x3b] = (long)(puVar10 + 1);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  param_1[0x42] = 1;
  param_1[0x40] = (long)puVar8;
  param_1[0x41] = 1;
  *puVar8 = 0;
  FUN_0018a200(param_1 + 0x43,&DAT_04094803,1000,&DAT_0407ebb1);
  *(undefined4 *)(param_1 + 0x62) = 0;
  puVar13 = PTR_DAT_04bcc680;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = (long)(puVar13 + 0x10);
  FUN_001a6f1c(param_1 + 0x67);
  param_1[0x95] = 0;
  param_1[0x96] = (long)(param_1 + 0x97);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  (**(code **)(*param_1 + 0xa0))(param_1);
  *(undefined1 *)(param_1 + 0x66) = 0;
  lVar11 = FUN_00185a6c(0x30);
  if (lVar11 != 0) {
    FUN_001c3bc4(lVar11);
  }
  *(long *)param_1[0x19] = lVar11;
  lVar11 = FUN_00185a6c(0x68);
  if (lVar11 != 0) {
    uVar17 = *(uint *)(param_1[1] + 8);
    if (*puVar4 == '\0') {
LAB_001c4fd0:
      uVar16 = *(undefined2 *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0xd8);
      uVar17 = *(uint *)(param_1[1] + 8);
      if (*puVar4 == '\0') goto LAB_001c5014;
LAB_001c4ff0:
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      if (*puVar9 == 0) goto LAB_001c5014;
      puVar13 = (undefined *)
                (*(long *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148);
    }
    else {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      if (*puVar9 == 0) goto LAB_001c4fd0;
      uVar16 = *(undefined2 *)
                (*(long *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148 + 0xc0);
      uVar17 = *(uint *)(param_1[1] + 8);
      if (*puVar4 != '\0') goto LAB_001c4ff0;
LAB_001c5014:
      puVar13 = puVar14 + (ulong)uVar17 * 0x2a8 + 0x18;
    }
    FUN_001d658c(lVar11,uVar16,*(undefined8 *)(puVar13 + 200));
  }
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0;
  *(undefined1 *)((long)param_1 + 0x1eb) = param_5;
  *(long *)param_1[0x1c] = lVar11;
  param_1[0x2d] = param_4;
  param_1[0x1f] = 0;
  iVar7 = FUN_001b8fa0(param_3,&DAT_0410a6c4,0xffffffff);
  if (iVar7 == -1) {
    uVar17 = *(uint *)(param_1[1] + 8);
    if (*puVar4 == '\0') {
LAB_001c50e4:
      iVar7 = *(int *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x158);
      uVar15 = *(undefined4 *)(param_1[1] + 8);
    }
    else {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      if (*puVar9 == 0) goto LAB_001c50e4;
      iVar7 = *(int *)(*(long *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148 +
                      0x140);
      uVar15 = *(undefined4 *)(param_1[1] + 8);
    }
    if (iVar7 != 0) goto LAB_001c5084;
LAB_001c5100:
    plVar12 = (long *)FUN_00185a6c(0x118);
    if (plVar12 != (long *)0x0) {
      FUN_001d5acc(plVar12,uVar15);
    }
  }
  else {
    uVar15 = *(undefined4 *)(param_1[1] + 8);
    if (iVar7 == 0) goto LAB_001c5100;
LAB_001c5084:
    plVar12 = (long *)FUN_00185a6c(0x18);
    if (plVar12 != (long *)0x0) {
      FUN_001d5ed4(plVar12,uVar15);
    }
  }
  lVar11 = *plVar12;
  param_1[100] = (long)plVar12;
  local_64[0] = 0;
  (**(code **)(lVar11 + 0x10))(plVar12,(long)param_1 + 0x1ec,local_64);
  lVar11 = FUN_00185a6c(0x238);
  FUN_001d8a50(lVar11,param_1,0,0x40,0,0);
  uVar15 = *(undefined4 *)((long)param_1 + 0x1ec);
  param_1[0x20] = lVar11;
  *(undefined1 *)(lVar11 + 0x40) = param_5;
  *(int *)(lVar11 + 0x1e8) = iVar7;
  *(undefined4 *)(lVar11 + 0xd0) = uVar15;
  *(undefined1 *)(lVar11 + 0xa3) = (undefined1)local_64[0];
  *(undefined8 *)param_1[0x37] = 0;
  *(undefined1 *)param_1[0x3a] = 1;
  puVar13 = PTR_DAT_04bcc688;
  if (*puVar4 == '\0') {
LAB_001c51e0:
    if (puVar13[0x18] == '\0') goto LAB_001c51c0;
LAB_001c51ec:
    if (*puVar4 == '\0') {
LAB_001c5220:
      cVar6 = puVar13[0x18] + '\x01';
      if (*puVar4 == '\0') goto LAB_001c5298;
LAB_001c5234:
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      uVar17 = *puVar9;
      goto joined_r0x001c5240;
    }
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar9 == 0) goto LAB_001c5220;
    cVar6 = *(char *)(*(long *)(puVar13 + 0x10) + (ulong)*puVar9) + '\x01';
    if (*puVar4 != '\0') goto LAB_001c5234;
LAB_001c5298:
    puVar13[0x18] = cVar6;
    if (*puVar4 == '\0') goto LAB_001c52e8;
LAB_001c52a4:
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar9 == 0) goto LAB_001c52e8;
    if (*(char *)(*(long *)(puVar13 + 0x10) + (ulong)*puVar9) == '\0') goto LAB_001c52f4;
LAB_001c52c4:
    cVar6 = *puVar4;
joined_r0x001c5358:
    if (cVar6 == '\0') goto LAB_001c536c;
LAB_001c52cc:
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar9 == 0) goto LAB_001c536c;
    puVar10 = (undefined1 *)(*(long *)(puVar13 + 0x10) + (ulong)*puVar9);
  }
  else {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar9 == 0) goto LAB_001c51e0;
    if (*(char *)(*(long *)(puVar13 + 0x10) + (ulong)*puVar9) != '\0') goto LAB_001c51ec;
LAB_001c51c0:
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&local_70);
    }
    else {
      FUN_0018c9b0(&local_70,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = local_70;
    cVar6 = FUN_00189e50(0xff);
    cVar6 = cVar6 + (char)local_70;
    if (*puVar4 == '\0') goto LAB_001c5298;
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar17 = *puVar9;
joined_r0x001c5240:
    if (uVar17 == 0) goto LAB_001c5298;
    *(char *)(*(long *)(puVar13 + 0x10) + (ulong)uVar17) = cVar6;
    if (*puVar4 != '\0') goto LAB_001c52a4;
LAB_001c52e8:
    if (puVar13[0x18] != '\0') goto LAB_001c52c4;
LAB_001c52f4:
    if (*puVar4 == '\0') {
LAB_001c5328:
      cVar6 = puVar13[0x18];
      cVar2 = *puVar4;
    }
    else {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      if (*puVar9 == 0) goto LAB_001c5328;
      cVar6 = *(char *)(*(long *)(puVar13 + 0x10) + (ulong)*puVar9);
      cVar2 = *puVar4;
    }
    if (cVar2 != '\0') {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      if (*puVar9 == 0) goto LAB_001c5360;
      *(char *)(*(long *)(puVar13 + 0x10) + (ulong)*puVar9) = cVar6 + '\x01';
      cVar6 = *puVar4;
      goto joined_r0x001c5358;
    }
LAB_001c5360:
    puVar13[0x18] = cVar6 + '\x01';
    if (*puVar4 != '\0') goto LAB_001c52cc;
LAB_001c536c:
    puVar10 = puVar13 + 0x18;
  }
  uVar3 = *puVar10;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x1e9) = uVar3;
  uVar17 = *(uint *)(param_1[1] + 8);
  if (*puVar4 == '\0') {
LAB_001c53d4:
    *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0xd0)
    ;
    uVar17 = *(uint *)(param_1[1] + 8);
    cVar6 = *puVar4;
  }
  else {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar9 == 0) goto LAB_001c53d4;
    *(undefined4 *)((long)param_1 + 0x10c) =
         *(undefined4 *)
          (*(long *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148 + 0xb8);
    uVar17 = *(uint *)(param_1[1] + 8);
    cVar6 = *puVar4;
  }
  if (cVar6 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar9 != 0) {
      puVar14 = (undefined *)
                (*(long *)(puVar14 + (ulong)uVar17 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148);
      goto LAB_001c5428;
    }
  }
  puVar14 = puVar14 + (ulong)uVar17 * 0x2a8 + 0x18;
LAB_001c5428:
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(puVar14 + 0xb0);
  puVar14 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*puVar4 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar17 = *puVar9;
    if (uVar17 != 0) {
      lVar11 = **(long **)(puVar14 + 0xa0);
      if ((ulong)((*(long **)(puVar14 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar11 + (ulong)uVar17 * 8) + 0x10);
    }
  }
  plVar1 = (long *)(*(long *)(*plVar12 + 0x10) + 0x1b0);
  if (1 < iVar7 - 1U) {
    plVar1 = (long *)(*(long *)(*plVar12 + 0x10) + 0x1a8);
  }
  param_1[99] = *plVar1;
  lVar11 = (**(code **)(*(long *)param_1[100] + 0x20))();
  param_1[0x65] = lVar11;
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

