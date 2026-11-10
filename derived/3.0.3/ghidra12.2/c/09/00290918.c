
bool FUN_00290918(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if (iVar1 == 0) {
    nn::os::StartThread(*(ThreadType **)(param_1 + 0xd0));
    *(int *)(param_1 + 200) = (int)*(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xcc) == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 1;
      return true;
    }
  }
  return iVar1 == 0;
}

