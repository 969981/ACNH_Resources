
long FUN_0373b290(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *__dest;
  void *__src;
  long *plVar5;
  
  __dest = *(void **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar5 = (long *)(param_2 + 0x10);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_2 + 0x18);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar5);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x18) + lVar3) == '\0') goto LAB_0373b33c;
      lVar1 = *(long *)(param_2 + 0x18) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0373b33c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0373b33c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0373b33c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x20) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x20) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x6a);
  *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(param_2 + 0x6b);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x72);
  *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)(param_2 + 0x73);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_2 + 0x7b);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(param_2 + 0x83);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
  *(undefined1 *)(param_1 + 0x8b) = *(undefined1 *)(param_2 + 0x8b);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
  *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x9a);
  *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa2) = *(undefined1 *)(param_2 + 0xa2);
  *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)(param_2 + 0xa3);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_2 + 0xb2);
  *(undefined1 *)(param_1 + 0xb3) = *(undefined1 *)(param_2 + 0xb3);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xba) = *(undefined1 *)(param_2 + 0xba);
  *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)(param_2 + 0xbb);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(param_2 + 0xca);
  *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_2 + 0xcb);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x114) = uVar4;
  return param_1;
}

