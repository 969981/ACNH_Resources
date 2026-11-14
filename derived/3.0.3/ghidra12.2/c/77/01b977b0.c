
undefined4 FUN_01b977b0(int param_1)

{
  if (param_1 - 1U < 0x30) {
    return *(undefined4 *)(&DAT_04177bcc + (long)(int)(param_1 - 1U) * 4);
  }
  return 0xffffffff;
}

