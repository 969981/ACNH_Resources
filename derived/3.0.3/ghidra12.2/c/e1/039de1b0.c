
void FUN_039de1b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  
  uVar6 = crc32b(0xffffffff,100,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar12 = *(undefined4 *)(PTR_DAT_04bd1320 + 0x20);
  lVar8 = *(long *)(PTR_DAT_04bd1320 + 0x10);
  lVar10 = *(long *)(PTR_DAT_04bd1320 + 0x18);
  uVar6 = crc32b(uVar6,0x66,0x4c11db7);
  lVar13 = 0;
  puVar1 = PTR_DAT_04bd11d0 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  puVar3 = PTR_DAT_04bd1318 + 0x10;
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  puVar4 = PTR_DAT_04bb4f28 + 0x10;
  uVar6 = crc32b(uVar6,0x75,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar7 = crc32b(uVar6,0x74,0x4c11db7);
  lVar9 = *(long *)PTR_DAT_04bd1320;
  lVar11 = *(long *)(PTR_DAT_04bd1320 + 8);
  do {
    plVar5 = (long *)(param_1 + lVar13);
    lVar13 = lVar13 + 0x100;
    *(uint *)(plVar5 + 1) = ~uVar7;
    *plVar5 = (long)puVar1;
    *(undefined1 *)((long)plVar5 + 0x2c) = 0;
    plVar5[3] = (long)puVar2;
    plVar5[4] = (long)plVar5 + 0x2c;
    plVar5[0x11] = lVar9;
    *(undefined4 *)(plVar5 + 5) = 0x20;
    *(undefined1 *)((long)plVar5 + 0x4b) = 0;
    plVar5[2] = 0;
    *(uint *)(plVar5 + 0xb) = ~uVar7;
    plVar5[10] = (long)puVar3;
    *(undefined1 *)((long)plVar5 + 0x79) = 4;
    plVar5[0x14] = lVar10;
    *(undefined4 *)(plVar5 + 0x15) = uVar12;
    *(undefined1 **)((long)plVar5 + 0xac) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xb4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xbc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xc4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xcc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xd4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xdc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xe4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)plVar5 + 0xf4) = &DAT_3f8000003f800000;
    *(undefined4 *)((long)plVar5 + 0xfc) = 0x3f800000;
    plVar5[0x10] = 0x700000009;
    *(undefined1 *)(plVar5 + 0xf) = 7;
    *(undefined2 *)((long)plVar5 + 0x7a) = 0x91e;
    plVar5[0xe] = (long)(plVar5 + 0x11);
    plVar5[0xc] = 0;
    plVar5[0xd] = (long)puVar4;
    plVar5[0x12] = lVar11;
    plVar5[0x13] = lVar8;
  } while (lVar13 != 0x2000);
  return;
}

