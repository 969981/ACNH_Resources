
void FUN_0212f3f4(long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 local_4c;
  byte local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x250) == 0) {
    return;
  }
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    return;
  }
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    return;
  }
  local_4c = 0;
  local_44 = 0xff;
  local_40 = 0;
  uStack_38 = 0xfffe;
  FUN_0277d4ac(&uStack_38);
  local_4c = CONCAT44(local_4c._4_4_,9);
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_0212f4c4:
    if (7 < *pbVar3) {
LAB_0212f4d0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar4 = *DAT_0537d558;
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
        local_44 = *pbVar3;
        if (local_44 < 8) goto LAB_0212f538;
      }
      pbVar3 = &DAT_0548e168;
    }
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar3 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0212f4c4;
      }
      goto LAB_0212f4d0;
    }
  }
  local_44 = *pbVar3;
  if (7 < local_44) {
    local_44 = 0xff;
  }
LAB_0212f538:
  if (7 < local_44) {
    local_44 = 0xff;
  }
  FUN_0212ea40(param_1,&local_4c);
  return;
}

