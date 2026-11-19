
void FUN_03afb810(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  int *piVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined *puVar19;
  uint uVar20;
  float *pfVar21;
  undefined4 *puVar22;
  float fVar23;
  undefined4 uVar24;
  undefined *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  
  puVar5 = PTR_DAT_04bd16a0;
  uVar14 = *(uint *)(*(long *)PTR_DAT_04bbdcb8 + 0x10);
  if ((int)uVar14 < 1) {
    if (*(long *)(param_1 + 8) != 0) {
      lVar15 = *(long *)PTR_DAT_04bd16a0;
      *(undefined8 *)(param_1 + 8) = 0;
      if (lVar15 == 0) goto LAB_03afb8f8;
      lVar16 = 0;
      goto LAB_03afb8bc;
    }
  }
  else {
    plVar17 = *(long **)(*(long *)PTR_DAT_04bbdcb8 + 0x18);
    lVar15 = 0;
    do {
      if (*(long *)((long)plVar17 + lVar15) == *(long *)(param_1 + 8)) goto LAB_03afb8c4;
      lVar15 = lVar15 + 8;
    } while ((ulong)uVar14 * 8 != lVar15);
    lVar16 = *plVar17;
    if (*(long *)(param_1 + 8) != lVar16) {
      lVar15 = *(long *)PTR_DAT_04bd16a0;
      *(long *)(param_1 + 8) = lVar16;
      if (lVar15 == 0) goto LAB_03afb8f8;
LAB_03afb8bc:
      *(long *)(lVar15 + 0x18) = lVar16;
      FUN_039b2ee0();
    }
  }
LAB_03afb8c4:
  lVar15 = *(long *)puVar5;
  if (lVar15 != 0) {
    nn::os::LockMutex((MutexType *)(lVar15 + 0xe0));
    if (((*(long *)(lVar15 + 0x18) != 0) && ((*PTR_DAT_04bd16a8 & 1) == 0)) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd16a8), iVar7 != 0)) {
      __cxa_guard_release(PTR_DAT_04bd16a8);
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0xe0));
  }
