
void FUN_003cb094(long param_1,int param_2,ulong param_3)

{
  nn::os::SetThreadCoreMask((ThreadType *)(param_1 + 8),param_2,param_3 & 0xffffffff);
  return;
}

