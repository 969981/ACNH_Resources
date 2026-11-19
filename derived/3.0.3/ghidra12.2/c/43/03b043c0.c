
void FUN_03b043c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_90;
  char *pcStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  puVar10 = PTR_DAT_04bd16d0;
  puVar7 = PTR_DAT_04bb2020;
  lVar13 = *(long *)PTR_DAT_04bd16d0;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "invokeCalcFrame_";
  if (*(char *)(lVar13 + 0x94) != '\0' && *(int *)(lVar13 + 0x90) != 0) {
    lVar20 = (ulong)*(byte *)(lVar13 + 0x78) * 0x10;
    *(byte *)(lVar13 + 0x78) = '\x01' - *(byte *)(lVar13 + 0x78);
    local_80 = *(undefined8 *)(&DAT_04c4bd38 + lVar20);
    uStack_78 = *(ulong *)(&DAT_04c4bd40 + lVar20);
    if (*(long *)(lVar13 + 0x70) != 0) {
      uStack_78 = uStack_78 & 0xffffffff;
    }
    (**(code **)(**(long **)(lVar13 + 0x98) + 0x10))(*(long **)(lVar13 + 0x98),&local_90,&local_80);
  }
  lVar13 = *(long *)PTR_DAT_04bbdb78;
  if (*(long *)PTR_DAT_04bbd8a0 != 0) {
    FUN_03afb810(*(long *)PTR_DAT_04bbd8a0,*(undefined1 *)(param_1 + 0x4b8));
  }
  if ((*(byte *)(param_1 + 0x46c) >> 2 & 1) != 0) {
    FUN_0399c57c(*(undefined8 *)PTR_DAT_04bd15a0);
  }
  fVar23 = *(float *)(param_1 + 0x4c8);
  fVar24 = *(float *)(param_1 + 0x4cc);
  lVar20 = *(long *)PTR_DAT_04bbdcc8;
  uVar12 = *(uint *)(param_1 + 0x470);
  uVar15 = uVar12 & 0x200;
  if (lVar20 != 0) {
    *(undefined1 *)(lVar20 + 0x12) = 0;
    if (*(char *)(lVar20 + 0x10) == '\0' && *(char *)(lVar20 + 0x11) == '\0') {
      if (*(long *)(lVar20 + 0x630) != 0) {
        *(undefined8 *)(lVar20 + 0x630) = 0;
      }
      *(byte *)(lVar20 + 0x388) = *(byte *)(param_1 + 0x474) & 1;
      uVar12 = *(uint *)(param_1 + 0x470);
      if ((uVar12 >> 0x10 & 1) == 0) goto LAB_03b04564;
      uVar12 = uVar12 & 0xfffeffff;
    }
    else {
      *(byte *)(lVar20 + 0x388) = *(byte *)(param_1 + 0x474) & 1;
      fVar25 = 1.0;
      if (*(int *)(lVar20 + 0x600) < 2 &&
          (*(char *)(lVar20 + 0x10) != '\0' || *(char *)(lVar20 + 0x11) != '\0')) {
        fVar25 = *(float *)(lVar20 + 0x1c);
      }
      uVar15 = uVar15 >> 9;
      if (*(int *)(lVar20 + 0x600) - 4U < 0xfffffffe) {
        uVar15 = 1;
      }
      if (fVar25 < 1.0) {
        FUN_038fb9b0(*(undefined8 *)PTR_DAT_04bc1010);
      }
      fVar23 = fVar23 * fVar25;
      fVar24 = fVar24 * fVar25;
      uVar12 = *(uint *)(param_1 + 0x470);
      if ((uVar12 >> 8 & 1) != 0) goto LAB_03b04564;
      uVar12 = uVar12 | 0x10000;
    }
    *(uint *)(param_1 + 0x470) = uVar12;
  }
