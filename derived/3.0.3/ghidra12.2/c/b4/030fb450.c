
/* WARNING: Removing unreachable block (ram,0x030fb824) */
/* WARNING: Removing unreachable block (ram,0x030fb4b0) */
/* WARNING: Removing unreachable block (ram,0x030fb4a8) */
/* WARNING: Removing unreachable block (ram,0x030fb710) */
/* WARNING: Removing unreachable block (ram,0x030fb7e8) */
/* WARNING: Removing unreachable block (ram,0x030fb704) */

void FUN_030fb450(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  float *pfVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined *local_148;
  undefined1 local_140;
  int local_13c;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  undefined4 local_128;
  undefined2 local_124;
  uint local_11c;
  undefined *local_118;
  int local_110;
  undefined *local_108;
  undefined1 local_100;
  int local_fc;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined **local_e0;
  undefined **local_d8;
  undefined **ppuStack_d0;
  undefined8 local_c0;
  float local_b8;
  
  puVar7 = PTR_DAT_04bbc570;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
  puVar5 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar5 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar5[1] != 0) {
    local_100 = 0;
    local_fc = 0;
    puVar1 = PTR_DAT_04bc4608 + 0x10;
    local_e8 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_118 = PTR_DAT_04bc43f8 + 0x10;
    local_f0 = 0;
    iStack_ec = 0;
    lVar19 = 0;
    local_e4 = 0;
    puVar3 = PTR_DAT_04bc0cb8 + 0x10;
    local_108 = puVar1;
    local_f8 = puVar2;
    do {
      local_11c = (uint)lVar19;
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,local_11c);
      uVar4 = local_11c;
      if (0xf < local_11c) {
        uVar4 = 0;
      }
      local_110 = (&DAT_05636e58)[(int)uVar4];
      local_140 = puVar7[8];
      local_13c = *(int *)(puVar7 + 0xc);
      local_130 = *(int *)(puVar7 + 0x18);
      iStack_12c = *(int *)(puVar7 + 0x1c);
      local_128 = *(undefined4 *)(puVar7 + 0x20);
      local_124 = *(undefined2 *)(puVar7 + 0x24);
      local_148 = puVar1;
      local_138 = puVar2;
      if (local_110 != 0) {
        local_e0 = &PTR_FUN_04a9b150;
        local_d8 = &local_118;
        ppuStack_d0 = &local_148;
        if (puVar5[1] != 0) {
          plVar11 = (long *)(*(code *)**(undefined8 **)(puVar5[1] + 0x10))();
          iVar10 = (**(code **)(*plVar11 + 0x18))();
          if (0 < iVar10) {
            iVar17 = 0;
            do {
              FUN_01360490(&local_c0,puVar5[1],iVar17);
              uVar12 = (*(code *)*local_e0)(&local_e0,&local_c0);
              if ((uVar12 & 1) != 0) break;
              bVar8 = iVar10 + -1 != iVar17;
              iVar17 = iVar17 + 1;
            } while (bVar8);
          }
        }
      }
      local_100 = local_140;
      local_fc = local_13c;
      local_e8 = local_128;
      local_e4 = local_124;
      local_f0 = local_130;
      iStack_ec = iStack_12c;
      if (local_13c != 0) {
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
        puVar6 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar6 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        if (puVar6[1] != 0) {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,local_11c);
          local_c0 = PTR_DAT_04bc43f8 + 0x10;
          uVar4 = local_11c;
          if (0xf < local_11c) {
            uVar4 = 0;
          }
          local_b8 = (float)(&DAT_05636e58)[(int)uVar4];
          if (local_b8 != 0.0) {
            uVar12 = FUN_02a59140(puVar6,&local_c0);
            uVar4 = local_11c;
            if ((uVar12 & 1) != 0) {
              local_c0 = (undefined *)CONCAT44(local_c0._4_4_,local_11c);
              if (((local_11c < 0x10) && ((0x817fU >> (ulong)(local_11c & 0x1f) & 1) != 0)) &&
                 (lVar18 = *(long *)(param_1 + 0x2a0 +
                                    *(long *)(&DAT_04183e30 + (long)(int)local_11c * 8) * 8),
                 lVar18 != 0)) {
                if (local_fc == 0x25) {
                  pfVar15 = (float *)(&DAT_04183db4 + (ulong)*(uint *)(param_1 + 0x1bcc) * 6);
                  if (4 < *(uint *)(param_1 + 0x1bcc)) {
                    pfVar15 = (float *)&DAT_04183db4;
                  }
                  fVar21 = pfVar15[2];
                  fVar20 = *pfVar15;
                  fVar22 = pfVar15[1];
                }
                else {
                  if (local_fc == 0x1c) {
                    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
                    lVar14 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
                    if ((lVar14 != 0) &&
                       (plVar11 = *(long **)(param_1 + 0x460), plVar11 != (long *)0x0)) {
                      iVar10 = *(int *)(lVar14 + 0x34);
                      iVar17 = *(int *)(lVar14 + 0x24);
                      local_b8 = 1.54143e-44;
                      local_c0 = puVar3;
                      (**(code **)(*plVar11 + 0x20))(plVar11,&local_c0);
                      lVar14 = (**(code **)(plVar11[3] + 0xd0))(plVar11[1]);
                      local_b8 = 0.0;
                      local_c0 = (undefined *)0x0;
                      uVar12 = FUN_02a8f1dc(&local_108,&local_c0);
                      fVar21 = local_b8 +
                               (((float)((iVar10 - iVar17) + 1) * 5.0) / *(float *)(lVar14 + 4)) *
                               6.0;
                      fVar20 = (float)local_c0;
                      fVar22 = local_c0._4_4_;
                      goto LAB_030fb578;
                    }
                  }
                  fVar21 = (float)iStack_ec * 5.0 + 2.5;
                  fVar20 = (float)local_f0 * 5.0 + 2.5;
                  fVar22 = 0.0;
                }
LAB_030fb578:
                uVar9 = FUN_030f51a8(uVar12,&local_11c);
                uVar16 = **(undefined8 **)(lVar18 + 0x230);
                uVar13 = (*(undefined8 **)(lVar18 + 0x230))
                         [(ulong)(2 < *(uint *)(lVar18 + 0x228)) * 2];
                lVar14 = param_1 + 0xc58 + lVar19 * 0x60;
                *(uint *)(lVar14 + 0x58) = uVar4;
                *(long *)(lVar14 + 0x18) = lVar18;
                *(undefined8 *)(lVar14 + 0x20) = uVar13;
                *(undefined1 *)(lVar14 + 0x5c) = uVar9;
                *(float *)(lVar14 + 0xc) = fVar20;
                *(float *)(lVar14 + 0x10) = fVar22;
                *(float *)(lVar14 + 0x14) = fVar21;
                *(undefined8 *)(lVar14 + 0x28) = uVar16;
                *(undefined1 *)(lVar14 + 8) = 1;
              }
            }
          }
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x10);
  }
  return;
}

