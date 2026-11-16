
void FUN_029cfba4(byte *param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = DAT_055ea8e0;
  if ((*param_1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) != 0 || *(long *)(param_1 + 0x20) != 0) {
      pMVar1 = (MutexType *)(DAT_055ea8e0 + 0x20);
      piVar2 = (int *)(DAT_055ea8e0 + 0xcc38);
      nn::os::LockMutex(pMVar1);
      pbVar3 = param_1 + *(int *)(lVar5 + 0xcc3c);
      if (*(long *)pbVar3 != 0) {
        *(undefined8 *)(*(long *)pbVar3 + 8) = *(undefined8 *)(pbVar3 + 8);
      }
      if (*(undefined8 **)(pbVar3 + 8) != (undefined8 *)0x0) {
        **(undefined8 **)(pbVar3 + 8) = *(undefined8 *)pbVar3;
      }
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      *piVar2 = *piVar2 + -1;
      nn::os::UnlockMutex(pMVar1);
    }
    plVar4 = *(long **)(param_1 + 0x18);
    param_1[1] = 0;
    if (plVar4 != (long *)0x0) {
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      lVar5 = *plVar4;
      *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 2;
    }
    *param_1 = *param_1 & 0xfe;
  }
  return;
}

