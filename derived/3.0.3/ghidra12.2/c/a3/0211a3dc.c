
undefined8 FUN_0211a3dc(long param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_02119c7c(param_1,param_3);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    if (iVar1 == -2) {
      *param_2 = *(undefined2 *)(param_1 + 0x184);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x186);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x187);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x188);
      param_2[4] = *(undefined2 *)(param_1 + 0x18c);
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x18e);
      *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 399);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 400);
      param_2[8] = *(undefined2 *)(param_1 + 0x194);
      *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x196);
      *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x197);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x198);
      param_2[0xc] = *(undefined2 *)(param_1 + 0x19c);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x19e);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x19f);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x1a0);
      param_2[0x10] = *(undefined2 *)(param_1 + 0x1a4);
      *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x1a6);
      *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x1a7);
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x1a8);
      param_2[0x14] = *(undefined2 *)(param_1 + 0x1ac);
      *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x1ae);
      *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x1af);
      *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x1b0);
      param_2[0x18] = *(undefined2 *)(param_1 + 0x1b4);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x1b6);
      *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x1b7);
      *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x1b8);
      param_2[0x1c] = *(undefined2 *)(param_1 + 0x1bc);
      *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x1be);
      *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x1bf);
      *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x1c0);
      param_2[0x20] = *(undefined2 *)(param_1 + 0x1c4);
      *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x1c6);
      *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x1c7);
      uVar3 = *(undefined4 *)(param_1 + 0x1c8);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)iVar1 * 8);
      *param_2 = *(undefined2 *)(lVar4 + 0x17c);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar4 + 0x17e);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar4 + 0x17f);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar4 + 0x180);
      param_2[4] = *(undefined2 *)(lVar4 + 0x184);
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar4 + 0x186);
      *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar4 + 0x187);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar4 + 0x188);
      param_2[8] = *(undefined2 *)(lVar4 + 0x18c);
      *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar4 + 0x18e);
      *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar4 + 399);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar4 + 400);
      param_2[0xc] = *(undefined2 *)(lVar4 + 0x194);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar4 + 0x196);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar4 + 0x197);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar4 + 0x198);
      param_2[0x10] = *(undefined2 *)(lVar4 + 0x19c);
      *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar4 + 0x19e);
      *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar4 + 0x19f);
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar4 + 0x1a0);
      param_2[0x14] = *(undefined2 *)(lVar4 + 0x1a4);
      *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar4 + 0x1a6);
      *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar4 + 0x1a7);
      *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar4 + 0x1a8);
      param_2[0x18] = *(undefined2 *)(lVar4 + 0x1ac);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar4 + 0x1ae);
      *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar4 + 0x1af);
      *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar4 + 0x1b0);
      param_2[0x1c] = *(undefined2 *)(lVar4 + 0x1b4);
      *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar4 + 0x1b6);
      *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar4 + 0x1b7);
      *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar4 + 0x1b8);
      param_2[0x20] = *(undefined2 *)(lVar4 + 0x1bc);
      *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar4 + 0x1be);
      *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar4 + 0x1bf);
      uVar3 = *(undefined4 *)(lVar4 + 0x1c0);
    }
    *(undefined4 *)(param_2 + 0x22) = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}

