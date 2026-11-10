
void FUN_0033155c(undefined2 *param_1)

{
  uint uVar1;
  
  uVar1 = DAT_04be2674 ^ DAT_04be2674 << 0xb;
  DAT_04be2674 = DAT_04be2678;
  DAT_04be2678 = DAT_04be267c;
  uVar1 = uVar1 >> 8 ^ DAT_04be2680 >> 0x13 ^ uVar1 ^ DAT_04be2680;
  DAT_04be267c = DAT_04be2680;
  DAT_04be2680 = uVar1;
  *param_1 = (short)uVar1;
  uVar1 = DAT_04be2674 ^ DAT_04be2674 << 0xb;
  DAT_04be2674 = DAT_04be2678;
  DAT_04be2678 = DAT_04be267c;
  uVar1 = uVar1 >> 8 ^ DAT_04be2680 >> 0x13 ^ uVar1 ^ DAT_04be2680;
  DAT_04be267c = DAT_04be2680;
  DAT_04be2680 = uVar1;
  param_1[1] = (short)uVar1;
  uVar1 = DAT_04be2674 ^ DAT_04be2674 << 0xb;
  DAT_04be2674 = DAT_04be2678;
  DAT_04be2678 = DAT_04be267c;
  uVar1 = uVar1 >> 8 ^ DAT_04be2680 >> 0x13 ^ uVar1 ^ DAT_04be2680;
  DAT_04be267c = DAT_04be2680;
  DAT_04be2680 = uVar1;
  *(uint *)(param_1 + 2) = uVar1;
  return;
}

