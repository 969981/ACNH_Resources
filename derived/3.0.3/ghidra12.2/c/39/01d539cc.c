
void FUN_01d539cc(long param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = *(long **)PTR_DAT_04bb27d0;
  lVar6 = *plVar4;
  *(long *)(lVar6 + 0x38) = param_1 + 0x788;
  *(long *)(lVar6 + 0x40) = param_1 + 0x7a8;
  lVar7 = *plVar4;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    bVar3 = *PTR_DAT_04bb32e0;
joined_r0x01d53a68:
    if (7 < bVar3) {
LAB_01d53a6c:
      bVar3 = *(byte *)(lVar7 + 0x473);
      pbVar5 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar5 = (byte *)(lVar7 + 0x471);
        }
      }
      bVar3 = *pbVar5;
      if (bVar3 < 8) goto LAB_01d53ac8;
      bVar3 = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    bVar3 = *pbVar5;
    if (7 < bVar3) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto joined_r0x01d53a68;
      }
      goto LAB_01d53a6c;
    }
  }
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
LAB_01d53ac8:
  if (*(int *)(lVar7 + 0x508) == 0 && *(char *)(lVar7 + 0x55e) == '\0') {
    uVar1 = DAT_0536c720;
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
      uVar1 = 0;
    }
    if (*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) !=
        '\0') {
      *(undefined8 *)(lVar7 + 0x554) = 0;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      *(byte *)(lVar7 + 0x55c) = bVar3;
      FUN_03ebb160(lVar7 + 0x500,1);
      *(undefined2 *)(lVar7 + 0x54c) = 0;
    }
  }
  return;
}

