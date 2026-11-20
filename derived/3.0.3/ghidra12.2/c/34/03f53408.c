
void FUN_03f53408(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  ushort uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  if ((*(char *)(param_1 + 0x402) != '\x02') || (iVar5 = *(int *)(param_1 + 0x40e), iVar5 == -1)) {
    return;
  }
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x40e) = iVar5 + -1;
    return;
  }
  iVar5 = *(int *)(param_1 + 0x40a);
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x40a) = iVar5 + -0x400;
    if (iVar5 + -0x400 != 0 && 0x3ff < iVar5) {
      return;
    }
    if ((*(short *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a) == 0) &&
       (*(char *)(param_1 + 0x409) == '\0')) {
      *(undefined4 *)(param_1 + 0x40a) = 0;
      FUN_03f53540(param_1);
      iVar5 = *(int *)(param_1 + 0x40a);
      *(int *)(param_1 + 0x40a) = iVar5 + -0x1dc000;
      if (0x1dc000 < iVar5) {
        *(undefined1 *)(param_1 + 0x409) = 0xff;
        return;
      }
    }
    *(char *)(param_1 + 0x402) = '\0';
    *(undefined4 *)(param_1 + 0x40a) = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0x2054) != '\0') {
    *(undefined1 *)((long)param_1 + 0x2054) = 0;
    *(undefined4 *)(param_1 + 0x40a) = 0x8b4;
    return;
  }
  *(undefined2 *)((long)param_1 + 0x207a) =
       *(undefined2 *)
        (param_1[0x408] +
        ((ulong)*(ushort *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
         << 9 | (ulong)*(byte *)(param_1 + 0x409) << 1));
  FUN_03f53fb4(param_1);
  if (*(int *)((long)param_1 + 0x2074) != 0) {
    *(int *)((long)param_1 + 0x2074) = *(int *)((long)param_1 + 0x2074) + -1;
    return;
  }
  switch(*(ushort *)((long)param_1 + 0x207a) >> 4 & 0xff0) {
  default:
    return;
  case 0x40:
  case 0x50:
  case 0x60:
  case 0x70:
    return;
  case 0x80:
    *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
    return;
  case 0x90:
    *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
    return;
  case 0xa0:
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4e8a0;
    }
    uVar11 = (undefined1)*(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4e934;
        goto LAB_03f4e918;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4e918:
        uVar14 = 0;
        goto LAB_03f4e91c;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4e934:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4e8a0:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4e91c:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    return;
  case 0xb0:
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4e960;
    }
    uVar11 = (undefined1)*(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4e9f4;
        goto LAB_03f4e9d8;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4e9d8:
        uVar14 = 0;
        goto LAB_03f4e9dc;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4e9f4:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4e960:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4e9dc:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    return;
  case 0xc0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
    }
    return;
  case 0xd0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) != 0) {
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
    }
    return;
  case 0xe0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) == 0) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4ea60;
    }
    uVar8 = *(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4eae4;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4eae4;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4eac4;
      if ((bVar7 & 1) != 0) goto LAB_03f4eaec;
LAB_03f4ead0:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4ead0;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4eaec:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4ea60:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4eac4:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4eae4:
    *(char *)(param_1 + 0x409) = (char)uVar8;
    return;
  case 0xf0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) == 0) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4eb20;
    }
    uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4eba4;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4eba4;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4eb84;
      if ((bVar7 & 1) != 0) goto LAB_03f4ebac;
LAB_03f4eb90:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4eb90;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4ebac:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4eb20:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4eb84:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4eba4:
    *(char *)(param_1 + 0x409) = (char)uVar4;
    return;
  case 0x100:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
    }
    return;
  case 0x110:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) != 0) {
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
    }
    return;
  case 0x120:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) == 0) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4ec18;
    }
    uVar8 = *(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4ec9c;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4ec9c;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4ec7c;
      if ((bVar7 & 1) != 0) goto LAB_03f4eca4;
LAB_03f4ec88:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4ec88;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4eca4:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4ec18:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4ec7c:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4ec9c:
    *(char *)(param_1 + 0x409) = (char)uVar8;
    return;
  case 0x130:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) == 0) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4ecd8;
    }
    uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4ed5c;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4ed5c;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4ed3c;
      if ((bVar7 & 1) != 0) goto LAB_03f4ed64;
LAB_03f4ed48:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4ed48;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4ed64:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4ecd8:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4ed3c:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4ed5c:
    *(char *)(param_1 + 0x409) = (char)uVar4;
    return;
  case 0x140:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
    }
    return;
  case 0x150:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) != 0) {
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
    }
    return;
  case 0x160:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) == 0) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4edd0;
    }
    uVar8 = *(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4ee54;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4ee54;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4ee34;
      if ((bVar7 & 1) != 0) goto LAB_03f4ee5c;
LAB_03f4ee40:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4ee40;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4ee5c:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4edd0:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4ee34:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4ee54:
    *(char *)(param_1 + 0x409) = (char)uVar8;
    return;
  case 0x170:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) == 0) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4ee90;
    }
    uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4ef14;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4ef14;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4eef4;
      if ((bVar7 & 1) != 0) goto LAB_03f4ef1c;
LAB_03f4ef00:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4ef00;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4ef1c:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4ee90:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4eef4:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4ef14:
    *(char *)(param_1 + 0x409) = (char)uVar4;
    return;
  case 0x180:
    if (*(char *)(param_1 + 0x407) < '\0') {
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
      return;
    }
    return;
  case 400:
    if (*(char *)(param_1 + 0x407) < '\0') {
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
      return;
    }
    return;
  case 0x1a0:
    if (-1 < *(char *)(param_1 + 0x407)) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4ef94;
    }
    uVar11 = (undefined1)*(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4f028;
        goto LAB_03f4f00c;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4f00c:
        uVar14 = 0;
        goto LAB_03f4f010;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f028:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4ef94:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4f010:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    return;
  case 0x1b0:
    if (-1 < *(char *)(param_1 + 0x407)) {
      return;
    }
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f060;
    }
    uVar11 = (undefined1)*(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4f0f4;
        goto LAB_03f4f0d8;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4f0d8:
        uVar14 = 0;
        goto LAB_03f4f0dc;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f0f4:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f060:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4f0dc:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    return;
  case 0x1c0:
  case 0x1d0:
  case 0x1e0:
  case 0x1f0:
    return;
  case 0x200:
  case 0x210:
  case 0x220:
  case 0x230:
    return;
  case 0x240:
    if ((*(ushort *)((long)param_1 + 0x207a) & 1) == (ushort)(*(byte *)(param_1 + 0x407) >> 7)) {
      *(undefined4 *)((long)param_1 + 0x2074) = 1;
    }
    return;
  case 0x250:
    if ((*(ushort *)((long)param_1 + 0x207a) & 1) == (*(byte *)(param_1 + 0x407) >> 6 & 1)) {
      *(undefined4 *)((long)param_1 + 0x2074) = 1;
    }
    return;
  case 0x260:
    if ((*(ushort *)((long)param_1 + 0x207a) & 1) == (*(byte *)(param_1 + 0x407) >> 5 & 1)) {
      *(undefined4 *)((long)param_1 + 0x2074) = 1;
    }
    return;
  case 0x270:
    if ((*(ushort *)((long)param_1 + 0x207a) & 1) == (*(byte *)(param_1 + 0x407) >> 4 & 1)) {
      *(undefined4 *)((long)param_1 + 0x2074) = 1;
    }
    return;
  case 0x280:
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    return;
  case 0x290:
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    return;
  case 0x2a0:
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f2bc;
    }
    uVar11 = (undefined1)*(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4f34c;
        goto LAB_03f4f330;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4f330:
        uVar14 = 0;
        goto LAB_03f4f334;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f34c:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f2bc:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4f334:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    return;
  case 0x2b0:
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f3b8;
    }
    uVar11 = (undefined1)*(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4f448;
        goto LAB_03f4f42c;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4f42c:
        uVar14 = 0;
        goto LAB_03f4f430;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f448:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f3b8:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4f430:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    return;
  case 0x2c0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) != 0) {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    }
    return;
  case 0x2d0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) != 0) {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    }
    return;
  case 0x2e0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) == 0) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f574;
    }
    uVar8 = *(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4f5f4;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4f5f4;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4f5d4;
      if ((bVar7 & 1) != 0) goto LAB_03f4f5fc;
LAB_03f4f5e0:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4f5e0;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f5fc:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f574:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4f5d4:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4f5f4:
    *(char *)(param_1 + 0x409) = (char)uVar8;
    return;
  case 0x2f0:
    if ((*(byte *)(param_1 + 0x407) >> 5 & 1) == 0) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f670;
    }
    uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4f6f0;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4f6f0;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4f6d0;
      if ((bVar7 & 1) != 0) goto LAB_03f4f6f8;
