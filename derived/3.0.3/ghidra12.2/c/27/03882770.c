
undefined8 FUN_03882770(long param_1)

{
  if (((*(byte *)(*(long *)(DAT_05ae6a60 + 0x10) + 0xc) & 1) != 0) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    nn::os::GetSystemTick();
    nn::socket::Initialize(*(void **)(*(long *)(DAT_05ae6a60 + 0x50) + 0x38),0x600000,0x20000,0xe);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  }
  return 1;
}

