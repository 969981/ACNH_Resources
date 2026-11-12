
void FUN_0082f984(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  ushort local_28;
  byte local_4 [4];
  
  *param_1 = 0xffffffff;
  FUN_0376baa0(param_2);
  FUN_03775680(auStack_30);
  if (499 < local_28) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_0082fa1c:
    if (7 < *pbVar4) {
LAB_0082fa28:
      if (DAT_0537d558 != (long *)0x0) {
        lVar5 = *DAT_0537d558;
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
        if (local_4[0] < 8) goto LAB_0082faa8;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0082fa1c;
      }
      goto LAB_0082fa28;
    }
  }
  local_4[0] = *pbVar4;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_0082faa8:
  uVar3 = FUN_02582fe0(local_4);
  *param_1 = (uVar3 & 7) << 0x10 | (local_28 & 0x3ff) << 3;
  return;
}

