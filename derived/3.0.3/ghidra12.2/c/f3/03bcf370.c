
bool FUN_03bcf370(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if (iVar1 == 0) {
    nn::os::StartThread(*(ThreadType **)(param_1 + 0xe8));
    uVar2 = nn::os::GetThreadId(*(ThreadType **)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 200) = uVar2;
    if (*(int *)(param_1 + 0xcc) == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 1;
    }
  }
  return iVar1 == 0;
}

