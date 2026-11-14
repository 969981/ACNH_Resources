
bool FUN_01aebedc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0x21;
  }
  else {
    uVar4 = *puVar5;
    if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
      uVar4 = 0;
      if (*puVar8 == 0) goto LAB_01aebf84;
      uVar4 = puVar8[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar4 != 0) {
            uVar3 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
          }
          if (*puVar8 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05326af0) &&
             (uVar4 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar3 * 2), uVar4 < 0xa2))
          goto LAB_01aebf84;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01aebf84:
  uVar3 = *(uint *)(DAT_0532a7a0 + 0x1c0);
  if ((int)uVar3 < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((uVar4 < *(uint *)(DAT_0532a7a0 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar4) == '\0')))) ||
       (((*puVar8 <= uVar4 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_01aec0b8;
    iVar7 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar4 + (uint)(ushort)puVar8[2] * 8 + iVar7) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_01aebfc0;
    uVar6 = 0;
  }
  else {
    if (uVar4 < uVar3) {
      if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar4) {
        uVar4 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar4 * 8);
      uVar6 = 0;
      if (puVar8 == (uint *)0x0) goto LAB_01aec0bc;
LAB_01aebfc0:
      uVar4 = *puVar8;
      if (uVar4 != 0 && puVar8 != (uint *)(ulong)uVar4) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        if (((*puVar9 != 0) && (uVar4 = puVar9[1], uVar4 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326b00) &&
               (uVar6 = *(ushort *)(DAT_05326b08 + (long)(int)uVar2 * 2), uVar6 < 0x75))
            goto LAB_01aec0bc;
          }
        }
      }
    }
LAB_01aec0b8:
    uVar6 = 0;
  }
LAB_01aec0bc:
  if (uVar6 == 3) {
    return true;
  }
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0x21;
  }
  else {
    uVar2 = *puVar5;
    uVar4 = 0;
    if ((uVar2 != 0) && (puVar5 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
      uVar4 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326af0) &&
               (uVar4 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar4 < 0xa2))
            goto LAB_01aec17c;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_01aec17c:
  if ((int)uVar3 < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
         (puVar5 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar5 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a0 + 200) <= uVar4 ||
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar4) != '\0')))) &&
       (((uVar4 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
      iVar7 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar7) +
                       (long)puVar5);
      goto joined_r0x01aec2a4;
    }
  }
  else if (uVar4 < uVar3) {
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x01aec2a4:
    uVar6 = 0;
    if (puVar5 == (uint *)0x0) goto LAB_01aec2b0;
    uVar6 = 0;
    uVar4 = *puVar5;
    if ((uVar4 == 0) || (puVar5 == (uint *)(ulong)uVar4)) goto LAB_01aec2b0;
    puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    uVar6 = 0;
    if (*puVar8 == 0) goto LAB_01aec2b0;
    uVar4 = puVar8[1];
    if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 != 0) {
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
        }
        if (*puVar8 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_05326b00) &&
           (uVar6 = *(ushort *)(DAT_05326b08 + (long)(int)uVar3 * 2), uVar6 < 0x75))
        goto LAB_01aec2b0;
      }
    }
  }
  uVar6 = 0;
LAB_01aec2b0:
  return uVar6 == 7;
}

