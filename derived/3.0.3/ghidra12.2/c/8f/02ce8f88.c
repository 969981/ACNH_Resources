
void FUN_02ce8f88(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  
  param_2[4] = *(undefined2 *)(param_1 + 0x753d8);
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x753da);
  *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x753db);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x753dc);
  param_2[8] = *(undefined2 *)(param_1 + 0x753e8);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x753ea);
  *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x753eb);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x753ec);
  *param_2 = *(undefined2 *)(param_1 + 0x753c8);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x753ca);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x753cb);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x753cc);
  param_2[0x14] = *(undefined2 *)(param_1 + 0x75428);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x7542a);
  *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x7542b);
  *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x7542c);
  param_2[0x18] = *(undefined2 *)(param_1 + 0x75438);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x7543a);
  *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x7543b);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x7543c);
  param_2[0x1c] = *(undefined2 *)(param_1 + 0x75448);
  *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x7544a);
  *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x7544b);
  *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x7544c);
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 0x753f8);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      puVar4 = (undefined4 *)(param_2 + 0xe);
      param_2[0xc] = *(undefined2 *)(param_1 + 0x753f8);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x753fa);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x753fb);
      puVar3 = (undefined4 *)(param_1 + 0x753fc);
      goto LAB_02ce9118;
    }
  }
  puVar4 = (undefined4 *)(param_2 + 0x12);
  param_2[0xc] = *(undefined2 *)(param_1 + 0x75408);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x7540a);
  *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x7540b);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x7540c);
  param_2[0x10] = *(undefined2 *)(param_1 + 0x75418);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x7541a);
  *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x7541b);
  puVar3 = (undefined4 *)(param_1 + 0x7541c);
LAB_02ce9118:
  *puVar4 = *puVar3;
  return;
}

