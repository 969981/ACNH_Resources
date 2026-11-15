
void FUN_024dd624(long param_1)

{
  long lVar1;
  uint local_b4 [15];
  char local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_b4[8] = 0;
  local_b4[9] = 0xffffffff;
  local_6c = 0xffffffff00000000;
  local_64 = 0x3f80000000000000;
  local_b4[6] = 0xbf800000;
  local_b4[7] = 0;
  local_b4[5] = 0xffffffff;
  local_b4[10] = 0xffffffff;
  local_b4[0xb] = 0;
  local_b4[0xc] = 0xffffffff;
  local_b4[0xd] = 0xffffffff;
  local_b4[0xe] = 0xffffffff;
  local_78 = '\0';
  local_74 = 0;
  local_5c = 0xffffffffffffffff;
  local_54 = 0xbf800000ffffffff;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0xffffffffffffffff;
  local_2c = 0xffffffff;
  local_28 = 0;
  local_24 = 0xffffffff;
  local_b4[1] = 0xffffffff;
  local_b4[2] = 0xffffffff;
  local_b4[3] = 0xffffffff;
  local_b4[4] = 0xffffffff;
  FUN_02a560f0(local_b4);
  if (local_78 != '\0') {
    local_b4[0] = 0xe8;
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
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,0xe8);
  }
  return;
}

