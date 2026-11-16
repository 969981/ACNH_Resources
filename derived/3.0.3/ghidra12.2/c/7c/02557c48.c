
undefined8 FUN_02557c48(byte *param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte local_14 [4];
  
  if (**(char **)(param_2 + 8) == '\0') {
    return 0;
  }
  if (**(char **)(param_2 + 0x60) == '\0') {
    return 0;
  }
  local_14[0] = *param_1;
  if (local_14[0] < 8) goto LAB_02557d78;
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_02557ce4:
    if (7 < *pbVar5) {
LAB_02557cf0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_14[0] = *pbVar5;
        if (local_14[0] < 8) goto LAB_02557d78;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02557ce4;
      }
      goto LAB_02557cf0;
    }
  }
  local_14[0] = *pbVar5;
  if (7 < local_14[0]) {
    return 0;
  }
LAB_02557d78:
  uVar4 = FUN_02582d8c(local_14,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if ((((uVar4 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
     ((uVar4 = FUN_02582d8c(local_14,1), uVar4 < 8 &&
      (lVar6 = *(long *)puVar3, *(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar7 = lVar6 + (ulong)uVar4 * 0x13f0;
    if ((**(char **)(lVar7 + 0xe0) == '\0') ||
       (**(char **)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x138) == '\0')) {
      FUN_02478400(lVar7 + 0xd8,param_2);
      if (DAT_0556aa70 != 0) {
        *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
      }
      return 1;
    }
  }
  return 0;
}

