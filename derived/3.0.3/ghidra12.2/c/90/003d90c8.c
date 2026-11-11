
void FUN_003d90c8(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003c98bc();
  thunk_FUN_003c9bc0(uVar1,param_1 & 0xffffffff);
  nn::os::WaitEvent((EventType *)(param_1 + 0x868));
  *(ulong *)(param_1 + 0x898) = param_1;
  uVar1 = FUN_003c98bc();
  FUN_003c9a08(uVar1,param_1 + 0x850,1);
  return;
}

