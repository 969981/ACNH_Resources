
void FUN_03f422d0(long *param_1,uint param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((int)param_1[0xd] == 0) {
    bVar4 = 1;
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    lVar3 = (long)(int)param_1[0xd] * 8;
    plVar2 = (long *)param_1[0xe];
    do {
      lVar3 = lVar3 + -8;
      bVar4 = *(byte *)(*plVar2 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar2 + 0x104) >> 3 & 1) == 0) break;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if (bVar4 == 0) {
    param_2 = param_2 & 0xff;
    if (*(uint *)(param_1 + 5) <= param_2) {
      param_2 = 0;
    }
    lVar3 = param_1[6] + (ulong)param_2 * 0x40;
    if ((*(char *)(param_1[6] + (ulong)param_2 * 0x40) == '\0') || (*(long *)(lVar3 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar3 + 0x30));
      return;
    }
  }
  return;
}

