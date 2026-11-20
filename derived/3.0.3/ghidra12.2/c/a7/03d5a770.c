
void FUN_03d5a770(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x10))();
  iVar3 = (int)param_1[5];
  if (iVar3 != 0) {
    plVar5 = *(long **)(DAT_05af83f0 + 0x420);
    do {
      if (iVar3 < 1) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)param_1[4];
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      }
      lVar1 = 0;
      if (plVar4 != (long *)0x0) {
        lVar1 = (long)plVar4 - (long)*(int *)((long)param_1 + 0x2c);
      }
      FUN_03d5b4a0(plVar5,lVar1);
      iVar3 = (int)param_1[5];
    } while (iVar3 != 0);
    if (((*(uint *)(plVar5 + 9) & 0xfffffffe) == 2) && ((*(uint *)(plVar5 + 0x10a) & 0xff00) != 0))
    {
      uVar2 = *(uint *)((long)plVar5 + 0x854);
      *(uint *)(plVar5 + 0x10b) = uVar2;
      DataMemoryBarrier(2,3);
      if ((uVar2 & 1) != 0) {
        nn::os::SignalLightEvent((LightEventType *)(*plVar5 + 0x160));
      }
      if ((uVar2 >> 1 & 1) != 0) {
        nn::os::SignalLightEvent((LightEventType *)(plVar5[1] + 0x160));
      }
      if ((uVar2 >> 2 & 1) != 0) {
        nn::os::SignalLightEvent((LightEventType *)(plVar5[2] + 0x160));
        return;
      }
    }
  }
  return;
}

