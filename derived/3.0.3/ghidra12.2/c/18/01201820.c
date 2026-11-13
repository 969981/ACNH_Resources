
void FUN_01201820(undefined2 *param_1)

{
  uint uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar1 = uVar1 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar1 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  DAT_0514cb64 = uVar1;
  *param_1 = (short)*(undefined4 *)(&DAT_04174748 + ((ulong)uVar1 * 3 >> 0x1e & 0xc));
  FUN_0277d4ac();
  return;
}

