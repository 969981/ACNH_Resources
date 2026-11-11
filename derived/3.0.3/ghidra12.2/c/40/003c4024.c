
void FUN_003c4024(float param_1,long param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0xb0));
  pfVar1 = (float *)(*(long *)(param_2 + 0x68) + (long)param_3 * 0x14);
  *(undefined1 *)((long)pfVar1 + 0x12) = 1;
  if ((int)pfVar1[3] < (int)pfVar1[2]) {
    fVar2 = *pfVar1 + ((pfVar1[1] - *pfVar1) * (float)(int)pfVar1[3]) / (float)(int)pfVar1[2];
  }
  else {
    fVar2 = pfVar1[1];
  }
  pfVar1[2] = param_4;
  pfVar1[3] = 0.0;
  *pfVar1 = fVar2;
  pfVar1[1] = param_1;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0xb0));
  return;
}

