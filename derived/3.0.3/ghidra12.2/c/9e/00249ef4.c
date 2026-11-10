
ulong FUN_00249ef4(undefined8 param_1,byte *param_2)

{
  return (ulong)param_2[2] << 0x38 | (ulong)param_2[4] << 0x30 | (ulong)param_2[5] << 0x28 |
         (ulong)param_2[3] << 0x20 | (ulong)param_2[1] << 0x18 | (ulong)*param_2 << 0x10;
}

