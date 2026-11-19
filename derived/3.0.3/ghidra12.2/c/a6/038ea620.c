
void _INIT_8595(void)

{
  uint uVar1;
  ulong uVar2;
  
  DAT_05ae7890 = 0;
  DAT_05ae7894 = 0;
  DAT_04c4ba68 = 3;
  nn::os::AllocateTlsSlot((TlsSlot *)&DAT_05ae7898,(_func_void_ulong *)0x0);
  if ((DAT_04c4ba68 != 0) && (DAT_05ae7890 = DAT_05ae7890 | 1, DAT_04c4ba68 != 1)) {
    uVar2 = 1;
    do {
      uVar1 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      DAT_05ae7890 = 1 << (ulong)(uVar1 & 0x1f) | DAT_05ae7890;
      DAT_05ae7894 = 1 << (ulong)(uVar1 & 0x1f) | DAT_05ae7894;
    } while (DAT_04c4ba68 != uVar2);
  }
  return;
}

