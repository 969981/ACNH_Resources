
/* WARNING: Type propagation algorithm not settling */

void FUN_03d5b1e0(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  iVar3 = (int)param_1[9];
  if (iVar3 == 0 || iVar3 == 5) {
    lVar4 = FUN_03d5b5f0(param_1);
    if (lVar4 == 0) {
      return;
    }
    do {
      FUN_03d5a660(lVar4);
      FUN_03d5a770(lVar4);
      uVar5 = FUN_03d5a890(lVar4);
      if ((uVar5 & 1) != 0) {
        uVar7 = *(uint *)((long)param_1 + 0x854);
        *(uint *)(param_1 + 0x10b) = uVar7;
        DataMemoryBarrier(2,3);
        if ((uVar7 & 1) != 0) {
          nn::os::SignalLightEvent((LightEventType *)(*param_1 + 0x160));
        }
        if ((uVar7 >> 1 & 1) != 0) {
          nn::os::SignalLightEvent((LightEventType *)(param_1[1] + 0x160));
        }
        if ((uVar7 >> 2 & 1) != 0) {
          nn::os::SignalLightEvent((LightEventType *)(param_1[2] + 0x160));
        }
      }
      lVar4 = FUN_03d5b5f0(param_1);
    } while (lVar4 != 0);
    return;
  }
  if (iVar3 != 2) {
    return;
  }
  bVar2 = false;
  if ((*param_1 != 0) && (bVar2 = false, *(char *)(*param_1 + 0x104) != '\0')) {
    if ((*(uint *)((long)param_1 + 0x854) & 1) == 0) {
      *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) | 1;
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  if (((param_1[1] != 0) && (*(char *)(param_1[1] + 0x104) != '\0')) &&
     ((*(uint *)((long)param_1 + 0x854) >> 1 & 1) == 0)) {
    *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) | 2;
    bVar2 = true;
  }
  if (((param_1[2] == 0) || (*(char *)(param_1[2] + 0x104) == '\0')) ||
     ((*(uint *)((long)param_1 + 0x854) >> 2 & 1) != 0)) {
    if (!bVar2) goto LAB_03d5b350;
  }
  else {
    *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) | 4;
  }
  uVar7 = *(uint *)((long)param_1 + 0x854);
  *(uint *)(param_1 + 0x10b) = uVar7;
  DataMemoryBarrier(2,3);
  if ((uVar7 & 1) != 0) {
    nn::os::SignalLightEvent((LightEventType *)(*param_1 + 0x160));
  }
  if ((uVar7 >> 1 & 1) != 0) {
    nn::os::SignalLightEvent((LightEventType *)(param_1[1] + 0x160));
  }
  if ((uVar7 >> 2 & 1) != 0) {
    nn::os::SignalLightEvent((LightEventType *)(param_1[2] + 0x160));
  }
LAB_03d5b350:
  lVar4 = *(long *)PTR_DAT_04bb29d0;
  uVar7 = 0xffffffff;
  iVar3 = (int)param_1[0x10b];
  do {
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 0x10a) & 0xff00) == 0) {
        *(undefined4 *)((long)param_1 + 0x854) = 0;
        *(undefined4 *)(param_1 + 9) = 1;
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x10a) >> 0x14;
      if (uVar1 != uVar7) {
        nn::os::ClearLightEvent((LightEventType *)(param_1 + 7));
        uVar7 = *(uint *)((long)param_1 + 0x854);
        *(uint *)(param_1 + 0x10b) = uVar7;
        DataMemoryBarrier(2,3);
        if ((uVar7 & 1) != 0) {
          nn::os::SignalLightEvent((LightEventType *)(*param_1 + 0x160));
        }
        if ((uVar7 >> 1 & 1) != 0) {
          nn::os::SignalLightEvent((LightEventType *)(param_1[1] + 0x160));
        }
        if ((uVar7 >> 2 & 1) != 0) {
          nn::os::SignalLightEvent((LightEventType *)(param_1[2] + 0x160));
        }
        uVar7 = uVar1;
      }
    }
    if (((DAT_05af7f00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af7f00), iVar3 != 0)) {
      DAT_05af7ef8 = lVar4 / 10;
      __cxa_guard_release(&DAT_05af7f00);
    }
    uVar6 = nn::os::ConvertToTimeSpan(DAT_05af7ef8);
    nn::os::TimedWaitLightEvent((LightEventType *)(param_1 + 7),uVar6);
    iVar3 = (int)param_1[0x10b];
  } while( true );
}

