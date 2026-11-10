
long FUN_00169b0c(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6)

{
  long lVar1;
  uint local_24;
  
  *param_2 = 0;
  local_24 = 0;
  lVar1 = FUN_00169f18(&local_24,(undefined8 *)(param_1 + 0xd8),param_2,
                       *(undefined4 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xd8),param_3,
                       param_4,param_5);
  if ((lVar1 == -1) || (param_6 < local_24)) {
    lVar1 = -0x20b;
  }
  else {
    *(ulong *)(param_1 + 0xb8) = (ulong)local_24;
  }
  return lVar1;
}

