
void FUN_02516650(long param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  undefined2 uVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  
  if (((DAT_054f1358 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_054f1358), iVar14 != 0)) {
    FUN_0257c860(&DAT_054f12d8);
    __cxa_guard_release(&DAT_054f1358);
  }
  if ((DAT_054f1360 & 1) == 0) {
    DAT_054f12d8 = 0;
    DAT_054f12e0 = 0;
    DAT_054f1360 = 1;
    DAT_054f12e8 = 0;
    DAT_054f12f0 = 0;
    DAT_054f12f8 = 0;
    DAT_054f1300 = 0;
    DAT_054f1308 = 0;
    DAT_054f1310 = 0;
    DAT_054f1318 = 0;
    DAT_054f1320 = 0;
    DAT_054f1328 = 0;
    DAT_054f1330 = 0;
    DAT_054f1338 = 0;
    DAT_054f1340 = 0;
    DAT_054f1348 = 0;
    DAT_054f1350 = 0;
  }
  lVar10 = DAT_054f1340;
  lVar8 = DAT_054f1338;
  lVar6 = DAT_054f1330;
  lVar5 = DAT_054f12f0;
  lVar7 = DAT_054f12e8;
  if ((ulong)*param_2 < 8) {
    plVar15 = (long *)(param_1 + 0x2e8) + (ulong)*param_2 * 0x10;
    plVar15[0xc] = DAT_054f1338;
    plVar15[0xd] = lVar10;
    lVar5 = DAT_054f1350;
    plVar15[0xe] = DAT_054f1348;
    plVar15[0xf] = lVar5;
    lVar5 = DAT_054f1320;
    plVar15[8] = DAT_054f1318;
    plVar15[9] = lVar5;
    lVar5 = DAT_054f1330;
    plVar15[10] = DAT_054f1328;
    plVar15[0xb] = lVar5;
    lVar5 = DAT_054f1300;
    plVar15[4] = DAT_054f12f8;
    plVar15[5] = lVar5;
    lVar5 = DAT_054f1310;
    plVar15[6] = DAT_054f1308;
    plVar15[7] = lVar5;
    lVar5 = DAT_054f12e0;
    *plVar15 = DAT_054f12d8;
    plVar15[1] = lVar5;
    lVar8 = DAT_054f12f0;
    lVar6 = DAT_054f12e0;
    lVar5 = DAT_054f12d8;
    plVar15[2] = DAT_054f12e8;
    plVar15[3] = lVar8;
    lVar8 = DAT_054f12e0;
    bVar3 = *param_2;
    bVar2 = bVar3;
    if (7 < bVar3) {
      bVar2 = 0xff;
    }
    puVar1 = PTR_DAT_04bc31b0 + (ulong)(uint)(int)(char)bVar2 * 0x30;
    if (7 < bVar3) {
      puVar1 = PTR_DAT_04bc31b0;
    }
    if (((*(long *)(puVar1 + 8) != lVar5 || *(long *)(puVar1 + 0x10) != lVar6) ||
        *(long *)(puVar1 + 0x18) != lVar7) || *(int *)(puVar1 + 0x20) != (int)DAT_054f12f0) {
      *(long *)(puVar1 + 8) = DAT_054f12d8;
      *(long *)(puVar1 + 0x10) = lVar8;
      *(long *)(puVar1 + 0x18) = DAT_054f12e8;
      *(int *)(puVar1 + 0x20) = (int)DAT_054f12f0;
      bVar3 = *param_2;
    }
    bVar2 = bVar3;
    if (7 < bVar3) {
      bVar2 = 0xff;
    }
    puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar2 * 0x70;
    if (7 < bVar3) {
      puVar1 = PTR_DAT_04bc31b8;
    }
    iVar14 = memcmp(puVar1 + 8,&DAT_054f12f8,0x58);
    lVar5 = DAT_054f1348;
    lVar7 = DAT_054f1320;
    if (iVar14 != 0) {
      *(long *)(puVar1 + 0x28) = DAT_054f1318;
      *(long *)(puVar1 + 0x30) = lVar7;
      lVar6 = DAT_054f1338;
      *(long *)(puVar1 + 0x50) = DAT_054f1340;
      *(long *)(puVar1 + 0x58) = lVar5;
      lVar7 = DAT_054f1330;
      *(long *)(puVar1 + 0x38) = DAT_054f1328;
      *(long *)(puVar1 + 0x40) = lVar7;
      *(long *)(puVar1 + 0x48) = lVar6;
      lVar7 = DAT_054f1300;
      *(long *)(puVar1 + 8) = DAT_054f12f8;
      *(long *)(puVar1 + 0x10) = lVar7;
      lVar7 = DAT_054f1310;
      *(long *)(puVar1 + 0x18) = DAT_054f1308;
      *(long *)(puVar1 + 0x20) = lVar7;
      bVar3 = *param_2;
    }
    bVar13 = 7 < bVar3;
    if (bVar13) {
      bVar3 = 0xff;
    }
    puVar1 = PTR_DAT_04bc30f8 + (ulong)(uint)(int)(char)bVar3 * 0x18;
    if (bVar13) {
      puVar1 = PTR_DAT_04bc30f8;
    }
    if (*(short *)(puVar1 + 8) != (short)DAT_054f1350) {
      *(short *)(puVar1 + 8) = (short)DAT_054f1350;
    }
  }
  else {
    lVar16 = 0;
    *(long *)(param_1 + 0x348) = DAT_054f1338;
    *(long *)(param_1 + 0x350) = lVar10;
    *(long *)(param_1 + 0x6c8) = lVar8;
    lVar10 = DAT_054f1348;
    lVar8 = DAT_054f1340;
    *(long *)(param_1 + 0x6c0) = lVar6;
    lVar12 = DAT_054f1350;
    lVar6 = DAT_054f1348;
    *(long *)(param_1 + 0x6d0) = lVar8;
    *(long *)(param_1 + 0x358) = lVar10;
    *(long *)(param_1 + 0x360) = lVar12;
    *(long *)(param_1 + 0x6d8) = lVar6;
    lVar10 = DAT_054f1320;
    lVar8 = DAT_054f1318;
    lVar6 = DAT_054f1310;
    *(long *)(param_1 + 0x6a8) = DAT_054f1318;
    *(long *)(param_1 + 0x328) = lVar8;
    *(long *)(param_1 + 0x330) = lVar10;
    *(long *)(param_1 + 0x6a0) = lVar6;
    lVar6 = DAT_054f1328;
    *(long *)(param_1 + 0x6b0) = DAT_054f1320;
    lVar8 = DAT_054f1330;
    *(long *)(param_1 + 0x6b8) = DAT_054f1328;
    *(long *)(param_1 + 0x338) = lVar6;
    *(long *)(param_1 + 0x340) = lVar8;
    lVar6 = DAT_054f1300;
    *(long *)(param_1 + 0x688) = DAT_054f12f8;
    lVar10 = DAT_054f12f0;
    *(long *)(param_1 + 0x308) = DAT_054f12f8;
    *(long *)(param_1 + 0x310) = lVar6;
    lVar6 = DAT_054f1308;
    *(long *)(param_1 + 0x690) = DAT_054f1300;
    lVar8 = DAT_054f1310;
    *(long *)(param_1 + 0x698) = DAT_054f1308;
    *(long *)(param_1 + 0x318) = lVar6;
    *(long *)(param_1 + 800) = lVar8;
    lVar8 = DAT_054f12e0;
    lVar6 = DAT_054f12d8;
    *(long *)(param_1 + 0x2f8) = lVar7;
    *(long *)(param_1 + 0x300) = lVar5;
    *(long *)(param_1 + 0x2e8) = lVar6;
    *(long *)(param_1 + 0x2f0) = lVar8;
    lVar6 = DAT_054f12e8;
    lVar5 = DAT_054f12e0;
    lVar7 = DAT_054f12d8;
    *(long *)(param_1 + 0x3c8) = DAT_054f1338;
    lVar8 = DAT_054f1340;
    *(long *)(param_1 + 0x668) = lVar7;
    *(long *)(param_1 + 0x670) = lVar5;
    *(long *)(param_1 + 0x678) = lVar6;
    *(long *)(param_1 + 0x3d0) = lVar8;
    *(long *)(param_1 + 0x3d8) = DAT_054f1348;
    *(long *)(param_1 + 0x3e0) = DAT_054f1350;
    *(long *)(param_1 + 0x3a8) = DAT_054f1318;
    *(long *)(param_1 + 0x3b0) = DAT_054f1320;
    *(long *)(param_1 + 0x3b8) = DAT_054f1328;
    *(long *)(param_1 + 0x3c0) = DAT_054f1330;
    *(long *)(param_1 + 0x388) = DAT_054f12f8;
    *(long *)(param_1 + 0x390) = DAT_054f1300;
    *(long *)(param_1 + 0x398) = DAT_054f1308;
    *(long *)(param_1 + 0x3a0) = DAT_054f1310;
    *(long *)(param_1 + 0x368) = DAT_054f12d8;
    *(long *)(param_1 + 0x370) = DAT_054f12e0;
    *(long *)(param_1 + 0x378) = DAT_054f12e8;
    *(long *)(param_1 + 0x380) = DAT_054f12f0;
    *(long *)(param_1 + 0x448) = DAT_054f1338;
    *(long *)(param_1 + 0x450) = DAT_054f1340;
    *(long *)(param_1 + 0x458) = DAT_054f1348;
    *(long *)(param_1 + 0x460) = DAT_054f1350;
    *(long *)(param_1 + 0x428) = DAT_054f1318;
    *(long *)(param_1 + 0x430) = DAT_054f1320;
    *(long *)(param_1 + 0x438) = DAT_054f1328;
    *(long *)(param_1 + 0x440) = DAT_054f1330;
    *(long *)(param_1 + 0x408) = DAT_054f12f8;
    *(long *)(param_1 + 0x410) = DAT_054f1300;
    *(long *)(param_1 + 0x418) = DAT_054f1308;
    *(long *)(param_1 + 0x420) = DAT_054f1310;
    *(long *)(param_1 + 1000) = DAT_054f12d8;
    *(long *)(param_1 + 0x3f0) = DAT_054f12e0;
    *(long *)(param_1 + 0x3f8) = DAT_054f12e8;
    *(long *)(param_1 + 0x400) = DAT_054f12f0;
    *(long *)(param_1 + 0x4c8) = DAT_054f1338;
    *(long *)(param_1 + 0x4d0) = DAT_054f1340;
    *(long *)(param_1 + 0x4d8) = DAT_054f1348;
    *(long *)(param_1 + 0x4e0) = DAT_054f1350;
    *(long *)(param_1 + 0x4a8) = DAT_054f1318;
    *(long *)(param_1 + 0x4b0) = DAT_054f1320;
    *(long *)(param_1 + 0x4b8) = DAT_054f1328;
    *(long *)(param_1 + 0x4c0) = DAT_054f1330;
    *(long *)(param_1 + 0x488) = DAT_054f12f8;
    *(long *)(param_1 + 0x490) = DAT_054f1300;
    *(long *)(param_1 + 0x498) = DAT_054f1308;
    *(long *)(param_1 + 0x4a0) = DAT_054f1310;
    *(long *)(param_1 + 0x468) = DAT_054f12d8;
    *(long *)(param_1 + 0x470) = DAT_054f12e0;
    *(long *)(param_1 + 0x478) = DAT_054f12e8;
    *(long *)(param_1 + 0x480) = DAT_054f12f0;
    *(long *)(param_1 + 0x548) = DAT_054f1338;
    *(long *)(param_1 + 0x550) = DAT_054f1340;
    *(long *)(param_1 + 0x558) = DAT_054f1348;
    *(long *)(param_1 + 0x560) = DAT_054f1350;
    *(long *)(param_1 + 0x528) = DAT_054f1318;
    *(long *)(param_1 + 0x530) = DAT_054f1320;
    *(long *)(param_1 + 0x538) = DAT_054f1328;
    *(long *)(param_1 + 0x540) = DAT_054f1330;
    *(long *)(param_1 + 0x508) = DAT_054f12f8;
    *(long *)(param_1 + 0x510) = DAT_054f1300;
    *(long *)(param_1 + 0x518) = DAT_054f1308;
    *(long *)(param_1 + 0x520) = DAT_054f1310;
    *(long *)(param_1 + 0x4e8) = DAT_054f12d8;
    *(long *)(param_1 + 0x4f0) = DAT_054f12e0;
    *(long *)(param_1 + 0x4f8) = DAT_054f12e8;
    *(long *)(param_1 + 0x500) = DAT_054f12f0;
    *(long *)(param_1 + 0x5c8) = DAT_054f1338;
    *(long *)(param_1 + 0x5d0) = DAT_054f1340;
    *(long *)(param_1 + 0x5d8) = DAT_054f1348;
    *(long *)(param_1 + 0x5e0) = DAT_054f1350;
    *(long *)(param_1 + 0x5a8) = DAT_054f1318;
    *(long *)(param_1 + 0x5b0) = DAT_054f1320;
    *(long *)(param_1 + 0x5b8) = DAT_054f1328;
    *(long *)(param_1 + 0x5c0) = DAT_054f1330;
    *(long *)(param_1 + 0x588) = DAT_054f12f8;
    *(long *)(param_1 + 0x590) = DAT_054f1300;
    *(long *)(param_1 + 0x598) = DAT_054f1308;
    *(long *)(param_1 + 0x5a0) = DAT_054f1310;
    *(long *)(param_1 + 0x568) = DAT_054f12d8;
    *(long *)(param_1 + 0x570) = DAT_054f12e0;
    *(long *)(param_1 + 0x578) = DAT_054f12e8;
    *(long *)(param_1 + 0x580) = DAT_054f12f0;
    *(long *)(param_1 + 0x648) = DAT_054f1338;
    *(long *)(param_1 + 0x650) = DAT_054f1340;
    *(long *)(param_1 + 0x658) = DAT_054f1348;
    *(long *)(param_1 + 0x660) = DAT_054f1350;
    *(long *)(param_1 + 0x628) = DAT_054f1318;
    *(long *)(param_1 + 0x630) = DAT_054f1320;
    *(long *)(param_1 + 0x638) = DAT_054f1328;
    *(long *)(param_1 + 0x640) = DAT_054f1330;
    *(long *)(param_1 + 0x608) = DAT_054f12f8;
    *(long *)(param_1 + 0x610) = DAT_054f1300;
    *(long *)(param_1 + 0x618) = DAT_054f1308;
    *(long *)(param_1 + 0x620) = DAT_054f1310;
    *(long *)(param_1 + 0x5e8) = DAT_054f12d8;
    *(long *)(param_1 + 0x5f0) = DAT_054f12e0;
    *(long *)(param_1 + 0x5f8) = DAT_054f12e8;
    *(long *)(param_1 + 0x600) = DAT_054f12f0;
    *(long *)(param_1 + 0x6e0) = DAT_054f1350;
    puVar4 = PTR_DAT_04bc31b8;
    *(long *)(param_1 + 0x680) = lVar10;
    puVar1 = PTR_DAT_04bc30f8;
    uVar11 = (short)DAT_054f1350;
    plVar15 = (long *)(puVar4 + 8);
    plVar17 = (long *)(PTR_DAT_04bc31b0 + 8);
    do {
      lVar5 = DAT_054f12e8;
      lVar7 = DAT_054f12e0;
      if (((*plVar17 != DAT_054f12d8 || plVar17[1] != DAT_054f12e0) || plVar17[2] != DAT_054f12e8)
          || (int)plVar17[3] != (int)DAT_054f12f0) {
        *plVar17 = DAT_054f12d8;
        plVar17[1] = lVar7;
        uVar9 = (int)DAT_054f12f0;
        plVar17[2] = lVar5;
        *(undefined4 *)(plVar17 + 3) = uVar9;
      }
      iVar14 = memcmp(plVar15,&DAT_054f12f8,0x58);
      lVar7 = DAT_054f1340;
      if (iVar14 != 0) {
        plVar15[8] = DAT_054f1338;
        plVar15[9] = lVar7;
        plVar15[10] = DAT_054f1348;
        lVar7 = DAT_054f1320;
        plVar15[4] = DAT_054f1318;
        plVar15[5] = lVar7;
        lVar7 = DAT_054f1330;
        plVar15[6] = DAT_054f1328;
        plVar15[7] = lVar7;
        lVar7 = DAT_054f1300;
        *plVar15 = DAT_054f12f8;
        plVar15[1] = lVar7;
        lVar7 = DAT_054f1310;
        plVar15[2] = DAT_054f1308;
        plVar15[3] = lVar7;
      }
      if (*(short *)(puVar1 + lVar16 + 8) != (short)DAT_054f1350) {
        *(undefined2 *)(puVar1 + lVar16 + 8) = uVar11;
      }
      lVar16 = lVar16 + 0x18;
      plVar15 = plVar15 + 0xe;
      plVar17 = plVar17 + 6;
    } while (lVar16 != 0xc0);
  }
  return;
}

