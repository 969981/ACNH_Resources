
bool FUN_03691dcc(long param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  bVar2 = false;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x278))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_3 * 8);
    if (*(int *)(lVar3 + 0x44) == 2) {
      lVar3 = *(long *)PTR_DAT_04bb4e28;
      *param_2 = *(undefined2 *)(lVar3 + 0x1188);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar3 + 0x118a);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar3 + 0x118b);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x118c);
      param_2[4] = *(undefined2 *)(lVar3 + 0x1190);
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar3 + 0x1192);
      *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar3 + 0x1193);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar3 + 0x1194);
      param_2[8] = *(undefined2 *)(lVar3 + 0x1198);
      *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar3 + 0x119a);
      *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar3 + 0x119b);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar3 + 0x119c);
      param_2[0xc] = *(undefined2 *)(lVar3 + 0x11a0);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar3 + 0x11a2);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar3 + 0x11a3);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar3 + 0x11a4);
      param_2[0x10] = *(undefined2 *)(lVar3 + 0x11a8);
      *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar3 + 0x11aa);
      *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar3 + 0x11ab);
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar3 + 0x11ac);
      param_2[0x14] = *(undefined2 *)(lVar3 + 0x11b0);
      *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar3 + 0x11b2);
      *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar3 + 0x11b3);
      *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar3 + 0x11b4);
      param_2[0x18] = *(undefined2 *)(lVar3 + 0x11b8);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar3 + 0x11ba);
      *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar3 + 0x11bb);
      *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar3 + 0x11bc);
      param_2[0x1c] = *(undefined2 *)(lVar3 + 0x11c0);
      *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar3 + 0x11c2);
      *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar3 + 0x11c3);
      *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar3 + 0x11c4);
      param_2[0x20] = *(undefined2 *)(lVar3 + 0x11c8);
      *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar3 + 0x11ca);
      *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar3 + 0x11cb);
      *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(lVar3 + 0x11cc);
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
    *param_2 = *(undefined2 *)(lVar3 + 0x44);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar3 + 0x46);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar3 + 0x47);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x48);
    param_2[4] = *(undefined2 *)(lVar3 + 0x4c);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar3 + 0x4e);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar3 + 0x4f);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar3 + 0x50);
    param_2[8] = *(undefined2 *)(lVar3 + 0x54);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar3 + 0x56);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar3 + 0x57);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar3 + 0x58);
    param_2[0xc] = *(undefined2 *)(lVar3 + 0x5c);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar3 + 0x5e);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar3 + 0x5f);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar3 + 0x60);
    param_2[0x10] = *(undefined2 *)(lVar3 + 100);
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar3 + 0x66);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar3 + 0x67);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar3 + 0x68);
    param_2[0x14] = *(undefined2 *)(lVar3 + 0x6c);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar3 + 0x6e);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar3 + 0x6f);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar3 + 0x70);
    param_2[0x18] = *(undefined2 *)(lVar3 + 0x74);
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar3 + 0x76);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar3 + 0x77);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar3 + 0x78);
    param_2[0x1c] = *(undefined2 *)(lVar3 + 0x7c);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar3 + 0x7e);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar3 + 0x7f);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar3 + 0x80);
    param_2[0x20] = *(undefined2 *)(lVar3 + 0x84);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar3 + 0x86);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar3 + 0x87);
    *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(lVar3 + 0x88);
    bVar2 = *(char *)(lVar3 + 0x41) != '\0';
  }
  return bVar2;
}

