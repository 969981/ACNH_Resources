
int FUN_02d15d60(undefined4 param_1)

{
  short *psVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  long lVar14;
  byte local_14 [4];
  
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  local_14[0] = DAT_0548e140;
  if (lVar10 == 0) {
joined_r0x02d15de4:
    if (local_14[0] < 8) goto LAB_02d15e54;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar10 + 0x158);
    }
    local_14[0] = *pbVar8;
    if (local_14[0] < 8) goto LAB_02d15e54;
    if ((*(int *)(lVar10 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      local_14[0] = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x02d15de4;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar10 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    local_14[0] = *pbVar8;
    if (local_14[0] < 8) goto LAB_02d15e54;
  }
  local_14[0] = DAT_0548e168;
  if (7 < DAT_0548e168) {
    return 0;
  }
LAB_02d15e54:
  uVar6 = FUN_02669430(local_14);
  if ((((uVar6 & 1) == 0) || (DAT_05574040 == 0)) ||
     (lVar10 = FUN_026eec4c(DAT_05574040,param_1), lVar10 == 0)) {
    return 0;
  }
  lVar14 = lVar10 + 0x194b0;
  if (*(long *)(lVar10 + 0x194b8) == 0) {
    lVar14 = *(long *)(DAT_05574040 + 0x20);
    plVar9 = *(long **)(lVar14 + 0x28);
  }
  else {
    plVar9 = *(long **)(lVar10 + 0x194d8);
  }
  if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (*(code *)**(undefined8 **)*plVar9)();
    uVar5 = uVar5 ^ 1;
  }
  lVar10 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8);
  uVar11 = *(uint *)(lVar10 + 0x11acc);
  if (8999 < uVar11) {
    uVar11 = 9000;
  }
  if (uVar11 == 0) {
    iVar12 = 0;
  }
  else {
    if (uVar11 == 1) {
      uVar6 = 0;
      iVar12 = 0;
    }
    else {
      uVar6 = 0;
      iVar12 = 0;
      psVar13 = (short *)(lVar10 + 0x194);
      do {
        psVar1 = psVar13 + -4;
        uVar6 = uVar6 + 2;
        sVar4 = *psVar13;
        psVar13 = psVar13 + 8;
        if (*psVar1 == -2) {
          iVar12 = iVar12 + 1;
        }
        if (sVar4 == -2) {
          iVar12 = iVar12 + 1;
        }
      } while (((ulong)uVar11 & 0x3ffe) != uVar6);
    }
    if (((uVar11 & 1) != 0) && (*(short *)(lVar10 + 0x18c + uVar6 * 8) == -2)) {
      iVar12 = iVar12 + 1;
    }
  }
  iVar12 = uVar11 - iVar12;
  if ((uVar5 & 1) != 0) {
    return iVar12;
  }
  if (*(long *)(lVar14 + 0x28) == 0) {
    return iVar12;
  }
  puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8);
  if (puVar7 == (undefined8 *)0x0) {
    return iVar12;
  }
  (**(code **)*puVar7)();
  return iVar12;
}

