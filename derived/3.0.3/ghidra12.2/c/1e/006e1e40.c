
void FUN_006e1e40(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long *plVar8;
  
  uVar4 = *(uint *)(param_1 + 0x7c0);
  if ((int)uVar4 < 8) {
    lVar3 = param_1 + 0x40 + (ulong)uVar4 * 0xf0;
    if (7 < uVar4) {
      lVar3 = param_1 + 0x40;
    }
    pvVar6 = *(void **)(lVar3 + 8);
    (**(code **)(*param_2 + 0x18))(param_2);
    pvVar7 = (void *)param_2[1];
    if (pvVar6 != pvVar7) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_006e1efc;
        lVar1 = param_2[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_006e1efc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_006e1efc;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_006e1efc:
      iVar2 = (int)lVar5;
      if (*(int *)(lVar3 + 0x10) <= (int)lVar5) {
        iVar2 = *(int *)(lVar3 + 0x10) + -1;
      }
      memcpy(pvVar6,pvVar7,(long)iVar2);
      *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
    }
    pvVar6 = *(void **)(lVar3 + 0x80);
    plVar8 = param_2 + 0xf;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pvVar7 = (void *)param_2[0x10];
    if (pvVar6 != pvVar7) {
      (**(code **)(param_2[0xf] + 0x18))(plVar8);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[0x10] + lVar5) == '\0') goto LAB_006e1f9c;
        lVar1 = param_2[0x10] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_006e1f9c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_006e1f9c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_006e1f9c:
      iVar2 = (int)lVar5;
      if (*(int *)(lVar3 + 0x88) <= (int)lVar5) {
        iVar2 = *(int *)(lVar3 + 0x88) + -1;
      }
      memcpy(pvVar6,pvVar7,(long)iVar2);
      *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
    }
    *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + 1;
  }
  return;
}

