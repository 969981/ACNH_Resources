
undefined8 FUN_0011f7e0(long param_1,ushort *param_2,ushort *param_3)

{
  if (param_1 != 0) {
    *param_2 = *(ushort *)(param_1 + 0x1c) >> 8 | *(ushort *)(param_1 + 0x1c) << 8;
    *param_3 = *(ushort *)(param_1 + 0x1e) >> 8 | *(ushort *)(param_1 + 0x1e) << 8;
  }
  return 0;
}

