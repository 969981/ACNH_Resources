
void FUN_02ce0720(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  
  param_2[4] = *(undefined2 *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x13);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x14);
  param_2[8] = *(undefined2 *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = *(undefined2 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0xb);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0xc);
  param_2[0x14] = *(undefined2 *)(param_1 + 0x38);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x3a);
  *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x3b);
  *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x3c);
  param_2[0x18] = *(undefined2 *)(param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x42);
  *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x43);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x44);
  param_2[0x1c] = *(undefined2 *)(param_1 + 0x48);
  *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x4a);
  *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x4b);
  *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x4c);
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 0x20);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      puVar4 = (undefined4 *)(param_2 + 0xe);
      param_2[0xc] = *(undefined2 *)(param_1 + 0x20);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x22);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x23);
      puVar3 = (undefined4 *)(param_1 + 0x24);
      goto LAB_02ce08a8;
    }
  }
  puVar4 = (undefined4 *)(param_2 + 0x12);
  param_2[0xc] = *(undefined2 *)(param_1 + 0x28);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x2c);
  param_2[0x10] = *(undefined2 *)(param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x32);
  *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x33);
  puVar3 = (undefined4 *)(param_1 + 0x34);
LAB_02ce08a8:
  *puVar4 = *puVar3;
  param_2[0x20] = *(undefined2 *)(param_1 + 0x50);
  *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x52);
  *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x53);
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x54);
  return;
}

