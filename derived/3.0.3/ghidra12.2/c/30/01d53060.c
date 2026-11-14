
/* WARNING: Removing unreachable block (ram,0x01d531d4) */

undefined8 FUN_01d53060(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined **local_38;
  byte local_18 [4];
  undefined4 local_14;
  
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_01d530d4:
    if (7 < *pbVar5) {
LAB_01d530e0:
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
        local_18[0] = *pbVar5;
        if (local_18[0] < 8) goto LAB_01d53160;
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
        goto LAB_01d530d4;
      }
      goto LAB_01d530e0;
    }
  }
  local_18[0] = *pbVar5;
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
LAB_01d53160:
  uVar3 = FUN_00a74b78(local_18);
  if (uVar3 == 4) {
    return 1;
  }
  lVar6 = *(long *)PTR_DAT_04bb28f8;
  local_38 = &PTR_LAB_04b29550;
  uVar4 = FUN_0386c7f0(DAT_05ae62d0,&local_38,1);
  if ((uVar4 & 1) != 0) {
    local_14 = 1;
    if (*(long **)(DAT_05739190 + 0x48) == (long *)0x0) {
      return 1;
    }
    uVar4 = (**(code **)(**(long **)(DAT_05739190 + 0x48) + 0xe8))();
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  if (*(int *)(lVar6 + 0x50) != 0) {
    uVar4 = FUN_0252c360(local_18);
    if ((uVar4 & 1) != 0) {
      return 2;
    }
    if ((uVar3 < 0xe) && ((1 << (ulong)(uVar3 & 0x1f) & 0x2209U) != 0)) {
      return 1;
    }
  }
  return 0;
}

