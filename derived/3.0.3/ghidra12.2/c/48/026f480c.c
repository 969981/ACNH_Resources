
undefined8 FUN_026f480c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  byte local_34 [4];
  byte local_18 [4];
  byte local_14 [4];
  
  puVar3 = PTR_DAT_04bb27d0;
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar9 + 0x476) < 2) {
    lVar9 = *(long *)PTR_DAT_04bb4fb8;
    iVar4 = (uint)*(byte *)(lVar9 + 0x27c4) + (uint)*(byte *)(lVar9 + 0x13d4) +
            (uint)*(byte *)(lVar9 + 0x3bb4) + (uint)*(byte *)(lVar9 + 0x4fa4) +
            (uint)*(byte *)(lVar9 + 0x6394) + (uint)*(byte *)(lVar9 + 0x7784) +
            (uint)*(byte *)(lVar9 + 0x8b74) + (uint)*(byte *)(lVar9 + 0x9f64);
joined_r0x026f48c0:
    if (iVar4 == 0) goto LAB_026f4a50;
  }
  else {
    if (*(int *)(lVar9 + 0x508) != 4) {
      iVar4 = FUN_0250a5c8(DAT_054ee400);
      goto joined_r0x026f48c0;
    }
    if (*(char *)(lVar9 + 0x475) == '\0') goto LAB_026f4a50;
  }
  if (DAT_04cd19d8 == 0) {
    return 0;
  }
  if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (pbVar10 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar10 < 8)))) goto LAB_026f49b0;
    plVar7 = *(long **)puVar3;
    if (plVar7 == (long *)0x0) {
LAB_026f49a8:
      pbVar10 = &DAT_0548e168;
      goto LAB_026f49b0;
    }
    lVar9 = *plVar7;
    bVar2 = *(byte *)(lVar9 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar9 + 0x471);
      }
    }
    local_18[0] = *pbVar10;
    if (7 < local_18[0]) goto LAB_026f49a8;
  }
  else {
    pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
LAB_026f49b0:
    local_18[0] = *pbVar10;
    if (7 < local_18[0]) {
      return 0;
    }
  }
  bVar2 = local_18[0];
  lVar9 = **(long **)puVar3;
  if (*(byte *)(lVar9 + 0x476) < 2) {
    iVar4 = FUN_02582d8c(local_18,2);
    if (iVar4 < 0) {
      return 0;
    }
    local_34[0] = local_18[0];
  }
  else {
    local_14[0] = local_18[0];
    uVar6 = FUN_01d3e2d0(lVar9 + 8,local_14);
    local_34[0] = bVar2;
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  uVar6 = FUN_02669430(local_34);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_02582fe0(local_18);
  if (7 < uVar5) {
    return 0;
  }
  if (*(int *)(param_1 + 0x114) != 1) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x110) != uVar5) {
    return 0;
  }
LAB_026f4a50:
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0xe0);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  uVar8 = (**(code **)(*plVar7 + 0x38))();
  return uVar8;
}

