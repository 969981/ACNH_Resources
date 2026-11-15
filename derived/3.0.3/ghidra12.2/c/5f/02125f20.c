
void FUN_02125f20(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *__src;
  long *plVar6;
  
  uVar4 = *param_2;
  __dest = (void *)((long)param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0x43) = 0;
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[2] = &PTR_LAB_048fa8f8;
  param_1[3] = __dest;
  plVar6 = param_2 + 2;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = (void *)param_2[3];
  if (__dest != __src) {
    (**(code **)(param_2[2] + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[3] + lVar5) == '\0') goto LAB_02125fec;
      lVar1 = param_2[3] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02125fec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02125fec;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02125fec:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 4) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 4) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  param_1[2] = PTR_DAT_04bb2028 + 0x10;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined2 *)((long)param_1 + 0x4c) = *(undefined2 *)((long)param_2 + 0x4c);
  *(undefined1 *)((long)param_1 + 0x4e) = *(undefined1 *)((long)param_2 + 0x4e);
  *(undefined1 *)((long)param_1 + 0x4f) = *(undefined1 *)((long)param_2 + 0x4f);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined2 *)((long)param_1 + 0x54) = *(undefined2 *)((long)param_2 + 0x54);
  *(undefined1 *)((long)param_1 + 0x56) = *(undefined1 *)((long)param_2 + 0x56);
  *(undefined1 *)((long)param_1 + 0x57) = *(undefined1 *)((long)param_2 + 0x57);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined2 *)((long)param_1 + 0x5c) = *(undefined2 *)((long)param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0x5e) = *(undefined1 *)((long)param_2 + 0x5e);
  *(undefined1 *)((long)param_1 + 0x5f) = *(undefined1 *)((long)param_2 + 0x5f);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 100) = *(undefined2 *)((long)param_2 + 100);
  *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)((long)param_2 + 0x66);
  *(undefined1 *)((long)param_1 + 0x67) = *(undefined1 *)((long)param_2 + 0x67);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined2 *)((long)param_1 + 0x6c) = *(undefined2 *)((long)param_2 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x6e) = *(undefined1 *)((long)param_2 + 0x6e);
  *(undefined1 *)((long)param_1 + 0x6f) = *(undefined1 *)((long)param_2 + 0x6f);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined2 *)((long)param_1 + 0x74) = *(undefined2 *)((long)param_2 + 0x74);
  *(undefined1 *)((long)param_1 + 0x76) = *(undefined1 *)((long)param_2 + 0x76);
  *(undefined1 *)((long)param_1 + 0x77) = *(undefined1 *)((long)param_2 + 0x77);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined2 *)((long)param_1 + 0x7c) = *(undefined2 *)((long)param_2 + 0x7c);
  *(undefined1 *)((long)param_1 + 0x7e) = *(undefined1 *)((long)param_2 + 0x7e);
  *(undefined1 *)((long)param_1 + 0x7f) = *(undefined1 *)((long)param_2 + 0x7f);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x84) = *(undefined2 *)((long)param_2 + 0x84);
  *(undefined1 *)((long)param_1 + 0x86) = *(undefined1 *)((long)param_2 + 0x86);
  *(undefined1 *)((long)param_1 + 0x87) = *(undefined1 *)((long)param_2 + 0x87);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined2 *)((long)param_1 + 0x8c) = *(undefined2 *)((long)param_2 + 0x8c);
  *(undefined1 *)((long)param_1 + 0x8e) = *(undefined1 *)((long)param_2 + 0x8e);
  *(undefined1 *)((long)param_1 + 0x8f) = *(undefined1 *)((long)param_2 + 0x8f);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined2 *)((long)param_1 + 0x94) = *(undefined2 *)((long)param_2 + 0x94);
  *(undefined1 *)((long)param_1 + 0x96) = *(undefined1 *)((long)param_2 + 0x96);
  *(undefined1 *)((long)param_1 + 0x97) = *(undefined1 *)((long)param_2 + 0x97);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined2 *)((long)param_1 + 0x9c) = *(undefined2 *)((long)param_2 + 0x9c);
  *(undefined1 *)((long)param_1 + 0x9e) = *(undefined1 *)((long)param_2 + 0x9e);
  *(undefined1 *)((long)param_1 + 0x9f) = *(undefined1 *)((long)param_2 + 0x9f);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined2 *)((long)param_1 + 0xa4) = *(undefined2 *)((long)param_2 + 0xa4);
  *(undefined1 *)((long)param_1 + 0xa6) = *(undefined1 *)((long)param_2 + 0xa6);
  *(undefined1 *)((long)param_1 + 0xa7) = *(undefined1 *)((long)param_2 + 0xa7);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined2 *)((long)param_1 + 0xac) = *(undefined2 *)((long)param_2 + 0xac);
  *(undefined1 *)((long)param_1 + 0xae) = *(undefined1 *)((long)param_2 + 0xae);
  *(undefined1 *)((long)param_1 + 0xaf) = *(undefined1 *)((long)param_2 + 0xaf);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined2 *)((long)param_1 + 0xb4) = *(undefined2 *)((long)param_2 + 0xb4);
  *(undefined1 *)((long)param_1 + 0xb6) = *(undefined1 *)((long)param_2 + 0xb6);
  *(undefined1 *)((long)param_1 + 0xb7) = *(undefined1 *)((long)param_2 + 0xb7);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined2 *)((long)param_1 + 0xbc) = *(undefined2 *)((long)param_2 + 0xbc);
  *(undefined1 *)((long)param_1 + 0xbe) = *(undefined1 *)((long)param_2 + 0xbe);
  *(undefined1 *)((long)param_1 + 0xbf) = *(undefined1 *)((long)param_2 + 0xbf);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)((long)param_1 + 0xc4) = *(undefined2 *)((long)param_2 + 0xc4);
  *(undefined1 *)((long)param_1 + 0xc6) = *(undefined1 *)((long)param_2 + 0xc6);
  *(undefined1 *)((long)param_1 + 199) = *(undefined1 *)((long)param_2 + 199);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined2 *)((long)param_1 + 0xcc) = *(undefined2 *)((long)param_2 + 0xcc);
  *(undefined1 *)((long)param_1 + 0xce) = *(undefined1 *)((long)param_2 + 0xce);
  *(undefined1 *)((long)param_1 + 0xcf) = *(undefined1 *)((long)param_2 + 0xcf);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined2 *)((long)param_1 + 0xd4) = *(undefined2 *)((long)param_2 + 0xd4);
  *(undefined1 *)((long)param_1 + 0xd6) = *(undefined1 *)((long)param_2 + 0xd6);
  *(undefined1 *)((long)param_1 + 0xd7) = *(undefined1 *)((long)param_2 + 0xd7);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((long)param_1 + 0xdc) = *(undefined4 *)((long)param_2 + 0xdc);
  FUN_007ef010(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)((long)param_2 + 0xe4);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)((long)param_2 + 0xec);
  return;
}

