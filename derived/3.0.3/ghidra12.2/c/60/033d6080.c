
void FUN_033d6080(void)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  long lVar5;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    return;
  }
  pcVar3 = *(char **)(*(long *)PTR_DAT_04bb2230 + 0x480);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  if (*pcVar3 == '\0') {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_033d610c:
    if (7 < *pbVar4) {
LAB_033d6118:
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
        if (local_14[0] < 8) goto LAB_033d6198;
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
        goto LAB_033d610c;
      }
      goto LAB_033d6118;
    }
  }
  local_14[0] = *pbVar4;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_033d6198:
  local_28 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "NoticeAboutMagokoroMyDesign";
  FUN_02757de8(local_14,&local_28,1);
  return;
}

