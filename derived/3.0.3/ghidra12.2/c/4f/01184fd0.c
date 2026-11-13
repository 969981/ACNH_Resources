
void FUN_01184fd0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  
  pvVar5 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0118506c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0118506c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0118506c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0118506c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x18) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x68);
  plVar7 = param_2 + 2;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[3];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[2] + 0x18))(plVar7);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[3] + lVar3) == '\0') goto LAB_0118510c;
      lVar1 = param_2[3] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0118510c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0118510c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0118510c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x70) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x70) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(int *)(param_1 + 0xbc) = (int)param_2[4];
  bVar4 = *(byte *)((long)param_2 + 0x24);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)(param_1 + 0xc0) = bVar4;
  *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)((long)param_2 + 0x25);
  *(long *)(param_1 + 200) = param_2[5];
  return;
}

