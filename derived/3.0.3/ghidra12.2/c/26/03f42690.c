
void FUN_03f42690(long *param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  (**(code **)(*param_1 + 0x20))();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((int)param_1[0xd] == 0) {
    bVar3 = false;
    bVar2 = *(byte *)(param_1 + 1);
  }
  else {
    lVar5 = (long)(int)param_1[0xd] * 8;
    plVar4 = (long *)param_1[0xe];
    do {
      lVar5 = lVar5 + -8;
      bVar3 = *(char *)(*plVar4 + 0x104) < '\0';
      if (*(char *)(*plVar4 + 0x104) < '\0') break;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    bVar2 = *(byte *)(param_1 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if ((int)param_1[4] != 0) {
    bVar3 = true;
  }
  if (!bVar3) {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb));
  }
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 != 0) {
    lVar5 = param_1[6];
    uVar7 = 0;
    do {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        (**(code **)(*param_1 + 0x20))(param_1);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      if ((int)param_1[0xd] != 0) {
        plVar4 = (long *)param_1[0xe];
        lVar6 = (long)(int)param_1[0xd] << 3;
        do {
          if ((*(long *)(*plVar4 + 0x108) != 0) &&
             ((uint)*(byte *)(*(long *)(*plVar4 + 0x108) + 8) == (uVar7 & 0xff))) {
            bVar3 = true;
            goto LAB_03f427c4;
          }
          plVar4 = plVar4 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      bVar3 = false;
LAB_03f427c4:
      (**(code **)(*param_1 + 0x28))(param_1);
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      if ((!bVar3) && (*(long *)(lVar5 + ((long)((ulong)uVar7 << 0x20) >> 0x1a) + 8) == 0)) {
        nn::os::SignalLightEvent((LightEventType *)(lVar5 + (long)(int)uVar7 * 0x40 + 0x30));
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x03f42830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

