
void FUN_02ce642c(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  
  param_2[4] = *(undefined2 *)(param_1 + 0x762d0);
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x762d2);
  *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x762d3);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x762d4);
  param_2[8] = *(undefined2 *)(param_1 + 0x762e0);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x762e2);
  *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x762e3);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x762e4);
  *param_2 = *(undefined2 *)(param_1 + 0x762c0);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x762c2);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x762c3);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x762c4);
  param_2[0x14] = *(undefined2 *)(param_1 + 0x76320);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x76322);
  *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x76323);
  *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x76324);
  param_2[0x18] = *(undefined2 *)(param_1 + 0x76330);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x76332);
  *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x76333);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x76334);
  param_2[0x1c] = *(undefined2 *)(param_1 + 0x76340);
  *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x76342);
  *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x76343);
  *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x76344);
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 0x762f0);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      puVar4 = (undefined4 *)(param_2 + 0xe);
      param_2[0xc] = *(undefined2 *)(param_1 + 0x762f0);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x762f2);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x762f3);
      puVar3 = (undefined4 *)(param_1 + 0x762f4);
      goto LAB_02ce65bc;
    }
  }
  puVar4 = (undefined4 *)(param_2 + 0x12);
  param_2[0xc] = *(undefined2 *)(param_1 + 0x76300);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x76302);
  *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x76303);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x76304);
  param_2[0x10] = *(undefined2 *)(param_1 + 0x76310);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x76312);
  *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x76313);
  puVar3 = (undefined4 *)(param_1 + 0x76314);
LAB_02ce65bc:
  *puVar4 = *puVar3;
  param_2[0x20] = *(undefined2 *)(param_1 + 0x76350);
  *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x76352);
  *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x76353);
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x76354);
  return;
}

