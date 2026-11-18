
undefined8 FUN_037363fc(long param_1,undefined2 *param_2,int param_3)

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
    *param_2 = *(undefined2 *)(lVar1 + 0x88);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar1 + 0x8a);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar1 + 0x8b);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x8c);
    param_2[4] = *(undefined2 *)(lVar1 + 0x90);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar1 + 0x92);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar1 + 0x93);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x94);
    param_2[8] = *(undefined2 *)(lVar1 + 0x98);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar1 + 0x9a);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar1 + 0x9b);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar1 + 0x9c);
    param_2[0xc] = *(undefined2 *)(lVar1 + 0xa0);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar1 + 0xa2);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar1 + 0xa3);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar1 + 0xa4);
    param_2[0x10] = *(undefined2 *)(lVar1 + 0xa8);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar1 + 0xaa);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar1 + 0xab);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar1 + 0xac);
    param_2[0x14] = *(undefined2 *)(lVar1 + 0xb0);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar1 + 0xb2);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar1 + 0xb3);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar1 + 0xb4);
    param_2[0x18] = *(undefined2 *)(lVar1 + 0xb8);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar1 + 0xba);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar1 + 0xbb);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar1 + 0xbc);
    param_2[0x1c] = *(undefined2 *)(lVar1 + 0xc0);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar1 + 0xc2);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar1 + 0xc3);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar1 + 0xc4);
    param_2[0x20] = *(undefined2 *)(lVar1 + 200);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar1 + 0xca);
    puVar2 = (undefined4 *)(lVar1 + 0xcc);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar1 + 0xcb);
  }
  else {
    *param_2 = *(undefined2 *)(param_1 + 0x11d0);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x11d2);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x11d3);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x11d4);
    param_2[4] = *(undefined2 *)(param_1 + 0x11d8);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x11da);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x11db);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x11dc);
    param_2[8] = *(undefined2 *)(param_1 + 0x11e0);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x11e2);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x11e3);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x11e4);
    param_2[0xc] = *(undefined2 *)(param_1 + 0x11e8);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x11ea);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x11eb);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x11ec);
    param_2[0x10] = *(undefined2 *)(param_1 + 0x11f0);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x11f2);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x11f3);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x11f4);
    param_2[0x14] = *(undefined2 *)(param_1 + 0x11f8);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x11fa);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x11fb);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x11fc);
    param_2[0x18] = *(undefined2 *)(param_1 + 0x1200);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x1202);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x1203);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x1204);
    param_2[0x1c] = *(undefined2 *)(param_1 + 0x1208);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x120a);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x120b);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x120c);
    param_2[0x20] = *(undefined2 *)(param_1 + 0x1210);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x1212);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x1213);
    puVar2 = (undefined4 *)(param_1 + 0x1214);
  }
  *(undefined4 *)(param_2 + 0x22) = *puVar2;
  return 1;
}

