
void FUN_02cdfaec(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined2 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 0x10) = param_2[4];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 6);
  *(undefined2 *)(param_1 + 0x18) = param_2[8];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 10);
  uVar1 = FUN_02cd92f0(param_2 + 0xc);
  if ((uVar1 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x28) = param_2[0xc];
    puVar3 = (undefined4 *)(param_1 + 0x34);
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)((long)param_2 + 0x1b);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xe);
    *(undefined2 *)(param_1 + 0x30) = param_2[0x10];
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)((long)param_2 + 0x23);
    puVar2 = (undefined4 *)(param_2 + 0x12);
  }
  else {
    *(undefined2 *)(param_1 + 0x20) = param_2[0xc];
    puVar2 = (undefined4 *)(param_2 + 0xe);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x1b);
    puVar3 = (undefined4 *)(param_1 + 0x24);
  }
  *puVar3 = *puVar2;
  *(undefined2 *)(param_1 + 0x38) = param_2[0x14];
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x16);
  *(undefined2 *)(param_1 + 0x40) = param_2[0x18];
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x48) = param_2[0x1c];
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined2 *)(param_1 + 0x50) = param_2[0x20];
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)((long)param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x22);
  return;
}

