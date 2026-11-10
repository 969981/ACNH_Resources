
undefined8 FUN_001642e0(long param_1)

{
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined8 *)(param_1 + 0xff0) = 0;
  *(undefined8 *)(param_1 + 0xff8) = 0;
  *(undefined8 *)(param_1 + 0x1000) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1010) = 0;
  *(undefined8 *)(param_1 + 0x1618) = 0;
  *(undefined4 *)(param_1 + 0x1620) = 0;
  *(undefined8 *)(param_1 + 0x1630) = 0;
  *(undefined8 *)(param_1 + 0x1638) = 0;
  *(undefined8 *)(param_1 + 0x1640) = 0;
  *(undefined8 *)(param_1 + 0x1648) = 0;
  *(undefined8 *)(param_1 + 0x1650) = 0;
  *(byte *)(param_1 + 0x111c) = *(byte *)(param_1 + 0x111c) & 0xfd;
  *(undefined8 *)(param_1 + 0x1628) = 0xffffffffffffffff;
  *(byte *)(param_1 + 0x16f8) = *(byte *)(param_1 + 0x16f8) & 0xfe;
  FUN_00143300(*(undefined8 *)(param_1 + 0x1658));
  *(undefined8 *)(param_1 + 0x1658) = 0;
  FUN_00143300(*(undefined8 *)(param_1 + 0x1660));
  *(undefined8 *)(param_1 + 0x1660) = 0;
  *(undefined1 *)(param_1 + 0x1668) = 0;
  *(undefined1 *)(param_1 + 0x16a0) = 0;
  *(undefined8 *)(param_1 + 0x1698) = 0;
  *(undefined8 *)(param_1 + 0x16d0) = 0;
  *(undefined8 *)(param_1 + 0x16d8) = 0;
  *(undefined4 *)(param_1 + 0x16e0) = 0;
  FUN_001443f4(param_1);
  return 0;
}

