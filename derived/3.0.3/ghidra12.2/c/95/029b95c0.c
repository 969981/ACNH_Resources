
bool FUN_029b95c0(int param_1)

{
  if (param_1 - 0xe4U < 0x29) {
    return true;
  }
  if ((param_1 - 0xdaU < 0x35) &&
     ((1L << ((ulong)(param_1 - 0xdaU) & 0x3f) & 0x100000000003ffU) != 0)) {
    return true;
  }
  return param_1 - 0xa0U < 8;
}

