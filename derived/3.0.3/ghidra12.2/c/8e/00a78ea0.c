
undefined8 FUN_00a78ea0(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_00a78f0c:
    if (7 < *pbVar6) {
LAB_00a78f18:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar6;
        if (local_14[0] < 8) goto LAB_00a78f98;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00a78f0c;
      }
      goto LAB_00a78f18;
    }
  }
  local_14[0] = *pbVar6;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_00a78f98:
  uVar4 = FUN_00a738a0(local_14,0);
  if (((uVar4 & 1) == 0) || (iVar3 = FUN_00a74b78(local_14), iVar3 != 0x11)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

