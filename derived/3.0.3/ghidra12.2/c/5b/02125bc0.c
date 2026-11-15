
undefined4 * FUN_02125bc0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  long *plVar4;
  
  __dest = *(void **)(param_1 + 6);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  plVar4 = (long *)(param_2 + 4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = *(void **)(param_2 + 6);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 4) + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 6) + lVar3) == '\0') goto LAB_02125c6c;
      lVar1 = *(long *)(param_2 + 6) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02125c6c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_02125c6c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02125c6c:
    iVar2 = (int)lVar3;
    if ((int)param_1[8] <= (int)lVar3) {
      iVar2 = param_1[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  param_1[0x12] = param_2[0x12];
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x4e) = *(undefined1 *)((long)param_2 + 0x4e);
  *(undefined1 *)((long)param_1 + 0x4f) = *(undefined1 *)((long)param_2 + 0x4f);
  param_1[0x14] = param_2[0x14];
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_2 + 0x15);
  *(undefined1 *)((long)param_1 + 0x56) = *(undefined1 *)((long)param_2 + 0x56);
  *(undefined1 *)((long)param_1 + 0x57) = *(undefined1 *)((long)param_2 + 0x57);
  param_1[0x16] = param_2[0x16];
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
  *(undefined1 *)((long)param_1 + 0x5e) = *(undefined1 *)((long)param_2 + 0x5e);
  *(undefined1 *)((long)param_1 + 0x5f) = *(undefined1 *)((long)param_2 + 0x5f);
  param_1[0x18] = param_2[0x18];
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)((long)param_2 + 0x66);
  *(undefined1 *)((long)param_1 + 0x67) = *(undefined1 *)((long)param_2 + 0x67);
  param_1[0x1a] = param_2[0x1a];
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x6e) = *(undefined1 *)((long)param_2 + 0x6e);
  *(undefined1 *)((long)param_1 + 0x6f) = *(undefined1 *)((long)param_2 + 0x6f);
  param_1[0x1c] = param_2[0x1c];
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  *(undefined1 *)((long)param_1 + 0x76) = *(undefined1 *)((long)param_2 + 0x76);
  *(undefined1 *)((long)param_1 + 0x77) = *(undefined1 *)((long)param_2 + 0x77);
  param_1[0x1e] = param_2[0x1e];
  *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(param_2 + 0x1f);
  *(undefined1 *)((long)param_1 + 0x7e) = *(undefined1 *)((long)param_2 + 0x7e);
  *(undefined1 *)((long)param_1 + 0x7f) = *(undefined1 *)((long)param_2 + 0x7f);
  param_1[0x20] = param_2[0x20];
  *(undefined2 *)(param_1 + 0x21) = *(undefined2 *)(param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x86) = *(undefined1 *)((long)param_2 + 0x86);
  *(undefined1 *)((long)param_1 + 0x87) = *(undefined1 *)((long)param_2 + 0x87);
  param_1[0x22] = param_2[0x22];
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x8e) = *(undefined1 *)((long)param_2 + 0x8e);
  *(undefined1 *)((long)param_1 + 0x8f) = *(undefined1 *)((long)param_2 + 0x8f);
  param_1[0x24] = param_2[0x24];
  *(undefined2 *)(param_1 + 0x25) = *(undefined2 *)(param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x96) = *(undefined1 *)((long)param_2 + 0x96);
  *(undefined1 *)((long)param_1 + 0x97) = *(undefined1 *)((long)param_2 + 0x97);
  param_1[0x26] = param_2[0x26];
  *(undefined2 *)(param_1 + 0x27) = *(undefined2 *)(param_2 + 0x27);
  *(undefined1 *)((long)param_1 + 0x9e) = *(undefined1 *)((long)param_2 + 0x9e);
  *(undefined1 *)((long)param_1 + 0x9f) = *(undefined1 *)((long)param_2 + 0x9f);
  param_1[0x28] = param_2[0x28];
  *(undefined2 *)(param_1 + 0x29) = *(undefined2 *)(param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0xa6) = *(undefined1 *)((long)param_2 + 0xa6);
  *(undefined1 *)((long)param_1 + 0xa7) = *(undefined1 *)((long)param_2 + 0xa7);
  param_1[0x2a] = param_2[0x2a];
  *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(param_2 + 0x2b);
  *(undefined1 *)((long)param_1 + 0xae) = *(undefined1 *)((long)param_2 + 0xae);
  *(undefined1 *)((long)param_1 + 0xaf) = *(undefined1 *)((long)param_2 + 0xaf);
  param_1[0x2c] = param_2[0x2c];
  *(undefined2 *)(param_1 + 0x2d) = *(undefined2 *)(param_2 + 0x2d);
  *(undefined1 *)((long)param_1 + 0xb6) = *(undefined1 *)((long)param_2 + 0xb6);
  *(undefined1 *)((long)param_1 + 0xb7) = *(undefined1 *)((long)param_2 + 0xb7);
  param_1[0x2e] = param_2[0x2e];
  *(undefined2 *)(param_1 + 0x2f) = *(undefined2 *)(param_2 + 0x2f);
  *(undefined1 *)((long)param_1 + 0xbe) = *(undefined1 *)((long)param_2 + 0xbe);
  *(undefined1 *)((long)param_1 + 0xbf) = *(undefined1 *)((long)param_2 + 0xbf);
  param_1[0x30] = param_2[0x30];
  *(undefined2 *)(param_1 + 0x31) = *(undefined2 *)(param_2 + 0x31);
  *(undefined1 *)((long)param_1 + 0xc6) = *(undefined1 *)((long)param_2 + 0xc6);
  *(undefined1 *)((long)param_1 + 199) = *(undefined1 *)((long)param_2 + 199);
  param_1[0x32] = param_2[0x32];
  *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(param_2 + 0x33);
  *(undefined1 *)((long)param_1 + 0xce) = *(undefined1 *)((long)param_2 + 0xce);
  *(undefined1 *)((long)param_1 + 0xcf) = *(undefined1 *)((long)param_2 + 0xcf);
  param_1[0x34] = param_2[0x34];
  *(undefined2 *)(param_1 + 0x35) = *(undefined2 *)(param_2 + 0x35);
  *(undefined1 *)((long)param_1 + 0xd6) = *(undefined1 *)((long)param_2 + 0xd6);
  *(undefined1 *)((long)param_1 + 0xd7) = *(undefined1 *)((long)param_2 + 0xd7);
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  param_1[0x39] = param_2[0x39];
  param_1[0x3b] = param_2[0x3b];
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
  return param_1;
}

