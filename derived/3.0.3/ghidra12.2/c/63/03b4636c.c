
void FUN_03b4636c(long param_1)

{
  long lVar1;
  
  if (((*(ushort *)(param_1 + 0x14) >> 1 & 1) != 0) &&
     ((*(int *)(param_1 + 0xc) < 6 || (7 < *(int *)(param_1 + 0xc))))) {
    if (*(int *)(param_1 + 0xc) < 3) {
      lVar1 = *(long *)(param_1 + 0x120);
      *(undefined4 *)(param_1 + 0xf4) = 0;
      nn::os::LockMutex((MutexType *)(lVar1 + 0x48));
      if (*(long *)(lVar1 + 8) != 0) {
        FUN_03b60e78(0);
      }
      *(undefined4 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0;
      *(undefined1 *)(lVar1 + 0x18) = 0;
      nn::os::UnlockMutex((MutexType *)(lVar1 + 0x48));
      if ((*(long *)(param_1 + 0x110) != 0) &&
         (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0)) {
        FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
      }
      *(undefined4 *)(param_1 + 0xc) = 7;
    }
    else {
      *(undefined8 *)(param_1 + 0x2c) = 0;
      FUN_03b456dc(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}