LAB_03f4f6dc:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4f6dc;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f6f8:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f670:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4f6d0:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4f6f0:
    *(char *)(param_1 + 0x409) = (char)uVar4;
    return;
  case 0x300:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) != 0) {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    }
    return;
  case 0x310:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) != 0) {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    }
    return;
  case 800:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) == 0) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f824;
    }
    uVar8 = *(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4f8a4;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4f8a4;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4f884;
      if ((bVar7 & 1) != 0) goto LAB_03f4f8ac;
LAB_03f4f890:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4f890;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f8ac:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f824:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4f884:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4f8a4:
    *(char *)(param_1 + 0x409) = (char)uVar8;
    return;
  case 0x330:
    if ((*(byte *)(param_1 + 0x407) >> 6 & 1) == 0) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4f920;
    }
    uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4f9a0;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4f9a0;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4f980;
      if ((bVar7 & 1) != 0) goto LAB_03f4f9a8;
LAB_03f4f98c:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4f98c;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4f9a8:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4f920:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4f980:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4f9a0:
    *(char *)(param_1 + 0x409) = (char)uVar4;
    return;
  case 0x340:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) != 0) {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    }
    return;
  case 0x350:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) != 0) {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    }
    return;
  case 0x360:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) == 0) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4fad4;
    }
    uVar8 = *(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4fb54;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4fb54;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4fb34;
      if ((bVar7 & 1) != 0) goto LAB_03f4fb5c;
LAB_03f4fb40:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4fb40;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4fb5c:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4fad4:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4fb34:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4fb54:
    *(char *)(param_1 + 0x409) = (char)uVar8;
    return;
  case 0x370:
    if ((*(byte *)(param_1 + 0x407) >> 4 & 1) == 0) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4fbd0;
    }
    uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      goto LAB_03f4fc50;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      goto LAB_03f4fc50;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) == 0) goto LAB_03f4fc30;
      if ((bVar7 & 1) != 0) goto LAB_03f4fc58;
LAB_03f4fc3c:
      uVar14 = 0;
    }
    else {
      if ((bVar7 & 1) == 0) goto LAB_03f4fc3c;
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4fc58:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4fbd0:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
LAB_03f4fc30:
      uVar14 = 1;
    }
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
LAB_03f4fc50:
    *(char *)(param_1 + 0x409) = (char)uVar4;
    return;
  case 0x380:
    if (*(char *)(param_1 + 0x407) < '\0') {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(undefined1 *)(param_1 + 0x409) = *(undefined1 *)((long)param_1 + 0x207a);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
      return;
    }
    return;
  case 0x390:
    if (*(char *)(param_1 + 0x407) < '\0') {
      bVar7 = *(byte *)((long)param_1 + 0x2055);
      uVar15 = (ulong)bVar7 & 7;
      *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
      uVar8 = *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a)
      ;
      *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
      *(char *)(param_1 + 0x409) = (char)*(undefined4 *)((long)param_1 + 0x2014);
      *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
      return;
    }
    return;
  case 0x3a0:
    if (-1 < *(char *)(param_1 + 0x407)) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4fd90;
    }
    uVar11 = (undefined1)*(undefined2 *)((long)param_1 + 0x207a);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4fe20;
        goto LAB_03f4fe04;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4fe04:
        uVar14 = 0;
        goto LAB_03f4fe08;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4fe20:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4fd90:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4fe08:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    return;
  case 0x3b0:
    if (-1 < *(char *)(param_1 + 0x407)) {
      return;
    }
    bVar7 = *(byte *)((long)param_1 + 0x2055);
    uVar15 = (ulong)bVar7 & 7;
    *(undefined1 *)((long)param_1 + uVar15 + 0x2066) = *(undefined1 *)(param_1 + 0x409);
    bVar6 = *(byte *)((long)param_1 + 0x2049);
    uVar8 = *(undefined2 *)((long)param_1 + (ulong)bVar6 * 2 + 0x204a);
    *(byte *)((long)param_1 + 0x2055) = bVar7 + 1 & 7;
    *(undefined2 *)((long)param_1 + uVar15 * 2 + 0x2056) = uVar8;
    uVar9 = *(ushort *)((long)param_1 + 0x202c);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4fe98;
    }
    uVar11 = (undefined1)*(undefined4 *)((long)param_1 + 0x2014);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (bVar6 == 0) {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f4ff28;
        goto LAB_03f4ff0c;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4ff0c:
        uVar14 = 0;
        goto LAB_03f4ff10;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f4ff28:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4fe98:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4ff10:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    return;
  case 0x3c0:
  case 0x3d0:
  case 0x3e0:
  case 0x3f0:
    uVar14 = *(byte *)((long)param_1 + 0x2055) - 1 & 7;
    *(char *)((long)param_1 + 0x2055) = (char)uVar14;
    uVar9 = *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x2056);
    if (0xb7f < uVar9) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f4ff6c;
    }
    uVar11 = *(undefined1 *)((long)param_1 + (ulong)uVar14 + 0x2066);
    if (*(ushort *)((long)param_1 + 0x204a) == uVar9) {
      *(undefined1 *)((long)param_1 + 0x2049) = 0;
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      return;
    }
    if (*(ushort *)((long)param_1 + 0x204c) == uVar9) {
      *(undefined1 *)(param_1 + 0x409) = uVar11;
      *(undefined1 *)((long)param_1 + 0x2049) = 1;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(char *)((long)param_1 + 0x2049) == '\0') {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f50008;
        goto LAB_03f4ffec;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f4ffec:
        uVar14 = 0;
        goto LAB_03f4fff0;
      }
      if ((bVar7 >> 1 & 1) != 0) {
LAB_03f50008:
        *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f4ff6c:
        *(undefined1 *)(param_1 + 0x402) = 0;
        *(undefined1 *)(param_1 + 0x40f) = 1;
        return;
      }
    }
    uVar14 = 1;
