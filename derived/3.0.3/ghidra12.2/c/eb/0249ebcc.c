
bool FUN_0249ebcc(long param_1,ulong param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return false;
  }
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar5 + 0x158);
    }
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    bVar7 = *pbVar1;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (bVar7 != bVar8) {
      bVar3 = true;
      goto LAB_0249ec7c;
    }
  }
  if (*(char *)(param_1 + 0x2264) != '\0') {
    return false;
  }
  bVar2 = *(int *)(DAT_054f5738 + 0x11c4) != 0;
  bVar3 = !bVar2;
  if (bVar2) {
    return false;
  }
LAB_0249ec7c:
  if ((param_2 & 1) != 0) {
    return bVar3;
  }
  lVar6 = *(long *)(param_1 + 0x70);
  uVar4 = 0;
  lVar5 = 0;
  if (lVar6 != 0) {
    uVar4 = 0;
    if (*(uint *)(lVar6 + 0x280) < 0x149) {
      uVar4 = *(uint *)(lVar6 + 0x280);
    }
    lVar5 = lVar6 + 0x278;
  }
  if (uVar4 != 0x90) {
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    FUN_03ebb160(lVar5,0x90);
  }
  return true;
}

