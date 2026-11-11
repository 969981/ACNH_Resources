
void FUN_003c3afc(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0xa8);
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  fVar5 = 0.0;
  fVar6 = 0.0;
  pfVar4 = (float *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x14);
  if (*(char *)(pfVar4 + 4) == '\0') {
    if ((int)pfVar4[2] <= (int)pfVar4[3]) {
      fVar6 = pfVar4[1];
      pfVar4 = (float *)(*(long *)(param_1 + 0x70) + (long)param_3 * 0x14);
      cVar2 = *(char *)(pfVar4 + 4);
      goto joined_r0x003c3b98;
    }
    fVar6 = *pfVar4 + ((pfVar4[1] - *pfVar4) * (float)(int)pfVar4[3]) / (float)(int)pfVar4[2];
  }
  pfVar4 = (float *)(*(long *)(param_1 + 0x70) + (long)param_3 * 0x14);
  cVar2 = *(char *)(pfVar4 + 4);
joined_r0x003c3b98:
  param_5 = param_5 + iVar1 * param_4;
  param_3 = param_3 + iVar3 * param_2;
  if (cVar2 == '\0') {
    if ((int)pfVar4[3] < (int)pfVar4[2]) {
      fVar5 = *pfVar4 + ((pfVar4[1] - *pfVar4) * (float)(int)pfVar4[3]) / (float)(int)pfVar4[2];
    }
    else {
      fVar5 = pfVar4[1];
    }
  }
  fVar5 = fVar6 * fVar5 *
          *(float *)(*(long *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) + (long)param_5 * 4);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  fVar6 = -128.0;
  if (-128.0 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar7 = 128.0;
  if (fVar5 <= 128.0) {
    fVar7 = fVar6;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xd0));
  if (*(char *)(param_1 + 0xf2) != '\0') {
    iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x60))();
    if (iVar3 == 1) {
      nn::audio::SetSubMixMixVolume
                ((SubMixType *)(param_1 + 0x50),(FinalMixType *)(*(long *)(param_1 + 0x60) + 0x40),
                 fVar7,param_3,param_5);
    }
    else {
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl();
      }
      nn::audio::SetSubMixMixVolume
                ((SubMixType *)(param_1 + 0x50),(SubMixType *)(*(long *)(param_1 + 0x60) + 0x50),
                 fVar7,param_3,param_5);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd0));
  return;
}

