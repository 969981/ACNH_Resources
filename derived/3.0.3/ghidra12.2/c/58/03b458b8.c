
void FUN_03b458b8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    if ((DAT_05aebb78 != 0) && (*(long *)(DAT_05aebb78 + 0x40) != 0)) {
      FUN_03bc0c3c(0xbf800000);
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
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
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 7;
  return;
}

