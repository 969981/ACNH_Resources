
void FUN_00691264(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfffe | param_2 & 1;
  return;
}

