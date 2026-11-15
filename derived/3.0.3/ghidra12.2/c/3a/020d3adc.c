
void FUN_020d3adc(void)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  lVar4 = *(long *)PTR_DAT_04bb39b0;
  pbVar3 = PTR_DAT_04bb32e0;
  if (lVar4 == 0) {
LAB_020d3b48:
    if (7 < *pbVar3) {
LAB_020d3b54:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar4 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar4 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar4 + 0x471);
          }
        }
        local_14[0] = *pbVar3;
        if (local_14[0] < 8) goto LAB_020d3bd4;
      }
      pbVar3 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar4 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(lVar4 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar3 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020d3b48;
      }
      goto LAB_020d3b54;
    }
  }
  local_14[0] = *pbVar3;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_020d3bd4:
  local_28 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "MoveNpcTradeSkipCount";
  FUN_0274bfe8(local_14,&local_28,0);
  return;
}

