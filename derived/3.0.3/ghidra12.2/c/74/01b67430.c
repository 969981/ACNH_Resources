
void FUN_01b67430(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  byte local_24 [4];
  
  if (*(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10) < 2) {
    local_24[0] = *param_3;
    goto LAB_01b6755c;
  }
  if (DAT_04cd19d8 == 0) {
    bVar3 = DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_01b674dc;
LAB_01b67530:
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar3 = *pbVar5;
    if ((*pbVar5 < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (bVar3 = *(byte *)(DAT_054f5738 + 0x11a5), bVar3 < 8)))) goto LAB_01b67530;
LAB_01b674dc:
    lVar4 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar4 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar4 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar4 + 0x471);
      }
    }
    bVar3 = *pbVar5;
    if (7 < bVar3) {
      bVar3 = *PTR_DAT_04bb5038;
      goto LAB_01b67530;
    }
  }
  local_24[0] = *param_3;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  bVar6 = local_24[0];
  if (7 < local_24[0]) {
    bVar6 = 0xff;
  }
  if (bVar3 != bVar6) {
    return;
  }
LAB_01b6755c:
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  uVar2 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  FUN_01b67280(uVar2,param_1,param_2);
  return;
}

