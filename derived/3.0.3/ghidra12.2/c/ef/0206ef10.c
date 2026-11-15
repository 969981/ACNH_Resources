
void FUN_0206ef10(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar4 = PTR_DAT_04bbc1a0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar3 = PTR_DAT_04bb2010;
  *param_1 = &PTR_LAB_04a71200;
  puVar1 = puVar3 + 0x10;
  param_1[4] = puVar4 + 0x10;
  param_1[5] = puVar1;
  param_1[6] = 0;
  param_1[7] = puVar1;
  puVar1 = PTR_DAT_04bbc5d8 + 0x10;
  param_1[8] = 0;
  param_1[9] = puVar1;
  puVar1 = PTR_DAT_04bb2018;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[10] = puVar1 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = puVar1 + 0x10;
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_04bbc390;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[2] = puVar1 + 0x10;
  param_1[0x15] = param_1;
  param_1[0x16] = &LAB_0206f130;
  param_1[0x13] = 0;
  param_1[0x14] = &PTR_LAB_04a71220;
  param_1[0x19] = 0;
  param_1[0x1a] = param_1 + 0x1c;
  lVar5 = 0;
  do {
    lVar2 = lVar5 + 0x18;
    plVar6 = (long *)((long)param_1 + lVar5 + 0xe8);
    *plVar6 = (long)param_1 + lVar5 + 0xf0;
    *(long **)((long)param_1 + lVar5 + 0xe0) = plVar6;
    *(long *)((long)param_1 + lVar5 + 0xf0) = (long)param_1 + lVar5 + 0xf8;
    lVar5 = lVar2;
  } while (lVar2 != 0xa38);
  param_1[0x163] = 0;
  param_1[0x1b] = param_1 + 0x1c;
  if (param_1 + 0x164 != (undefined8 *)0x0) {
    param_1[0x18] = 0x14800000000;
    param_1[0x19] = param_1 + 0x164;
  }
  param_1[0x2af] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2ad] = 0;
  *(undefined2 *)(param_1 + 0x2ac) = 0xfffe;
  *(undefined2 *)((long)param_1 + 0x1562) = 0;
  *(undefined4 *)((long)param_1 + 0x1564) = 0;
  FUN_0277d4ac(param_1 + 0x2ac);
  param_1[0x2ae] = 0;
  *(undefined4 *)(param_1 + 0x2af) = 0;
  param_1[0x2ad] = puVar3 + 0x10;
  FUN_027ca620((long)param_1 + 0x1584);
  *(undefined1 *)(param_1 + 0x4d7) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x4da) = 0;
  param_1[0x4d9] = 1;
  *(undefined8 *)((long)param_1 + 0x26d4) = 2;
  param_1[0x4dc] = 3;
  *(undefined8 *)((long)param_1 + 0x26ec) = 4;
  *(undefined8 *)((long)param_1 + 0x26bc) = 0;
  param_1[0x4df] = 5;
  *(undefined2 *)((long)param_1 + 0x26c4) = 0;
  *(undefined8 *)((long)param_1 + 0x2704) = 6;
  *(undefined8 *)((long)param_1 + 0x26a4) = 0;
  param_1[0x4e2] = 7;
  *(undefined8 *)((long)param_1 + 0x269c) = 0;
  *(undefined4 *)((long)param_1 + 0x271c) = 8;
  param_1[0x4e5] = 9;
  *(undefined2 *)((long)param_1 + 0x26dc) = 0;
  *(undefined2 *)(param_1 + 0x4dd) = 0;
  *(undefined2 *)((long)param_1 + 0x26f4) = 0;
  *(undefined2 *)(param_1 + 0x4e0) = 0;
  *(undefined2 *)((long)param_1 + 0x270c) = 0;
  *(undefined2 *)(param_1 + 0x4e3) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined2 *)((long)param_1 + 0x2724) = 0;
  *(undefined2 *)(param_1 + 0x4e6) = 0;
  param_1[0x4d2] = 0;
  param_1[0x4d1] = 0;
  *(undefined4 *)(param_1 + 0x4d3) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x26ac) = 0;
  param_1[0x4d6] = 0x1ffffffff;
  return;
}

