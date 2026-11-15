
void FUN_020f13e4(byte *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined *local_20;
  char *pcStack_18;
  
  bVar3 = *param_1;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(*(long *)PTR_DAT_04bb4128 + 0x269) = bVar3;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar2 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_020f1464:
    if (7 < *pbVar2) {
LAB_020f1470:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar5 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar5 + 0x473);
        pbVar2 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar2 = (byte *)(lVar5 + 0x471);
          }
        }
        bVar3 = *pbVar2;
        if (bVar3 < 8) goto LAB_020f14e0;
      }
      pbVar2 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar2) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar2 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020f1464;
      }
      goto LAB_020f1470;
    }
  }
  bVar3 = *pbVar2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
LAB_020f14e0:
  bVar4 = *param_1;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  if (bVar3 == bVar4) {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "CafeTalkSitdown";
    FUN_027533a8(param_1,&local_20,1);
  }
  return;
}