LAB_03b04564:
  uVar18 = (ulong)*(uint *)(lVar13 + 0x10);
  if (0 < (int)*(uint *)(lVar13 + 0x10)) {
    uVar16 = 0;
    piVar17 = (int *)(param_1 + 0x3a8);
    do {
      piVar3 = piVar17;
      if (7 < uVar16) {
        piVar3 = (int *)(param_1 + 0x3a8);
      }
      piVar17 = piVar17 + 2;
      iVar21 = *piVar3;
      iVar22 = piVar3[1];
      uVar4 = uVar16;
      if ((uVar18 & 0xffffffff) <= uVar16) {
        uVar4 = 0;
      }
      uVar16 = uVar16 + 1;
      lVar19 = *(long *)(*(long *)(lVar13 + 0x18) + uVar4 * 8);
      *(uint *)(lVar19 + 0x6b0) = *(uint *)(lVar19 + 0x6b0) | 0x200;
      *(float *)(lVar19 + 0x65c) = fVar24 * (float)iVar22;
      *(float *)(lVar19 + 0x658) = fVar23 * (float)iVar21;
      uVar18 = (ulong)*(int *)(lVar13 + 0x10);
    } while ((long)uVar16 < (long)uVar18);
  }
  puVar8 = PTR_DAT_04bbdcb8;
  uVar5 = *(uint *)(param_1 + 0x468);
  uVar6 = uVar5 >> 6 & 2 | uVar5 >> 4 & 1 | uVar5 >> 3 & 4;
  uVar5 = uVar6 | 8;
  if ((uVar12 & 0x100) != 0 || uVar15 == 0) {
    uVar5 = uVar6;
  }
  FUN_039cbbb0(*(undefined8 *)PTR_DAT_04bbdcb8,
               (*(uint *)(param_1 + 0x474) & 1) << 4 | (uint)*(byte *)(param_1 + 0x4b8) << 5 |
               (*(uint *)(param_1 + 0x46c) & 4) << 4 | *(uint *)(param_1 + 0x46c) >> 3 & 0x80 |
               uVar5);
  lVar19 = *(long *)puVar10;
  local_90 = puVar7 + 0x10;
  pcStack_88 = "Renderer::calc";
  if ((*(char *)(lVar19 + 0x94) != '\0') && (*(int *)(lVar19 + 0x90) != 0)) {
    lVar1 = (ulong)*(byte *)(lVar19 + 0x78) * 0x10;
    *(byte *)(lVar19 + 0x78) = '\x01' - *(byte *)(lVar19 + 0x78);
    local_80 = *(undefined8 *)(&DAT_04c4bd38 + lVar1);
    uStack_78 = *(ulong *)(&DAT_04c4bd40 + lVar1);
    if (*(long *)(lVar19 + 0x70) != 0) {
      uStack_78 = uStack_78 & 0xffffffff;
    }
    (**(code **)(**(long **)(lVar19 + 0x98) + 0x10))(*(long **)(lVar19 + 0x98),&local_90,&local_80);
  }
  *(uint *)(lVar13 + 400) =
       *(uint *)(lVar13 + 400) & 0xfffffffc |
       *(uint *)(lVar13 + 400) & 1 | (*(uint *)(param_1 + 0x470) >> 1 & 1) << 1;
  FUN_03970e10(lVar13,*(uint *)(param_1 + 0x46c) >> 2 & 1);
  lVar19 = *(long *)puVar10;
  if ((*(char *)(lVar19 + 0x94) != '\0') && (*(int *)(lVar19 + 0x90) != 0)) {
    (**(code **)(**(long **)(lVar19 + 0x98) + 0x18))();
  }
  puVar9 = PTR_DAT_04bd1190;
  puVar7 = PTR_DAT_04bd1188;
  if ((lVar20 != 0) && (0 < *(int *)(lVar13 + 0x10))) {
    lVar19 = **(long **)(lVar13 + 0x18);
    uVar15 = *(uint *)(lVar19 + 0x6b0);
    if (((*PTR_DAT_04bd1190 & 1) == 0) &&
       (iVar21 = __cxa_guard_acquire(PTR_DAT_04bd1190), iVar21 != 0)) {
      *(undefined **)puVar7 = PTR_DAT_04bd0cf8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd1190);
    }
    if ((uVar15 >> 0xb & 1) == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = (undefined8 *)(lVar19 + 0x468);
      uVar18 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bd1188);
      if ((uVar18 & 1) == 0) {
        puVar14 = (undefined8 *)0x0;
      }
    }
    *(undefined8 **)(lVar20 + 0x5c0) = puVar14;
    uVar15 = *(uint *)(lVar13 + 0x10);
    if (1 < (int)uVar15) {
      uVar12 = 1;
      puVar2 = PTR_DAT_04bd0cf8 + 0x10;
      do {
        uVar5 = uVar12;
        if (uVar15 <= uVar12) {
          uVar5 = 0;
        }
        lVar20 = *(long *)(*(long *)(lVar13 + 0x18) + (ulong)uVar5 * 8);
        uVar15 = *(uint *)(lVar20 + 0x6b0);
        if (((*puVar9 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar9), iVar21 != 0)) {
          *(undefined **)puVar7 = puVar2;
          __cxa_guard_release(puVar9);
        }
        if ((uVar15 >> 0xb & 1) != 0) {
          puVar14 = (undefined8 *)(lVar20 + 0x468);
          (**(code **)*puVar14)(puVar14,puVar7);
        }
        uVar15 = *(uint *)(lVar13 + 0x10);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar15);
    }
  }
  puVar7 = PTR_DAT_04bbd8f8;
  lVar13 = *(long *)PTR_DAT_04bbd8f8;
  if (lVar13 != 0) {
    uVar15 = *(uint *)(param_1 + 0x484);
    uVar12 = *(uint *)(param_1 + 0x46c);
    bVar11 = uVar15 != 2;
    if (bVar11) {
      uVar15 = (uint)(uVar15 == 1);
    }
    *(uint *)(lVar13 + 0x398) = uVar15;
    if (bVar11) {
      FUN_0033d820(*(undefined8 *)(lVar13 + 0x18));
    }
    if ((uVar12 >> 3 & 1) != 0) {
      FUN_0033e620(*(undefined8 *)(lVar13 + 0x18));
    }
    FUN_03b09590(*(undefined8 *)puVar7);
  }
  if (*(long *)puVar8 != 0) {
    FUN_039cc620(*(undefined4 *)(param_1 + 0x4d0));
  }
  lVar13 = *(long *)puVar10;
  if ((*(char *)(lVar13 + 0x94) != '\0') && (*(int *)(lVar13 + 0x90) != 0)) {
    (**(code **)(**(long **)(lVar13 + 0x98) + 0x18))();
  }
  return;
}

