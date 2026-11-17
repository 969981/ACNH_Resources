
void FUN_02c49f70(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *__dest;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined2 *__src;
  long *plVar7;
  
  __dest = param_1 + 0x2e;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  param_1[0x1c] = param_2[0x1c];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
  uVar5 = *(undefined4 *)(param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x22) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  *(undefined ***)(param_1 + 0x24) = &PTR_LAB_048fa8f8;
  *(undefined2 **)(param_1 + 0x28) = __dest;
  plVar7 = (long *)(param_2 + 0x24);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = *(undefined2 **)(param_2 + 0x28);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x24) + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x28) + lVar6) == '\0') goto LAB_02c4a14c;
      lVar1 = *(long *)(param_2 + 0x28) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02c4a14c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02c4a14c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02c4a14c:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x2c) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x2c) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined ***)(param_1 + 0x24) = &PTR_LAB_048f9700;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x44) = uVar4;
  return;
}

