
void FUN_014ae800(long param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined *local_110;
  int local_108;
  int iStack_104;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  long local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  uVar19 = *param_3;
  if ((((uVar19 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar19)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar4;
    iVar9 = (**(code **)(*plVar12 + 0x60))();
    if (iVar9 < 0x11) {
      uVar19 = 1;
      goto joined_r0x014ae8e0;
    }
    if (*(uint *)(lVar13 + 0x5e8) < 5) {
      uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014ae8e0;
    }
  }
  uVar19 = 0;
joined_r0x014ae8e0:
  if (plVar16 != (long *)0x0) {
    lVar13 = plVar16[0x2a];
    uVar11 = *(uint *)(plVar16 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb5920);
    if ((((int)lVar13 == 1) && ((uVar10 & uVar19) != 0)) && ((uVar11 >> 4 & 1) != 0)) {
      plVar12 = (long *)plVar16[0x152];
      local_c0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_b8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_b0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_a8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_d0 = *(undefined8 *)PTR_DAT_04bb2f80;
      uStack_c8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      uVar19 = FUN_01472cc0(plVar16);
      local_e8 = (undefined *)((ulong)uVar19 << 0x20);
      local_e0 = 0;
      (**(code **)(*plVar12 + 0x108))(plVar12,&local_d0,&local_e8,PTR_DAT_04bb2ce8,1);
      local_e0 = 0;
      local_e8 = PTR_DAT_04bbfe68 + 0x10;
      lVar13 = *(long *)PTR_DAT_04bb2720;
      if (lVar13 == 0) {
        puVar15 = &DAT_055c04a0;
      }
      else {
        puVar15 = &DAT_055c04a0;
        if (*(long *)(lVar13 + 0x330) != 0) {
          puVar15 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
          iVar9 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
      }
      local_dc = *(undefined4 *)(puVar15 + 7);
      local_d8 = FUN_017baf44();
      puVar4 = PTR_DAT_04bb43c0;
      local_d8 = local_d8 & 1;
      if (*(int *)(param_1 + 8) != 0) {
        lVar13 = (long)*(int *)(param_1 + 8) << 3;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        do {
          uVar8 = uStack_a8;
          uVar7 = local_b0;
          uVar6 = uStack_c8;
          uVar5 = local_d0;
          puVar17 = (undefined4 *)*puVar15;
          uVar19 = puVar17[5];
          lVar18 = *(long *)puVar4;
          pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar19 >> 0x14) & 0xff0));
          fVar20 = (float)(uVar19 & 0xffffff) * 5.9604645e-08;
          fVar26 = pfVar3[2] + fVar20 * pfVar3[3];
          fVar25 = *pfVar3 + fVar20 * pfVar3[1];
          fVar23 = -(pfVar3[1] * fVar20) - *pfVar3;
          fVar28 = fVar26 * 0.0;
          fVar20 = fVar25 * 0.0;
          fVar25 = fVar25 + 0.0;
          fVar21 = fVar20 * 0.0 + 1.0;
          fVar27 = (float)puVar17[2];
          fVar34 = (float)puVar17[3];
          fVar24 = (float)puVar17[4];
          iVar9 = *(int *)(plVar16[0xd] + 0x2b4);
          local_f8 = *puVar17;
          local_f4 = puVar17[1];
          local_f0 = 0;
          local_100 = puVar1;
          uVar11 = FUN_0277d6c4(&local_f8);
          if (*(long *)puVar4 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar18 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(puVar17);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if (uVar11 < *(uint *)(lVar18 + 0x1d8)) {
                lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8);
                if (lVar18 != 0) {
                  local_f0 = lVar18;
                }
              }
            }
          }
          fVar22 = (float)uVar5;
          fVar30 = (float)((ulong)uVar5 >> 0x20);
          fVar32 = (float)uVar6;
          fVar29 = (float)uVar7;
          fVar31 = (float)((ulong)uVar7 >> 0x20);
          fVar33 = (float)uVar8;
          FUN_01afa2dc(&local_100,uVar19 + iVar9 + 0x20000000 >> 0x1e);
          fVar22 = (float)((ulong)uVar6 >> 0x20) +
                   fVar27 * fVar22 + fVar34 * fVar30 + fVar24 * fVar32 +
                   (fVar20 * fVar22 + fVar21 * fVar30 + fVar28 * fVar32 + 0.0) * 0.0 +
                   (fVar26 * fVar22 + fVar28 * fVar30 + fVar23 * fVar32 + 0.0) * 0.0 +
                   (fVar25 * fVar22 + fVar20 * fVar30 + fVar26 * fVar32 + 0.0) * 0.0 + -0.1 + -2.5;
          fVar20 = (float)((ulong)uVar8 >> 0x20) +
                   fVar27 * fVar29 + fVar34 * fVar31 + fVar24 * fVar33 +
                   (fVar20 * fVar29 + fVar21 * fVar31 + fVar28 * fVar33 + 0.0) * 0.0 +
                   (fVar26 * fVar29 + fVar28 * fVar31 + fVar23 * fVar33 + 0.0) * 0.0 +
                   (fVar25 * fVar29 + fVar20 * fVar31 + fVar26 * fVar33 + 0.0) * 0.0 + -0.1 + -2.5;
          local_108 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
          iStack_104 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
          plVar12 = *(long **)PTR_DAT_04bb27d0;
          local_110 = puVar2;
          if (((plVar12 == (long *)0x0) || ((int)plVar12[0x10] != 3)) ||
             (*(byte *)(*plVar12 + 0x476) < 2)) {
            local_118 = local_f8;
            uStack_114 = local_f4;
            FUN_01a50970(&local_e8,1,&local_118,&local_110);
          }
          puVar15 = puVar15 + 1;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
        if (0 < *(int *)(param_1 + 8)) {
          lVar13 = 0;
          puVar15 = *(undefined8 **)(param_1 + 0x18);
          do {
            puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar13 * 8);
            lVar13 = lVar13 + 1;
            *puVar14 = puVar15;
            *(undefined8 **)(param_1 + 0x18) = puVar14;
            puVar15 = puVar14;
          } while (lVar13 < *(int *)(param_1 + 8));
        }
      }
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_011e58c0(param_2,*param_3);
    }
  }
  return;
}

