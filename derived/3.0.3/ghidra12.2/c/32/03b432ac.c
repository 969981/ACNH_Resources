
void FUN_03b432ac(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0xc) == 2)) {
    FUN_03b43408(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 < 4) || (iVar1 = *(int *)(param_1 + 0xc), 6 < iVar1)) ||
     (lVar2 = *(long *)(param_1 + 0x120), *(int *)(lVar2 + 0x10) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_03b43390;
joined_r0x03b43314:
    if (iVar1 == 6) goto LAB_03b433c0;
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    nn::os::LockMutex((MutexType *)(lVar2 + 0x48));
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_03b60e78(0);
    }
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined1 *)(lVar2 + 0x18) = 0;
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x48));
    if (*(long *)(param_1 + 0x110) != 0) {
      if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
        FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
      }
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 7;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_03b433f4;
LAB_03b43390:
    lVar2 = *(long *)(param_1 + 0x120);
    if ((*(int *)(lVar2 + 0x10) == 4) &&
       (FUN_03b47bbc(*(undefined4 *)(lVar2 + 0x20),lVar2,(int)*(float *)(lVar2 + 0x24)),
       *(int *)(param_1 + 0x18) != 0)) {
      iVar1 = *(int *)(param_1 + 0xc);
      goto joined_r0x03b43314;
    }
LAB_03b433c0:
    FUN_03b4370c(param_1);
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 == 8) {
    *(float *)(param_1 + 0x1c) =
         *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c) + *(float *)(param_1 + 0x1c);
  }
LAB_03b433f4:
  FUN_03b47d18(*(undefined8 *)(param_1 + 0x120));
  return;
}

