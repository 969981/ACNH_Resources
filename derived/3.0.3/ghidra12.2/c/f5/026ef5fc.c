
ulong FUN_026ef5fc(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  byte local_18 [4];
  byte local_14 [4];
  
  if (*(uint *)(param_1 + 0x4d8) < 8) {
    return (ulong)*(uint *)(param_1 + 0x4d8);
  }
  uVar2 = FUN_0252cf54();
  if ((uVar2 & 1) == 0) {
    local_18[0] = DAT_0548e140;
    goto LAB_026ef730;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_026ef68c:
    if (*pbVar4 < 8) goto LAB_026ef6f8;
LAB_026ef698:
    if (DAT_0537d558 == (long *)0x0) {
LAB_026ef6f0:
      pbVar4 = &DAT_0548e168;
      goto LAB_026ef6f8;
    }
    lVar7 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar7 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar3 = *pbVar4;
    if (7 < bVar3) goto LAB_026ef6f0;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026ef68c;
      }
      goto LAB_026ef698;
    }
LAB_026ef6f8:
    bVar3 = *pbVar4;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
  }
  bVar5 = bVar3;
  if (7 < bVar3) {
    bVar5 = 0xff;
  }
  local_18[0] = *PTR_DAT_04bb32e0;
  bVar6 = local_18[0];
  if (7 < local_18[0]) {
    bVar6 = 0xff;
  }
  if (bVar5 != bVar6) {
    local_18[0] = bVar3;
  }
LAB_026ef730:
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
  local_14[0] = local_18[0];
  uVar2 = FUN_02669430(local_18);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_02582fe0(local_14);
  }
  return uVar2;
}

