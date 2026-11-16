
int FUN_0252d29c(void)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  byte local_18 [4];
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_0252d310:
    if (*pbVar9 < 8) goto LAB_0252d380;
LAB_0252d31c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0252d378:
      pbVar9 = &DAT_0548e168;
      goto LAB_0252d380;
    }
    lVar10 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar10 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar10 + 0x471);
      }
    }
    local_18[0] = *pbVar9;
    if (7 < local_18[0]) goto LAB_0252d378;
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0252d310;
      }
      goto LAB_0252d31c;
    }
LAB_0252d380:
    local_18[0] = *pbVar9;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
      goto LAB_0252d48c;
    }
  }
  lVar10 = *DAT_0537d558;
  if (*(byte *)(lVar10 + 0x476) < 2) {
    iVar5 = FUN_02582d8c(local_18,2);
    if (iVar5 < 0) goto LAB_0252d48c;
  }
  else {
    bVar3 = *(byte *)(lVar10 + (ulong)local_18[0] * 4 + 0x44e);
    if ((long)(char)bVar3 == 0xffffffffffffffff) goto LAB_0252d48c;
    pbVar9 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar9 = (byte *)(lVar10 + 0x48);
    }
    if ((*pbVar9 >> 3 & 1) == 0) goto LAB_0252d48c;
  }
  local_14[0] = local_18[0];
  if (7 < local_18[0]) {
    local_14[0] = 0xff;
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  if (lVar10 != 0) {
    if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    bVar2 = *(byte *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x10);
    bVar3 = bVar2;
    if (7 < bVar2) {
      bVar3 = 0xff;
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if (bVar2 < 8) {
      return (int)(char)bVar3;
    }
  }
LAB_0252d48c:
  if (DAT_04ca9180 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(DAT_04ca9180 + 0x140);
    uVar8 = *(undefined8 *)(DAT_04ca9180 + 0x148);
  }
  iVar5 = FUN_02669a80(uVar7,uVar8);
  return iVar5;
}

