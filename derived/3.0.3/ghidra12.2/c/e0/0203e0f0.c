
long * FUN_0203e0f0(long *param_1,long *param_2)

{
  void *__dest;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  void *__src;
  long *plVar7;
  
  if ((int)param_1[2] < (int)param_1[5]) {
    plVar6 = (long *)param_1[3];
    if (plVar6 != (long *)0x0) {
      param_1[3] = *plVar6;
    }
    lVar3 = param_2[1];
    __dest = (void *)((long)plVar6 + 0x44);
    lVar5 = param_2[2];
    *plVar6 = *param_2;
    plVar6[1] = lVar3;
    plVar6[2] = lVar5;
    *(int *)(plVar6 + 3) = (int)param_2[3];
    uVar2 = *(undefined8 *)((long)param_2 + 0x1c);
    uVar4 = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined1 *)((long)plVar6 + 0xc3) = 0;
    *(undefined8 *)((long)plVar6 + 0x1c) = uVar2;
    *(undefined8 *)((long)plVar6 + 0x24) = uVar4;
    *(undefined4 *)(plVar6 + 8) = 0x80;
    plVar6[6] = (long)&PTR_LAB_048fcff0;
    plVar6[7] = (long)__dest;
    plVar7 = param_2 + 6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    __src = (void *)param_2[7];
    if (__dest != __src) {
      (**(code **)(param_2[6] + 0x18))(plVar7);
      lVar3 = 0;
      do {
        if (*(char *)(param_2[7] + lVar3) == '\0') goto LAB_0203e1f8;
        lVar5 = param_2[7] + lVar3;
        if (*(char *)(lVar5 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_0203e1f8;
        }
        if (*(char *)(lVar5 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_0203e1f8;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_0203e1f8:
      iVar1 = (int)lVar3;
      if ((int)plVar6[8] <= (int)lVar3) {
        iVar1 = (int)plVar6[8] + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    plVar6[6] = (long)&DAT_048fc708;
    lVar3 = param_2[0x19];
    lVar5 = param_2[0x1a];
    plVar7 = plVar6 + 0x1b;
    *plVar7 = 0;
    plVar6[0x1c] = 0;
    plVar6[0x19] = lVar3;
    plVar6[0x1a] = lVar5;
    lVar3 = *param_1;
    *param_1 = (long)plVar7;
    *plVar7 = lVar3;
    plVar6[0x1c] = (long)param_1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar7;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}

