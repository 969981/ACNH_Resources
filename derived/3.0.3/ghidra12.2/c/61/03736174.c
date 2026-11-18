
undefined8 FUN_03736174(long param_1,undefined2 *param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  if (param_3 == -1) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + (long)param_3 * 8);
  if (((*(ushort *)(lVar1 + 0x114) & 1) == 0) || (((byte)(&DAT_00001230)[param_1] >> 6 & 1) == 0)) {
    if ((*(ushort *)(lVar1 + 0x114) >> 1 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined2 *)(lVar1 + 0x40);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar1 + 0x42);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar1 + 0x43);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x44);
    param_2[4] = *(undefined2 *)(lVar1 + 0x48);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar1 + 0x4a);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar1 + 0x4b);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x4c);
    param_2[8] = *(undefined2 *)(lVar1 + 0x50);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar1 + 0x52);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar1 + 0x53);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar1 + 0x54);
    param_2[0xc] = *(undefined2 *)(lVar1 + 0x58);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar1 + 0x5a);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar1 + 0x5b);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar1 + 0x5c);
    param_2[0x10] = *(undefined2 *)(lVar1 + 0x60);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar1 + 0x62);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar1 + 99);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar1 + 100);
    param_2[0x14] = *(undefined2 *)(lVar1 + 0x68);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar1 + 0x6a);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar1 + 0x6b);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar1 + 0x6c);
    param_2[0x18] = *(undefined2 *)(lVar1 + 0x70);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar1 + 0x72);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar1 + 0x73);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar1 + 0x74);
    param_2[0x1c] = *(undefined2 *)(lVar1 + 0x78);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar1 + 0x7a);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar1 + 0x7b);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar1 + 0x7c);
    param_2[0x20] = *(undefined2 *)(lVar1 + 0x80);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar1 + 0x82);
    puVar2 = (undefined4 *)(lVar1 + 0x84);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar1 + 0x83);
  }
  else {
    *param_2 = *(undefined2 *)(param_1 + 0x1188);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x118a);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x118b);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x118c);
    param_2[4] = *(undefined2 *)(param_1 + 0x1190);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x1192);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x1193);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x1194);
    param_2[8] = *(undefined2 *)(param_1 + 0x1198);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x119a);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x119b);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x119c);
    param_2[0xc] = *(undefined2 *)(param_1 + 0x11a0);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x11a2);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x11a3);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x11a4);
    param_2[0x10] = *(undefined2 *)(param_1 + 0x11a8);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x11aa);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x11ab);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x11ac);
    param_2[0x14] = *(undefined2 *)(param_1 + 0x11b0);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x11b2);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x11b3);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x11b4);
    param_2[0x18] = *(undefined2 *)(param_1 + 0x11b8);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x11ba);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x11bb);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x11bc);
    param_2[0x1c] = *(undefined2 *)(param_1 + 0x11c0);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x11c2);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x11c3);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x11c4);
    param_2[0x20] = *(undefined2 *)(param_1 + 0x11c8);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x11ca);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x11cb);
    puVar2 = (undefined4 *)(param_1 + 0x11cc);
  }
  *(undefined4 *)(param_2 + 0x22) = *puVar2;
  return 1;
}

