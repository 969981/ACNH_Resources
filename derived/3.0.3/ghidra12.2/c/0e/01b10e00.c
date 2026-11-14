
ushort FUN_01b10e00(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  uVar4 = 0;
  if (puVar5 != (uint *)0x0) {
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
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327350) &&
             (uVar3 = *(ushort *)(DAT_05327358 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3,
             uVar3 < 0x54)) goto LAB_01b10e90;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01b10e90:
  if ((int)*(uint *)(DAT_0532a820 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a820 + 0xb0) == 0) {
      return 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a820 + 0xb0) + 8);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if ((uVar4 < *(uint *)(DAT_0532a820 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a820 + 0xd0) + (long)(int)uVar4) == '\0')) {
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
    if (*(uint *)(DAT_0532a820 + 0x1c0) <= uVar4) {
      return 0;
    }
    if (*(uint *)(DAT_0532a820 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a820 + 0x1b8) + (ulong)uVar4 * 8);
  }
  if ((puVar5 != (uint *)0x0) && (uVar4 = *puVar5, uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4)) {
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if ((*puVar7 != 0) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05327398) &&
           (uVar3 = *(ushort *)(DAT_053273a0 + (long)(int)uVar2 * 2), uVar3 < 0xd)) {
          return uVar3;
        }
      }
    }
  }
  return 0;
}

