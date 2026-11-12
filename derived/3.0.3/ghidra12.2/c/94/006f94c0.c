
void FUN_006f94c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *__dest;
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *__src;
  long *plVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_LAB_048fce60;
  param_1[1] = &PTR_LAB_048fcfd0;
  param_1[6] = param_1 + 6;
  param_1[7] = param_1 + 6;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x24] = &PTR_FUN_048fe4a0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 0;
  param_1[0x1a] = param_1 + 0x19;
  param_1[0x1b] = 0x2000000000;
  param_1[0x18] = &PTR_FUN_048fe4a0;
  param_1[0x19] = param_1 + 0x19;
  param_1[0x1e] = param_1 + 0x1d;
  param_1[0x1f] = 0x2000000000;
  param_1[0x1c] = &PTR_FUN_048fe4a0;
  param_1[0x1d] = param_1 + 0x1d;
  param_1[0x22] = param_1 + 0x21;
  param_1[0x23] = 0x2000000000;
  param_1[0x20] = &PTR_FUN_048fe4a0;
  param_1[0x21] = param_1 + 0x21;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x20;
  __dest = (void *)((long)param_1 + 0x19c);
  param_1[0x25] = param_1 + 0x25;
  param_1[0x26] = param_1 + 0x25;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  uVar5 = param_2[2];
  uVar4 = param_2[1];
  param_1[0x2b] = *param_2;
  param_1[0x2c] = uVar4;
  param_1[0x2d] = uVar5;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x17c) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x174) = uVar4;
  *(undefined4 *)(param_1 + 0x33) = 0x80;
  *(undefined1 *)((long)param_1 + 0x21b) = 0;
  param_1[0x31] = &PTR_LAB_048fcff0;
  param_1[0x32] = __dest;
  plVar6 = param_2 + 6;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = (void *)param_2[7];
  if (__dest != __src) {
    (**(code **)(param_2[6] + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[7] + lVar3) == '\0') goto LAB_006f965c;
      lVar1 = param_2[7] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006f965c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006f965c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006f965c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x33) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x33) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  param_1[0x31] = PTR_DAT_04bb2d88 + 0x10;
  uVar4 = param_2[0x19];
  uVar5 = param_2[0x1a];
  param_1[0x48] = param_3;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x45] = uVar5;
  param_1[0x44] = uVar4;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0xffffffff;
  param_1[0x4b] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0xbf800000ffffffff;
  *(undefined1 **)((long)param_1 + 0x264) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0x26c) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x49) = 0x41;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x38;
  return;
}

