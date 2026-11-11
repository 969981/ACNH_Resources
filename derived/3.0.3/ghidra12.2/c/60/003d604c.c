
void FUN_003d604c(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  
  pMVar1 = (MutexType *)(param_1 + 0x11a08);
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0xf8) == 0) {
    memcpy((void *)(param_1 + 0x11950),param_2,0xa8);
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)((long)param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x12f) = *(undefined1 *)((long)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)((long)param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x135) = *(undefined1 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x218) = param_2[0x11];
  puVar3 = PTR_DAT_04bd0488;
  *(undefined8 *)(param_1 + 0x220) = param_2[0x12];
  sVar2 = *(short *)puVar3;
  *(short *)(param_1 + 300) = sVar2;
  *(short *)(*(long *)(param_1 + 0xf8) + 0x54) = sVar2;
  uVar5 = *(undefined4 *)(param_2 + 0x13);
  *(short *)puVar3 = sVar2 + 1;
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  fVar6 = (float)NEON_ucvtf((uint)*(byte *)((long)param_2 + 0x9c));
  *(float *)(param_1 + 0x22c) = fVar6 / 127.0 + -1.0;
  fVar6 = (float)NEON_ucvtf((uint)*(byte *)((long)param_2 + 0x9d));
  *(float *)(param_1 + 0x230) = fVar6 / 127.0;
  fVar6 = (float)NEON_ucvtf((uint)*(byte *)((long)param_2 + 0x9e));
  *(float *)(param_1 + 0x234) = fVar6 / 127.0;
  fVar6 = (float)NEON_ucvtf((uint)*(byte *)((long)param_2 + 0x9f));
  *(float *)(param_1 + 0x238) = fVar6 / 127.0;
  uVar4 = FUN_003d6190(param_1,param_2);
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x100) = *param_2;
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

