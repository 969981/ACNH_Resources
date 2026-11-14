
undefined8 FUN_015d84c4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined *local_50;
  char *pcStack_48;
  
  lVar2 = FUN_015d6814(param_1,(ulong)(*(char *)(param_1 + 0x16d) == '\0') << 1,&LAB_002191c0);
  uVar4 = 0;
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x690));
    plVar1 = (long *)(*(int *)(param_1 + 0x66c) + lVar2);
    lVar5 = *(long *)(param_1 + 0x658);
    *(long **)(param_1 + 0x658) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = param_1 + 0x658;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x690));
    lVar2 = *(long *)(lVar2 + 0x50);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x40);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
      fVar6 = *pfVar3;
      lVar5 = (**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "WherearenPhotographTexture";
      FUN_015d9e84(param_2,(int)fVar6,(int)*(float *)(lVar5 + 4),&local_50,lVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

