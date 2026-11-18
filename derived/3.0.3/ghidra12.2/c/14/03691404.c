
bool FUN_03691404(long param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  bVar2 = false;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x278))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_3 * 8);
    if (*(int *)(lVar3 + 0x44) == 2) {
      *param_2 = *(undefined2 *)(param_1 + 0x26a8);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x26aa);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x26ab);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x26ac);
      param_2[4] = *(undefined2 *)(param_1 + 0x26b0);
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x26b2);
      *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x26b3);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x26b4);
      param_2[8] = *(undefined2 *)(param_1 + 0x26b8);
      *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x26ba);
      *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x26bb);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x26bc);
      param_2[0xc] = *(undefined2 *)(param_1 + 0x26c0);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x26c2);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x26c3);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x26c4);
      param_2[0x10] = *(undefined2 *)(param_1 + 0x26c8);
      *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x26ca);
      *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x26cb);
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x26cc);
      param_2[0x14] = *(undefined2 *)(param_1 + 0x26d0);
      *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x26d2);
      *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x26d3);
      *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x26d4);
      param_2[0x18] = *(undefined2 *)(param_1 + 0x26d8);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x26da);
      *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x26db);
      *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x26dc);
      param_2[0x1c] = *(undefined2 *)(param_1 + 0x26e0);
      *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x26e2);
      *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x26e3);
      *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x26e4);
      param_2[0x20] = *(undefined2 *)(param_1 + 0x26e8);
      *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x26ea);
      *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x26eb);
      *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x26ec);
      return true;
    }
    uVar1 = *(uint *)(lVar3 + 0x4c);
    if (uVar1 == 0xffffffff) {
      return false;
    }
    lVar3 = param_1 + 0x698 + (ulong)uVar1 * 0xd8;
    if (0x25 < uVar1) {
      lVar3 = param_1 + 0x698;
    }
    *param_2 = *(undefined2 *)(lVar3 + 0x8c);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar3 + 0x8e);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar3 + 0x8f);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x90);
    param_2[4] = *(undefined2 *)(lVar3 + 0x94);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar3 + 0x96);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar3 + 0x97);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar3 + 0x98);
    param_2[8] = *(undefined2 *)(lVar3 + 0x9c);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar3 + 0x9e);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar3 + 0x9f);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar3 + 0xa0);
    param_2[0xc] = *(undefined2 *)(lVar3 + 0xa4);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar3 + 0xa6);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar3 + 0xa7);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar3 + 0xa8);
    param_2[0x10] = *(undefined2 *)(lVar3 + 0xac);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar3 + 0xae);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar3 + 0xaf);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar3 + 0xb0);
    param_2[0x14] = *(undefined2 *)(lVar3 + 0xb4);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar3 + 0xb6);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar3 + 0xb7);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar3 + 0xb8);
    param_2[0x18] = *(undefined2 *)(lVar3 + 0xbc);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar3 + 0xbe);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar3 + 0xbf);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar3 + 0xc0);
    param_2[0x1c] = *(undefined2 *)(lVar3 + 0xc4);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar3 + 0xc6);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar3 + 199);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar3 + 200);
    param_2[0x20] = *(undefined2 *)(lVar3 + 0xcc);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar3 + 0xce);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar3 + 0xcf);
    *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(lVar3 + 0xd0);
    bVar2 = *(char *)(lVar3 + 0x41) != '\0';
  }
  return bVar2;
}

