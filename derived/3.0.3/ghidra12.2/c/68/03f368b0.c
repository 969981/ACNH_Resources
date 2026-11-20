
void FUN_03f368b0(long param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  undefined8 local_b0;
  undefined ***local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined1 *puStack_38;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  if ((*(byte *)(plVar5 + 1) & 1) != 0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if ((int)plVar5[0xd] == 0) {
    bVar6 = 1;
    bVar2 = *(byte *)(plVar5 + 1);
  }
  else {
    lVar4 = (long)(int)plVar5[0xd] * 8;
    plVar3 = (long *)plVar5[0xe];
    do {
      lVar4 = lVar4 + -8;
      bVar6 = *(byte *)(*plVar3 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar3 + 0x104) >> 3 & 1) == 0) break;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
    bVar2 = *(byte *)(plVar5 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  if (bVar6 == 0) {
    lVar4 = 5;
    if (*(uint *)(plVar5 + 5) < 6) {
      lVar4 = 0;
    }
    lVar1 = plVar5[6] + lVar4 * 0x40;
    if ((*(char *)(plVar5[6] + lVar4 * 0x40) == '\0') || (*(long *)(lVar1 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x30));
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  if ((*(byte *)(plVar5 + 1) & 1) != 0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if ((int)plVar5[0xd] == 0) {
    bVar6 = 1;
    bVar2 = *(byte *)(plVar5 + 1);
  }
  else {
    lVar4 = (long)(int)plVar5[0xd] * 8;
    plVar3 = (long *)plVar5[0xe];
    do {
      lVar4 = lVar4 + -8;
      bVar6 = *(byte *)(*plVar3 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar3 + 0x104) >> 3 & 1) == 0) break;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
    bVar2 = *(byte *)(plVar5 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  if ((bVar6 == 0) &&
     ((lVar4 = plVar5[6] + (ulong)(4 < *(uint *)(plVar5 + 5)) * 0x100,
      *(char *)(plVar5[6] + (ulong)(4 < *(uint *)(plVar5 + 5)) * 0x100) == '\0' ||
      (*(long *)(lVar4 + 8) == 0)))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x30));
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  if ((*(byte *)(plVar5 + 1) & 1) != 0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if ((int)plVar5[0xd] == 0) {
    bVar6 = 1;
    bVar2 = *(byte *)(plVar5 + 1);
  }
  else {
    lVar4 = (long)(int)plVar5[0xd] * 8;
    plVar3 = (long *)plVar5[0xe];
    do {
      lVar4 = lVar4 + -8;
      bVar6 = *(byte *)(*plVar3 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar3 + 0x104) >> 3 & 1) == 0) break;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
    bVar2 = *(byte *)(plVar5 + 1);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  if (bVar6 == 0) {
    lVar4 = 3;
    if (*(uint *)(plVar5 + 5) < 4) {
      lVar4 = 0;
    }
    lVar1 = plVar5[6] + lVar4 * 0x40;
    if ((*(char *)(plVar5[6] + lVar4 * 0x40) == '\0') || (*(long *)(lVar1 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x30));
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_8e = 9;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_90 = 1;
  local_98 = &PTR_LAB_04ba8bc8;
  local_48 = 0;
  local_b0 = 0;
  puStack_38 = &DAT_0419b684;
  local_88 = *(undefined8 *)(param_1 + 0x148);
  uStack_80 = 0;
  local_78 = param_1 + 0x3c0;
  uStack_70 = 0;
  pcStack_50 = "ClearAllCaches";
  local_44 = 0xffffffff;
  local_a8 = &local_98;
  uStack_a0 = 0;
  local_40 = local_58;
  FUN_03f45184(*(undefined8 *)(param_1 + 0x1a8),&local_b0);
  return;
}

