
bool FUN_026f4a88(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte local_24 [4];
  
  uVar3 = FUN_0252cf54();
  if ((uVar3 & 1) == 0) {
    local_24[0] = *PTR_DAT_04bb32e0;
    bVar7 = local_24[0];
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
      bVar7 = local_24[0];
    }
    goto LAB_026f4bd0;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_026f4b24:
    if (*pbVar4 < 8) goto LAB_026f4b90;
LAB_026f4b30:
    if (DAT_0537d558 == (long *)0x0) {
LAB_026f4b88:
      pbVar4 = &DAT_0548e168;
      goto LAB_026f4b90;
    }
    lVar5 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar5 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar5 + 0x471);
      }
    }
    bVar8 = *pbVar4;
    if (7 < bVar8) goto LAB_026f4b88;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026f4b24;
      }
      goto LAB_026f4b30;
    }
LAB_026f4b90:
    bVar8 = *pbVar4;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
  }
  bVar6 = bVar8;
  if (7 < bVar8) {
    bVar6 = 0xff;
  }
  local_24[0] = *PTR_DAT_04bb32e0;
  bVar7 = local_24[0];
  if (7 < local_24[0]) {
    bVar7 = 0xff;
  }
  if (bVar6 != bVar7) {
    local_24[0] = bVar8;
  }
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_026f4bd0:
  bVar8 = local_24[0];
  if (7 < local_24[0]) {
    bVar8 = 0xff;
  }
  if (bVar8 != bVar7) {
    FUN_02582a24(local_24);
    uVar2 = FUN_02582d8c(local_24,1);
    if (((uVar2 < 8) &&
        (lVar5 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(int *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 0)) {
      bVar7 = *(byte *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d5);
      lVar5 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x38))();
      if (7 < bVar7) {
        return false;
      }
      if (lVar5 == 0) {
        return false;
      }
      return *(int *)(param_1 + 0x11c) == 1 && *(uint *)(param_1 + 0x118) == (uint)bVar7;
    }
  }
  return false;
}

