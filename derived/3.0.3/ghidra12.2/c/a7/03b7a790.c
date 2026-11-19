
void FUN_03b7a790(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar11 = PTR_DAT_04bd0ec0;
  puVar10 = PTR_DAT_04bd0eb8;
  puVar9 = PTR_DAT_04bd0eb0;
  puVar8 = PTR_DAT_04bd0ea8;
  puVar6 = PTR_DAT_04bb41a0;
  puVar5 = PTR_DAT_04bb2f80;
  *param_1 = (long)(PTR_DAT_04bd0d30 + 0x10);
  puVar7 = PTR_DAT_04bbd558;
  *(undefined2 *)(param_1 + 6) = 0x101;
  uVar15 = *(undefined4 *)puVar9;
  uVar17 = *(undefined4 *)puVar10;
  param_1[0x18] = 0x3f80000000000000;
  param_1[0x19] = -0x40ffffffc1000000;
  param_1[0x1a] = 0x3f000000bf000000;
  uVar4 = *(undefined4 *)puVar8;
  plVar13 = param_1 + 5;
  *plVar13 = (long)(puVar11 + 0x10);
  param_1[0x1b] = (long)(puVar6 + 0x10);
  lVar12 = *(long *)puVar5;
  lVar2 = *(long *)(puVar5 + 8);
  param_1[4] = 0;
  param_1[2] = (long)puVar5;
  param_1[3] = (long)puVar7;
  param_1[1] = (long)puVar5;
  lVar1 = *(long *)(puVar5 + 0x20);
  lVar3 = *(long *)(puVar5 + 0x28);
  param_1[0x22] = 0;
  plVar14 = param_1 + 0x1c;
  *plVar14 = lVar12;
  *(undefined4 *)(param_1 + 0x23) = 0x41200000;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x20] = lVar1;
  param_1[0x21] = lVar3;
  lVar12 = *(long *)(puVar5 + 0x10);
  lVar1 = *(long *)(puVar5 + 0x18);
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  param_1[0x1e] = lVar12;
  param_1[0x1f] = lVar1;
  *(undefined8 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x1d] = lVar2;
  *(undefined4 *)((long)param_1 + 0xb4) = uVar4;
  *(undefined4 *)(param_1 + 0x17) = uVar15;
  *(undefined4 *)((long)param_1 + 0xbc) = uVar17;
  lVar12 = *(long *)(param_2 + 8);
  param_1[0x18] = 0x447a00003dcccccd;
  *(undefined1 *)(param_1 + 6) = 1;
  fVar18 = *(float *)(lVar12 + 0x10);
  fVar16 = *(float *)(lVar12 + 0x14);
  fVar20 = *(float *)(lVar12 + 8);
  fVar19 = *(float *)(lVar12 + 0xc);
  *(undefined1 *)(param_1 + 6) = 1;
  fVar16 = fVar16 - fVar19;
  fVar18 = fVar18 - fVar20;
  *(float *)(param_1 + 0x19) = fVar16 * 0.5;
  *(float *)((long)param_1 + 0xcc) = -(fVar16 * 0.5);
  *(float *)(param_1 + 0x1a) = -(fVar18 * 0.5);
  *(float *)((long)param_1 + 0xd4) = fVar18 * 0.5;
  fVar16 = *(float *)(lVar12 + 0x10);
  fVar18 = *(float *)(lVar12 + 0x14);
  fVar19 = *(float *)(lVar12 + 8);
  fVar20 = *(float *)(lVar12 + 0xc);
  *(undefined4 *)(param_1 + 0x23) = 0x42c80000;
  *(float *)((long)param_1 + 0x114) = (fVar18 - fVar20) * -0.5;
  *(float *)(param_1 + 0x22) = (fVar16 - fVar19) * 0.5;
  fVar16 = *(float *)(lVar12 + 0x10);
  fVar18 = *(float *)(lVar12 + 0x14);
  fVar19 = *(float *)(lVar12 + 8);
  fVar20 = *(float *)(lVar12 + 0xc);
  *(undefined8 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x124) = 0xc2c80000;
  *(float *)((long)param_1 + 0x11c) = (fVar16 - fVar19) * 0.5;
  *(float *)(param_1 + 0x24) = (fVar18 - fVar20) * -0.5;
  FUN_038e4634(param_1 + 0x1b,plVar14);
  param_1[2] = (long)plVar14;
  if ((char)param_1[6] == '\0') {
    if (*(char *)((long)param_1 + 0x31) == '\0') goto LAB_03b7a98c;
  }
  else {
    (**(code **)(param_1[5] + 0x58))(plVar13,(long)param_1 + 0x34);
    *(undefined2 *)(param_1 + 6) = 0x100;
  }
  (**(code **)(param_1[5] + 0x60))
            (plVar13,(long)param_1 + 0x74,(long)param_1 + 0x34,*(undefined4 *)((long)param_1 + 0xb4)
            );
  *(undefined1 *)((long)param_1 + 0x31) = 0;
LAB_03b7a98c:
  param_1[1] = (long)puVar5;
  param_1[3] = (long)param_1 + 0x74;
  return;
}

