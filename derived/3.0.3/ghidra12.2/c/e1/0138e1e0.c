
void FUN_0138e1e0(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x18) >> 2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0x42c80000;
      *(undefined4 *)(param_1 + 0x74) = 0x3800;
      *(undefined4 *)(param_1 + 0xa4) = 0x200000;
      *(undefined4 *)(param_1 + 0x9c) = 0xc1f00000;
      *(float *)(param_1 + 0x80) =
           (float)((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x38)) + 1) * 5.0;
      *(float *)(param_1 + 0x88) =
           (float)((*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x3c)) + 1) * 5.0;
      *(float *)(param_1 + 0x98) =
           ((float)*(int *)(param_1 + 0x38) * 5.0 + (float)*(int *)(param_1 + 0x48) * 5.0 + 5.0) *
           0.5;
      *(float *)(param_1 + 0xa0) =
           ((float)*(int *)(param_1 + 0x3c) * 5.0 + (float)*(int *)(param_1 + 0x4c) * 5.0 + 5.0) *
           0.5;
      if (*(int *)(param_1 + 0x50) != 0) {
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x50);
      }
      if ((DAT_04cfae30 != 0) && (*(long *)(param_1 + 0x68) == 0 && *(long *)(param_1 + 0x60) == 0))
      {
        param_1 = param_1 + 0x58;
LAB_0138e384:
        lVar3 = DAT_04cfae30;
        pMVar1 = (MutexType *)(DAT_04cfae30 + 0x50);
        nn::os::LockMutex(pMVar1);
        plVar5 = (long *)(lVar3 + 0x70);
        lVar4 = *plVar5;
        plVar2 = (long *)(*(int *)(lVar3 + 0x84) + param_1);
        *plVar5 = (long)plVar2;
        *plVar2 = lVar4;
        plVar2[1] = (long)plVar5;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 8) = plVar2;
        }
        *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
        nn::os::UnlockMutex(pMVar1);
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x274) = 0xc1f00000;
      *(undefined4 *)(param_1 + 0x280) = 0x42c80000;
      *(undefined4 *)(param_1 + 0x264) = 0x3800;
      *(undefined4 *)(param_1 + 0x290) = 0;
      *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x54);
      *(float *)(param_1 + 0x278) =
           ((float)*(int *)(param_1 + 0x3c) * 5.0 + (float)*(int *)(param_1 + 0x4c) * 5.0 + 5.0) *
           0.5;
      *(float *)(param_1 + 0x270) =
           ((float)*(int *)(param_1 + 0x38) * 5.0 + (float)*(int *)(param_1 + 0x48) * 5.0 + 5.0) *
           0.5;
      if (*(int *)(param_1 + 0x50) != 0) {
        *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x50);
      }
      if ((DAT_04cfae30 != 0) && (*(long *)(param_1 + 600) == 0 && *(long *)(param_1 + 0x250) == 0))
      {
        param_1 = param_1 + 0x248;
        goto LAB_0138e384;
      }
    }
  }
  return;
}

