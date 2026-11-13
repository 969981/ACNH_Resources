
/* WARNING: Removing unreachable block (ram,0x014ae51c) */
/* WARNING: Removing unreachable block (ram,0x014ae52c) */
/* WARNING: Removing unreachable block (ram,0x014ae554) */

void FUN_014adfe0(long param_1,long param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *puVar31;
  long *plVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  undefined *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  long local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  byte local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar30 = *(long *)PTR_DAT_04bb27c0;
  if (lVar30 == 0) {
    return;
  }
  uVar26 = *param_3;
  if ((((uVar26 == 0) ||
       (plVar32 = *(long **)(*(long *)(*(long *)(lVar30 + 0x1c0) + 8) +
                            ((ulong)(uVar26 >> 0x11) & 0x7ff8)), plVar32 == (long *)0x0)) ||
      ((*(uint *)(plVar32 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar32 + 0x46) != uVar26)) {
    plVar32 = (long *)0x0;
  }
  if (*(int *)(lVar30 + 0x288) == 1 || *(int *)(lVar30 + 0x288) == -1) {
    plVar28 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar30 = *(long *)puVar1;
    iVar24 = (**(code **)(*plVar28 + 0x60))();
    if (iVar24 < 0x11) {
      uVar26 = 1;
      goto joined_r0x014ae0c4;
    }
    if (*(uint *)(lVar30 + 0x5e8) < 5) {
      uVar26 = 0x1aU >> (ulong)(*(uint *)(lVar30 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014ae0c4;
    }
  }
  uVar26 = 0;
joined_r0x014ae0c4:
  if (plVar32 != (long *)0x0) {
    lVar30 = plVar32[0x2a];
    uVar8 = *(uint *)(plVar32 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar24 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar24 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar25 = (**(code **)(*plVar32 + 0x20))(plVar32,PTR_DAT_04bb5920);
    if ((((int)lVar30 == 1) && ((uVar25 & uVar26) != 0)) && ((uVar8 >> 4 & 1) != 0)) {
      local_c8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_c0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_b8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_b0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_d8 = *(undefined8 *)PTR_DAT_04bb2f80;
      uStack_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      (**(code **)(*(long *)plVar32[0x152] + 0x108))
                ((long *)plVar32[0x152],&local_d8,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
      local_e8 = 0;
      local_f0 = PTR_DAT_04bbfe68 + 0x10;
      lVar30 = *(long *)PTR_DAT_04bb2720;
      if (lVar30 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar30 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
          iVar24 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar24 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_e4 = *(undefined4 *)(puVar31 + 7);
      local_e0 = FUN_017baf44();
      local_e0 = local_e0 & 1;
      iVar33 = *(int *)(param_2 + 0x14);
      iVar24 = *(int *)(param_2 + 0x24) + 1;
      if (iVar24 != iVar33) {
        iVar9 = *(int *)(param_2 + 0x10);
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        puVar3 = PTR_DAT_04bbc1a0 + 0x10;
        iVar34 = iVar9;
        do {
          local_100 = puVar1;
          local_f8 = iVar34;
          iStack_f4 = iVar33;
          FUN_01a50240(&local_108,&local_f0,1,&local_100);
          uVar29 = FUN_0277e158(&local_108);
          puVar11 = PTR_DAT_04bb43c0;
          if ((uVar29 & 1) != 0) {
            local_110 = 0;
            local_118 = local_108;
            uStack_114 = local_104;
            lVar30 = *(long *)PTR_DAT_04bb43c0;
            local_120 = puVar2;
            uVar26 = FUN_0277d6c4(&local_118);
            if (*(long *)puVar11 != 0) {
              lVar30 = *(long *)(lVar30 + 0x57e58);
              uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((uVar26 < *(uint *)(lVar30 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
                lVar30 = *(long *)PTR_DAT_04bc0428;
                uVar26 = FUN_0277d6c4(&local_108);
                uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                if (uVar26 < *(uint *)(lVar30 + 0x1d8)) {
                  lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar26 * 8);
                  if (lVar30 != 0) {
                    local_110 = lVar30;
                  }
                }
              }
            }
            local_140 = 0;
            local_148 = PTR_DAT_04bb2010 + 0x10;
            local_130 = 0;
            local_150 = puVar3;
            local_138 = local_148;
            FUN_01afb480(&local_120,&local_150);
            iVar4 = (int)(float)local_140 + local_f8;
            iVar5 = (int)local_140._4_4_ + iStack_f4;
            local_140 = CONCAT44(iVar5,iVar4);
            iVar6 = (int)(float)local_130 + local_f8;
            iVar7 = (int)local_130._4_4_ + iStack_f4;
            local_130 = CONCAT44(iVar7,iVar6);
            fVar35 = (float)FUN_01472cc0(plVar32);
            FUN_007535b4(&local_150,&local_d8);
            fVar23 = fStack_124;
            fVar22 = local_128;
            fVar12 = (float)local_150;
            fVar13 = local_150._4_4_;
            fVar16 = (float)local_140;
            fVar17 = local_140._4_4_;
            fVar18 = (float)local_138;
            fVar19 = local_138._4_4_;
            fVar20 = (float)local_130;
            fVar21 = local_130._4_4_;
            fVar14 = (float)local_148;
            fVar15 = local_148._4_4_;
            iVar27 = FUN_01afa5ec(&local_120);
            if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
              iVar10 = *(int *)(plVar32[0xd] + 0x2b4);
              puVar31 = *(undefined8 **)(param_1 + 0x18);
              if (puVar31 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0x18) = *puVar31;
              }
              *(undefined1 *)((long)puVar31 + 2) = local_108._2_1_;
              *(undefined1 *)((long)puVar31 + 3) = local_108._3_1_;
              *(undefined4 *)((long)puVar31 + 4) = local_104;
              puVar31[3] = 0;
              puVar31[4] = 0;
              fVar36 = ((float)iVar4 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5;
              fVar37 = ((float)iVar5 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
              *(float *)(puVar31 + 1) = fVar15 + fVar35 * fVar13 + fVar36 * fVar12 + fVar37 * fVar14
              ;
              *(float *)((long)puVar31 + 0xc) =
                   fVar19 + fVar35 * fVar17 + fVar36 * fVar16 + fVar37 * fVar18;
              *(undefined2 *)puVar31 = (undefined2)local_108;
              *(float *)(puVar31 + 2) = fVar23 + fVar35 * fVar21 + fVar36 * fVar20 + fVar37 * fVar22
              ;
              *(int *)((long)puVar31 + 0x14) =
                   (int)(long)((float)iVar27 * 90.0 * 11930465.0) - iVar10;
              if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
                *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) =
                     puVar31;
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
              }
              plVar28 = *(long **)PTR_DAT_04bb27d0;
              if ((((plVar28 == (long *)0x0) || ((int)plVar28[0x10] != 3)) ||
                  (*(byte *)(*plVar28 + 0x476) < 2)) &&
                 (uVar29 = FUN_01a4f798(&local_f0,1,&local_100), (uVar29 & 1) != 0)) {
                local_150 = (undefined *)CONCAT44((int)((ulong)local_150 >> 0x20),1);
                lVar30 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xe0);
                if (lVar30 != 0) {
                  FUN_012e5af4(lVar30,&local_100);
                }
              }
            }
          }
          if (iVar34 < *(int *)(param_2 + 0x20)) {
            iVar34 = iVar34 + 1;
          }
          else {
            iVar33 = iVar33 + 1;
            iVar34 = *(int *)(param_2 + 0x10);
          }
        } while ((iVar9 != iVar34) || (iVar24 != iVar33));
      }
      FUN_011e56f0(param_2,*param_3);
    }
  }
  return;
}

