
ushort FUN_01b024bc(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *puVar5;
  if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
        }
        if (*puVar7 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        goto joined_r0x01b0255c;
      }
    }
  }
  uVar3 = 0xffffffff;
joined_r0x01b0255c:
  if ((param_2 & 1) == 0) {
    puVar5 = &DAT_053271b0;
  }
  else {
    if ((DAT_05326ce8 <= uVar3) ||
       (uVar2 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar3 * 2), uVar4 = (uint)uVar2, 0x5b5 < uVar2
       )) {
      uVar4 = 0;
    }
    if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
      if (*(long *)(DAT_0532a7e8 + 0xb0) == 0) {
        return 0;
      }
      puVar5 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8);
      if (puVar5 == (uint *)0x0) {
        return 0;
      }
      if ((uVar4 < *(uint *)(DAT_0532a7e8 + 200)) &&
         (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar4) == '\0')) {
        return 0;
      }
      if (*puVar5 <= uVar4) {
        return 0;
      }
      if (puVar5[1] == 0) {
        return 0;
      }
      if ((ushort)puVar5[2] == 0) {
        return 0;
      }
      iVar6 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                       (long)puVar5);
    }
    else {
      if (*(uint *)(DAT_0532a7e8 + 0x1c0) <= uVar4) {
        return 0;
      }
      if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar4) {
        uVar4 = 0;
      }
      puVar5 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar4 * 8);
    }
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    uVar4 = *puVar5;
    if (uVar4 == 0) {
      return 0;
    }
    if (puVar5 == (uint *)(ulong)uVar4) {
      return 0;
    }
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (*puVar7 == 0) {
      return 0;
    }
    uVar4 = puVar7[1];
    if (uVar4 == 0) {
      return 0;
    }
    if ((ulong)(ushort)puVar7[2] == 0) {
      return 0;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = 0;
    if ((ulong)uVar4 != 0) {
      uVar3 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
    }
    puVar5 = &DAT_053271a0;
    if (*puVar7 <= uVar3) {
      uVar3 = 0xffffffff;
    }
  }
  if ((uVar3 < *puVar5) &&
     (uVar2 = *(ushort *)(*(long *)(puVar5 + 2) + (long)(int)uVar3 * 2), uVar2 < 5)) {
    return uVar2;
  }
  return 0;
}

