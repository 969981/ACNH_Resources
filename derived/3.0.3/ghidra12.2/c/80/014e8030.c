
void FUN_014e8030(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined4 local_94;
  float local_90;
  
  if (0 < *(int *)(param_4 + 0xe8)) {
    lVar12 = 0;
    puVar16 = *(undefined8 **)(param_4 + 0xf8);
    do {
      puVar14 = *(undefined8 **)(*(long *)(param_4 + 0xf0) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar14 = puVar16;
      *(undefined8 **)(param_4 + 0xf8) = puVar14;
      puVar16 = puVar14;
    } while (lVar12 < *(int *)(param_4 + 0xe8));
  }
  uVar3 = *(undefined4 *)(param_4 + 0x34);
  uVar4 = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_4 + 0xe8) = 0;
  fVar20 = (float)FUN_014e8b30(param_4);
  iVar5 = *(int *)(param_4 + 0x38);
  local_c0 = (undefined *)CONCAT44(param_2,fVar20);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,param_3);
  local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar5);
  if (iVar5 - 2U < 4) {
    lVar12 = *(long *)PTR_DAT_04bb2720;
    if (lVar12 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar12 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar8 = FUN_006bd550(*puVar16,0);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar16 = &DAT_055c04a0;
        }
      }
    }
    fVar20 = (float)FUN_0153e900(&local_c0,iVar5,*(undefined4 *)(puVar16 + 7));
    fVar22 = param_2;
  }
  else {
    fVar22 = 0.0;
  }
  puVar6 = PTR_DAT_04bb2010;
  local_e8 = 0;
  local_108 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_100 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = CONCAT44(fVar22,fVar20);
  local_f8 = 0;
  local_e0 = PTR_DAT_04bbbc20 + 0x10;
  fVar24 = param_3;
  puStack_f0 = puStack_100;
  local_d0 = param_3;
  local_cc = uVar3;
  uStack_c8 = uVar4;
  if (*(char *)(param_4 + 0x74) != '\0') {
    local_a0 = 0;
    local_b0 = 0;
    local_b8 = puStack_100;
    FUN_014edb38(param_4,&local_c0,param_4 + 0x20);
    fVar24 = -2.5;
    if ((((int)local_a0 - (int)local_b0) + 1U & 1) != 0) {
      fVar24 = 0.0;
    }
    fVar21 = -2.5;
    if (((local_a0._4_4_ - local_b0._4_4_) + 1U & 1) != 0) {
      fVar21 = 0.0;
    }
    fVar25 = *(float *)(param_4 + 0x30) + fVar21;
    fVar23 = *(float *)(param_4 + 0x28) + fVar24;
    iVar5 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    iVar18 = (int)((float)(int)(fVar20 + fVar24) / 5.0) - (uint)(fVar20 + fVar24 < 0.0);
    uVar19 = iVar18 - iVar5 & 1;
    uVar2 = -uVar19;
    if (iVar5 <= iVar18) {
      uVar2 = uVar19;
    }
    fVar24 = -1.0;
    if (iVar18 - iVar5 == 0 || iVar18 < iVar5) {
      fVar24 = 1.0;
    }
    fVar24 = fVar20 + (float)(int)uVar2 * 5.0 * fVar24;
    iVar5 = (int)((float)(int)(param_3 + fVar21) / 5.0) - (uint)(param_3 + fVar21 < 0.0);
    uVar19 = iVar5 - iVar8 & 1;
    fVar20 = -1.0;
    if (iVar5 - iVar8 == 0 || iVar5 < iVar8) {
      fVar20 = 1.0;
    }
    local_d8 = CONCAT44(fVar22,fVar24);
    uVar2 = -uVar19;
    if (iVar8 <= iVar5) {
      uVar2 = uVar19;
    }
    param_2 = (float)(int)((float)(int)uVar2 * 5.0);
    local_d0 = param_3 + param_2 * fVar20;
  }
  FUN_014edb38(param_4,&local_108,&local_e0);
  iVar5 = local_e8._4_4_ + 1;
  if (iVar5 != local_f8._4_4_) {
    iVar7 = (int)local_f8;
    puVar1 = PTR_DAT_04bb2000 + 0x10;
    iVar8 = local_f8._4_4_;
    iVar18 = (int)local_f8;
    do {
      local_b8 = (undefined *)CONCAT44(iVar8,iVar18);
      local_d8 = 0;
      local_94 = 1;
      local_e0 = puVar6 + 0x10;
      local_c0 = puVar6 + 0x10;
      fVar20 = (float)FUN_014e593c(&local_c0,&local_94,0,&local_e0);
      if (fVar20 != 0.0) {
        fVar22 = 0.0;
        lVar12 = *(long *)PTR_DAT_04bb27c0;
        if (lVar12 == 0) {
          fVar21 = 0.0;
          fVar23 = 0.0;
          fVar25 = 0.0;
        }
        else {
          plVar17 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              (ulong)((uint)fVar20 >> 0x14) * 8);
          if (((plVar17 == (long *)0x0) || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
             (*(float *)(plVar17 + 0x46) != fVar20)) {
            plVar17 = (long *)0x0;
          }
          if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
            plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar12 = *(long *)PTR_DAT_04bb27c0;
            iVar9 = (**(code **)(*plVar10 + 0x60))();
            if (iVar9 < 0x11) {
              uVar19 = 1;
            }
            else {
              if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_014e8430;
              uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_014e8430:
            uVar19 = 0;
          }
          if (plVar17 != (long *)0x0) {
            lVar12 = plVar17[0x2a];
            if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb2e58 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb2e60);
            }
            uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb2e58);
            fVar23 = 0.0;
            fVar25 = 0.0;
            fVar21 = 0.0;
            uVar2 = 0;
            if ((int)lVar12 == 1) {
              uVar2 = uVar19;
            }
            if ((uVar11 & 1) != 0) {
              if (uVar2 != 0) {
                lVar12 = plVar17[0xd];
                fVar22 = (float)FUN_014e8b30(param_4);
                fVar22 = *(float *)(lVar12 + 0x278) - fVar22;
                fVar23 = *(float *)(lVar12 + 0x27c) - param_2;
                lVar15 = plVar17[0xd];
                fVar25 = *(float *)(lVar12 + 0x280) - fVar24;
                FUN_014ee504(&local_94,param_4);
                fVar21 = (float)(*(int *)(lVar15 + 0x2b4) - (int)local_90);
              }
              goto LAB_014e8500;
            }
          }
          fVar21 = 0.0;
          fVar25 = 0.0;
          fVar23 = 0.0;
        }
LAB_014e8500:
        FUN_014ee504(&local_94,param_4);
        if (*(int *)(param_4 + 0xe8) < *(int *)(param_4 + 0xec)) {
          pfVar13 = *(float **)(param_4 + 0xf8);
          if (pfVar13 != (float *)0x0) {
            *(undefined8 *)(param_4 + 0xf8) = *(undefined8 *)pfVar13;
          }
          *pfVar13 = fVar22;
          pfVar13[1] = fVar23;
          pfVar13[2] = fVar25;
          pfVar13[5] = fVar20;
          pfVar13[3] = fVar21;
          pfVar13[4] = local_90;
          if (*(int *)(param_4 + 0xe8) < *(int *)(param_4 + 0xec)) {
            *(float **)(*(long *)(param_4 + 0xf0) + (long)*(int *)(param_4 + 0xe8) * 8) = pfVar13;
            *(int *)(param_4 + 0xe8) = *(int *)(param_4 + 0xe8) + 1;
          }
        }
      }
      if (iVar18 < (int)local_e8) {
        iVar18 = iVar18 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        iVar18 = (int)local_f8;
      }
    } while ((iVar7 != iVar18) || (iVar5 != iVar8));
  }
  return;
}

