
undefined * FUN_0017c828(void)

{
  if ((DAT_04c57d85 & 1) == 0) {
    thunk_FUN_0017b0f8(&DAT_04c57d86,0x50);
    DAT_04be2090 = &DAT_04c57d86;
    DAT_04be2088 = DAT_04be2088 & 0xffc00000 |
                   DAT_04be2088 & 0x1fffff | (*(uint *)(PTR_DAT_04be2008 + 0x10) >> 4 & 1) << 0x15;
    DAT_04be20a0 = FUN_0017ead0();
    DAT_04c57d85 = 1;
  }
  return &DAT_04be2068;
}