LAB_03f4fff0:
    *(char *)((long)param_1 + 0x2049) = (char)uVar14;
    *(undefined1 *)(param_1 + 0x409) = uVar11;
    *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x204a) = uVar9;
    return;
  case 0x400:
  case 0x410:
  case 0x420:
  case 0x430:
    *(uint *)((long)param_1 + 0x2024) = *(int *)((long)param_1 + 0x2024) + 1U & 0xffffff;
    return;
  case 0x440:
  case 0x450:
  case 0x460:
  case 0x470:
    return;
  case 0x480:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = *(uint *)((long)param_1 + 0x2014);
      uVar13 = (uVar14 & 0xffffff) - (uVar12 & 0xffffff);
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar14 >> 0x17 & ((uVar13 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar14 >> 0x17 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x490:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    *(uint *)((long)param_1 + 0x2014) = (uVar14 & 0x7fffff) * 2;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0x7fffff) >> 0x16;
      uVar10 = (uVar12 & 0xffffff) + (uVar14 & 0x7fffff) * -2;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 >> 0x17 & ((uVar10 >> 0x17 | uVar13) ^ 0xffffffff) |
                  uVar13 & (uVar12 >> 0x17 ^ 0xffffffff) & uVar10 >> 0x17) << 7) |
           (uVar10 >> 0x18 == 0) << 6 |
           (byte)(uVar10 >> 0x13) & 0x10 | ((uVar10 & 0xffffff) == 0) << 5;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    return;
  case 0x4a0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    *(uint *)((long)param_1 + 0x2014) = (uVar14 & 0xffff) * 0x100;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0xffff) >> 0xf;
      uVar10 = (uVar12 & 0xffffff) + (uVar14 & 0xffff) * -0x100;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 >> 0x17 & ((uVar10 >> 0x17 | uVar13) ^ 0xffffffff) |
                  uVar13 & (uVar12 >> 0x17 ^ 0xffffffff) & uVar10 >> 0x17) << 7) |
           (uVar10 >> 0x18 == 0) << 6 |
           (byte)(uVar10 >> 0x13) & 0x10 | ((uVar10 & 0xffffff) == 0) << 5;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    return;
  case 0x4b0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    *(uint *)((long)param_1 + 0x2014) = (uVar14 & 0xff) * 0x10000;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0xff) >> 7;
      uVar10 = (uVar12 & 0xffffff) + (uVar14 & 0xff) * -0x10000;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 >> 0x17 & ((uVar10 >> 0x17 | uVar13) ^ 0xffffffff) |
                  uVar13 & (uVar12 >> 0x17 ^ 0xffffffff) & uVar10 >> 0x17) << 7) |
           (uVar10 >> 0x18 == 0) << 6 |
           (byte)(uVar10 >> 0x13) & 0x10 | ((uVar10 & 0xffffff) == 0) << 5;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    return;
  case 0x4c0:
    uVar14 = (uint)*(byte *)((long)param_1 + 0x207a) -
             (*(uint *)((long)param_1 + 0x2014) & 0xffffff);
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar14 >> 0x18 == 0) << 6 |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & (byte)(*(uint *)((long)param_1 + 0x2014) >> 0x10) & 0x80;
    return;
  case 0x4d0:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 1;
    uVar12 = (uint)*(byte *)((long)param_1 + 0x207a) - (uVar14 & 0xfffffe);
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 | (byte)(uVar12 >> 0x10) & (byte)(uVar14 >> 0x10) & 0x80;
    return;
  case 0x4e0:
    uVar14 = (uint)*(byte *)((long)param_1 + 0x207a) +
             (*(uint *)((long)param_1 + 0x2014) & 0xffff) * -0x100;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar14 >> 0x18 == 0) << 6 |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & (byte)(*(uint *)((long)param_1 + 0x2014) >> 8) & 0x80;
    return;
  case 0x4f0:
    uVar14 = (uint)*(byte *)((long)param_1 + 0x207a) +
             (*(uint *)((long)param_1 + 0x2014) & 0xff) * -0x10000;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar14 >> 0x18 == 0) << 6 |
         ((uVar14 & 0xff00ff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & (byte)*(uint *)((long)param_1 + 0x2014) & 0x80;
    return;
  case 0x500:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = *(uint *)((long)param_1 + 0x2014) >> 0x17;
      uVar13 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) - (uVar14 & 0xffffff);
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 & ((uVar13 | uVar14) >> 0x17 ^ 0xffffffff) |
                  uVar14 >> 0x17 & (uVar12 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x510:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0x7fffff) * 2;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0x7fffff) >> 0x16;
      uVar10 = iVar5 - (uVar12 & 0xffffff);
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar13 & ((uVar10 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar13 ^ 0xffffffff) & uVar10 >> 0x17) << 7) |
           (uVar10 >> 0x18 == 0) << 6 |
           (byte)(uVar10 >> 0x13) & 0x10 | ((uVar10 & 0xffffff) == 0) << 5;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    return;
  case 0x520:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0xffff) * 0x100;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0xffff) >> 0xf;
      uVar10 = iVar5 - (uVar12 & 0xffffff);
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar13 & ((uVar10 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar13 ^ 0xffffffff) & uVar10 >> 0x17) << 7) |
           (uVar10 >> 0x18 == 0) << 6 |
           (byte)(uVar10 >> 0x13) & 0x10 | ((uVar10 & 0xffffff) == 0) << 5;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    return;
  case 0x530:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0xff) * 0x10000;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0xff) >> 7;
      uVar10 = iVar5 - (uVar12 & 0xffffff);
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar13 & ((uVar10 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar13 ^ 0xffffffff) & uVar10 >> 0x17) << 7) |
           (uVar10 >> 0x18 == 0) << 6 |
           (byte)(uVar10 >> 0x13) & 0x10 | ((uVar10 & 0xffffff) == 0) << 5;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    return;
  case 0x540:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) -
             (uint)*(byte *)((long)param_1 + 0x207a);
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar14 >> 0x18 == 0) << 6 |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(*(uint *)((long)param_1 + 0x2014) >> 0x10) & ((byte)(uVar14 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x550:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 1;
    uVar12 = (uVar14 & 0xfffffe) - (uint)*(byte *)((long)param_1 + 0x207a);
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x560:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffff) * 0x100 -
             (uint)*(byte *)((long)param_1 + 0x207a);
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar14 >> 0x18 == 0) << 6 |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(*(uint *)((long)param_1 + 0x2014) >> 8) & ((byte)(uVar14 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x570:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xff) * 0x10000 -
             (uint)*(byte *)((long)param_1 + 0x207a);
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar14 >> 0x18 == 0) << 6 |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)*(uint *)((long)param_1 + 0x2014) & ((byte)(uVar14 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x580:
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf |
         ((*(uint *)((long)param_1 + 0x2014) & 0xffffff) == 0) << 5 |
         (byte)(*(uint *)((long)param_1 + 0x2014) >> 0x13) & 0x10;
    return;
  case 0x590:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = uVar12 & 0xff;
    if ((uVar12 & 0x80) != 0) {
      uVar14 = uVar12 & 0xff | 0xffff00;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0x5a0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = uVar12 & 0xffff;
    if ((uVar12 & 0x8000) != 0) {
      uVar14 = uVar12 & 0xffff | 0xff0000;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0x5b0:
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf |
         ((*(uint *)((long)param_1 + 0x2014) & 0xffffff) == 0) << 5 |
         (byte)(*(uint *)((long)param_1 + 0x2014) >> 0x13) & 0x10;
    return;
  case 0x5c0:
  case 0x5d0:
  case 0x5e0:
  case 0x5f0:
    return;
  case 0x600:
    break;
  case 0x610:
    switch(*(ushort *)((long)param_1 + 0x207a) & 0x7f) {
    case 0x2e:
    case 0x2f:
      uVar11 = FUN_03f4bda8(*param_1,*(uint *)((long)param_1 + 0x2024) >> 0x10);
      goto LAB_03f50bf8;
    default:
      goto switchD_03f50b20_caseD_30;
    case 0x60:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f80;
      break;
    case 0x61:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f83;
      break;
    case 0x62:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f86;
      break;
    case 99:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f89;
      break;
    case 100:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f8c;
      break;
    case 0x65:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f8f;
      break;
    case 0x66:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f92;
      break;
    case 0x67:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f95;
      break;
    case 0x68:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f98;
      break;
    case 0x69:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f9b;
      break;
    case 0x6a:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f9e;
      break;
    case 0x6b:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fa1;
      break;
    case 0x6c:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fa4;
      break;
    case 0x6d:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fa7;
      break;
    case 0x6e:
      lVar16 = param_1[0x401];
      lVar17 = 0x7faa;
      break;
    case 0x6f:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fad;
    }
    uVar11 = *(undefined1 *)(lVar16 + lVar17);
LAB_03f50bf8:
    *(undefined1 *)(param_1 + 0x404) = uVar11;
switchD_03f50b20_caseD_30:
    return;
  case 0x620:
    switch(*(ushort *)((long)param_1 + 0x207a) & 0x7f) {
    case 0x60:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f80;
      lVar18 = 0x7f82;
      break;
    case 0x61:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f83;
      lVar18 = 0x7f85;
      break;
    case 0x62:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f86;
      lVar18 = 0x7f88;
      break;
    case 99:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f89;
      lVar18 = 0x7f8b;
      break;
    case 100:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f8c;
      lVar18 = 0x7f8e;
      break;
    case 0x65:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f8f;
      lVar18 = 0x7f91;
      break;
    case 0x66:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f92;
      lVar18 = 0x7f94;
      break;
    case 0x67:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f95;
      lVar18 = 0x7f97;
      break;
    case 0x68:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f98;
      lVar18 = 0x7f9a;
      break;
    case 0x69:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f9b;
      lVar18 = 0x7f9d;
      break;
    case 0x6a:
      lVar17 = param_1[0x401];
      lVar16 = 0x7f9e;
      lVar18 = 0x7fa0;
      break;
    case 0x6b:
      lVar17 = param_1[0x401];
      lVar16 = 0x7fa1;
      lVar18 = 0x7fa3;
      break;
    case 0x6c:
      lVar17 = param_1[0x401];
      lVar16 = 0x7fa4;
      lVar18 = 0x7fa6;
      break;
    case 0x6d:
      lVar17 = param_1[0x401];
      lVar16 = 0x7fa7;
      lVar18 = 0x7fa9;
      break;
    case 0x6e:
      lVar17 = param_1[0x401];
      lVar16 = 0x7faa;
      lVar18 = 0x7fac;
      break;
    case 0x6f:
      lVar17 = param_1[0x401];
      lVar16 = 0x7fad;
      lVar18 = 0x7faf;
      break;
    default:
      goto switchD_03f50c34_default;
    }
    *(uint *)((long)param_1 + 0x2024) =
         (uint)CONCAT12(*(undefined1 *)(lVar17 + lVar18),*(undefined2 *)(lVar17 + lVar16));
switchD_03f50c34_default:
    return;
  case 0x630:
    switch(*(ushort *)((long)param_1 + 0x207a) & 0x7f) {
    case 0x60:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f80;
      break;
    case 0x61:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f83;
      break;
    case 0x62:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f86;
      break;
    case 99:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f89;
      break;
    case 100:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f8c;
      break;
    case 0x65:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f8f;
      break;
    case 0x66:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f92;
      break;
    case 0x67:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f95;
      break;
    case 0x68:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f98;
      break;
    case 0x69:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f9b;
      break;
    case 0x6a:
      lVar16 = param_1[0x401];
      lVar17 = 0x7f9e;
      break;
    case 0x6b:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fa1;
      break;
    case 0x6c:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fa4;
      break;
    case 0x6d:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fa7;
      break;
    case 0x6e:
      lVar16 = param_1[0x401];
      lVar17 = 0x7faa;
      break;
    case 0x6f:
      lVar16 = param_1[0x401];
      lVar17 = 0x7fad;
      break;
    default:
      goto switchD_03f50d7c_default;
    }
    *(undefined2 *)((long)param_1 + 0x202c) = *(undefined2 *)(lVar16 + lVar17);
switchD_03f50d7c_default:
    return;
  case 0x640:
    *(uint *)((long)param_1 + 0x2014) = (uint)*(byte *)((long)param_1 + 0x207a);
    return;
  case 0x650:
    *(undefined1 *)(param_1 + 0x404) = *(undefined1 *)((long)param_1 + 0x207a);
    return;
  case 0x660:
    *(uint *)((long)param_1 + 0x2024) = (uint)*(byte *)((long)param_1 + 0x207a);
    return;
  case 0x670:
    *(ushort *)((long)param_1 + 0x202c) = (ushort)*(byte *)((long)param_1 + 0x207a);
    return;
  case 0x680:
    *(uint *)((long)param_1 + 0x2034) =
         (uint)CONCAT21(*(undefined2 *)((long)param_1 + 0x2035),
                        *(undefined1 *)
                         (param_1[0x401] + ((ulong)*(uint *)((long)param_1 + 0x2014) & 0xfff) +
                         0x6000));
    return;
  case 0x690:
    *(uint *)((long)param_1 + 0x2034) =
         *(uint *)((long)param_1 + 0x2034) & 0xff00ff |
         (uint)*(byte *)(param_1[0x401] + ((ulong)*(uint *)((long)param_1 + 0x2014) & 0xfff) +
                        0x6000) << 8;
    return;
  case 0x6a0:
    *(ushort *)((long)param_1 + 0x2036) =
         (ushort)*(byte *)(param_1[0x401] + ((ulong)*(uint *)((long)param_1 + 0x2014) & 0xfff) +
                          0x6000);
    return;
  case 0x6b0:
    return;
  case 0x6c0:
    *(uint *)((long)param_1 + 0x2034) =
         (uint)CONCAT21(*(undefined2 *)((long)param_1 + 0x2035),
                        *(undefined1 *)
                         (param_1[0x401] +
                          ((ulong)*(ushort *)(param_1 + 0x406) & 0xfff |
                          (ulong)*(byte *)((long)param_1 + 0x207a)) + 0x6000));
    return;
  case 0x6d0:
    *(uint *)((long)param_1 + 0x2034) =
         *(uint *)((long)param_1 + 0x2034) & 0xff00ff |
         (uint)*(byte *)(param_1[0x401] +
                         ((ulong)*(ushort *)(param_1 + 0x406) & 0xfff |
                         (ulong)*(byte *)((long)param_1 + 0x207a)) + 0x6000) << 8;
    return;
  case 0x6e0:
    *(ushort *)((long)param_1 + 0x2036) =
         (ushort)*(byte *)(param_1[0x401] +
                           ((ulong)*(ushort *)(param_1 + 0x406) & 0xfff |
                           (ulong)*(byte *)((long)param_1 + 0x207a)) + 0x6000);
    return;
  case 0x6f0:
    return;
  case 0x700:
  case 0x710:
  case 0x720:
  case 0x730:
    *(undefined4 *)(param_1 + 0x405) =
         *(undefined4 *)(&DAT_041e9958 + ((ulong)*(uint *)((long)param_1 + 0x2014) & 0x3ff) * 4);
    return;
  case 0x740:
  case 0x750:
  case 0x760:
  case 0x770:
    *(undefined4 *)(param_1 + 0x405) =
         *(undefined4 *)(&DAT_041e9958 + ((ulong)*(ushort *)((long)param_1 + 0x207a) & 0x3ff) * 4);
    return;
  case 0x780:
  case 0x790:
  case 0x7a0:
  case 0x7b0:
    return;
  case 0x7c0:
    *(undefined1 *)((long)param_1 + 0x202c) = *(undefined1 *)((long)param_1 + 0x207a);
    return;
  case 2000:
    *(byte *)((long)param_1 + 0x202d) = *(byte *)((long)param_1 + 0x207a) & 0x7f;
    return;
  case 0x7e0:
    return;
  case 0x7f0:
    return;
  case 0x800:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar13 = *(uint *)((long)param_1 + 0x2014);
      uVar12 = (uVar13 & 0xffffff) + (uVar14 & 0xffffff);
      *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar14 >> 0x17 & (uVar12 >> 0x17 ^ 0xffffffff) & uVar13 >> 0x17 |
                  uVar12 >> 0x17 & ((uVar13 | uVar14) >> 0x17 ^ 0xffffffff)) << 7) |
           (byte)(uVar12 >> 0x12) & 0x40 |
           (byte)(uVar12 >> 0x13) & 0x10 | ((uVar12 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x810:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0x7fffff) * 2;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0x7fffff) >> 0x16;
      uVar14 = (uVar12 & 0xffffff) + iVar5;
      *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 >> 0x17 & (uVar14 >> 0x17 ^ 0xffffffff) & uVar13 |
                  uVar14 >> 0x17 & ((uVar13 | uVar12 >> 0x17) ^ 0xffffffff)) << 7) |
           (byte)(uVar14 >> 0x12) & 0x40 |
           (byte)(uVar14 >> 0x13) & 0x10 | ((uVar14 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x820:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0xffff) * 0x100;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0xffff) >> 0xf;
      uVar14 = (uVar12 & 0xffffff) + iVar5;
      *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 >> 0x17 & (uVar14 >> 0x17 ^ 0xffffffff) & uVar13 |
                  uVar14 >> 0x17 & ((uVar13 | uVar12 >> 0x17) ^ 0xffffffff)) << 7) |
           (byte)(uVar14 >> 0x12) & 0x40 |
           (byte)(uVar14 >> 0x13) & 0x10 | ((uVar14 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x830:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0xff) * 0x10000;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar14 & 0xff) >> 7;
      uVar14 = (uVar12 & 0xffffff) + iVar5;
      *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 >> 0x17 & (uVar14 >> 0x17 ^ 0xffffffff) & uVar13 |
                  uVar14 >> 0x17 & ((uVar13 | uVar12 >> 0x17) ^ 0xffffffff)) << 7) |
           (byte)(uVar14 >> 0x12) & 0x40 |
           (byte)(uVar14 >> 0x13) & 0x10 | ((uVar14 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x840:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = (uVar12 & 0xffffff) + (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (byte)((uVar14 >> 0x18) << 6) |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x850:
    uVar12 = *(int *)((long)param_1 + 0x2014) << 1;
    uVar14 = (uVar12 & 0xfffffe) + (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (byte)((uVar14 >> 0x18) << 6) |
         ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x860:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = (uint)*(byte *)((long)param_1 + 0x207a) | (uVar12 & 0xffff) << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (byte)((uVar12 >> 0xf & 1) << 4) | (uVar14 == 0) << 5;
    return;
  case 0x870:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = ((uint)*(ushort *)((long)param_1 + 0x207a) | uVar12 << 0x10) & 0xff00ff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (byte)((uVar12 >> 7 & 1) << 4) | (uVar14 == 0) << 5;
    return;
  case 0x880:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = *(uint *)((long)param_1 + 0x2014);
      uVar13 = (uVar14 & 0xffffff) - (uVar12 & 0xffffff);
      *(uint *)((long)param_1 + 0x2014) = uVar13 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar14 >> 0x17 & ((uVar13 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar14 >> 0x17 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x890:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = uVar14 & 0x7fffff;
    *(uint *)((long)param_1 + 0x2014) = uVar12 * 2;
    uVar13 = FUN_03f51c0c();
    if (-1 < (int)uVar13) {
      uVar14 = (uVar14 & 0x7fffff) >> 0x16;
      uVar12 = (uVar13 & 0xffffff) + uVar12 * -2;
      *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar13 >> 0x17 & ((uVar12 >> 0x17 | uVar14) ^ 0xffffffff) |
                  uVar14 & (uVar13 >> 0x17 ^ 0xffffffff) & uVar12 >> 0x17) << 7) |
           (uVar12 >> 0x18 == 0) << 6 |
           (byte)(uVar12 >> 0x13) & 0x10 | ((uVar12 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x8a0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = uVar14 & 0xffff;
    *(uint *)((long)param_1 + 0x2014) = uVar12 * 0x100;
    uVar13 = FUN_03f51c0c();
    if (-1 < (int)uVar13) {
      uVar14 = (uVar14 & 0xffff) >> 0xf;
      uVar12 = (uVar13 & 0xffffff) + uVar12 * -0x100;
      *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar13 >> 0x17 & ((uVar12 >> 0x17 | uVar14) ^ 0xffffffff) |
                  uVar14 & (uVar13 >> 0x17 ^ 0xffffffff) & uVar12 >> 0x17) << 7) |
           (uVar12 >> 0x18 == 0) << 6 |
           (byte)(uVar12 >> 0x13) & 0x10 | ((uVar12 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x8b0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = uVar14 & 0xff;
    *(uint *)((long)param_1 + 0x2014) = uVar12 * 0x10000;
    uVar13 = FUN_03f51c0c();
    if (-1 < (int)uVar13) {
      uVar14 = (uVar14 & 0xff) >> 7;
      uVar12 = (uVar13 & 0xffffff) + uVar12 * -0x10000;
      *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar13 >> 0x17 & ((uVar12 >> 0x17 | uVar14) ^ 0xffffffff) |
                  uVar14 & (uVar13 >> 0x17 ^ 0xffffffff) & uVar12 >> 0x17) << 7) |
           (uVar12 >> 0x18 == 0) << 6 |
           (byte)(uVar12 >> 0x13) & 0x10 | ((uVar12 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x8c0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uint)*(byte *)((long)param_1 + 0x207a) - (uVar14 & 0xffffff);
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 | (byte)(uVar12 >> 0x10) & (byte)(uVar14 >> 0x10) & 0x80;
    return;
  case 0x8d0:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 1;
    uVar12 = (uint)*(byte *)((long)param_1 + 0x207a) - (uVar14 & 0xfffffe);
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 | (byte)(uVar12 >> 0x10) & (byte)(uVar14 >> 0x10) & 0x80;
    return;
  case 0x8e0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uint)*(byte *)((long)param_1 + 0x207a) + (uVar14 & 0xffff) * -0x100;
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 | (byte)(uVar12 >> 0x10) & (byte)(uVar14 >> 8) & 0x80;
    return;
  case 0x8f0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uint)*(byte *)((long)param_1 + 0x207a) + (uVar14 & 0xff) * -0x10000;
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xff00ff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xff00ff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 | (byte)(uVar12 >> 0x10) & (byte)uVar14 & 0x80;
    return;
  case 0x900:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = *(uint *)((long)param_1 + 0x2014) >> 0x17;
      uVar13 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) - (uVar14 & 0xffffff);
      *(uint *)((long)param_1 + 0x2014) = uVar13 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar12 & ((uVar13 | uVar14) >> 0x17 ^ 0xffffffff) |
                  uVar14 >> 0x17 & (uVar12 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x910:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0x7fffff) * 2;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = (uVar14 & 0x7fffff) >> 0x16;
      uVar13 = iVar5 - (uVar12 & 0xffffff);
      *(uint *)((long)param_1 + 0x2014) = uVar13 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar14 & ((uVar13 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar14 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x920:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0xffff) * 0x100;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = (uVar14 & 0xffff) >> 0xf;
      uVar13 = iVar5 - (uVar12 & 0xffffff);
      *(uint *)((long)param_1 + 0x2014) = uVar13 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar14 & ((uVar13 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar14 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x930:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    iVar5 = (uVar14 & 0xff) * 0x10000;
    *(int *)((long)param_1 + 0x2014) = iVar5;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = (uVar14 & 0xff) >> 7;
      uVar13 = iVar5 - (uVar12 & 0xffffff);
      *(uint *)((long)param_1 + 0x2014) = uVar13 & 0xffffff;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xf |
           (byte)((uVar14 & ((uVar13 | uVar12) >> 0x17 ^ 0xffffffff) |
                  uVar12 >> 0x17 & (uVar14 ^ 0xffffffff) & uVar13 >> 0x17) << 7) |
           (uVar13 >> 0x18 == 0) << 6 |
           (byte)(uVar13 >> 0x13) & 0x10 | ((uVar13 & 0xffffff) == 0) << 5;
    }
    return;
  case 0x940:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uVar14 & 0xffffff) - (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x950:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 1;
    uVar12 = (uVar14 & 0xfffffe) - (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 0x10) & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x960:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uVar14 & 0xffff) * 0x100 - (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 |
         (byte)(uVar14 >> 8) & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x970:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uVar14 & 0xff) * 0x10000 - (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar12 & 0xffffff;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xf | (uVar12 >> 0x18 == 0) << 6 |
         ((uVar12 & 0xffffff) == 0) << 5 |
         (byte)(uVar12 >> 0x13) & 0x10 | (byte)uVar14 & ((byte)(uVar12 >> 0x10) ^ 0xff) & 0x80;
    return;
  case 0x980:
  case 0x990:
  case 0x9a0:
  case 0x9b0:
    uVar15 = FUN_03f51c0c();
    if (-1 < (int)(uint)uVar15) {
      uVar14 = *(uint *)((long)param_1 + 0x2014);
      uVar2 = (ulong)uVar14 & 0xffffff;
      if ((uVar14 & 0x800000) != 0) {
        uVar2 = (ulong)uVar14 | 0xffffffffff000000;
      }
      uVar3 = (ulong)((uint)uVar15 & 0xffffff);
      if ((uVar15 & 0x800000) != 0) {
        uVar3 = uVar15 | 0xffffffffff000000;
      }
      *(uint *)(param_1 + 0x403) = (uint)(uVar2 * uVar3) & 0xffffff;
      *(uint *)((long)param_1 + 0x201c) = (uint)(uVar2 * uVar3 >> 0x18) & 0xffffff;
    }
    return;
  case 0x9c0:
  case 0x9d0:
  case 0x9e0:
  case 0x9f0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar15 = (ulong)uVar14 & 0xffffff;
    if ((uVar14 & 0x800000) != 0) {
      uVar15 = (ulong)uVar14 | 0xffffffffff000000;
    }
    lVar16 = uVar15 * *(byte *)((long)param_1 + 0x207a);
    *(uint *)(param_1 + 0x403) = (uint)lVar16 & 0xffffff;
    *(uint *)((long)param_1 + 0x201c) = (uint)((ulong)lVar16 >> 0x18) & 0xffffff;
    return;
  case 0xa00:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar13 = *(uint *)((long)param_1 + 0x2014);
      uVar12 = (uVar13 ^ uVar14 ^ 0xffffffff) & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar12;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | (uVar12 == 0) << 5 |
           (byte)((uVar13 ^ uVar14 ^ 0xffffffff) >> 0x13) & 0x10;
    }
    return;
  case 0xa10:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 1;
    *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xfffffe;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar12 ^ uVar14 ^ 0xffffffff) & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar13;
      *(byte *)(param_1 + 0x407) =
           (byte)((uVar12 ^ uVar14 ^ 0xffffffff) >> 0x13) & 0x10 | (uVar13 == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xa20:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xffff00;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar12 ^ uVar14 ^ 0xffffffff) & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar13;
      *(byte *)(param_1 + 0x407) =
           (byte)((uVar12 ^ uVar14 ^ 0xffffffff) >> 0x13) & 0x10 | (uVar13 == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xa30:
    uVar14 = *(int *)((long)param_1 + 0x2014) << 0x10;
    *(uint *)((long)param_1 + 0x2014) = uVar14 & 0xff0000;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar13 = (uVar12 ^ uVar14 ^ 0xffffffff) & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar13;
      *(byte *)(param_1 + 0x407) =
           (byte)((uVar12 ^ uVar14 ^ 0xffffffff) >> 0x13) & 0x10 | (uVar13 == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xa40:
    uVar14 = *(uint *)((long)param_1 + 0x2014) & 0xffffff ^ (uint)*(byte *)((long)param_1 + 0x207a)
             ^ 0xffffff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0xa50:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0x7fffff) << 1 ^
             (uint)*(byte *)((long)param_1 + 0x207a) ^ 0xffffff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0xa60:
    uVar14 = ((uint)*(byte *)((long)param_1 + 0x207a) |
             (*(uint *)((long)param_1 + 0x2014) & 0xffff) << 8) ^ 0xffffff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0xa70:
    uVar14 = ((uint)*(byte *)((long)param_1 + 0x207a) |
             (*(uint *)((long)param_1 + 0x2014) & 0xff) << 0x10) ^ 0xffffff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) = (byte)(uVar14 >> 0x13) & 0x10 | *(byte *)(param_1 + 0x407) & 0xcf;
    return;
  case 0xa80:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar14 = *(uint *)((long)param_1 + 0x2014) ^ uVar14;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | ((uVar14 & 0xffffff) == 0) << 5 |
           (byte)(uVar14 >> 0x13) & 0x10;
    }
    return;
  case 0xa90:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0x7fffff) << 1;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = uVar14 ^ uVar12;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | ((uVar14 & 0xffffff) == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xaa0:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffff) << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = uVar14 ^ uVar12;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | ((uVar14 & 0xffffff) == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xab0:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xff) << 0x10;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = uVar14 ^ uVar12;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | ((uVar14 & 0xffffff) == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xac0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = uVar12 ^ *(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         (byte)(uVar12 >> 0x13) & 0x10 | *(byte *)(param_1 + 0x407) & 0xcf |
         ((uVar14 & 0xffffff) == 0) << 5;
    return;
  case 0xad0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = (uVar12 & 0x7fffff) << 1 ^ (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (byte)(uVar12 >> 0x12) & 0x10 | (uVar14 == 0) << 5;
    return;
  case 0xae0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = (uint)*(byte *)((long)param_1 + 0x207a) | (uVar12 & 0xffff) << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (byte)(uVar12 >> 0xb) & 0x10 | (uVar14 == 0) << 5;
    return;
  case 0xaf0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = ((uint)*(ushort *)((long)param_1 + 0x207a) | uVar12 << 0x10) & 0xff00ff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (byte)(uVar12 >> 3) & 0x10 | (uVar14 == 0) << 5;
    return;
  case 0xb00:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar14 = *(uint *)((long)param_1 + 0x2014) & uVar14;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | ((uVar14 & 0xffffff) == 0) << 5 |
           (byte)(uVar14 >> 0x13) & 0x10;
    }
    return;
  case 0xb10:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0x7fffff) << 1;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = uVar14 & uVar12;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | (uVar14 == 0) << 5 | *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xb20:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffff) << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = uVar14 & uVar12;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | (uVar14 == 0) << 5 | *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xb30:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xff) << 0x10;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar12 = FUN_03f51c0c();
    if (-1 < (int)uVar12) {
      uVar14 = uVar14 & uVar12;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | (uVar14 == 0) << 5 | *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xb40:
    uVar14 = (uint)(*(byte *)((long)param_1 + 0x207a) & *(byte *)((long)param_1 + 0x2014));
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) = *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5;
    return;
  case 0xb50:
    uVar14 = (uint)*(ushort *)((long)param_1 + 0x207a) & *(int *)((long)param_1 + 0x2014) << 1 &
             0xfe;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) = *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5;
    return;
  case 0xb60:
    *(undefined4 *)((long)param_1 + 0x2014) = 0;
    *(byte *)(param_1 + 0x407) = *(byte *)(param_1 + 0x407) & 0xcf | 0x20;
    return;
  case 0xb70:
    *(undefined4 *)((long)param_1 + 0x2014) = 0;
    *(byte *)(param_1 + 0x407) = *(byte *)(param_1 + 0x407) & 0xcf | 0x20;
    return;
  case 0xb80:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar14 = *(uint *)((long)param_1 + 0x2014) | uVar14;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | ((uVar14 & 0xffffff) == 0) << 5 |
           (byte)(uVar14 >> 0x13) & 0x10;
    }
    return;
  case 0xb90:
    uVar12 = *(uint *)((long)param_1 + 0x2014) & 0x7fffff;
    uVar14 = uVar12 << 1;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar13 = FUN_03f51c0c();
    if (-1 < (int)uVar13) {
      uVar14 = uVar14 | uVar13;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | (uVar12 == 0 && (uVar13 & 0xffffff) == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xba0:
    uVar12 = *(uint *)((long)param_1 + 0x2014) & 0xffff;
    uVar14 = uVar12 << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar13 = FUN_03f51c0c();
    if (-1 < (int)uVar13) {
      uVar14 = uVar14 | uVar13;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | (uVar12 == 0 && (uVar13 & 0xffffff) == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xbb0:
    uVar12 = *(uint *)((long)param_1 + 0x2014) & 0xff;
    uVar14 = uVar12 << 0x10;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    uVar13 = FUN_03f51c0c();
    if (-1 < (int)uVar13) {
      uVar14 = uVar14 | uVar13;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           (byte)(uVar14 >> 0x13) & 0x10 | (uVar12 == 0 && (uVar13 & 0xffffff) == 0) << 5 |
           *(byte *)(param_1 + 0x407) & 0xcf;
    }
    return;
  case 0xbc0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    *(uint *)((long)param_1 + 0x2014) = uVar14 | *(byte *)((long)param_1 + 0x207a);
    *(byte *)(param_1 + 0x407) =
         (byte)(uVar14 >> 0x13) & 0x10 | *(byte *)(param_1 + 0x407) & 0xcf |
         ((uVar14 & 0xffffff) == 0 && *(byte *)((long)param_1 + 0x207a) == 0) << 5;
    return;
  case 0xbd0:
    uVar14 = *(uint *)((long)param_1 + 0x2014);
    uVar12 = (uVar14 & 0x7fffff) << 1 | (uint)*(byte *)((long)param_1 + 0x207a);
    *(uint *)((long)param_1 + 0x2014) = uVar12;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (byte)(uVar14 >> 0x12) & 0x10 | (uVar12 == 0) << 5;
    return;
  case 0xbe0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = (uint)*(byte *)((long)param_1 + 0x207a) | (uVar12 & 0xffff) << 8;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (byte)(uVar12 >> 0xb) & 0x10 | (uVar14 == 0) << 5;
    return;
  case 0xbf0:
    uVar12 = *(uint *)((long)param_1 + 0x2014);
    uVar14 = ((uint)*(ushort *)((long)param_1 + 0x207a) | uVar12 << 0x10) & 0xff00ff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (byte)(uVar12 >> 3) & 0x10 | (uVar14 == 0) << 5;
    return;
  case 0xc00:
  case 0xc10:
  case 0xc20:
  case 0xc30:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) >> (ulong)(uVar14 & 0x1f);
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    }
    return;
  case 0xc40:
  case 0xc50:
  case 0xc60:
  case 0xc70:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) >>
             (ulong)(*(ushort *)((long)param_1 + 0x207a) & 0x1f);
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0xc80:
  case 0xc90:
  case 0xca0:
  case 0xcb0:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) >> (ulong)(uVar14 & 0x1f);
      if ((*(uint *)((long)param_1 + 0x2014) >> 0x17 & 1) != 0) {
        uVar12 = *(uint *)(&DAT_041e98d8 + (ulong)(uVar14 & 0x1f) * 4) | uVar12;
      }
      *(uint *)((long)param_1 + 0x2014) = uVar12;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | ((uVar12 & 0xffffff) == 0) << 5 |
           (byte)(uVar12 >> 0x13) & 0x10;
    }
    return;
  case 0xcc0:
  case 0xcd0:
  case 0xce0:
  case 0xcf0:
    uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) >>
             (ulong)(*(ushort *)((long)param_1 + 0x207a) & 0x1f);
    if ((*(uint *)((long)param_1 + 0x2014) >> 0x17 & 1) != 0) {
      uVar14 = *(uint *)(&DAT_041e98d8 + ((ulong)*(ushort *)((long)param_1 + 0x207a) & 0x1f) * 4) |
               uVar14;
    }
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0xd00:
  case 0xd10:
  case 0xd20:
  case 0xd30:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = *(uint *)((long)param_1 + 0x2014);
      uVar14 = uVar14 & 0x1f;
      if (uVar14 - 1 < 0x17) {
        uVar12 = (uVar12 & 0xffffff) >> (ulong)uVar14 |
                 uVar12 << (ulong)(0x18 - uVar14 & 0x1f) & 0xffffff;
        *(uint *)((long)param_1 + 0x2014) = uVar12;
      }
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | ((uVar12 & 0xffffff) == 0) << 5 |
           (byte)(uVar12 >> 0x13) & 0x10;
    }
    return;
  case 0xd40:
  case 0xd50:
  case 0xd60:
  case 0xd70:
    uVar14 = *(ushort *)((long)param_1 + 0x207a) & 0x1f;
    if (uVar14 - 1 < 0x17) {
      uVar14 = (*(uint *)((long)param_1 + 0x2014) & 0xffffff) >> (ulong)uVar14 |
               *(uint *)((long)param_1 + 0x2014) << (ulong)(0x18 - uVar14 & 0x1f) & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
    }
    else {
      uVar14 = *(uint *)((long)param_1 + 0x2014);
    }
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | ((uVar14 & 0xffffff) == 0) << 5 |
         (byte)(uVar14 >> 0x13) & 0x10;
    return;
  case 0xd80:
  case 0xd90:
  case 0xda0:
  case 0xdb0:
    uVar14 = FUN_03f51c0c();
    if (-1 < (int)uVar14) {
      uVar12 = *(int *)((long)param_1 + 0x2014) << (ulong)(uVar14 & 0x1f);
      uVar14 = uVar12 & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(byte *)(param_1 + 0x407) =
           *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar12 >> 0x13) & 0x10;
    }
    return;
  case 0xdc0:
  case 0xdd0:
  case 0xde0:
  case 0xdf0:
    uVar12 = *(int *)((long)param_1 + 0x2014) << (ulong)(*(ushort *)((long)param_1 + 0x207a) & 0x1f)
    ;
    uVar14 = uVar12 & 0xffffff;
    *(uint *)((long)param_1 + 0x2014) = uVar14;
    *(byte *)(param_1 + 0x407) =
         *(byte *)(param_1 + 0x407) & 0xcf | (uVar14 == 0) << 5 | (byte)(uVar12 >> 0x13) & 0x10;
    return;
  case 0xe00:
    switch(*(ushort *)((long)param_1 + 0x207a) & 0x7f) {
    case 3:
      *(char *)(param_1 + 0x404) = (char)*(undefined4 *)((long)param_1 + 0x2014);
      return;
    default:
      return;
    case 0xc:
      *(undefined4 *)((long)param_1 + 0x2034) = *(undefined4 *)((long)param_1 + 0x2014);
      return;
    case 0x13:
      *(undefined4 *)((long)param_1 + 0x2024) = *(undefined4 *)((long)param_1 + 0x2014);
      return;
    case 0x1c:
      *(uint *)(param_1 + 0x406) = *(uint *)((long)param_1 + 0x2014) & 0xfff;
      return;
    case 0x28:
      *(short *)((long)param_1 + 0x202c) = (short)*(undefined4 *)((long)param_1 + 0x2014);
      return;
    case 0x60:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f80) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f81) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f82;
      break;
    case 0x61:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f83) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f84) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f85;
      break;
    case 0x62:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f86) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f87) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f88;
      break;
    case 99:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f89) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f8a) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f8b;
      break;
    case 100:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f8c) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f8d) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f8e;
      break;
    case 0x65:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f8f) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f90) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f91;
      break;
    case 0x66:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f92) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f93) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f94;
      break;
    case 0x67:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f95) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f96) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f97;
      break;
    case 0x68:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f98) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f99) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f9a;
      break;
    case 0x69:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f9b) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f9c) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7f9d;
      break;
    case 0x6a:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7f9e) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7f9f) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7fa0;
      break;
    case 0x6b:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7fa1) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7fa2) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7fa3;
      break;
    case 0x6c:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7fa4) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7fa5) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7fa6;
      break;
    case 0x6d:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7fa7) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7fa8) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7fa9;
      break;
    case 0x6e:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7faa) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7fab) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7fac;
      break;
    case 0x6f:
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      *(char *)(param_1[0x401] + 0x7fad) = (char)uVar4;
      uVar11 = (undefined1)((uint)uVar4 >> 0x10);
      *(char *)(param_1[0x401] + 0x7fae) = (char)((uint)uVar4 >> 8);
      lVar16 = 0x7faf;
    }
    *(undefined1 *)(param_1[0x401] + lVar16) = uVar11;
    return;
  case 0xe10:
    puVar1 = param_1 + 0x404;
    switch(*(ushort *)((long)param_1 + 0x207a) & 0x7f) {
    case 0x2f:
      FUN_03f4d1a0(*param_1,*(uint *)((long)param_1 + 0x2024) >> 0x10,
                   *(uint *)((long)param_1 + 0x2024),*(undefined1 *)puVar1);
      return;
    default:
      goto switchD_03f52e14_caseD_30;
    case 0x60:
      *(undefined1 *)(param_1[0x401] + 0x7f80) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f81) = 0;
      lVar16 = 0x7f82;
      break;
    case 0x61:
      *(undefined1 *)(param_1[0x401] + 0x7f83) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f84) = 0;
      lVar16 = 0x7f85;
      break;
    case 0x62:
      *(undefined1 *)(param_1[0x401] + 0x7f86) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f87) = 0;
      lVar16 = 0x7f88;
      break;
    case 99:
      *(undefined1 *)(param_1[0x401] + 0x7f89) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f8a) = 0;
      lVar16 = 0x7f8b;
      break;
    case 100:
      *(undefined1 *)(param_1[0x401] + 0x7f8c) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f8d) = 0;
      lVar16 = 0x7f8e;
      break;
    case 0x65:
      *(undefined1 *)(param_1[0x401] + 0x7f8f) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f90) = 0;
      lVar16 = 0x7f91;
      break;
    case 0x66:
      *(undefined1 *)(param_1[0x401] + 0x7f92) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f93) = 0;
      lVar16 = 0x7f94;
      break;
    case 0x67:
      *(undefined1 *)(param_1[0x401] + 0x7f95) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f96) = 0;
      lVar16 = 0x7f97;
      break;
    case 0x68:
      *(undefined1 *)(param_1[0x401] + 0x7f98) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f99) = 0;
      lVar16 = 0x7f9a;
      break;
    case 0x69:
      *(undefined1 *)(param_1[0x401] + 0x7f9b) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f9c) = 0;
      lVar16 = 0x7f9d;
      break;
    case 0x6a:
      *(undefined1 *)(param_1[0x401] + 0x7f9e) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7f9f) = 0;
      lVar16 = 0x7fa0;
      break;
    case 0x6b:
      *(undefined1 *)(param_1[0x401] + 0x7fa1) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7fa2) = 0;
      lVar16 = 0x7fa3;
      break;
    case 0x6c:
      *(undefined1 *)(param_1[0x401] + 0x7fa4) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7fa5) = 0;
      lVar16 = 0x7fa6;
      break;
    case 0x6d:
      *(undefined1 *)(param_1[0x401] + 0x7fa7) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7fa8) = 0;
      lVar16 = 0x7fa9;
      break;
    case 0x6e:
      *(undefined1 *)(param_1[0x401] + 0x7faa) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7fab) = 0;
      lVar16 = 0x7fac;
      break;
    case 0x6f:
      *(undefined1 *)(param_1[0x401] + 0x7fad) = *(undefined1 *)puVar1;
      *(undefined1 *)(param_1[0x401] + 0x7fae) = 0;
      lVar16 = 0x7faf;
    }
    *(undefined1 *)(param_1[0x401] + lVar16) = 0;
