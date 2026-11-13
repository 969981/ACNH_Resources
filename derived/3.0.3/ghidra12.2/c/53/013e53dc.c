
bool FUN_013e53dc(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  
  puVar9 = PTR_DAT_04bb4798;
  puVar8 = PTR_DAT_04bb27d0;
  lVar12 = **(long **)PTR_DAT_04bb27d0;
  bVar17 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar17 == 0xffffffffffffffff) {
LAB_013e5418:
    bVar10 = true;
  }
  else {
    uVar15 = (long)(char)bVar17 & 0xffffffff;
    pbVar13 = (byte *)(lVar12 + 0x48) + uVar15 * 0x80;
    if (7 < bVar17) {
      pbVar13 = (byte *)(lVar12 + 0x48);
    }
    if ((*pbVar13 >> 3 & 1) == 0) goto LAB_013e5418;
    lVar16 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
    lVar4 = lVar16 + uVar15 * 0xc;
    if (0xb < bVar17) {
      lVar4 = lVar16;
    }
    bVar10 = *(char *)(lVar4 + 10) != '\0';
  }
  if (*(byte *)(lVar12 + 0x476) < 2) {
    return bVar10;
  }
  uVar6 = *(uint *)(param_1 + 0x2a0);
  lVar12 = *(long *)PTR_DAT_04bb4798;
  uVar3 = uVar6;
  if (*(uint *)(lVar12 + 0x18) <= uVar6) {
    uVar3 = 0;
  }
  lVar16 = *(long *)(lVar12 + 0x20) + (long)(int)uVar3 * 0x28;
  if (*(uint *)(lVar12 + 8) <= uVar6) {
    uVar6 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar6 * 0x10);
  uVar14 = *(undefined8 *)(lVar16 + 8);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar16 + 0x10);
  *puVar1 = uVar14;
  bVar17 = *(byte *)(lVar16 + 0x14);
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  *(byte *)((long)puVar1 + 0xc) = bVar17;
  bVar17 = *(byte *)(lVar16 + 0x15);
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  *(byte *)((long)puVar1 + 0xd) = bVar17;
  *(undefined2 *)((long)puVar1 + 0xe) = *(undefined2 *)(lVar16 + 0x16);
  lVar16 = (long)(int)*(uint *)(param_1 + 0x2a0);
  lVar12 = *(long *)(*(long *)puVar9 + 0x10);
  if (*(uint *)(*(long *)puVar9 + 8) <= *(uint *)(param_1 + 0x2a0) || lVar12 == 0) {
    lVar16 = 0;
  }
  lVar12 = lVar12 + lVar16 * 0x10;
  bVar17 = *(byte *)(lVar12 + 0xc);
  if (7 < bVar17) {
    return bVar10;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar13 = &DAT_0548e140;
LAB_013e5554:
    if (7 < *pbVar13) {
LAB_013e5560:
      if (*(long **)puVar8 != (long *)0x0) {
        lVar16 = **(long **)puVar8;
        bVar11 = *(byte *)(lVar16 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar5 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar5 = (uint *)(lVar16 + 0x48);
          }
          if ((*puVar5 & 8) != 0) {
            pbVar13 = (byte *)(lVar16 + 0x471);
          }
        }
        bVar11 = *pbVar13;
        if (bVar11 < 8) goto LAB_013e55c8;
      }
      pbVar13 = &DAT_0548e168;
    }
  }
  else {
    pbVar13 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar13 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar13 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_013e5554;
      }
      goto LAB_013e5560;
    }
  }
  bVar11 = *pbVar13;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
LAB_013e55c8:
  cVar7 = *(char *)(lVar12 + 0xf);
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  if (bVar17 == bVar11) {
    if (cVar7 == '\0') {
      bVar10 = true;
    }
    return bVar10;
  }
  bVar2 = false;
  if (cVar7 != '\0') {
    bVar2 = bVar10;
  }
  return bVar2;
}

