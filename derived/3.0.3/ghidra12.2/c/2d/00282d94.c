
void FUN_00282d94(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x32) = param_2 & 0xfffe;
  *(ushort *)(PTR_DAT_04bccf00 + 0x116) = param_2 & 0xfffe;
  return;
}

