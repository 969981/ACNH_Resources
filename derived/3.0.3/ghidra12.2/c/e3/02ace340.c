
void FUN_02ace340(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long *plVar7;
  
  FUN_006f94c0();
  *param_1 = &PTR_LAB_04a9ea28;
  puVar4 = PTR_DAT_04bb2e90;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  *(undefined1 *)((long)param_1 + 0x30b) = 0;
  __dest = (void *)((long)param_1 + 0x28c);
  param_1[0x4f] = puVar4 + 0x10;
  param_1[0x50] = __dest;
  *(undefined4 *)(param_1 + 0x51) = 0x80;
  plVar7 = (long *)(param_2 + 0x30);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = *(void **)(param_2 + 0x38);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar6) == '\0') goto LAB_02ace410;
      lVar1 = *(long *)(param_2 + 0x38) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02ace410;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02ace410;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02ace410:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x51) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x51) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar3 = *(uint *)((long)param_1 + 0x274);
  param_1[0x4f] = &DAT_048fc708;
  uVar5 = (uint)(*(int *)(param_2 + 0x1c) != 0);
  *(uint *)((long)param_1 + 0x274) = uVar3 & 0xfffffffe | uVar5;
  *(uint *)((long)param_1 + 0x274) =
       uVar3 & 0xfffffffc | uVar5 | (uint)(*(int *)(param_2 + 0x20) != 0) << 1;
  return;
}

