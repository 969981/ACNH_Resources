
void FUN_002909d8(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(param_1 + 0xd0),-1,(ulong)uVar1);
  return;
}

