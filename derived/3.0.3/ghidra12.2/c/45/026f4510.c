
undefined8 FUN_026f4510(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte local_4 [4];
  
  uVar3 = FUN_0252cf54();
  if ((uVar3 & 1) == 0) {
    local_4[0] = *PTR_DAT_04bb32e0;
    bVar10 = local_4[0];
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
      bVar10 = local_4[0];
    }
    goto LAB_026f4654;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_026f45a8:
    if (*pbVar6 < 8) goto LAB_026f4614;
LAB_026f45b4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_026f460c:
      pbVar6 = &DAT_0548e168;
      goto LAB_026f4614;
    }
    lVar7 = *DAT_0537d558;
    bVar10 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar11 = *pbVar6;
    if (7 < bVar11) goto LAB_026f460c;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026f45a8;
      }
      goto LAB_026f45b4;
    }
LAB_026f4614:
    bVar11 = *pbVar6;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
  }
  bVar9 = bVar11;
  if (7 < bVar11) {
    bVar9 = 0xff;
  }
  local_4[0] = *PTR_DAT_04bb32e0;
  bVar10 = local_4[0];
  if (7 < local_4[0]) {
    bVar10 = 0xff;
  }
  if (bVar9 != bVar10) {
    local_4[0] = bVar11;
  }
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_026f4654:
  bVar11 = local_4[0];
  if (7 < local_4[0]) {
    bVar11 = 0xff;
  }
  if (bVar11 != bVar10) {
    FUN_02582a24(local_4);
    uVar2 = FUN_02582d8c(local_4,1);
    if (((uVar2 < 8) &&
        (lVar7 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar7 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(int *)(lVar7 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 0)) {
      uVar2 = (uint)*(byte *)(lVar7 + (ulong)uVar2 * 0x13f0 + 0x13d5);
      lVar7 = *(long *)(param_1 + 0x10);
    }
    else {
      uVar2 = 0xffffffff;
      lVar7 = *(long *)(param_1 + 0x10);
    }
    if (lVar7 != 0) {
      if ((*(int *)(param_1 + 0xd4) == 1) && (*(uint *)(param_1 + 0xd0) == uVar2)) {
        lVar8 = 0;
      }
      else if ((*(int *)(param_1 + 0xdc) == 1) && (*(uint *)(param_1 + 0xd8) == uVar2)) {
        lVar8 = 1;
      }
      else if ((*(int *)(param_1 + 0xe4) == 1) && (*(uint *)(param_1 + 0xe0) == uVar2)) {
        lVar8 = 2;
      }
      else if ((*(int *)(param_1 + 0xec) == 1) && (*(uint *)(param_1 + 0xe8) == uVar2)) {
        lVar8 = 3;
      }
      else if ((*(int *)(param_1 + 0xf4) == 1) && (*(uint *)(param_1 + 0xf0) == uVar2)) {
        lVar8 = 4;
      }
      else if ((*(int *)(param_1 + 0xfc) == 1) && (*(uint *)(param_1 + 0xf8) == uVar2)) {
        lVar8 = 5;
      }
      else if ((*(int *)(param_1 + 0x104) == 1) && (*(uint *)(param_1 + 0x100) == uVar2)) {
        lVar8 = 6;
      }
      else {
        if (*(int *)(param_1 + 0x10c) != 1) {
          return 0;
        }
        if (*(uint *)(param_1 + 0x108) != uVar2) {
          return 0;
        }
        lVar8 = 7;
      }
      plVar4 = *(long **)(lVar7 + lVar8 * 8 + 0xa0);
      if (plVar4 == (long *)0x0) {
        return 0;
      }
      uVar5 = (**(code **)(*plVar4 + 0x38))();
      return uVar5;
    }
  }
  return 0;
}

