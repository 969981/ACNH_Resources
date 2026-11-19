
bool FUN_03b27758(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long local_138;
  char acStack_130 [256];
  
  nn::util::SNPrintf(acStack_130,0x100,"ArchiveShader-%s.bnsh");
  local_138 = 0;
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1,&local_138,0x62677368,acStack_130);
  bVar1 = local_138 != 0;
  if (lVar2 != 0 || local_138 != 0) {
    thunk_FUN_00385d30(param_2,param_3,lVar2,0,0,0,0,3);
  }
  return lVar2 != 0 || bVar1;
}

