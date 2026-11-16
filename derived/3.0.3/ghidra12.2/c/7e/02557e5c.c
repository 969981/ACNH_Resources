
undefined8 FUN_02557e5c(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (local_34[0] < 8) goto LAB_02557f74;
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_02557ee0:
    if (7 < *pbVar6) {
LAB_02557eec:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_34[0] = *pbVar6;
        if (local_34[0] < 8) goto LAB_02557f74;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02557ee0;
      }
      goto LAB_02557eec;
    }
  }
  local_34[0] = *pbVar6;
  if (7 < local_34[0]) {
    return 0;
  }
LAB_02557f74:
  uVar5 = FUN_02582d8c(local_34,1);
  puVar4 = PTR_DAT_04bb4fb8;
  if (((uVar5 < 8) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
    uVar5 = FUN_02582d8c(local_34,1);
    puVar3 = PTR_DAT_04bb43c0;
    if ((uVar5 < 8) &&
       (lVar7 = *(long *)puVar4, *(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) {
      uVar8 = (ulong)uVar5;
      if (*(char *)(lVar7 + uVar8 * 0x13f0 + 0x18) == '\0') {
        lVar9 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(lVar7 + uVar8 * 0x13f0 + 0x1c);
        if (*(long *)puVar3 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            return 1;
          }
        }
        if ((**(char **)(lVar7 + uVar8 * 0x13f0 + 0xe0) == '\0') ||
           (**(char **)(lVar7 + uVar8 * 0x13f0 + 0x138) == '\0')) {
          if (**(char **)(lVar7 + uVar8 * 0x13f0 + 0x230) == '\0') {
            return 0;
          }
          if (**(char **)(lVar7 + uVar8 * 0x13f0 + 0x288) == '\0') {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

