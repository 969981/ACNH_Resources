
/* WARNING: Removing unreachable block (ram,0x02322694) */

void FUN_023225bc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  lVar3 = *(long *)(param_1 + 0x70);
  local_2c = 0x90;
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(uint *)(lVar3 + 0x280) < 0x149) {
      uVar2 = *(uint *)(lVar3 + 0x280);
    }
    if (uVar2 == 0x90) goto LAB_023227a0;
    if ((uVar2 == 0x97) || (uVar2 == 0x98)) {
      if (uVar2 == 0x9a) {
        return;
      }
      local_2c = 0x9a;
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
      FUN_03ebb160(lVar3 + 0x278,0x9a);
      return;
    }
  }
  local_2c = 0x10c;
  if (uVar2 != 0x10c) {
    return;
  }
LAB_023227a0:
  uVar1 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  if ((uVar1 & 1) == 0) {
    local_24 = 0;
    local_2c = 6;
    local_28 = 1;
    FUN_02374e74(param_1,&local_2c);
  }
  return;
}

