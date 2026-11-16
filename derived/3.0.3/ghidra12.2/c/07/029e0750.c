
void FUN_029e0750(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_80;
  byte *local_78;
  
  plVar8 = *(long **)(param_2 + 8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar10 = *plVar8;
  if (lVar10 == 0) {
    return;
  }
  if ((int)plVar8[1] != *(int *)(lVar10 + 0x10)) {
    return;
  }
  pcVar13 = *(char **)(*(long *)PTR_DAT_04bc3ee8 + 0x90);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = (byte *)0x407d54d;
  if ((*pcVar13 == '\0') || (lVar9 = *(long *)(pcVar13 + 0x198), lVar9 == 0)) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = 0xffffffff;
    local_80 = puVar1;
    do {
      (**(code **)(local_80 + 0x18))(&local_80);
      (**(code **)(local_80 + 0x18))(&local_80);
      pbVar3 = local_78;
      (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
      if (pbVar3 == *(byte **)(lVar9 + 0x28)) {
LAB_029e0860:
        uVar11 = *(uint *)(lVar9 + 0x30);
        break;
      }
      pbVar3 = *(byte **)(lVar9 + 0x28);
      pbVar5 = local_78;
      lVar7 = 0x7ffff;
      while( true ) {
        bVar2 = *pbVar5;
        if (bVar2 != *pbVar3) break;
        if ((bVar2 == 0) ||
           (bVar6 = lVar7 == 0, pbVar3 = pbVar3 + 1, pbVar5 = pbVar5 + 1, lVar7 = lVar7 + -1, bVar6)
           ) goto LAB_029e0860;
      }
      lVar7 = 8;
      if (*pbVar3 <= bVar2) {
        lVar7 = 0x10;
      }
      lVar9 = *(long *)(lVar9 + lVar7);
    } while (lVar9 != 0);
  }
  local_78 = (byte *)0x40bc25c;
  if ((*pcVar13 == '\0') || (lVar9 = *(long *)(pcVar13 + 0x198), lVar9 == 0)) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = 0xffffffff;
    local_80 = puVar1;
    do {
      (**(code **)(local_80 + 0x18))(&local_80);
      (**(code **)(local_80 + 0x18))(&local_80);
      pbVar3 = local_78;
      (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
      if (pbVar3 == *(byte **)(lVar9 + 0x28)) {
LAB_029e0914:
        uVar14 = *(uint *)(lVar9 + 0x30);
        break;
      }
      pbVar3 = *(byte **)(lVar9 + 0x28);
      pbVar5 = local_78;
      lVar7 = 0x7ffff;
      while( true ) {
        bVar2 = *pbVar5;
        if (bVar2 != *pbVar3) break;
        if ((bVar2 == 0) ||
           (bVar6 = lVar7 == 0, pbVar3 = pbVar3 + 1, pbVar5 = pbVar5 + 1, lVar7 = lVar7 + -1, bVar6)
           ) goto LAB_029e0914;
      }
      lVar7 = 8;
      if (*pbVar3 <= bVar2) {
        lVar7 = 0x10;
      }
      lVar9 = *(long *)(lVar9 + lVar7);
    } while (lVar9 != 0);
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = (byte *)0x40eac14;
  if ((*pcVar13 == '\0') || (lVar9 = *(long *)(pcVar13 + 0x198), lVar9 == 0)) {
    uVar12 = 0xffffffff;
    puVar4 = *(uint **)(lVar10 + 200);
  }
  else {
    uVar12 = 0xffffffff;
    do {
      (**(code **)(local_80 + 0x18))(&local_80);
      (**(code **)(local_80 + 0x18))(&local_80);
      pbVar3 = local_78;
      (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
      if (pbVar3 == *(byte **)(lVar9 + 0x28)) {
LAB_029e09f0:
        uVar12 = *(uint *)(lVar9 + 0x30);
        break;
      }
      pbVar3 = *(byte **)(lVar9 + 0x28);
      pbVar5 = local_78;
      lVar7 = 0x7ffff;
      while( true ) {
        bVar2 = *pbVar5;
        if (bVar2 != *pbVar3) break;
        if ((bVar2 == 0) ||
           (bVar6 = lVar7 == 0, pbVar3 = pbVar3 + 1, pbVar5 = pbVar5 + 1, lVar7 = lVar7 + -1, bVar6)
           ) goto LAB_029e09f0;
      }
      lVar7 = 8;
      if (*pbVar3 <= bVar2) {
        lVar7 = 0x10;
      }
      lVar9 = *(long *)(lVar9 + lVar7);
    } while (lVar9 != 0);
    puVar4 = *(uint **)(lVar10 + 200);
  }
  if (puVar4 == (uint *)0x0) {
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar23 = 0.0;
    fVar15 = 0.0;
    if (-1 < (int)uVar11) {
      if (*puVar4 <= uVar11) {
        uVar11 = 0;
      }
      fVar15 = *(float *)(*(long *)(puVar4 + 2) + (ulong)uVar11 * 4);
    }
    if (-1 < (int)uVar14) {
      if (*puVar4 <= uVar14) {
        uVar14 = 0;
      }
      fVar23 = *(float *)(*(long *)(puVar4 + 2) + (ulong)uVar14 * 4);
    }
    if ((int)uVar12 < 0) {
      fVar24 = 0.0;
    }
    else {
      if (*puVar4 <= uVar12) {
        uVar12 = 0;
      }
      fVar24 = *(float *)(*(long *)(puVar4 + 2) + (ulong)uVar12 * 4);
    }
  }
  uVar11 = *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0x89850);
  if (uVar11 != 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x89858);
    fVar19 = 0.0;
    fVar18 = 0.0;
    fVar20 = 0.0;
    bVar6 = false;
    fVar21 = 0.0;
    uVar14 = 0;
    fVar16 = 1.0;
    do {
      while (*(char *)(lVar10 + ((long)((ulong)uVar14 << 0x20) >> 0x1a) + 8) == '\0') {
        uVar14 = uVar14 + 1;
        if (uVar11 == uVar14) {
          fVar17 = fVar16;
          if (!bVar6) goto LAB_029e0b2c;
          goto LAB_029e0b10;
        }
      }
      lVar9 = (long)(int)uVar14;
      uVar14 = uVar14 + 1;
      lVar9 = lVar10 + lVar9 * 0x40;
      fVar22 = *(float *)(lVar9 + 4);
      fVar19 = fVar19 + fVar22;
      fVar21 = fVar21 + *(float *)(lVar9 + 0x14) * fVar22;
      fVar20 = fVar20 + *(float *)(lVar9 + 0x10) * fVar22;
      bVar6 = true;
      fVar18 = fVar18 + *(float *)(lVar9 + 0x18) * fVar22;
      fVar17 = 1.0 - fVar22;
      if (fVar16 <= 1.0 - fVar22) {
        fVar17 = fVar16;
      }
      fVar16 = fVar17;
    } while (uVar11 != uVar14);
LAB_029e0b10:
    fVar19 = fVar19 + fVar17;
    fVar15 = (fVar21 + fVar15 * fVar17) / fVar19;
    fVar23 = (fVar20 + fVar23 * fVar17) / fVar19;
    fVar24 = (fVar18 + fVar24 * fVar17) / fVar19;
  }
LAB_029e0b2c:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = (byte *)0x407d54d;
  local_80 = puVar1;
  FUN_03b3e860(fVar15,plVar8,&local_80);
  local_78 = (byte *)0x40bc25c;
  local_80 = puVar1;
  FUN_03b3e860(fVar23,plVar8,&local_80);
  local_78 = (byte *)0x40eac14;
  local_80 = puVar1;
  FUN_03b3e860(fVar24,plVar8,&local_80);
  return;
}

