
bool FUN_02204de0(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_02204e4c:
    if (7 < *pbVar4) {
LAB_02204e58:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar5 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        local_14[0] = *pbVar4;
        if (local_14[0] < 8) goto LAB_02204ee0;
      }
      pbVar4 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02204e4c;
      }
      goto LAB_02204e58;
    }
  }
  local_14[0] = *pbVar4;
  if (7 < local_14[0]) {
    return false;
  }
LAB_02204ee0:
  local_28 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "SpnJuneBrideTalkEventFrag";
  iVar3 = FUN_0274bce0(local_14,&local_28);
  return iVar3 == 0;
}

