
void FUN_034c5a8c(void)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 local_38;
  byte local_34;
  undefined **local_30;
  
  local_30 = &PTR_LAB_04986038;
  local_38 = 0x69;
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_034c5b10:
    if (7 < *pbVar3) {
LAB_034c5b1c:
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
        local_34 = *pbVar3;
        if (local_34 < 8) goto LAB_034c5b8c;
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
        goto LAB_034c5b10;
      }
      goto LAB_034c5b1c;
    }
  }
  local_34 = *pbVar3;
  if (7 < local_34) {
    local_34 = 0xff;
  }
LAB_034c5b8c:
  if (7 < local_34) {
    local_34 = 0xff;
  }
  FUN_0339bb10(*(undefined8 *)(DAT_05739190 + 0x10),&local_38);
  return;
}

