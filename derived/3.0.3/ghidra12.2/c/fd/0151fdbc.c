
void FUN_0151fdbc(undefined8 param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte local_14 [4];
  
  *param_2 = 0;
  if (1 < *(uint *)(DAT_0537d558 + 0x10)) {
    return;
  }
  local_14[0] = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x0151fe48:
    if (local_14[0] < 8) goto LAB_0151fea8;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    local_14[0] = *pbVar4;
    if (local_14[0] < 8) goto LAB_0151fea8;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      local_14[0] = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x0151fe48;
    }
  }
  lVar3 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar3 + 0x473);
  pbVar4 = PTR_DAT_04bb5038;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar3 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar3 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar3 + 0x471);
    }
  }
  local_14[0] = *pbVar4;
  if ((7 < local_14[0]) && (local_14[0] = *PTR_DAT_04bb5038, 7 < local_14[0])) {
    return;
  }
LAB_0151fea8:
  FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  return;
}

