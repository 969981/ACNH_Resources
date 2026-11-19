
void FUN_039a69f0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[0x196];
  *param_1 = &PTR_FUN_04b6a258;
  if (lVar3 != 0) {
    nn::os::LockMutex((MutexType *)(lVar3 + 0x5728));
    if (*(int *)(lVar3 + 0x108) != 0) {
      iVar1 = 0;
      do {
        lVar2 = *(long *)(lVar3 + 0x110) + (long)iVar1 * 0x430;
        if (*(undefined8 **)(lVar2 + 0x3d0) == param_1) {
          *(undefined8 *)(lVar2 + 0x3d0) = 0;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (*(int *)(lVar3 + 0x108) != iVar1);
    }
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x5728));
    param_1[0x196] = 0;
  }
  FUN_03968cfc(param_1 + 0x197);
  FUN_0399e080(param_1);
  return;
}

