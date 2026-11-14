
void FUN_01ba80e0(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  
  puVar3 = PTR_DAT_04bb49b8;
  if ((*(byte *)(param_1 + 0x178) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x198) == 0) {
      if (*(long *)(param_1 + 0x180) == 0) goto LAB_01ba814c;
    }
    else {
      FUN_03f45838(param_1 + 0x188);
      if (*(long *)(param_1 + 0x180) == 0) {
        *(undefined4 *)(param_1 + 0x17c) = 0xe;
        goto LAB_01ba814c;
      }
    }
    FUN_03f35214(*(undefined8 *)puVar3,param_1 + 0x170);
  }
LAB_01ba814c:
  plVar6 = *(long **)(*(long *)(*(long *)puVar3 + 0x148) + 0x180);
  if ((*(byte *)(plVar6 + 1) & 1) != 0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if ((int)plVar6[0xd] == 0) {
    bVar7 = 1;
    bVar2 = *(byte *)(plVar6 + 1);
  }
  else {
    lVar5 = (long)(int)plVar6[0xd] * 8;
    plVar4 = (long *)plVar6[0xe];
    do {
      lVar5 = lVar5 + -8;
      bVar7 = *(byte *)(*plVar4 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar4 + 0x104) >> 3 & 1) == 0) break;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    bVar2 = *(byte *)(plVar6 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (bVar7 == 0) {
    lVar5 = 9;
    if (*(uint *)(plVar6 + 5) < 10) {
      lVar5 = 0;
    }
    lVar1 = plVar6[6] + lVar5 * 0x40;
    if ((*(char *)(plVar6[6] + lVar5 * 0x40) == '\0') || (*(long *)(lVar1 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x30));
    }
  }
  if ((*(byte *)(plVar6 + 1) & 1) != 0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if ((int)plVar6[0xd] == 0) {
    bVar7 = 1;
    bVar2 = *(byte *)(plVar6 + 1);
  }
  else {
    lVar5 = (long)(int)plVar6[0xd] * 8;
    plVar4 = (long *)plVar6[0xe];
    do {
      lVar5 = lVar5 + -8;
      bVar7 = *(byte *)(*plVar4 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar4 + 0x104) >> 3 & 1) == 0) break;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    bVar2 = *(byte *)(plVar6 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (bVar7 == 0) {
    lVar5 = 9;
    if (*(uint *)(plVar6 + 5) < 10) {
      lVar5 = 0;
    }
    lVar1 = plVar6[6] + lVar5 * 0x40;
    if ((*(char *)(plVar6[6] + lVar5 * 0x40) == '\0') || (*(long *)(lVar1 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x30));
    }
  }
  if ((*(byte *)(plVar6 + 1) & 1) != 0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if ((int)plVar6[0xd] == 0) {
    bVar7 = 1;
    bVar2 = *(byte *)(plVar6 + 1);
  }
  else {
    lVar5 = (long)(int)plVar6[0xd] * 8;
    plVar4 = (long *)plVar6[0xe];
    do {
      lVar5 = lVar5 + -8;
      bVar7 = *(byte *)(*plVar4 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar4 + 0x104) >> 3 & 1) == 0) break;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    bVar2 = *(byte *)(plVar6 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if ((bVar7 == 0) &&
     ((lVar5 = plVar6[6] + (ulong)(8 < *(uint *)(plVar6 + 5)) * 0x200,
      *(char *)(plVar6[6] + (ulong)(8 < *(uint *)(plVar6 + 5)) * 0x200) == '\0' ||
      (*(long *)(lVar5 + 8) == 0)))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x30));
  }
  FUN_03f2a9b0(param_1 + 0x60);
  FUN_03f2d448(param_1 + 0x170);
  FUN_03f2a9b0(param_1 + 0x60);
  FUN_038e1a84(param_1 + 0xd0);
  return;
}

