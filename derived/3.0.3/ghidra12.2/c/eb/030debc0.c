
void FUN_030debc0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  
  bVar4 = *(byte *)(param_2 + 4);
  pvVar5 = *(void **)(param_1 + 0x420);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)(param_1 + 0x490) = bVar4;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_030dec6c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_030dec6c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_030dec6c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_030dec6c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x428) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x428) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x478);
  plVar7 = param_2 + 2;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[3];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[2] + 0x18))(plVar7);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[3] + lVar3) == '\0') goto LAB_030ded0c;
      lVar1 = param_2[3] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_030ded0c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_030ded0c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_030ded0c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x480) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x480) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  FUN_03d59634(param_2[5],0,DAT_056edaa4,**(undefined8 **)(param_1 + 0x238));
  return;
}