LAB_03afb8f8:
  puVar5 = PTR_DAT_04bb2020;
  puVar19 = *(undefined **)(param_1 + 0x878);
  if (puVar19 != (undefined *)0x0) {
    uVar18 = *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
    local_88 = 0x800000040;
    local_80 = 0x1010101;
    local_78 = 0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    puStack_90 = &DAT_040dc71e;
    lVar15 = FUN_039a7bd0(&local_98,&local_88,uVar18);
    if (lVar15 != 0) {
      *(undefined **)(lVar15 + 0x80) = puVar19;
      uVar13 = *(ushort *)(*(long *)(puVar19 + 0x20) + 0xdc);
      if ((ulong)uVar13 != 0) {
        lVar16 = 0x430;
        do {
          local_a8 = *(long *)(*(long *)(*(long *)(puVar19 + 0x28) + lVar16 + -0x420) + 8) + 2;
          local_b0 = puVar5 + 0x10;
          lVar8 = FUN_039a8120(lVar15,puVar19,&local_b0,uVar18);
          if (lVar8 == 0) break;
          bVar6 = (ulong)uVar13 * 0x430 != lVar16;
          lVar16 = lVar16 + 0x430;
        } while (bVar6);
      }
    }
    *(long *)(param_1 + 0x880) = lVar15;
    local_a8 = CONCAT44(local_a8._4_4_,1);
    local_b0 = (undefined *)0xc00000004;
    local_a0 = 0;
    local_98 = puVar19;
    FUN_039a8dc0(lVar15,&local_98,1,&local_b0,uVar18);
    lVar15 = *(long *)(*(long *)(param_1 + 0x880) + 0x50);
    if ((0 < *(int *)(lVar15 + 0x80)) &&
       (piVar11 = *(int **)(lVar15 + 0x40), *piVar11 != 0 || *(long *)(piVar11 + 2) != 0)) {
      FUN_039aec10(lVar15,piVar11,0,0);
    }
    uVar13 = *(ushort *)(lVar15 + 0xa4);
    uVar4 = *(ushort *)(lVar15 + 0xa2);
    uVar12 = uVar4;
    if (uVar4 < uVar13) {
      FUN_039afe50(0,lVar15,0,2);
      uVar12 = *(ushort *)(lVar15 + 0xa2);
    }
    bVar6 = uVar4 < uVar13;
    uVar13 = *(ushort *)(lVar15 + 0xa0);
    cVar9 = bVar6;
    if (uVar13 < uVar12) {
      cVar9 = bVar6 + '\x01';
      FUN_039afe50(0,lVar15,bVar6,1);
      uVar13 = *(ushort *)(lVar15 + 0xa0);
    }
    cVar10 = cVar9;
    if (uVar13 != 0) {
      cVar10 = cVar9 + '\x01';
      FUN_039afe50(0,lVar15,cVar9,0);
    }
    uVar13 = *(ushort *)(lVar15 + 0xa6);
    cVar9 = cVar10;
    if (*(ushort *)(lVar15 + 0xa4) < uVar13) {
      cVar9 = cVar10 + '\x01';
      FUN_039afe50(0,lVar15,cVar10,3);
      uVar13 = *(ushort *)(lVar15 + 0xa6);
    }
    uVar4 = *(ushort *)(lVar15 + 0xa8);
    cVar10 = cVar9;
    if (uVar13 < uVar4) {
      cVar10 = cVar9 + '\x01';
      FUN_039afe50(0,lVar15,cVar9,4);
      uVar4 = *(ushort *)(lVar15 + 0xa8);
    }
    if (uVar4 < *(ushort *)(lVar15 + 0xaa)) {
      FUN_039afe50(0,lVar15,cVar10,5);
    }
    if ((0 < *(int *)(lVar15 + 0xb0)) && (piVar11 = *(int **)(lVar15 + 0x60), *piVar11 != 0)) {
      *piVar11 = 0;
      if (0 < *(int *)(*(undefined8 **)(lVar15 + 0xb8) + 1)) {
        FUN_003a99e0(piVar11 + 2,*(undefined8 *)**(undefined8 **)(lVar15 + 0xb8));
        *(ushort *)(piVar11 + 0x25) = *(ushort *)(piVar11 + 0x25) | 1;
      }
    }
    lVar15 = *(long *)(param_1 + 8);
    if (lVar15 != 0) {
      lVar8 = *(long *)(param_1 + 0x880);
      lVar16 = *(long *)(lVar8 + 0x70);
      if ((lVar16 != 0) && (lVar16 != lVar15)) {
        FUN_03a03df0(lVar16,lVar8);
      }
      *(long *)(lVar8 + 0x70) = lVar15;
      FUN_03a03cf0(lVar15,lVar8);
      uVar14 = *(uint *)(lVar8 + 0x20);
      if ((uint)*(ushort *)(lVar8 + 0x284) <= *(uint *)(lVar8 + 0x20)) {
        uVar14 = (uint)*(ushort *)(lVar8 + 0x284);
      }
      if (uVar14 != 0) {
        lVar15 = *(long *)(lVar8 + 0x28);
        uVar20 = 0;
        do {
          plVar17 = *(long **)(lVar15 + (long)(int)uVar20 * 0x38);
          (**(code **)(*plVar17 + 0x268))(plVar17,*(undefined8 *)(lVar8 + 0x70));
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
      }
    }
    *(undefined8 *)(param_1 + 0x878) = 0;
  }
  lVar15 = *(long *)(param_1 + 0x880);
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x70) != 0)) {
    lVar15 = *(long *)(lVar15 + 0x50);
    uVar14 = *(uint *)(lVar15 + 0x38);
    if (0 < (int)uVar14) {
      uVar20 = 0;
      do {
        uVar2 = uVar20;
        if (uVar14 <= uVar20) {
          uVar2 = 0;
        }
        uVar3 = *(uint *)(*(long *)(lVar15 + 0x40) + (ulong)uVar2 * 0xb8);
        if (uVar3 < 0xffff0000 && (uVar3 & 0xffff) != 0xffff) {
          pfVar21 = *(float **)(*(long *)(lVar15 + 0x40) + (ulong)uVar2 * 0xb8 + 0x20);
          fVar23 = (float)(**(code **)(pfVar21 + 4))
                                    (*pfVar21 + 1.0,pfVar21[1],pfVar21[2],
                                     *(undefined8 *)(pfVar21 + 6));
          *pfVar21 = fVar23;
          uVar14 = *(uint *)(lVar15 + 0x38);
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar14);
    }
    uVar14 = *(uint *)(lVar15 + 0x48);
    if (0 < (int)uVar14) {
      uVar20 = 0;
      do {
        uVar2 = uVar20;
        if (uVar14 <= uVar20) {
          uVar2 = 0;
        }
        uVar3 = *(uint *)(*(long *)(lVar15 + 0x50) + (ulong)uVar2 * 0x30);
        if (uVar3 < 0xffff0000 && (uVar3 & 0xffff) != 0xffff) {
          lVar16 = *(long *)(lVar15 + 0x50) + (ulong)uVar2 * 0x30;
          if (*(int *)(lVar16 + 0x20) != 0) {
            lVar8 = (long)*(int *)(lVar16 + 0x20) << 3;
            fVar23 = **(float **)(*(long *)(lVar16 + 0x10) + 8);
            plVar17 = *(long **)(lVar16 + 0x28);
            do {
              puVar22 = *(undefined4 **)(*(long *)(*plVar17 + 0x10) + 8);
              uVar24 = (**(code **)(puVar22 + 4))
                                 (fVar23 + 1.0,puVar22[1],puVar22[2],*(undefined8 *)(puVar22 + 6));
              lVar8 = lVar8 + -8;
              *puVar22 = uVar24;
              plVar17 = plVar17 + 1;
            } while (lVar8 != 0);
            uVar14 = *(uint *)(lVar15 + 0x48);
          }
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar14);
    }
    lVar15 = *(long *)(param_1 + 0x880);
    *(undefined1 *)(lVar15 + 0x283) = 3;
    *(byte *)(lVar15 + 0x281) = *(byte *)(lVar15 + 0x281) | 4;
    if ((((param_2 & 1) != 0) &&
        (lVar15 = *(long *)(param_1 + 0x880), (*(byte *)(lVar15 + 0x281) & 3) == 0)) &&
       (lVar16 = *(long *)(lVar15 + 0x70), (*(byte *)(lVar16 + 0x5599) & 1) != 0)) {
      puVar1 = (uint *)(lVar16 + 0x4e58);
      do {
        uVar14 = *puVar1;
        cVar9 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar14 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(long *)(*(long *)(lVar16 + 0x4e60) +
               (-(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3)) = lVar15;
      *(byte *)(lVar15 + 0x281) = *(byte *)(lVar15 + 0x281) | 2;
    }
  }
  return;
}

