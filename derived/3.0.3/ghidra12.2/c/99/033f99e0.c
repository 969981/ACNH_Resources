
undefined8 FUN_033f99e0(void)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_14 [4];
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_033f9a4c:
    if (7 < *pbVar6) {
LAB_033f9a58:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
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
        if (local_14[0] < 8) goto LAB_033f9ad8;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_033f9a4c;
      }
      goto LAB_033f9a58;
    }
  }
  local_14[0] = *pbVar6;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_033f9ad8:
  plVar3 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),DAT_0574d71c,
                                local_14);
  if ((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0xe0))(), (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

