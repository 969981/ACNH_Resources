
undefined8 FUN_023bb180(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(uint *)(lVar2 + 0x280) < 0x149) {
      uVar3 = *(uint *)(lVar2 + 0x280);
    }
  }
  if ((int)uVar3 < 0xc9) {
    if ((int)uVar3 < 0x66) {
      if ((uVar3 != 5) && (uVar3 != 0xc)) {
        return 0;
      }
    }
    else if ((uVar3 != 0x66) && (uVar3 != 0x6f)) {
      return 0;
    }
  }
  else if ((((0x31 < uVar3 - 0xc9) ||
            ((1L << ((ulong)(uVar3 - 0xc9) & 0x3f) & 0x2200000000001U) == 0)) && (uVar3 != 0x13e))
          && (uVar3 != 0x114)) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
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
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x278;
    }
    FUN_03ebb160(lVar1,0x147);
  }
  return 1;
}

