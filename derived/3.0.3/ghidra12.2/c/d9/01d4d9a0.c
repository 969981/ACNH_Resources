
void FUN_01d4d9a0(long param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  long lVar7;
  undefined *local_80 [4];
  int local_5c;
  int local_14;
  
  iVar4 = *(int *)(param_1 + 0xa98);
  iVar2 = *(int *)(param_1 + 0xa9c);
  FUN_01d4db3c();
  if (iVar4 == *(int *)(param_1 + 0xa98) && iVar2 == *(int *)(param_1 + 0xa9c)) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_01d4da38:
    if (7 < *pbVar5) {
LAB_01d4da44:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar6 = *(byte *)(lVar7 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar6 = *pbVar5;
        bVar3 = 7 < bVar6;
        if (bVar3) {
          bVar6 = 0xff;
        }
        local_14 = CONCAT31(local_14._1_3_,bVar6);
        if (!bVar3) goto LAB_01d4dac4;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d4da38;
      }
      goto LAB_01d4da44;
    }
  }
  bVar6 = *pbVar5;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_14 = CONCAT31(local_14._1_3_,bVar6);
LAB_01d4dac4:
  FUN_025b8540(local_80,&local_14,0);
  FUN_025b8a14(local_80,&local_14);
  local_80[0] = PTR_DAT_04bc3348 + 0x10;
  iVar4 = FUN_025b9490(local_80);
  if (((iVar4 == -1) || (local_14 = iVar4, 0xc < iVar4)) && (local_5c == 0)) {
    local_5c = 1;
  }
  FUN_02601530(local_80);
  return;
}

