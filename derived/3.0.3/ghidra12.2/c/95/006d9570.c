
undefined8 FUN_006d9570(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long *plVar7;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  __dest = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 1);
  uVar5 = param_2[2];
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = (void *)param_2[5];
  if (__dest != __src) {
    (**(code **)(param_2[4] + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[5] + lVar6) == '\0') goto LAB_006d9630;
      lVar1 = param_2[5] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_006d9630;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_006d9630;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_006d9630:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x80) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x80) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar3 = *PTR_DAT_04bb2950;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 0x4c) = uVar3;
  local_50 = PTR_LAB_04bb2a30;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  local_60 = PTR_DAT_04bb2a38 + 0x10;
  uStack_48 = 0;
  lStack_58 = param_1;
  uVar4 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_60,
                       (undefined1 *)(param_1 + 0x4c),0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  return 1;
}

