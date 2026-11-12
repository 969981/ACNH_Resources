
undefined8 FUN_0076e2c0(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  byte local_14 [4];
  
  lVar6 = FUN_02535188();
  if (lVar6 == 0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb3960;
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_0076e34c:
    if (7 < *pbVar8) {
LAB_0076e358:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar10 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar8 = (byte *)(lVar10 + 0x471);
          }
        }
        local_14[0] = *pbVar8;
        if (local_14[0] < 8) goto LAB_0076e3d8;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0076e34c;
      }
      goto LAB_0076e358;
    }
  }
  local_14[0] = *pbVar8;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_0076e3d8:
  uVar5 = FUN_02582d8c(local_14,1);
  if ((uVar5 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')
     ) {
    piVar1 = (int *)(lVar11 + 0xf5b40);
    uVar5 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d8);
    piVar9 = piVar1 + uVar5;
    if (3 < uVar5) {
      piVar9 = piVar1;
    }
  }
  else {
    piVar9 = (int *)(lVar11 + 0xf5b40);
  }
  if (*piVar9 == 4) {
    uVar5 = *(uint *)(lVar6 + 0x8c) >> 10;
  }
  else {
    uVar5 = *(uint *)(lVar6 + 0x8c) >> 9;
  }
  if ((uVar5 & 1) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x2a8);
    uVar7 = (**(code **)(*(long *)(param_1 + 0x2a8) + 0x10))(puVar2);
    if (((uVar7 & 1) == 0) || (uVar7 = (**(code **)*puVar2)(puVar2), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}