switchD_03f52e14_caseD_30:
    return;
  case 0xe20:
    return;
  case 0xe30:
    return;
  case 0xe40:
  case 0xe50:
  case 0xe60:
  case 0xe70:
    return;
  case 0xe80:
    FUN_03f4e540(param_1,*(ushort *)((long)param_1 + 0x2014) & 0xfff | 0x6000,
                 *(undefined4 *)((long)param_1 + 0x2034));
    return;
  case 0xe90:
    FUN_03f4e540(param_1,*(ushort *)((long)param_1 + 0x2014) & 0xfff | 0x6000,
                 *(uint *)((long)param_1 + 0x2034) >> 8);
    return;
  case 0xea0:
    FUN_03f4e540(param_1,*(ushort *)((long)param_1 + 0x2014) & 0xfff | 0x6000,
                 *(undefined2 *)((long)param_1 + 0x2036));
    return;
  case 0xeb0:
    return;
  case 0xec0:
    FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) & 0xfff |
                         (ushort)*(byte *)((long)param_1 + 0x207a) | 0x6000,
                 *(undefined4 *)((long)param_1 + 0x2034));
    return;
  case 0xed0:
    FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) & 0xfff |
                         (ushort)*(byte *)((long)param_1 + 0x207a) | 0x6000,
                 *(uint *)((long)param_1 + 0x2034) >> 8);
    return;
  case 0xee0:
    FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) & 0xfff |
                         (ushort)*(byte *)((long)param_1 + 0x207a) | 0x6000,
                 *(undefined2 *)((long)param_1 + 0x2036));
    return;
  case 0xef0:
    return;
  case 0xf00:
  case 0xf10:
  case 0xf20:
  case 0xf30:
    uVar14 = *(ushort *)((long)param_1 + 0x207a) & 0x7f;
    if (uVar14 - 0x60 < 0x10) {
      uVar4 = *(undefined4 *)((long)param_1 + 0x2014);
      switch(uVar14) {
      case 0x60:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f80;
        lVar18 = 0x7f82;
        lVar19 = 0x7f81;
        break;
      case 0x61:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f83;
        lVar18 = 0x7f85;
        lVar19 = 0x7f84;
        break;
      case 0x62:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f86;
        lVar18 = 0x7f88;
        lVar19 = 0x7f87;
        break;
      case 99:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f89;
        lVar18 = 0x7f8b;
        lVar19 = 0x7f8a;
        break;
      case 100:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f8c;
        lVar18 = 0x7f8e;
        lVar19 = 0x7f8d;
        break;
      case 0x65:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f8f;
        lVar18 = 0x7f91;
        lVar19 = 0x7f90;
        break;
      case 0x66:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f92;
        lVar18 = 0x7f94;
        lVar19 = 0x7f93;
        break;
      case 0x67:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f95;
        lVar18 = 0x7f97;
        lVar19 = 0x7f96;
        break;
      case 0x68:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f98;
        lVar18 = 0x7f9a;
        lVar19 = 0x7f99;
        break;
      case 0x69:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f9b;
        lVar18 = 0x7f9d;
        lVar19 = 0x7f9c;
        break;
      case 0x6a:
        lVar16 = param_1[0x401];
        lVar17 = 0x7f9e;
        lVar18 = 0x7fa0;
        lVar19 = 0x7f9f;
        break;
      case 0x6b:
        lVar16 = param_1[0x401];
        lVar17 = 0x7fa1;
        lVar18 = 0x7fa3;
        lVar19 = 0x7fa2;
        break;
      case 0x6c:
        lVar16 = param_1[0x401];
        lVar17 = 0x7fa4;
        lVar18 = 0x7fa6;
        lVar19 = 0x7fa5;
        break;
      case 0x6d:
        lVar16 = param_1[0x401];
        lVar17 = 0x7fa7;
        lVar18 = 0x7fa9;
        lVar19 = 0x7fa8;
        break;
      case 0x6e:
        lVar16 = param_1[0x401];
        lVar17 = 0x7faa;
        lVar18 = 0x7fac;
        lVar19 = 0x7fab;
        break;
      case 0x6f:
        lVar16 = param_1[0x401];
        lVar17 = 0x7fad;
        lVar18 = 0x7faf;
        lVar19 = 0x7fae;
      }
      *(uint *)((long)param_1 + 0x2014) = (uint)*(uint3 *)(lVar16 + lVar17);
      *(char *)(lVar16 + lVar17) = (char)uVar4;
      *(char *)(param_1[0x401] + lVar19) = (char)((uint)uVar4 >> 8);
      *(char *)(param_1[0x401] + lVar18) = (char)((uint)uVar4 >> 0x10);
    }
    return;
  case 0xf40:
  case 0xf50:
  case 0xf60:
  case 0xf70:
    return;
  case 0xf80:
  case 0xf90:
  case 4000:
  case 0xfb0:
    param_1[0x406] = 0;
    *(undefined2 *)((long)param_1 + 0x202c) = 0;
    *(undefined8 *)((long)param_1 + 0x2024) = 0;
    *(undefined8 *)((long)param_1 + 0x2014) = 0;
    *(undefined8 *)((long)param_1 + 0x2019) = 0;
    *(undefined1 *)(param_1 + 0x407) = 0;
    return;
  case 0xfc0:
  case 0xfd0:
  case 0xfe0:
  case 0xff0:
    bVar7 = *(byte *)(param_1 + 0x409);
    *(undefined1 *)(param_1 + 0x402) = 0;
    *(char *)(param_1 + 0x409) = (char)(bVar7 - 1);
    if (bVar7 - 1 < 0x100) {
      return;
    }
    uVar14 = *(ushort *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x2049) * 2 + 0x204a) + 1;
    if ((uVar14 >> 0xf & 1) != 0) {
LAB_03f533f0:
      *(undefined2 *)(param_1 + 0x409) = 0xffff;
LAB_03f533f8:
      *(undefined1 *)(param_1 + 0x402) = 0;
      *(undefined1 *)(param_1 + 0x40f) = 1;
      return;
    }
    if (0xb7f < (uVar14 & 0xffff)) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
      goto LAB_03f533f8;
    }
    if ((uint)*(ushort *)((long)param_1 + 0x204a) == (uVar14 & 0xffff)) {
      *(undefined2 *)(param_1 + 0x409) = 0;
      return;
    }
    if ((uint)*(ushort *)((long)param_1 + 0x204c) == (uVar14 & 0xffff)) {
      *(undefined2 *)(param_1 + 0x409) = 0x100;
      return;
    }
    bVar7 = *(byte *)(param_1[0x401] + 0x7f4c);
    if (*(byte *)((long)param_1 + 0x2049) == 0) {
      if ((bVar7 >> 1 & 1) != 0) {
        if ((bVar7 & 1) != 0) goto LAB_03f533f0;
        goto LAB_03f533d4;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
LAB_03f533d4:
        uVar12 = 0;
        goto LAB_03f533d8;
      }
      if ((bVar7 >> 1 & 1) != 0) goto LAB_03f533f0;
    }
    uVar12 = 1;
