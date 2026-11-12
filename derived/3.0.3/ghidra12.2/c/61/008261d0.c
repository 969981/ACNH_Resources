
void FUN_008261d0(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [8];
  
  if (0 < *(int *)(param_1 + 0xf8)) {
    lVar7 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x108);
    do {
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x100) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *puVar12 = puVar10;
      *(undefined8 **)(param_1 + 0x108) = puVar12;
      puVar10 = puVar12;
    } while (lVar7 < *(int *)(param_1 + 0xf8));
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    local_28[0] = *(byte *)(param_1 + 0x158);
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    iVar3 = FUN_02582fe0(local_28);
    if (iVar3 == -1) {
      local_2c[0] = *(byte *)(param_1 + 0x158);
      if (7 < local_2c[0]) {
        local_2c[0] = 0xff;
      }
      lVar7 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar7 + 0x473);
      pcVar5 = PTR_DAT_04bc1220;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar11 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar11 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar11 & 8) != 0) {
          pcVar5 = (char *)(lVar7 + 0x472);
        }
      }
      cVar1 = *pcVar5;
      pcVar5 = (char *)FUN_02582a24(local_2c);
      if (cVar1 != *pcVar5) {
        return;
      }
      uVar4 = FUN_02582d8c(local_2c,2);
      if (7 < uVar4) {
        return;
      }
      lVar7 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0;
      if (*(char *)(lVar7 + 0x13d4) == '\0') {
        return;
      }
      if (*(int *)(lVar7 + 0x13d0) != 1) {
        return;
      }
      bVar2 = *(byte *)(lVar7 + 0x13d5);
      iVar3 = *(int *)(param_1 + 0xf8);
      if (iVar3 != 0) {
        puVar10 = *(undefined8 **)(param_1 + 0x100);
        lVar7 = (long)iVar3 << 3;
        do {
          if (((((uint *)*puVar10)[1] & 1) != 0) && (*(uint *)*puVar10 == (uint)bVar2)) {
            return;
          }
          puVar10 = puVar10 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (*(int *)(param_1 + 0xfc) <= iVar3) {
        return;
      }
      puVar11 = *(uint **)(param_1 + 0x108);
      if (puVar11 != (uint *)0x0) {
        *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)puVar11;
      }
      puVar11[0] = 0xffffffff;
      puVar11[1] = 0;
      if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
        *(uint **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) = puVar11;
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
      *puVar11 = (uint)bVar2;
      puVar11[1] = puVar11[1] | 1;
      return;
    }
    iVar6 = *(int *)(param_1 + 0xf8);
    if (iVar6 != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x100);
      lVar7 = (long)iVar6 << 3;
      do {
        if (((((int *)*puVar10)[1] & 1U) == 0) && (*(int *)*puVar10 == iVar3)) {
          return;
        }
        puVar10 = puVar10 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    goto LAB_00826500;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_00826414:
    if (*pbVar8 < 8) goto LAB_0082648c;
LAB_00826420:
    if (DAT_0537d558 == (long *)0x0) {
LAB_00826484:
      pbVar8 = &DAT_0548e168;
      goto LAB_0082648c;
    }
    lVar7 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar11 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar11 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar11 & 8) != 0) {
        pbVar8 = (byte *)(lVar7 + 0x471);
      }
    }
    local_30[0] = *pbVar8;
    if (7 < local_30[0]) goto LAB_00826484;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00826414;
      }
      goto LAB_00826420;
    }
LAB_0082648c:
    local_30[0] = *pbVar8;
    if (7 < local_30[0]) {
      local_30[0] = 0xff;
    }
  }
  iVar3 = FUN_02582fe0(local_30);
  if (iVar3 == -1) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0xf8);
  if (iVar6 != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x100);
    lVar7 = (long)iVar6 << 3;
    do {
      if (((((int *)*puVar10)[1] & 1U) == 0) && (*(int *)*puVar10 == iVar3)) {
        return;
      }
      puVar10 = puVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
LAB_00826500:
  if (iVar6 < *(int *)(param_1 + 0xfc)) {
    piVar9 = *(int **)(param_1 + 0x108);
    if (piVar9 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)piVar9;
    }
    piVar9[0] = -1;
    piVar9[1] = 0;
    if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
      *(int **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) = piVar9;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
    *piVar9 = iVar3;
    piVar9[1] = piVar9[1] & 0xfffffffe;
  }
  return;
}

