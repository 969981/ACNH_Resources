
void FUN_03f3d060(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  void *__dest;
  void *__src;
  long *plVar9;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_04ba8fe0;
  puVar2 = PTR_DAT_04bdf1d8;
  uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x48);
  puVar1 = PTR_DAT_04bdf0c8 + 0x10;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = puVar1;
  param_1[5] = uVar8;
  param_1[9] = 0;
  param_1[10] = puVar2 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_04bdf1b8 + 0x10;
  param_1[0xf] = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x60);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x18);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = puVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar2 = PTR_DAT_04bd0e58 + 0x10;
  param_1[0x24] = puVar2;
  param_1[0x25] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x28),0,0);
  puVar6 = PTR_DAT_04bb2120;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x2a] = puVar3;
  param_1[0x2b] = puVar6;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  param_1[0x2c] = puVar1;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = puVar2;
  param_1[0x38] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x3b),0,0);
  param_1[0x3d] = puVar3;
  param_1[0x3e] = puVar6;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3b));
  param_1[0x3f] = puVar1;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = puVar2;
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x4e),0,0);
  param_1[0x50] = puVar3;
  param_1[0x51] = puVar6;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4e));
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = puVar3;
  param_1[0x58] = puVar6;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = &PTR_LAB_04ba9010;
  param_1[0x59] = param_1;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = puVar2;
  nn::os::InitializeLightEvent(param_1 + 0x5f,0,0);
  param_1[0x61] = puVar3;
  param_1[0x62] = puVar6;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0x20;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  *(undefined8 *)((long)param_1 + 0x334) = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 1;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  param_1[0x6b] = 0;
  *(undefined1 *)((long)param_1 + 0x3f3) = 0;
  __dest = (void *)((long)param_1 + 0x374);
  param_1[0x6c] = puVar1;
  param_1[0x6d] = __dest;
  *(undefined4 *)(param_1 + 0x6e) = 0x80;
  plVar9 = (long *)(param_2 + 0x48);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  __src = *(void **)(param_2 + 0x50);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x18))(plVar9);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x50) + lVar7) == '\0') goto LAB_03f3d33c;
      lVar4 = *(long *)(param_2 + 0x50) + lVar7;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03f3d33c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03f3d33c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03f3d33c:
    iVar5 = (int)lVar7;
    if (*(int *)(param_1 + 0x6e) <= (int)lVar7) {
      iVar5 = *(int *)(param_1 + 0x6e) + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    *(undefined1 *)((long)__dest + (long)iVar5) = 0;
  }
  param_1[0x6c] = PTR_DAT_04bb2d88 + 0x10;
  param_1[0x7f] = *(undefined8 *)(param_2 + 0x28);
  FUN_03f3d3a0(param_1,param_2);
  return;
}

