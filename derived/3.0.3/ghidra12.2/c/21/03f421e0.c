
void FUN_03f421e0(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((int)param_1[0xd] == 0) {
    bVar6 = 1;
    bVar2 = *(byte *)(param_1 + 1);
  }
  else {
    lVar4 = (long)(int)param_1[0xd] * 8;
    plVar3 = (long *)param_1[0xe];
    do {
      lVar4 = lVar4 + -8;
      bVar6 = *(byte *)(*plVar3 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar3 + 0x104) >> 3 & 1) == 0) break;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
    bVar2 = *(byte *)(param_1 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if (bVar6 != 0) {
    return;
  }
  if ((int)param_1[5] != 0) {
    uVar5 = 0;
    do {
      if ((*(char *)(param_1[6] + (-(uVar5 >> 0x1f) & 0xffffffc000000000 | uVar5 << 6)) != '\0') &&
         (*(long *)(param_1[6] + (long)(int)uVar5 * 0x40 + 8) != 0)) {
        return;
      }
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffffffff;
    } while ((int)param_1[5] != (int)uVar1);
  }
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb));
  return;
}

