
bool FUN_003cafa0(void *param_1,ThreadType *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  iVar1 = nn::os::CreateThread
                    (param_2,(_func_void_void_ptr *)PTR_FUN_04bd0588,param_1,*(void **)(param_4 + 8)
                     ,*(ulong *)(param_4 + 0x10),*(int *)(param_4 + 0x20),*(int *)(param_4 + 0x18));
  if (iVar1 == 0) {
    *(undefined4 *)((long)param_1 + 0x1d4) = *(undefined4 *)(param_4 + 0x24);
    nn::os::StartThread(param_2);
  }
  else {
    param_2 = (ThreadType *)&DAT_ffffffff;
  }
  *(ThreadType **)((long)param_1 + 0x1c8) = param_2;
  return iVar1 == 0;
}

