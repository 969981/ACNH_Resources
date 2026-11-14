
uint FUN_01ae6c68(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  ushort uVar7;
  int iVar8;
  uint *puVar9;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if ((puVar4 == (uint *)0x0) || (uVar5 = *puVar4, uVar5 == 0 || puVar4 == (uint *)(ulong)uVar5)) {
LAB_01ae6c80:
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar5 = puVar6[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326d48) &&
             (uVar5 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar2 * 2), uVar5 < 0x52))
          goto LAB_01ae6c84;
        }
      }
      goto LAB_01ae6c80;
    }
  }
LAB_01ae6c84:
  if ((int)*(uint *)(DAT_0532a788 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a788 + 0xb0) == 0) ||
         (puVar6 = *(uint **)(*(long *)(DAT_0532a788 + 0xb0) + 8), puVar6 == (uint *)0x0)) ||
        ((uVar5 < *(uint *)(DAT_0532a788 + 200) &&
         (*(char *)(*(long *)(DAT_0532a788 + 0xd0) + (long)(int)uVar5) == '\0')))) ||
       (((*puVar6 <= uVar5 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_01ae6dbc;
    iVar8 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                     (long)puVar6);
    if (puVar6 != (uint *)0x0) goto LAB_01ae6cc4;
    uVar5 = 0;
  }
  else {
    if (uVar5 < *(uint *)(DAT_0532a788 + 0x1c0)) {
      if (*(uint *)(DAT_0532a788 + 0x1b0) <= uVar5) {
        uVar5 = 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_0532a788 + 0x1b8) + (ulong)uVar5 * 8);
      uVar5 = 0;
      if (puVar6 == (uint *)0x0) goto LAB_01ae6dc0;
LAB_01ae6cc4:
      uVar5 = *puVar6;
      if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
        puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
        if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326d58) &&
               (uVar7 = *(ushort *)(DAT_05326d60 + (long)(int)uVar2 * 2), uVar5 = (uint)uVar7,
               uVar7 < 0x14)) goto LAB_01ae6dc0;
          }
        }
      }
    }
LAB_01ae6dbc:
    uVar5 = 0;
  }
LAB_01ae6dc0:
  uVar7 = 0;
  if (((puVar4 != (uint *)0x0) && (uVar2 = *puVar4, uVar2 != 0)) && (puVar4 != (uint *)(ulong)uVar2)
     ) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    uVar7 = 0;
    if (*puVar6 != 0) {
      uVar2 = puVar6[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar2);
          }
          if (*puVar6 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05326d48) &&
             (uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), uVar7 < 0x52))
          goto LAB_01ae6e58;
        }
      }
      uVar7 = 0;
    }
  }
LAB_01ae6e58:
  uVar2 = 0;
  if ((uVar7 & 0xfffe) != 0x26) {
    uVar2 = (uint)(uVar5 < 0x10) & 0x8c11U >> (ulong)(uVar5 & 0x1f);
  }
  return uVar2;
}

