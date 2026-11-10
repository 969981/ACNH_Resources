
void FUN_00222770(void *param_1,ulong param_2)

{
  nn::crypto::GenerateCryptographicallyRandomBytes(param_1,param_2 & 0xffffffff);
  return;
}

