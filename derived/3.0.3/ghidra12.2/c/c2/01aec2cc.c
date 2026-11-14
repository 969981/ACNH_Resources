
bool FUN_01aec2cc(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0x21;
  }
  else {
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
          if ((uVar2 < DAT_05326af0) &&
             (uVar3 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3,
             uVar3 < 0xa2)) goto LAB_01aec370;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01aec370:
  if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
         (puVar5 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar5 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a0 + 200) <= uVar4 ||
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar4) != '\0')))) &&
       (((uVar4 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
      iVar6 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                       (long)puVar5);
      if (puVar5 == (uint *)0x0) {
        uVar3 = 0;
        goto LAB_01aec4a8;
      }
      goto LAB_01aec3ac;
    }
  }
  else if (uVar4 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar4 * 8);
    uVar3 = 0;
    if (puVar5 == (uint *)0x0) goto LAB_01aec4a8;
LAB_01aec3ac:
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
          if ((uVar2 < DAT_05326b00) &&
             (uVar3 = *(ushort *)(DAT_05326b08 + (long)(int)uVar2 * 2), uVar3 < 0x75))
          goto LAB_01aec4a8;
        }
      }
    }
  }
  uVar3 = 0;
LAB_01aec4a8:
  return uVar3 == 4;
}

