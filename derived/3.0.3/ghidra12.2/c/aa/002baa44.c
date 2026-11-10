
void FUN_002baa44(long param_1,uint param_2,ulong param_3)

{
  FUN_002a71b0();
  if ((param_3 & 1) == 0) {
    FUN_002a71b0(param_1 + 0xd40,param_2 & 1);
    FUN_002a71b0(param_1 + 0x1a80,param_2 & 1);
  }
  FUN_002a71b0(param_1 + 0x27c0,param_2 & 1);
  FUN_002baaf0(param_1 + 0x3500);
  FUN_002a75ec("[Analysis] ------ DispatchCount:%u, SendThreadCount:%u, ReceiveThreadCount:%u ------"
               ,*(undefined4 *)(param_1 + 0x3904),*(undefined4 *)(param_1 + 0x3908),
               *(undefined4 *)(param_1 + 0x390c));
  return;
}

