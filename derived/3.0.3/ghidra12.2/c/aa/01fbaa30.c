
void FUN_01fbaa30(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  
  lVar13 = param_1[3];
  plVar2 = param_1 + 0x1619;
  *(undefined4 *)(param_1 + 0x15f1) = 1;
  uVar11 = FUN_02085a50(lVar13,1,0);
  if ((uVar11 & 1) != 0) {
    *(undefined1 *)(lVar13 + 0x801) = 1;
    lVar14 = lVar13 + 0x10 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar13 + 0x294)) {
      lVar14 = lVar13 + 0x10;
    }
    *(undefined8 *)(lVar14 + 0xc) = 0;
    *(undefined4 *)(lVar14 + 0x14) = 0;
  }
  plVar3 = param_1 + 0x197d;
  param_1[0x15ab] = param_1[0x15ab] & 0xfffffffbffffffff;
  uVar6 = *(uint *)(param_1 + 0x15f6);
  uVar4 = uVar6 & 0xffbf7fe0;
  if ((uVar6 & 0x400) != 0) {
    uVar4 = uVar6 & 0xffbf73e0 | 0x800;
  }
  *(uint *)(param_1 + 0x15f6) = uVar4;
  local_70 = 8;
  *(ushort *)((long)param_1 + 0x11b7c) = *(ushort *)((long)param_1 + 0x11b7c) | 0x1c7;
  uVar10 = DAT_053e0cf8;
  *(undefined4 *)((long)param_1 + 0xaa34) = DAT_053e0cf4;
  uVar9 = DAT_053e0cec;
  uVar8 = DAT_053e0ce4;
  *(undefined4 *)(param_1 + 0x1547) = uVar10;
  uVar10 = DAT_053e0cfc;
  *(undefined8 *)((long)param_1 + 0xaa24) = uVar8;
  *(undefined8 *)((long)param_1 + 0xaa2c) = uVar9;
  *(undefined4 *)((long)param_1 + 0xaa3c) = uVar10;
  *(undefined4 *)(param_1 + 0x1548) = DAT_053e0d00;
  puVar7 = PTR_DAT_04bb37e0;
  if ((uVar4 >> 9 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x23f9) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)param_1 + 0x11fca) = puVar7[2];
    *(undefined *)((long)param_1 + 0x11fcb) = puVar7[3];
    *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)(puVar7 + 4);
  }
  FUN_021e67f0(&local_70,param_1[1] + 0x3e0);
  *(undefined4 *)((long)param_1 + 0xae84) = local_70;
  *(undefined4 *)(param_1 + 0x15d1) = uStack_6c;
  puVar7 = PTR_DAT_04bbc1a0;
  if (0 < (int)*plVar2) {
    lVar13 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      plVar12 = *(long **)(param_1[0x161a] + lVar13 * 8);
      lVar13 = lVar13 + 1;
      plVar12[0xf] = (long)puVar1;
      *plVar12 = param_1[0x161b];
      param_1[0x161b] = (long)plVar12;
    } while (lVar13 < (int)*plVar2);
  }
  *(int *)plVar2 = 0;
  if (0 < (int)*plVar3) {
    lVar13 = 0;
    do {
      plVar12 = *(long **)(param_1[0x197e] + lVar13 * 8);
      lVar13 = lVar13 + 1;
      plVar12[0xf] = (long)(puVar7 + 0x10);
      *plVar12 = param_1[0x197f];
      param_1[0x197f] = (long)plVar12;
    } while (lVar13 < (int)*plVar3);
  }
  *(int *)plVar3 = 0;
  *(undefined1 *)((long)param_1 + 0xe724) = 0;
  param_1[0x1ce1] = 0;
  param_1[0x1ce2] = 0;
  param_1[0x1ce3] = 0;
  if (*(int *)((long)param_1 + 0xaf8c) == 0xc) {
    lVar14 = param_1[3];
    local_70 = 0;
    local_64 = *(undefined4 *)(lVar14 + 0x294);
    *(undefined4 *)(lVar14 + 0x294) = 0;
    lVar13 = param_1[3];
    uVar11 = FUN_02085a50(lVar13,1,0);
    uVar10 = local_64;
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(lVar13 + 0x801) = 1;
      lVar5 = lVar13 + 0x10 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar13 + 0x294)) {
        lVar5 = lVar13 + 0x10;
      }
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined4 *)(lVar5 + 0x14) = 0;
    }
    local_70 = 0;
    local_64 = 0;
    *(undefined4 *)(lVar14 + 0x294) = uVar10;
    param_1[0x1613] = 0;
    *(undefined4 *)((long)param_1 + 0x1203c) = 0x708;
    *(undefined4 *)(param_1 + 0x2477) = 2;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,&local_70,&local_64,PTR_DAT_04bc1600,6);
  }
  else if (*(int *)((long)param_1 + 0xaf8c) == 2) {
    FUN_01f9c378(param_1,0,0);
  }
  (**(code **)(*param_1 + 0x628))(param_1);
  if (0 < (int)*plVar2) {
    FUN_02192850(param_1 + 0x1617,0,0);
  }
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xfffff7ff;
  return;
}

