
bool FUN_016cf878(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) ||
     (lVar4 = *(long *)PTR_DAT_04bb39b0,
     (*(int *)(lVar4 + 0x15c) != 0 || *(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3ee08254) ||
     *(int *)(PTR_DAT_04bc3a78 + 0x38) != 0x6622bd46)) {
    return false;
  }
  pbVar5 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar4 + 0x15c) != 0) {
    pbVar5 = (byte *)(lVar4 + 0x158);
  }
  local_14[0] = *pbVar5;
  if ((7 < local_14[0]) &&
     (((*(int *)(lVar4 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
      (local_14[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < local_14[0])))) {
    lVar4 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar4 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar4 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar4 + 0x471);
      }
    }
    local_14[0] = *pbVar5;
    if (local_14[0] < 8) goto LAB_016cf9b0;
    local_14[0] = *PTR_DAT_04bb5038;
  }
  if (7 < local_14[0]) {
    return false;
  }
LAB_016cf9b0:
  local_28 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "ReserveHotelMannequinTutorial";
  iVar3 = FUN_0274bce0(local_14,&local_28);
  return iVar3 != 0;
}

