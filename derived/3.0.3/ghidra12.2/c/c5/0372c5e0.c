
void FUN_0372c5e0(long param_1,undefined8 *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_c0;
  undefined8 *puStack_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  
  puVar9 = PTR_DAT_04bb2720;
  local_88 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_80 = puStack_90;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar17 = *(long *)PTR_DAT_04bb2720, lVar17 != 0)) &&
     (*(long *)(lVar17 + 0x330) != 0)) {
    puVar13 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
    iVar12 = FUN_006bd550(*puVar13,0);
    if (((iVar12 == 0x758f7eaf) && (*(long *)puVar9 != 0)) &&
       ((lVar17 = *(long *)(*(long *)puVar9 + 0x330), lVar17 != 0 && (*(int *)(lVar17 + 0x244) != 0)
        ))) {
      FUN_01811430(&local_98);
      goto LAB_0372c6d4;
    }
  }
  local_88 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x50);
  local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x60);
LAB_0372c6d4:
  puVar11 = PTR_DAT_04bb3350;
  puVar10 = PTR_DAT_04bb27c0;
  puVar9 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0xe0) != 0) {
    lVar17 = (long)*(int *)(param_1 + 0xe0) << 3;
    puVar3 = PTR_DAT_04bb3750 + 0x10;
    plVar19 = *(long **)(param_1 + 0xe8);
    do {
      lVar18 = *(long *)puVar10;
      if (lVar18 != 0) {
        lVar21 = *plVar19;
        puVar4 = (uint *)(lVar21 + 8);
        uVar20 = *puVar4;
        if (((uVar20 == 0) ||
            (plVar22 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                                 ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
           (((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar22 + 0x46) != uVar20)))) {
          plVar22 = (long *)0x0;
        }
        if (*(int *)(lVar18 + 0x288) == 1 || *(int *)(lVar18 + 0x288) == -1) {
          plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar11 + 0x68));
          lVar18 = *(long *)puVar10;
          iVar12 = (**(code **)(*plVar14 + 0x60))();
          if (iVar12 < 0x11) {
            uVar20 = 1;
          }
          else {
            uVar20 = *(uint *)(lVar18 + 0x5e8);
            if (4 < uVar20) goto LAB_0372c800;
            uVar20 = 0x1aU >> (ulong)(uVar20 & 0x1f) & 1;
          }
        }
        else {
LAB_0372c800:
          uVar20 = 0;
        }
        if (plVar22 != (long *)0x0) {
          lVar18 = plVar22[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar12 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = puVar3;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar15 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb37d0);
          uVar5 = 0;
          if ((int)lVar18 == 1) {
            uVar5 = uVar20;
          }
          if (((uVar15 & 1) != 0) && (uVar5 != 0)) {
            local_ac = 0x80000000;
            lVar18 = plVar22[0xd];
            local_a0 = 0.0;
            local_a8 = 0;
            fVar23 = *(float *)(lVar18 + 0x278);
            fVar24 = fVar23 + -2.5;
            fVar25 = *(float *)(lVar18 + 0x280) + -2.5;
            iVar12 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
            iVar6 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
            bVar1 = (int)local_78 < iVar12;
            bVar7 = iVar12 + 1 < (int)local_88;
            bVar2 = local_78._4_4_ < iVar6;
            bVar8 = iVar6 + 1 < local_88._4_4_;
            if ((bVar2 || bVar8) || (bVar1 || bVar7)) {
              local_a8 = CONCAT44(*(undefined4 *)(lVar18 + 0x27c),fVar23);
              local_ac = *(undefined4 *)(lVar18 + 0x2b4);
              local_a0 = *(float *)(lVar18 + 0x280);
            }
            else {
              iVar12 = FUN_0371ccb4(lVar21);
              local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar12);
              if (iVar12 == 4) {
                fVar25 = (float)FUN_037715a0();
              }
              else {
                if (iVar12 == 1) {
                  uVar16 = 1;
                  local_c0 = puVar9;
                }
                else {
                  if (iVar12 != 0) goto LAB_0372c750;
                  uVar16 = 0;
                  local_c0 = PTR_DAT_04bb2020;
                }
                local_c0 = local_c0 + 0x10;
                puStack_b8 = &DAT_0407ebb1;
                fVar25 = (float)FUN_03771b40(uVar16,&local_c0);
              }
              local_a8 = CONCAT44(fVar23,fVar25);
              local_a0 = fVar24;
              local_ac = FUN_006f0400(*param_3 - fVar25,param_3[2] - fVar24);
            }
            (**(code **)*param_2)
                      (param_2,puVar4,&local_a8,&local_ac,(!bVar2 && !bVar8) && (!bVar1 && !bVar7));
          }
        }
      }
LAB_0372c750:
      plVar19 = plVar19 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  return;
}

