
void FUN_02926840(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__src;
  long *plVar6;
  
  uVar3 = *param_2;
  __dest = (void *)((long)param_1 + 0x44);
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar5;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined8 *)((long)param_2 + 0x1c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 8) = 0x80;
  param_1[6] = &PTR_LAB_048fcff0;
  param_1[7] = __dest;
  plVar6 = param_2 + 6;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = (void *)param_2[7];
  if (__dest != __src) {
    (**(code **)(param_2[6] + 0x18))(plVar6);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[7] + lVar4) == '\0') goto LAB_02926920;
      lVar1 = param_2[7] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_02926920;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_02926920;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_02926920:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 8) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 8) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  param_1[6] = &DAT_048fc708;
  uVar3 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar3;
  return;
}

