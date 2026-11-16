
ulong FUN_02555518(undefined8 param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_02555560:
    if (7 < *pbVar5) {
LAB_0255556c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_14[0] = *pbVar5;
        if (local_14[0] < 8) goto LAB_02555614;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      uVar4 = FUN_02555660(PTR_DAT_04bb32e0,param_2,param_3 & 1);
      return uVar4;
    }
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02555560;
      }
      goto LAB_0255556c;
    }
  }
  local_14[0] = *pbVar5;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_02555614:
  uVar3 = FUN_02555660(local_14,param_2,param_3 & 1);
  return (ulong)(uVar3 & 1);
}

