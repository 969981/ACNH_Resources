
undefined8 FUN_02658b70(void)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_24 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_02658bd0:
    if (7 < *pbVar5) {
LAB_02658bdc:
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
        local_24[0] = *pbVar5;
        if (local_24[0] < 8) goto LAB_02658c4c;
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
        goto LAB_02658bd0;
      }
      goto LAB_02658bdc;
    }
  }
  local_24[0] = *pbVar5;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_02658c4c:
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else if ((*(long **)(lVar6 + 0x18438) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x18438), puVar3 == (undefined8 *)0x0)) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x18420) + *(long *)(lVar6 + 0x18418) + 8);
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x18420) + *(long *)(lVar6 + 0x18418) + 8);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x18438) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x18438) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar7;
}

