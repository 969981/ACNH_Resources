
void _INIT_8601(void)

{
  undefined1 auStack_260 [392];
  char local_d8 [160];
  undefined2 local_38;
  ushort local_36;
  
  FUN_03972f10(auStack_260,0xe);
  local_38 = 0;
  if (local_d8[0] != '\0') {
    FUN_0034f3d4(local_d8,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
  }
  FUN_0034f050(local_d8);
  DAT_05ae9370 = (ulong)(local_36 + 7) & 0x1fff8;
  return;
}

