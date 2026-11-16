
uint FUN_0267bdf0(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte local_24 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_0267be50:
    if (7 < *pbVar5) {
LAB_0267be5c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar7 + 0x471);
          }
        }
        local_24[0] = *pbVar5;
        if (local_24[0] < 8) goto LAB_0267becc;
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
        goto LAB_0267be50;
      }
      goto LAB_0267be5c;
    }
  }
  local_24[0] = *pbVar5;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_0267becc:
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar7 == 0) {
    return 0;
  }
  lVar9 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
    plVar6 = *(long **)(lVar9 + 0x178);
  }
  else {
    plVar6 = *(long **)(lVar7 + 0x19628);
  }
  if ((plVar6 == (long *)0x0) || ((undefined8 *)*plVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)*plVar6)();
    uVar3 = uVar3 ^ 1;
  }
  uVar8 = *(uint *)(*(long *)(lVar9 + 0x160) + *(long *)(lVar9 + 0x158) + 72000);
  if (8999 < uVar8) {
    uVar8 = 9000;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar9 + 0x178) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar9 + 0x178) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return uVar8;
}

