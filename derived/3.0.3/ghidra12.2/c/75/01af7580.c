
bool FUN_01af7580(long param_1)

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
    uVar4 = 0xbc;
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
          if ((uVar2 < DAT_05326ec0) &&
             (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3,
             uVar3 < 0xbd)) goto LAB_01af7618;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01af7618:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar5 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar5 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar4 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar4) != '\0')))) &&
       (((uVar4 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
      iVar6 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                       (long)puVar5);
      if (puVar5 == (uint *)0x0) {
        uVar3 = 0;
        goto LAB_01af7754;
      }
      goto LAB_01af7658;
    }
  }
  else if (uVar4 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar4 * 8);
    uVar3 = 0;
    if (puVar5 == (uint *)0x0) goto LAB_01af7754;
LAB_01af7658:
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
          if ((uVar2 < DAT_05326e50) &&
             (uVar3 = *(ushort *)(DAT_05326e58 + (long)(int)uVar2 * 2), uVar3 < 2))
          goto LAB_01af7754;
        }
      }
    }
  }
  uVar3 = 0;
LAB_01af7754:
  return uVar3 != 0;
}

