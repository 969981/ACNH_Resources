
void FUN_01f11a2c(long param_1)

{
  FUN_01f0a658();
  *(long *)(param_1 + 0x7f00) = param_1;
  *(undefined1 **)(param_1 + 0x7f08) = &LAB_01f103c0;
  *(undefined ***)(param_1 + 0x7ef8) = &PTR_LAB_04a64420;
  *(undefined8 *)(param_1 + 0x7f10) = 0;
  *(byte *)(*(long *)(param_1 + 8) + 0x286) = *(byte *)(*(long *)(param_1 + 8) + 0x286) | 0x40;
  *(byte *)(*(long *)(param_1 + 8) + 0x286) = *(byte *)(*(long *)(param_1 + 8) + 0x286) | 8;
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfffffffffffffffb;
  return;
}

