
undefined8 FUN_02eb7fb8(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *__src;
  byte bVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  byte bVar15;
  undefined *puVar16;
  byte local_3c [4];
  long local_38;
  
  puVar16 = PTR_DAT_04bb27d0;
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if ((((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(int *)(lVar12 + 0x80) == 1)) &&
     ((lVar12 = *(long *)(*(long *)(lVar12 + 0x28) + 0x50), lVar12 != 0 &&
      (*(char *)(lVar12 + 0x4c) != '\0')))) {
LAB_02eb808c:
    puVar16 = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (puVar16 == &DAT_040cb98b) {
      return 1;
    }
    iVar11 = *(int *)(param_1 + 0x2ce30);
    __src = &DAT_040cb98b;
LAB_02eb80b4:
    iVar2 = 4;
    if (iVar11 < 5) {
      iVar2 = iVar11 + -1;
    }
    memcpy(puVar16,__src,(long)iVar2);
    puVar16[iVar2] = 0;
    return 1;
  }
  local_38 = 0;
  uVar8 = FUN_01df3070(&local_38);
  if (*(long *)(param_1 + 0x9660) != 0) {
    lVar12 = local_38;
    if ((uVar8 & 1) == 0) {
      lVar12 = 0;
    }
    if (lVar12 != *(long *)(param_1 + 0x9668)) {
      return 0;
    }
    puVar16 = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (puVar16 == &DAT_040e0b5c) {
      return 1;
    }
    iVar11 = *(int *)(param_1 + 0x2ce30);
    __src = &DAT_040e0b5c;
    goto LAB_02eb80b4;
  }
  local_3c[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  uVar8 = FUN_02669430(local_3c);
  if ((uVar8 & 1) != 0) goto LAB_02eb808c;
  *(undefined1 *)(param_1 + 0x2ce11) = 1;
  pbVar6 = PTR_DAT_04bc1220;
  plVar13 = *(long **)puVar16;
  if (((plVar13 != (long *)0x0) && (plVar13[5] != 0)) && ((int)plVar13[0x10] == 1)) {
    uVar9 = FUN_02659440();
    *(undefined8 *)(param_1 + 0x1370) = uVar9;
    uVar7 = FUN_02659360();
    *(undefined4 *)(param_1 + 0x139c) = uVar7;
    return 0;
  }
  lVar12 = *plVar13;
  bVar15 = *(byte *)(lVar12 + 0x473);
  puVar14 = (uint *)PTR_DAT_04bb32e0;
  if ((long)(char)bVar15 == 0xffffffffffffffff) {
    bVar15 = *PTR_DAT_04bc1220;
    bVar10 = bVar15;
LAB_02eb8188:
    puVar14 = (uint *)PTR_DAT_04bb5038;
    if (bVar10 != bVar15) {
      puVar14 = (uint *)PTR_DAT_04bb32e0;
    }
  }
  else {
    puVar1 = (uint *)(lVar12 + 0x48);
    puVar3 = puVar1 + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
    if (7 < bVar15) {
      puVar3 = puVar1;
    }
    pbVar4 = PTR_DAT_04bc1220;
    if ((*puVar3 & 8) != 0) {
      pbVar4 = (byte *)(lVar12 + 0x472);
    }
    bVar10 = *pbVar4;
    if ((*puVar3 >> 3 & 1) == 0) {
      bVar15 = *PTR_DAT_04bc1220;
      goto LAB_02eb8188;
    }
    if (bVar10 == 0xff) {
      bVar10 = 0xff;
    }
    else {
      puVar3 = puVar1 + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar3 = puVar1;
      }
      if ((*puVar3 & 1) != 0) {
        puVar14 = puVar3 + 0x1e;
      }
    }
  }
  bVar15 = (byte)*puVar14;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  *(byte *)(param_1 + 0x1368) = bVar15;
  puVar16 = PTR_DAT_04bbaed0;
  lVar12 = *plVar13;
  bVar15 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar15 == 0xffffffffffffffff) {
    if (bVar10 == *pbVar6) goto LAB_02eb8264;
LAB_02eb8298:
    uVar9 = 0;
  }
  else {
    puVar14 = (uint *)(lVar12 + 0x48);
    puVar1 = puVar14 + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
    if (7 < bVar15) {
      puVar1 = puVar14;
    }
    pbVar4 = pbVar6;
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar12 + 0x473);
    }
    if (bVar10 != *pbVar4) {
      uVar9 = 0;
      if (((*puVar1 >> 3 & 1) == 0) || (bVar10 == 0xff)) goto LAB_02eb829c;
      puVar1 = puVar14 + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = puVar14;
      }
      if (((byte)*puVar1 >> 3 & 1) == 0) goto LAB_02eb8298;
    }
LAB_02eb8264:
    puVar5 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)(uint)(int)(char)bVar10 * 6;
    if (7 < bVar10) {
      puVar5 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
    }
    uVar9 = *puVar5;
  }
LAB_02eb829c:
  *(undefined8 *)(param_1 + 0x1370) = uVar9;
  lVar12 = *plVar13;
  bVar15 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar15 == 0xffffffffffffffff) {
    if (bVar10 != *pbVar6) {
LAB_02eb8348:
      uVar9 = 0;
      goto LAB_02eb834c;
    }
  }
  else {
    puVar14 = (uint *)(lVar12 + 0x48);
    puVar1 = puVar14 + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
    if (7 < bVar15) {
      puVar1 = puVar14;
    }
    if ((*puVar1 & 8) != 0) {
      pbVar6 = (byte *)(lVar12 + 0x473);
    }
    if (bVar10 != *pbVar6) {
      uVar9 = 0;
      if (((*puVar1 >> 3 & 1) == 0) || (bVar10 == 0xff)) goto LAB_02eb834c;
      puVar1 = puVar14 + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = puVar14;
      }
      if (((byte)*puVar1 >> 3 & 1) == 0) goto LAB_02eb8348;
    }
  }
  lVar12 = *(long *)puVar16 + 0xd8 + (ulong)(uint)(int)(char)bVar10 * 0x30;
  if (7 < bVar10) {
    lVar12 = *(long *)puVar16 + 0xd8;
  }
  uVar9 = *(undefined8 *)(lVar12 + 8);
LAB_02eb834c:
  *(undefined8 *)(param_1 + 0x1378) = uVar9;
  return 0;
}

