
void FUN_03b45ec0(float param_1,float param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (0.0 <= param_1) {
    if ((5 < *(int *)(param_3 + 0xc)) && (*(int *)(param_3 + 0xc) < 8)) {
      return;
    }
    if (2 < *(int *)(param_3 + 0xc)) {
      *(float *)(param_3 + 0x2c) = param_2;
      *(float *)(param_3 + 0x30) = param_1;
      if (param_2 == 0.0) {
        FUN_03b456dc(param_3);
        return;
      }
      uVar1 = 5;
      goto LAB_03b45f90;
    }
  }
  else if (*(long *)(param_3 + 0x1f0) != 0) {
    if ((DAT_05aebb78 != 0) && (*(long *)(DAT_05aebb78 + 0x40) != 0)) {
      FUN_03bc0c3c(0xbf800000);
    }
    *(undefined8 *)(param_3 + 0x1f0) = 0;
  }
  lVar2 = *(long *)(param_3 + 0x120);
  *(undefined4 *)(param_3 + 0xf4) = 0;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x48));
  if (*(long *)(lVar2 + 8) != 0) {
    FUN_03b60e78(0);
  }
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x48));
  if (*(long *)(param_3 + 0x110) != 0) {
    if (*(long *)(param_3 + 0x230) != 0 || *(long *)(param_3 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_3 + 0x110),param_3);
    }
    *(undefined8 *)(param_3 + 0x110) = 0;
  }
  uVar1 = 7;
LAB_03b45f90:
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  return;
}

