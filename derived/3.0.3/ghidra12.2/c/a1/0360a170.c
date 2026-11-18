
void FUN_0360a170(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1c0 [32];
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  float local_180 [64];
  
  *(undefined8 *)(param_1 + 0x1478) = 0;
  *(undefined8 *)(param_1 + 0x1480) = 0;
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x1488));
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x1494));
  fVar19 = 0.0;
  *(undefined4 *)(param_1 + 0x1070) = 1;
  *(undefined2 *)(param_1 + 0x438) = 0x40;
  *(undefined2 *)(param_1 + 0x470) = 0x40;
  *(undefined2 *)(param_1 + 0x4e8) = 0x40;
  lVar15 = 0;
  *(undefined2 *)(param_1 + 0x4a8) = 0x100;
  *(bool *)(param_1 + 0x4c0) = *(byte *)(param_1 + -0x102e) < 3;
  *(undefined4 *)(param_1 + 0x548) =
       *(undefined4 *)(&DAT_041023a0 + (long)*(char *)(param_1 + -0x102a) * 4);
  do {
    fVar18 = (float)(int)lVar15 + -31.0;
    fVar16 = (float)FUN_03ffb920(fVar18 * 0.1013417);
    bVar8 = false;
    bVar9 = false;
    bVar10 = false;
    if (-31.0 <= fVar18) {
      bVar8 = false;
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar18)) {
        bVar8 = fVar18 < 31.0;
        bVar9 = fVar18 == 31.0;
        bVar10 = false;
      }
    }
    fVar17 = 0.0;
    if ((bVar9 || bVar8 != bVar10) &&
       (fVar18 = fVar18 * 0.10681152 * 3.1415927, fVar17 = fVar16, fVar18 != 0.0)) {
      fVar17 = sinf(fVar18);
      fVar17 = fVar16 * (fVar17 / fVar18);
    }
    fVar19 = fVar19 + fVar17;
    local_180[lVar15] = fVar17;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x40);
  lVar15 = 0;
  do {
    lVar13 = lVar15 + 8;
    *(float *)((long)local_180 + lVar15) = *(float *)((long)local_180 + lVar15) / fVar19;
    *(float *)((long)local_180 + lVar15 + 4) = *(float *)((long)local_180 + lVar15 + 4) / fVar19;
    lVar15 = lVar13;
  } while (lVar13 != 0x100);
  lVar15 = 0;
  do {
    piVar3 = (int *)(param_1 + 0x750 + lVar15);
    lVar13 = lVar15 + 8;
    fVar19 = *(float *)((long)local_180 + lVar15 + 4);
    *piVar3 = (int)(*(float *)((long)local_180 + lVar15) * 32768.0);
    piVar3[1] = (int)(fVar19 * 32768.0);
    lVar15 = lVar13;
  } while (lVar13 != 0x100);
  puVar1 = (undefined4 *)(param_1 + 0x754);
  lVar15 = 0;
  puVar14 = puVar1;
  do {
    lVar13 = lVar15 + 4;
    *(short *)((long)puVar1 + lVar15 + -0x104) = (short)puVar14[-1];
    *(short *)((long)puVar1 + lVar15 + -0x102) = (short)*puVar14;
    lVar15 = lVar13;
    puVar14 = puVar14 + 2;
  } while (lVar13 != 0x80);
  lVar15 = 0x650;
  lVar13 = 0x850;
  do {
    puVar4 = (undefined2 *)(param_1 + lVar15);
    puVar1 = (undefined4 *)(param_1 + lVar13);
    lVar15 = lVar15 + 2;
    lVar13 = lVar13 + 4;
    puVar4[0x40] = *puVar4;
    *puVar1 = puVar1[-0x40];
  } while (lVar15 != 0x6d0);
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(undefined1 *)(param_1 + 0x954) = 1;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  FUN_03ffc950(0x46960000,param_1 + 0x960,0x800000000000,0x5dc000000000);
  iVar11 = FUN_0360a5c0(param_1 + 0x518,0x2000);
  if (iVar11 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  *(undefined4 *)(param_1 + 0x514) = 0;
  local_198 = 0;
  local_18c = 0x7fffffff;
  FUN_04002a40(auStack_1c0,0x20,"VM%zu sound filtering",*(undefined8 *)(param_1 + 0x3018));
  local_188 = *param_2;
  local_190 = *(undefined4 *)(param_2 + 1);
  local_1a0 = auStack_1c0;
  iVar11 = FUN_04002aec(param_1 + 0xe00,&LAB_0360a6d0,param_1,&local_1a0,0);
  if (iVar11 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  *(undefined4 *)(param_1 + 0x14b0) = 0;
  *(undefined1 *)(param_1 + 0x106c) = 0;
  puVar7 = PTR_DAT_04bdf328;
  lVar15 = 0;
  *(undefined4 *)(param_1 + 0x1068) = 0;
  *(undefined4 *)(param_1 + 0x14e0) = 0;
  do {
    uVar12 = (**(code **)(**(long **)puVar7 + 0x10))(*(long **)puVar7,0x2c0,0x40);
    *(undefined8 *)(param_1 + lVar15) = uVar12;
    lVar15 = lVar15 + 8;
  } while (lVar15 != 0x400);
  puVar2 = (uint *)(param_1 + 0x400);
  *puVar2 = 0x80;
  uVar5 = *puVar2;
  do {
    if (uVar5 == 0) {
      *(undefined8 *)(param_1 + 0x14a8) = 0;
LAB_0360a570:
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
LAB_0360a588:
      nn::os::StartThread((ThreadType *)(param_1 + 0xe48));
      *(undefined4 *)(param_1 + 0x1060) = 2;
      return;
    }
    DataMemoryBarrier(2,1);
    lVar15 = *(long *)(param_1 + (ulong)(uVar5 - 1) * 8);
    while (*puVar2 == uVar5) {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *puVar2 = uVar5 - 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        *(undefined4 *)(lVar15 + 0x200) = 0;
        *(long *)(param_1 + 0x14a8) = lVar15;
        if (lVar15 != 0) goto LAB_0360a588;
        goto LAB_0360a570;
      }
    }
    ClearExclusiveLocal();
    uVar5 = *puVar2;
  } while( true );
}

