
void FUN_00645f30(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  double dVar15;
  float fVar16;
  undefined4 local_74;
  
  param_1[1] = 0x1000101010101;
  param_1[2] = 0x100000001;
  param_1[3] = 1;
  param_1[4] = 1;
  puVar7 = PTR_DAT_048607b8;
  param_1[7] = 0x100000001;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = (ulong)&DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 8) = 3;
  puVar8 = (undefined8 *)FUN_00438810(0x18);
  puVar8[2] = 1;
  *puVar8 = &PTR_LAB_048e10f0;
  puVar8[1] = 0xffffffff;
  param_1[9] = (ulong)puVar8;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  local_74 = 1;
  puVar9 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_74);
  param_1[10] = (ulong)puVar9;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((long)param_1 + 0x5c) = local_74;
  *puVar9 = 1;
  puVar1 = param_1 + 0xc;
  FUN_00645680(puVar1,1);
  puVar14 = param_1 + 0x30;
  do {
    *(undefined4 *)puVar14 = 0x1010101;
    *(undefined4 *)((long)puVar14 + 4) = 0x10001;
    puVar14[1] = 0x100000001;
    puVar14[2] = 1;
    puVar14[3] = 1;
    puVar14[4] = 0x3ff0000000000000;
    *(undefined1 *)(puVar14 + 7) = 3;
    puVar14[5] = (ulong)&DAT_3f8000003f800000;
    puVar14[6] = 0x100000001;
    puVar8 = (undefined8 *)FUN_00438810(0x18);
    *puVar8 = &PTR_LAB_048e10f0;
    puVar8[1] = 0xffffffff;
    puVar8[2] = 1;
    puVar14[10] = 0x8000000000000000;
    puVar14[8] = (ulong)puVar8;
    puVar14[9] = 0;
    local_74 = 1;
    puVar9 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_74);
    puVar14[9] = (ulong)puVar9;
    *(undefined4 *)(puVar14 + 10) = 1;
    *(undefined4 *)((long)puVar14 + 0x54) = local_74;
    puVar14 = puVar14 + 0xb;
    *puVar9 = 1;
  } while (puVar14 != param_1 + 0x9e);
  puVar14 = param_1 + 0xa0;
  FUN_00645680(puVar14,1);
  FUN_00645680(param_1 + 0xc1,1);
  FUN_00645680(param_1 + 0xe2,1);
  FUN_00645680(param_1 + 0x103,1);
  FUN_00645680(param_1 + 0x124,1);
  FUN_00645680(param_1 + 0x145,1);
  FUN_00645680(param_1 + 0x166,1);
  FUN_00645680(param_1 + 0x187,1);
  FUN_00645680(param_1 + 0x1a8,1);
  FUN_00645680(param_1 + 0x1c9,1);
  uVar11 = (uint)param_2;
  uVar2 = uVar11 & 1;
  uVar3 = *(uint *)((long)param_1 + 0x5c);
  dVar15 = (double)uVar2;
  fVar16 = (float)uVar2;
  bVar4 = (byte)param_2 & 1 | 2;
  uVar13 = param_2 & 1;
  *param_1 = uVar13;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar6 = (undefined2)uVar2;
  if ((param_2 & 1) == 0) {
    if ((-1 < (int)uVar3) && (param_1[10] != 0)) {
      FUN_00421f90(puVar7,param_1[10],1,uVar3 & 0x3fffffff);
    }
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
    if (param_1[9] != 0) {
      FUN_004435c0();
    }
    param_1[5] = (ulong)dVar15;
    param_1[3] = uVar13;
    param_1[4] = uVar13;
    *(float *)(param_1 + 6) = fVar16;
    *(float *)((long)param_1 + 0x34) = fVar16;
    *(byte *)(param_1 + 8) = bVar4;
    *(uint *)(param_1 + 1) = uVar2 * 0x1010101;
    *(undefined2 *)((long)param_1 + 0xc) = uVar6;
    *(undefined2 *)((long)param_1 + 0xe) = uVar6;
    *(uint *)(param_1 + 2) = uVar2;
    *(uint *)((long)param_1 + 0x14) = uVar2;
    *(uint *)(param_1 + 7) = uVar2;
    *(uint *)((long)param_1 + 0x3c) = uVar2;
    param_1[0xb] = 0x8000000000000000;
    param_1[9] = 0;
    param_1[10] = 0;
    local_74 = 1;
    puVar9 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_74);
    param_1[10] = (ulong)puVar9;
    *(undefined4 *)(param_1 + 0xb) = 1;
  }
  else {
    if ((-1 < (int)uVar3) && (param_1[10] != 0)) {
      FUN_00421f90(puVar7,param_1[10],1,uVar3 & 0x3fffffff);
    }
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
    if (param_1[9] != 0) {
      FUN_004435c0();
    }
    *(undefined2 *)((long)param_1 + 0xc) = uVar6;
    *(undefined2 *)((long)param_1 + 0xe) = uVar6;
    *(uint *)(param_1 + 2) = uVar2;
    *(uint *)((long)param_1 + 0x14) = uVar2;
    param_1[3] = uVar13;
    param_1[4] = uVar13;
    *(uint *)(param_1 + 1) = uVar2 * 0x1010101;
    param_1[5] = (ulong)dVar15;
    *(float *)(param_1 + 6) = fVar16;
    *(float *)((long)param_1 + 0x34) = fVar16;
    *(uint *)(param_1 + 7) = uVar2;
    *(uint *)((long)param_1 + 0x3c) = uVar2;
    *(byte *)(param_1 + 8) = bVar4;
    puVar8 = (undefined8 *)FUN_00438810(0x18);
    puVar8[2] = 1;
    *puVar8 = &PTR_LAB_048e10f0;
    puVar8[1] = 0xffffffff;
    param_1[9] = (ulong)puVar8;
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
    local_74 = 1;
    puVar9 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_74);
    param_1[10] = (ulong)puVar9;
    *(undefined4 *)(param_1 + 0xb) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x5c) = local_74;
  uVar5 = (undefined1)uVar2;
  *puVar9 = uVar5;
  FUN_00646570(puVar1);
  FUN_00645680(puVar1,uVar11 & 1);
  if ((param_2 & 1) == 0) {
    lVar12 = 0;
    do {
      uVar3 = *(uint *)((long)param_1 + lVar12 + 0x1d4);
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d0) = 0;
      if ((-1 < (int)uVar3) && (lVar10 = *(long *)((long)param_1 + lVar12 + 0x1c8), lVar10 != 0)) {
        FUN_00421f90(puVar7,lVar10,1,uVar3 & 0x3fffffff);
      }
      *(undefined8 *)((long)param_1 + lVar12 + 0x1c8) = 0;
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d4) = 0x80000000;
      if (*(long *)((long)param_1 + lVar12 + 0x1c0) != 0) {
        FUN_004435c0();
      }
      *(uint *)((long)param_1 + lVar12 + 0x180) = uVar2 * 0x1010101;
      *(undefined2 *)((long)param_1 + lVar12 + 0x184) = uVar6;
      *(undefined2 *)((long)param_1 + lVar12 + 0x186) = uVar6;
      *(uint *)((long)param_1 + lVar12 + 0x188) = uVar2;
      *(uint *)((long)param_1 + lVar12 + 0x18c) = uVar2;
      *(double *)((long)param_1 + lVar12 + 0x1a0) = dVar15;
      *(float *)((long)param_1 + lVar12 + 0x1a8) = fVar16;
      *(float *)((long)param_1 + lVar12 + 0x1ac) = fVar16;
      *(uint *)((long)param_1 + lVar12 + 0x1b0) = uVar2;
      *(uint *)((long)param_1 + lVar12 + 0x1b4) = uVar2;
      *(byte *)((long)param_1 + lVar12 + 0x1b8) = bVar4;
      *(undefined8 *)((long)param_1 + lVar12 + 0x1d0) = 0x8000000000000000;
      *(ulong *)((long)param_1 + lVar12 + 400) = uVar13;
      *(ulong *)((long)param_1 + lVar12 + 0x198) = uVar13;
      *(undefined8 *)((long)param_1 + lVar12 + 0x1c0) = 0;
      *(undefined8 *)((long)param_1 + lVar12 + 0x1c8) = 0;
      local_74 = 1;
      puVar9 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_74);
      lVar10 = lVar12 + 0x58;
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d0) = 1;
      *(undefined1 **)((long)param_1 + lVar12 + 0x1c8) = puVar9;
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d4) = local_74;
      *puVar9 = uVar5;
      lVar12 = lVar10;
    } while (lVar10 != 0x370);
  }
  else {
    lVar12 = 0;
    do {
      uVar3 = *(uint *)((long)param_1 + lVar12 + 0x1d4);
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d0) = 0;
      if ((-1 < (int)uVar3) && (lVar10 = *(long *)((long)param_1 + lVar12 + 0x1c8), lVar10 != 0)) {
        FUN_00421f90(puVar7,lVar10,1,uVar3 & 0x3fffffff);
      }
      *(undefined8 *)((long)param_1 + lVar12 + 0x1c8) = 0;
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d4) = 0x80000000;
      if (*(long *)((long)param_1 + lVar12 + 0x1c0) != 0) {
        FUN_004435c0();
      }
      *(uint *)((long)param_1 + lVar12 + 0x180) = uVar2 * 0x1010101;
      *(undefined2 *)((long)param_1 + lVar12 + 0x184) = uVar6;
      *(undefined2 *)((long)param_1 + lVar12 + 0x186) = uVar6;
      *(uint *)((long)param_1 + lVar12 + 0x188) = uVar2;
      *(uint *)((long)param_1 + lVar12 + 0x18c) = uVar2;
      *(double *)((long)param_1 + lVar12 + 0x1a0) = dVar15;
      *(float *)((long)param_1 + lVar12 + 0x1a8) = fVar16;
      *(float *)((long)param_1 + lVar12 + 0x1ac) = fVar16;
      *(uint *)((long)param_1 + lVar12 + 0x1b0) = uVar2;
      *(uint *)((long)param_1 + lVar12 + 0x1b4) = uVar2;
      *(byte *)((long)param_1 + lVar12 + 0x1b8) = bVar4;
      *(ulong *)((long)param_1 + lVar12 + 400) = uVar13;
      *(ulong *)((long)param_1 + lVar12 + 0x198) = uVar13;
      puVar8 = (undefined8 *)FUN_00438810(0x18);
      *puVar8 = &PTR_LAB_048e10f0;
      puVar8[1] = 0xffffffff;
      puVar8[2] = 1;
      *(undefined8 **)((long)param_1 + lVar12 + 0x1c0) = puVar8;
      *(undefined8 *)((long)param_1 + lVar12 + 0x1c8) = 0;
      *(undefined8 *)((long)param_1 + lVar12 + 0x1d0) = 0x8000000000000000;
      local_74 = 1;
      puVar9 = (undefined1 *)FUN_00421ed0(puVar7,1,&local_74);
      lVar10 = lVar12 + 0x58;
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d0) = 1;
      *(undefined1 **)((long)param_1 + lVar12 + 0x1c8) = puVar9;
      *(undefined4 *)((long)param_1 + lVar12 + 0x1d4) = local_74;
      *puVar9 = uVar5;
      lVar12 = lVar10;
    } while (lVar10 != 0x370);
  }
  FUN_00646570(puVar14);
  uVar11 = uVar11 & 1;
  FUN_00645680(puVar14,uVar11);
  FUN_00646570(param_1 + 0xc1);
  FUN_00645680(param_1 + 0xc1,uVar11);
  FUN_00646570(param_1 + 0xe2);
  FUN_00645680(param_1 + 0xe2,uVar11);
  FUN_00646570(param_1 + 0x103);
  FUN_00645680(param_1 + 0x103,uVar11);
  FUN_00646570(param_1 + 0x124);
  FUN_00645680(param_1 + 0x124,uVar11);
  FUN_00646570(param_1 + 0x145);
  FUN_00645680(param_1 + 0x145,uVar11);
  FUN_00646570(param_1 + 0x166);
  FUN_00645680(param_1 + 0x166,uVar11);
  FUN_00646570(param_1 + 0x187);
  FUN_00645680(param_1 + 0x187,uVar11);
  FUN_00646570(param_1 + 0x1a8);
  FUN_00645680(param_1 + 0x1a8,uVar11);
  FUN_00646570(param_1 + 0x1c9);
  FUN_00645680(param_1 + 0x1c9,uVar11);
  return;
}

