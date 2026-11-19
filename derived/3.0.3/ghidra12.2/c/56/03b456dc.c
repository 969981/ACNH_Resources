
void FUN_03b456dc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x30);
  if ((fVar4 <= 0.0) && (*(long *)(param_1 + 0x110) != 0)) {
    if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
      fVar4 = *(float *)(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if ((*(ushort *)(param_1 + 0x1d0) >> 1 & 1) == 0) {
    if (0.0 <= fVar4) {
      if (fVar4 == 0.0) {
        lVar3 = *(long *)(param_1 + 0x120);
        fVar4 = *(float *)(lVar3 + 0x1c);
        nn::os::LockMutex((MutexType *)(lVar3 + 0x48));
        if ((*(long *)(lVar3 + 8) == 0) || (FUN_03b60e78(fVar4), fVar4 == 0.0)) {
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
        else {
          *(undefined4 *)(lVar3 + 0x10) = 2;
        }
        *(undefined4 *)(lVar3 + 0x24) = 0;
        *(undefined1 *)(lVar3 + 0x18) = 0;
        nn::os::UnlockMutex((MutexType *)(lVar3 + 0x48));
      }
      else {
        lVar3 = *(long *)(param_1 + 0x128);
        uVar2 = 6;
        if ((lVar3 == 0) || (fVar4 < 0.0)) goto LAB_03b45850;
        fVar5 = *(float *)(lVar3 + 8);
        *(undefined4 *)(lVar3 + 0x10) = 0;
        lVar1 = DAT_05aebb78;
        if (fVar5 == 0.0) {
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined4 *)(lVar3 + 0x14) = 0;
          goto LAB_03b45850;
        }
        fVar4 = (0.0 - fVar5) / fVar4;
        *(float *)(lVar3 + 0x14) = fVar4;
        fVar5 = fVar5 + *(float *)(*(long *)(lVar1 + 0x10) + 0x1c) * fVar4;
        if (0.0 <= fVar4) {
          if (0.0 < fVar5) goto LAB_03b458a0;
        }
        else if (fVar5 < 0.0) {
LAB_03b458a0:
          fVar5 = 0.0;
        }
        *(float *)(lVar3 + 0xc) = fVar5;
      }
      uVar2 = 6;
      goto LAB_03b45850;
    }
  }
  else if (*(long *)(param_1 + 0x1f0) != 0) {
    if ((DAT_05aebb78 != 0) && (*(long *)(DAT_05aebb78 + 0x40) != 0)) {
      FUN_03bc0c3c();
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x48));
  if (*(long *)(lVar3 + 8) != 0) {
    FUN_03b60e78(0);
  }
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x24) = 0;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x48));
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar2 = 7;
  }
  else {
    if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    uVar2 = 7;
  }
LAB_03b45850:
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

