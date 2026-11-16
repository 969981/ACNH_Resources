
void FUN_029f583c(byte *param_1)

{
  MutexType *pMVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = DAT_055f0cb8;
  if ((*param_1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) != 0 || *(long *)(param_1 + 0x28) != 0) {
      pMVar1 = (MutexType *)(DAT_055f0cb8 + 0x20);
      nn::os::LockMutex(pMVar1);
      pbVar2 = param_1 + *(int *)(lVar4 + 0x331c);
      if (*(long *)pbVar2 != 0) {
        *(undefined8 *)(*(long *)pbVar2 + 8) = *(undefined8 *)(pbVar2 + 8);
      }
      if (*(undefined8 **)(pbVar2 + 8) != (undefined8 *)0x0) {
        **(undefined8 **)(pbVar2 + 8) = *(undefined8 *)pbVar2;
      }
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      *(int *)(lVar4 + 0x3318) = *(int *)(lVar4 + 0x3318) + -1;
      nn::os::UnlockMutex(pMVar1);
    }
    plVar3 = *(long **)(param_1 + 0x20);
    param_1[1] = 0;
    if (plVar3 != (long *)0x0) {
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      lVar4 = *plVar3;
      *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 2;
    }
    *param_1 = *param_1 & 0xfe;
  }
  return;
}

