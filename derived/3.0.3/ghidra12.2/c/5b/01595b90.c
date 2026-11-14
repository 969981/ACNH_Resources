
void FUN_01595b90(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  char cVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  int iVar37;
  bool bVar38;
  bool bVar39;
  long lVar40;
  uint uVar41;
  undefined8 uVar42;
  undefined4 *puVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_78;
  undefined4 local_6c;
  int local_64;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  cVar18 = *(char *)(param_1 + 0xc);
  lVar40 = *(long *)PTR_DAT_04bb26a8;
  if (cVar18 == '\0') {
    puVar43 = (undefined4 *)(lVar40 + 0xa6b90);
    local_98 = *puVar43;
    uVar19 = *(undefined1 *)(lVar40 + 0xa6b94);
    local_64 = *(int *)(lVar40 + 0xa6b98);
    local_84 = *(int *)(lVar40 + 0xa6ba0);
    local_a0 = *(int *)(lVar40 + 0xa6b9c);
    fVar47 = *(float *)(lVar40 + 0xa6ba4);
    fVar48 = *(float *)(lVar40 + 0xa6bb8);
    fVar49 = *(float *)(lVar40 + 0xa6bc8);
    local_88 = *(int *)(lVar40 + 0xa6ba8);
    local_78 = *(undefined4 *)(lVar40 + 0xa6bac);
    local_a4 = *(undefined4 *)(lVar40 + 0xa6bb0);
    local_8c = *(int *)(lVar40 + 0xa6bb4);
    local_90 = *(int *)(lVar40 + 0xa6bbc);
    local_a8 = *(undefined4 *)(lVar40 + 0xa6bc0);
    local_94 = *(int *)(lVar40 + 0xa6bc4);
    local_6c = *(undefined4 *)(lVar40 + 0xa6c04);
    uVar41 = 0x6c07;
  }
  else {
    puVar43 = (undefined4 *)(lVar40 + 0xa7418);
    local_98 = *puVar43;
    uVar19 = *(undefined1 *)(lVar40 + 0xa741c);
    local_64 = *(int *)(lVar40 + 0xa7420);
    local_84 = *(int *)(lVar40 + 0xa7428);
    local_a0 = *(int *)(lVar40 + 0xa7424);
    fVar47 = *(float *)(lVar40 + 0xa742c);
    fVar48 = *(float *)(lVar40 + 0xa7440);
    fVar49 = *(float *)(lVar40 + 0xa7450);
    local_88 = *(int *)(lVar40 + 0xa7430);
    local_78 = *(undefined4 *)(lVar40 + 0xa7434);
    local_a4 = *(undefined4 *)(lVar40 + 0xa7438);
    local_8c = *(int *)(lVar40 + 0xa743c);
    local_90 = *(int *)(lVar40 + 0xa7444);
    local_a8 = *(undefined4 *)(lVar40 + 0xa7448);
    local_94 = *(int *)(lVar40 + 0xa744c);
    local_6c = *(undefined4 *)(lVar40 + 0xa748c);
    uVar41 = 0x748f;
  }
  iVar1 = puVar43[0x13];
  uVar2 = puVar43[0x14];
  iVar3 = puVar43[0xf];
  uVar17 = *(undefined4 *)(lVar40 + (ulong)(uVar41 | 0xa0000));
  uVar4 = puVar43[0x1a];
  iVar5 = puVar43[0x15];
  iVar6 = puVar43[0x10];
  local_6c._3_1_ = (undefined1)uVar17;
  uVar7 = puVar43[0x1b];
  uVar20 = *(undefined1 *)((long)puVar43 + 0x82);
  iVar8 = puVar43[0x16];
  uVar9 = puVar43[0x25];
  uVar51 = puVar43[0x11];
  fVar50 = (float)puVar43[0x12];
  uVar42 = *(undefined8 *)(puVar43 + 0x18);
  fVar52 = (float)puVar43[0x17];
  uVar10 = puVar43[0x1f];
  uVar21 = *(undefined1 *)((long)puVar43 + 0x91);
  uVar22 = *(undefined1 *)(puVar43 + 0x26);
  uVar11 = puVar43[0x1c];
  uVar23 = *(undefined1 *)((long)puVar43 + 0x99);
  uVar12 = puVar43[0x27];
  uVar13 = puVar43[0x21];
  uVar24 = *(undefined1 *)(puVar43 + 0x22);
  uVar25 = *(undefined1 *)((long)puVar43 + 0x89);
  uVar26 = *(undefined1 *)((long)puVar43 + 0x93);
  uVar27 = *(undefined1 *)(puVar43 + 0x20);
  uVar28 = *(undefined1 *)((long)puVar43 + 0x81);
  uVar29 = *(undefined1 *)((long)puVar43 + 0x8a);
  uVar14 = puVar43[0x23];
  uVar30 = *(undefined1 *)(puVar43 + 0x24);
  uVar31 = *(undefined1 *)((long)puVar43 + 0x92);
  uVar32 = *(undefined1 *)((long)puVar43 + 0x9a);
  uVar33 = *(undefined1 *)((long)puVar43 + 0x9b);
  uVar34 = *(undefined1 *)((long)puVar43 + 0x8b);
  uVar35 = *(undefined1 *)((long)puVar43 + 0x83);
  uVar36 = *(undefined1 *)((long)puVar43 + 0x7b);
  iVar15 = *(int *)(param_1 + 0x10);
  switch(*(int *)(param_1 + 0x18)) {
  case 0:
    iVar44 = *(int *)(param_1 + 0x50);
    iVar46 = local_8c;
    iVar45 = local_88;
    fVar53 = fVar48;
    break;
  case 1:
    iVar44 = *(int *)(param_1 + 100);
    iVar46 = local_94;
    iVar45 = local_90;
    fVar53 = fVar49;
    break;
  case 2:
    iVar44 = *(int *)(param_1 + 0x84);
    if (iVar1 == -1) {
      iVar44 = -1;
    }
    iVar46 = iVar8;
    iVar45 = iVar1;
    fVar53 = fVar52;
    break;
  case 3:
    iVar44 = *(int *)(param_1 + 0x40);
    iVar46 = local_84;
    iVar45 = local_64;
    fVar53 = fVar47;
    break;
  default:
    iVar44 = 0;
    iVar46 = 0;
    iVar45 = 0;
    fVar53 = 0.0;
  }
  bVar38 = iVar46 <= iVar15;
  if (cVar18 != '\0') {
    bVar38 = iVar45 != iVar44;
  }
  if (bVar38) {
    iVar44 = 0;
  }
  else {
    if (iVar45 - *(int *)(param_1 + 0x20) < 2) {
      bVar39 = false;
      bVar38 = true;
      *(undefined1 *)(param_1 + 10) = 0;
      goto LAB_01595efc;
    }
    iVar44 = -1;
  }
  if ((cVar18 == '\0') && (iVar45 == *(int *)(param_1 + 0x20))) {
    bVar39 = false;
  }
  else {
    iVar46 = *(int *)(param_1 + 0x1c) + 1;
    iVar16 = *(int *)(param_1 + 0x14);
    bVar39 = *(int *)(param_1 + 0x1c) == 0;
    iVar37 = 0;
    if (iVar16 != 0) {
      iVar37 = iVar46 / iVar16;
    }
    *(int *)(param_1 + 0x1c) = iVar46 - iVar37 * iVar16;
    *(undefined4 *)(param_1 + 0x34) = local_78;
  }
  bVar38 = false;
  *(bool *)(param_1 + 10) = bVar39;
  *(int *)(param_1 + 0x20) = iVar44 + iVar45;
LAB_01595efc:
  if (cVar18 != '\0') {
    bVar38 = true;
  }
  if (!bVar38) {
    fVar53 = 0.0;
  }
  *(float *)(param_1 + 0x30) = fVar53;
  if (1 < *(int *)(param_1 + 0x14)) {
    fVar53 = (fVar53 + (float)*(int *)(param_1 + 0x1c)) / (float)*(int *)(param_1 + 0x14);
    *(float *)(param_1 + 0x30) = fVar53;
  }
  if ((((*(int *)(param_1 + 0x18) == 1) && (*(char *)(param_1 + 0xb) != '\0')) && (iVar3 == 2)) &&
     (iVar6 == 4)) {
    *(float *)(param_1 + 0x30) = fVar53 * 0.5;
  }
  iVar46 = iVar1;
  iVar44 = local_64;
  if (cVar18 == '\0') {
    if (local_84 <= iVar15 && -1 < local_84) {
      iVar44 = local_a0;
    }
    if (iVar8 <= iVar15 && -1 < iVar8) {
      iVar46 = iVar5;
    }
  }
  *(int *)(param_1 + 0x28) = iVar44;
  *(int *)(param_1 + 0x2c) = iVar46;
  fVar53 = 1.0;
  if ((!bVar39) && (*(char *)(param_1 + 9) != '\0')) {
    iVar15 = *(int *)(param_1 + 0x5c);
    if (local_88 != *(int *)(param_1 + 0x50)) {
      iVar15 = *(int *)(param_1 + 0x5c) + 0xe;
    }
    fVar54 = (float)(iVar15 - local_8c);
    fVar53 = -fVar54;
    if (-1 < iVar15 - local_8c) {
      fVar53 = fVar54;
    }
  }
  *(int *)(param_1 + 0x40) = local_64;
  *(int *)(param_1 + 0x44) = local_a0;
  *(undefined1 *)(param_1 + 0xc9) = uVar21;
  *(int *)(param_1 + 0x48) = local_84;
  *(undefined1 *)(param_1 + 0xb9) = uVar28;
  *(undefined1 *)(param_1 + 0xba) = uVar20;
  *(undefined1 *)(param_1 + 0xc3) = uVar34;
  *(int *)(param_1 + 0x50) = local_88;
  *(undefined4 *)(param_1 + 0x54) = local_78;
  *(undefined4 *)(param_1 + 0x38) = local_98;
  *(undefined4 *)(param_1 + 0xcc) = uVar9;
  *(undefined4 *)(param_1 + 0xc4) = uVar14;
  *(undefined1 *)(param_1 + 200) = uVar30;
  *(undefined4 *)(param_1 + 0x58) = local_a4;
  *(int *)(param_1 + 0x5c) = local_8c;
  *(undefined1 *)(param_1 + 0x3c) = uVar19;
  *(undefined1 *)(param_1 + 0xd0) = uVar22;
  *(undefined1 *)(param_1 + 0xcb) = uVar26;
  *(undefined1 *)(param_1 + 0xd1) = uVar23;
  *(undefined1 *)(param_1 + 0xd2) = uVar32;
  *(int *)(param_1 + 100) = local_90;
  *(undefined4 *)(param_1 + 0xd4) = uVar12;
  *(float *)(param_1 + 0x24) = fVar50 * fVar53;
  *(float *)(param_1 + 0x4c) = fVar47;
  *(float *)(param_1 + 0x60) = fVar48;
  *(float *)(param_1 + 0x70) = fVar49;
  *(undefined4 *)(param_1 + 0x7c) = uVar51;
  *(float *)(param_1 + 0x80) = fVar50;
  *(float *)(param_1 + 0x94) = fVar52;
  *(undefined4 *)(param_1 + 0x68) = local_a8;
  *(undefined1 *)(param_1 + 0xb3) = uVar36;
  *(undefined4 *)(param_1 + 0xb4) = uVar10;
  *(undefined1 *)(param_1 + 0xb8) = uVar27;
  *(undefined1 *)(param_1 + 0xbb) = uVar35;
  *(undefined4 *)(param_1 + 0xbc) = uVar13;
  *(undefined1 *)(param_1 + 0xc0) = uVar24;
  *(undefined1 *)(param_1 + 0xc1) = uVar25;
  *(undefined1 *)(param_1 + 0xc2) = uVar29;
  *(undefined1 *)(param_1 + 0xca) = uVar31;
  *(undefined1 *)(param_1 + 0xd3) = uVar33;
  *(int *)(param_1 + 0x6c) = local_94;
  *(undefined1 *)(param_1 + 9) = 1;
  *(int *)(param_1 + 0x74) = iVar3;
  *(int *)(param_1 + 0x78) = iVar6;
  *(int *)(param_1 + 0x84) = iVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(int *)(param_1 + 0x8c) = iVar5;
  *(int *)(param_1 + 0x90) = iVar8;
  *(undefined8 *)(param_1 + 0x98) = uVar42;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar11;
  *(undefined4 *)(param_1 + 0xac) = local_6c;
  *(undefined4 *)(param_1 + 0xaf) = uVar17;
  return;
}