LAB_03f533d8:
    *(char *)((long)param_1 + 0x2049) = (char)uVar12;
    *(undefined1 *)(param_1 + 0x409) = 0;
    *(short *)((long)param_1 + (ulong)uVar12 * 2 + 0x204a) = (short)uVar14;
    return;
  }
  uVar14 = 0;
  switch(*(ushort *)((long)param_1 + 0x207a) & 0x7f) {
  case 1:
    uVar14 = *(uint *)((long)param_1 + 0x201c);
    break;
  case 2:
    uVar14 = *(uint *)(param_1 + 0x403);
    break;
  case 3:
    uVar14 = (uint)*(byte *)(param_1 + 0x404);
    break;
  default:
    goto switchD_03f5094c_caseD_4;
  case 8:
    uVar14 = *(uint *)(param_1 + 0x405);
    break;
  case 0xc:
    uVar14 = *(uint *)((long)param_1 + 0x2034);
    break;
  case 0x13:
    uVar14 = *(uint *)((long)param_1 + 0x2024);
    break;
  case 0x1c:
    uVar14 = *(uint *)(param_1 + 0x406);
    break;
  case 0x28:
    uVar14 = (uint)*(ushort *)((long)param_1 + 0x202c);
    break;
  case 0x50:
    break;
  case 0x51:
    uVar14 = 0xffffff;
    break;
  case 0x52:
    uVar14 = 0xff00;
    break;
  case 0x53:
    uVar14 = 0xff0000;
    break;
  case 0x54:
    uVar14 = 0xffff;
    break;
  case 0x55:
    uVar14 = 0xffff00;
    break;
  case 0x56:
    uVar14 = 0x800000;
    break;
  case 0x57:
    uVar14 = 0x7fffff;
    break;
  case 0x58:
    uVar14 = 0x8000;
    break;
  case 0x59:
    uVar14 = 0x7fff;
    break;
  case 0x5a:
    uVar14 = 0xff7fff;
    break;
  case 0x5b:
    uVar14 = 0xffff7f;
    break;
  case 0x5c:
    uVar14 = 0x10000;
    break;
  case 0x5d:
    uVar14 = 0xfeffff;
    break;
  case 0x5e:
    uVar14 = 0x100;
    break;
  case 0x5f:
    uVar14 = 0xfeff;
    break;
  case 0x60:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f80;
    goto LAB_03f50acc;
  case 0x61:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f83;
    goto LAB_03f50acc;
  case 0x62:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f86;
    goto LAB_03f50acc;
  case 99:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f89;
    goto LAB_03f50acc;
  case 100:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f8c;
    goto LAB_03f50acc;
  case 0x65:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f8f;
    goto LAB_03f50acc;
  case 0x66:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f92;
    goto LAB_03f50acc;
  case 0x67:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f95;
    goto LAB_03f50acc;
  case 0x68:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f98;
    goto LAB_03f50acc;
  case 0x69:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f9b;
    goto LAB_03f50acc;
  case 0x6a:
    lVar16 = param_1[0x401];
    lVar17 = 0x7f9e;
    goto LAB_03f50acc;
  case 0x6b:
    lVar16 = param_1[0x401];
    lVar17 = 0x7fa1;
    goto LAB_03f50acc;
  case 0x6c:
    lVar16 = param_1[0x401];
    lVar17 = 0x7fa4;
    goto LAB_03f50acc;
  case 0x6d:
    lVar16 = param_1[0x401];
    lVar17 = 0x7fa7;
    goto LAB_03f50acc;
  case 0x6e:
    lVar16 = param_1[0x401];
    lVar17 = 0x7faa;
    goto LAB_03f50acc;
  case 0x6f:
    lVar16 = param_1[0x401];
    lVar17 = 0x7fad;
LAB_03f50acc:
    uVar14 = (uint)*(uint3 *)(lVar16 + lVar17);
  }
  *(uint *)((long)param_1 + 0x2014) = uVar14;
switchD_03f5094c_caseD_4:
  return;
}

