
void FUN_01de1b80(long param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    return;
  }
  uVar3 = FUN_02640eb0();
  if ((uVar3 & 1) == 0) goto LAB_01de1cb8;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_01de1c04:
    if (*pbVar4 < 8) goto LAB_01de1c7c;
LAB_01de1c10:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01de1c74:
      pbVar4 = PTR_DAT_04bb5038;
      goto LAB_01de1c7c;
    }
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
    local_4[0] = *pbVar4;
    if (7 < local_4[0]) goto LAB_01de1c74;
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01de1c04;
      }
      goto LAB_01de1c10;
    }
LAB_01de1c7c:
    local_4[0] = *pbVar4;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "IllegalReportCount";
  FUN_0274ca70(local_4,&local_30,1);
LAB_01de1cb8:
  *(undefined1 *)(param_1 + 0x89) = 0;
  return;
}

