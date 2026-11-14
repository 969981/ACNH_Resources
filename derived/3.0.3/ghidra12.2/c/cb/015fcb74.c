
void FUN_015fcb74(long *param_1,long *param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  
  lVar4 = *(long *)(DAT_05231900 + 0xa0);
  pMVar1 = (MutexType *)(lVar4 + 0x68);
  nn::os::LockMutex(pMVar1);
  lVar4 = *(long *)(lVar4 + 0x40);
  if ((lVar4 != 0) && (*(char *)param_2[1] != '\0')) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = *(long *)(lVar4 + 0x40);
    if (lVar4 != 0) {
      *param_1 = 0;
      lVar5 = param_2[1];
      *(undefined4 *)(param_1 + 1) = 0;
      lVar2 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x30) + 0x18) + 0x20))();
      if (((lVar5 != 0) && (*(char *)(lVar2 + 0x78) != '\0')) &&
         (uVar3 = FUN_03bf46a8(lVar4,"searchAndEmit(%s)",lVar5), (uVar3 & 1) != 0)) {
        local_48 = 0;
        local_58 = PTR_DAT_04bcadf8 + 0x10;
        local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x18),lVar5);
        if (local_50 != 0) {
          FUN_03bf47b0(lVar4,&local_58,param_1);
        }
      }
      goto LAB_015fcc6c;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_015fcc6c:
  nn::os::UnlockMutex(pMVar1);
  lVar4 = *param_1;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == (int)param_1[1])) {
    *(undefined4 *)(lVar4 + 0xa8) = *param_3;
    *(undefined4 *)(lVar4 + 0xac) = param_3[1];
    uVar6 = param_3[2];
    *(undefined1 **)(lVar4 + 0xb4) = &DAT_3f8000003f800000;
    *(undefined4 *)(lVar4 + 0xbc) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0xb0) = uVar6;
    *(uint *)(lVar4 + 0x184) = *(uint *)(lVar4 + 0x184) | 4;
  }
  return;
}

