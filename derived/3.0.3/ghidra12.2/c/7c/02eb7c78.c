
undefined8 FUN_02eb7c78(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined *__src;
  byte bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined *puVar15;
  byte local_2c [4];
  long local_28;
  
  local_28 = 0;
  uVar7 = FUN_01df3070(&local_28);
  if (*(long *)(param_1 + 0x17d8) != 0) {
    lVar10 = local_28;
    if ((uVar7 & 1) == 0) {
      lVar10 = 0;
    }
    if (lVar10 != *(long *)(param_1 + 0x17e0)) {
      return 0;
    }
    puVar15 = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (puVar15 == &DAT_040e0b5c) {
      return 1;
    }
    iVar9 = *(int *)(param_1 + 0x2ce30);
    __src = &DAT_040e0b5c;
LAB_02eb7d34:
    iVar2 = 4;
    if (iVar9 < 5) {
      iVar2 = iVar9 + -1;
    }
    memcpy(puVar15,__src,(long)iVar2);
    puVar15[iVar2] = 0;
    return 1;
  }
  local_2c[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_2c[0]) {
    local_2c[0] = 0xff;
  }
  uVar7 = FUN_02669430(local_2c);
  if ((uVar7 & 1) != 0) {
    puVar15 = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (puVar15 == &DAT_0409d89e) {
      return 1;
    }
    iVar9 = *(int *)(param_1 + 0x2ce30);
    __src = &DAT_0409d89e;
    goto LAB_02eb7d34;
  }
  *(undefined1 *)(param_1 + 0x2ce11) = 1;
  pbVar6 = PTR_DAT_04bc1220;
  plVar11 = *(long **)PTR_DAT_04bb27d0;
  lVar10 = *plVar11;
  bVar13 = *(byte *)(lVar10 + 0x473);
  puVar12 = (uint *)PTR_DAT_04bb32e0;
  if ((long)(char)bVar13 == 0xffffffffffffffff) {
    bVar13 = *PTR_DAT_04bc1220;
    bVar8 = bVar13;
LAB_02eb7ddc:
    puVar12 = (uint *)PTR_DAT_04bb5038;
    if (bVar8 != bVar13) {
      puVar12 = (uint *)PTR_DAT_04bb32e0;
    }
  }
  else {
    puVar1 = (uint *)(lVar10 + 0x48);
    puVar3 = puVar1 + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
    if (7 < bVar13) {
      puVar3 = puVar1;
    }
    pbVar4 = PTR_DAT_04bc1220;
    if ((*puVar3 & 8) != 0) {
      pbVar4 = (byte *)(lVar10 + 0x472);
    }
    bVar8 = *pbVar4;
    if ((*puVar3 >> 3 & 1) == 0) {
      bVar13 = *PTR_DAT_04bc1220;
      goto LAB_02eb7ddc;
    }
    if (bVar8 == 0xff) {
      bVar8 = 0xff;
    }
    else {
      puVar3 = puVar1 + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar3 = puVar1;
      }
      if ((*puVar3 & 1) != 0) {
        puVar12 = puVar3 + 0x1e;
      }
    }
  }
  bVar13 = (byte)*puVar12;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  *(byte *)(param_1 + 0x1368) = bVar13;
  puVar15 = PTR_DAT_04bbaed0;
  lVar10 = *plVar11;
  bVar13 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar13 == 0xffffffffffffffff) {
    if (bVar8 == *pbVar6) goto LAB_02eb7eb8;
LAB_02eb7eec:
    uVar14 = 0;
  }
  else {
    puVar12 = (uint *)(lVar10 + 0x48);
    puVar1 = puVar12 + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
    if (7 < bVar13) {
      puVar1 = puVar12;
    }
    pbVar4 = pbVar6;
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar10 + 0x473);
    }
    if (bVar8 != *pbVar4) {
      uVar14 = 0;
      if (((*puVar1 >> 3 & 1) == 0) || (bVar8 == 0xff)) goto LAB_02eb7ef0;
      puVar1 = puVar12 + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar1 = puVar12;
      }
      if (((byte)*puVar1 >> 3 & 1) == 0) goto LAB_02eb7eec;
    }
LAB_02eb7eb8:
    puVar5 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)(uint)(int)(char)bVar8 * 6;
    if (7 < bVar8) {
      puVar5 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
    }
    uVar14 = *puVar5;
  }
LAB_02eb7ef0:
  *(undefined8 *)(param_1 + 0x1370) = uVar14;
  lVar10 = *plVar11;
  bVar13 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar13 == 0xffffffffffffffff) {
    if (bVar8 != *pbVar6) {
LAB_02eb7f9c:
      uVar14 = 0;
      goto LAB_02eb7fa0;
    }
  }
  else {
    puVar12 = (uint *)(lVar10 + 0x48);
    puVar1 = puVar12 + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
    if (7 < bVar13) {
      puVar1 = puVar12;
    }
    if ((*puVar1 & 8) != 0) {
      pbVar6 = (byte *)(lVar10 + 0x473);
    }
    if (bVar8 != *pbVar6) {
      uVar14 = 0;
      if (((*puVar1 >> 3 & 1) == 0) || (bVar8 == 0xff)) goto LAB_02eb7fa0;
      puVar1 = puVar12 + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar1 = puVar12;
      }
      if (((byte)*puVar1 >> 3 & 1) == 0) goto LAB_02eb7f9c;
    }
  }
  lVar10 = *(long *)puVar15 + 0xd8 + (ulong)(uint)(int)(char)bVar8 * 0x30;
  if (7 < bVar8) {
    lVar10 = *(long *)puVar15 + 0xd8;
  }
  uVar14 = *(undefined8 *)(lVar10 + 8);
LAB_02eb7fa0:
  *(undefined8 *)(param_1 + 0x1378) = uVar14;
  return 0;
}

