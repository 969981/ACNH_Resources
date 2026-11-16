
undefined4 FUN_027dc31c(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2 >> 8 | *param_2 << 8;
  if (uVar1 == (ushort)(*param_1 >> 8 | *param_1 << 8)) {
    return 0;
  }
  if (uVar1 == (ushort)(param_1[0x9918] >> 8 | param_1[0x9918] << 8)) {
    return 1;
  }
  if (uVar1 == (ushort)(param_1[0x13230] >> 8 | param_1[0x13230] << 8)) {
    return 2;
  }
  if (uVar1 == (ushort)(param_1[0x1cb48] >> 8 | param_1[0x1cb48] << 8)) {
    return 3;
  }
  if (uVar1 == (ushort)(param_1[0x26460] >> 8 | param_1[0x26460] << 8)) {
    return 4;
  }
  if (uVar1 == (ushort)(param_1[0x2fd78] >> 8 | param_1[0x2fd78] << 8)) {
    return 5;
  }
  if (uVar1 == (ushort)(param_1[0x39690] >> 8 | param_1[0x39690] << 8)) {
    return 6;
  }
  if (uVar1 == (ushort)(param_1[0x42fa8] >> 8 | param_1[0x42fa8] << 8)) {
    return 7;
  }
  if (uVar1 == (ushort)(param_1[0x4c8c0] >> 8 | param_1[0x4c8c0] << 8)) {
    return 8;
  }
  uVar2 = 9;
  if (uVar1 != (ushort)(param_1[0x561d8] >> 8 | param_1[0x561d8] << 8)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

