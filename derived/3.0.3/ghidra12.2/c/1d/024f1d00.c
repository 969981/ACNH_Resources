
undefined4 * FUN_024f1d00(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long *plVar5;
  byte bVar6;
  
  __dest = *(void **)(param_1 + 0x1a);
  *param_1 = *param_2;
  bVar6 = *(byte *)(param_2 + 1);
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 1) = bVar6;
  uVar3 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)param_2 + 0x1b);
  param_1[7] = param_2[7];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  param_1[9] = param_2[9];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)param_2 + 0x33);
  param_1[0xd] = param_2[0xd];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  param_1[0xf] = param_2[0xf];
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
  *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x4b);
  param_1[0x13] = param_2[0x13];
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
  *(undefined1 *)((long)param_1 + 0x53) = *(undefined1 *)((long)param_2 + 0x53);
  param_1[0x15] = param_2[0x15];
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined1 *)((long)param_1 + 0x5a) = *(undefined1 *)((long)param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
  param_1[0x17] = param_2[0x17];
  plVar5 = (long *)(param_2 + 0x18);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_2 + 0x1a);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(plVar5);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x1a) + lVar4) == '\0') goto LAB_024f1ee0;
      lVar1 = *(long *)(param_2 + 0x1a) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_024f1ee0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_024f1ee0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_024f1ee0:
    iVar2 = (int)lVar4;
    if ((int)param_1[0x1c] <= (int)lVar4) {
      iVar2 = param_1[0x1c] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)((long)param_1 + 0xf9) = *(undefined1 *)((long)param_2 + 0xf9);
  *(undefined1 *)((long)param_1 + 0xfa) = *(undefined1 *)((long)param_2 + 0xfa);
  *(undefined1 *)((long)param_1 + 0xfb) = *(undefined1 *)((long)param_2 + 0xfb);
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined1 *)((long)param_1 + 0xfd) = *(undefined1 *)((long)param_2 + 0xfd);
  *(undefined1 *)((long)param_1 + 0xfe) = *(undefined1 *)((long)param_2 + 0xfe);
  *(undefined1 *)((long)param_1 + 0xff) = *(undefined1 *)((long)param_2 + 0xff);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined2 *)((long)param_1 + 0x102) = *(undefined2 *)((long)param_2 + 0x102);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  bVar6 = *(byte *)(param_2 + 0x44);
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 0x44) = bVar6;
  return param_1;
}

