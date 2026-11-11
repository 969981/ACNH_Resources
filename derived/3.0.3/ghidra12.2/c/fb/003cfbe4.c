
void FUN_003cfbe4(long param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)param_2 * 0x50 + (ulong)param_3 * 0x18;
  *(undefined4 *)(lVar1 + 0x174) = *param_4;
  *(undefined4 *)(lVar1 + 0x178) = param_4[1];
  *(undefined4 *)(lVar1 + 0x17c) = param_4[2];
  *(undefined4 *)(lVar1 + 0x180) = param_4[3];
  *(undefined4 *)(lVar1 + 0x184) = param_4[4];
  *(undefined4 *)(lVar1 + 0x188) = param_4[5];
  return;
}

