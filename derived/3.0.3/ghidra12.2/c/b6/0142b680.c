
void FUN_0142b680(void)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long lVar5;
  undefined *local_38;
  char *pcStack_30;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_0142b6ec:
    if (*pbVar4 < 8) goto LAB_0142b764;
LAB_0142b6f8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0142b75c:
      pbVar4 = PTR_DAT_04bb5038;
      goto LAB_0142b764;
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
    local_14[0] = *pbVar4;
    if (7 < local_14[0]) goto LAB_0142b75c;
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0142b6ec;
      }
      goto LAB_0142b6f8;
    }
LAB_0142b764:
    local_14[0] = *pbVar4;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
      uVar3 = 0;
      local_28 = PTR_DAT_04bb2020 + 0x10;
      pcStack_20 = "DiveFishNetHostCatchNumResult";
      goto LAB_0142b7dc;
    }
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "DiveFishNetHostCatchNumResult";
  pcStack_30 = "CatchSeafood";
  local_28 = local_38;
  uVar3 = FUN_02798760(local_14,&local_38);
LAB_0142b7dc:
  FUN_0273f3c4(&local_28,uVar3);
  return;
}

