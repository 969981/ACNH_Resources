
void FUN_01259470(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  undefined *puVar18;
  uint *puVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  short local_f0 [4];
  undefined *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined *local_c8;
  int local_c0;
  int local_bc;
  uint local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined **local_88 [5];
  
  iVar12 = *(int *)(param_1 + 0x198);
  if (iVar12 != 0) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar18 = PTR_DAT_04bb2010;
    do {
      local_b8 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_88[0] = &PTR_FUN_04989080;
      local_b0 = puVar3;
      puStack_a8 = puVar2;
      puStack_98 = puVar2;
      if (0 < iVar12) {
        iVar12 = 0;
        if (*(int *)(param_1 + 400) <= *(int *)(param_1 + 0x194)) {
          iVar12 = *(int *)(param_1 + 400);
        }
        puVar19 = (uint *)(*(long *)(param_1 + 0x188) +
                          (long)(*(int *)(param_1 + 0x194) - iVar12) * 0x50);
        local_b8 = *puVar19;
        local_a0 = *(undefined8 *)(puVar19 + 6);
        local_90 = *(undefined8 *)(puVar19 + 10);
        (**(code **)(*(long *)(puVar19 + 0xc) + 0x10))(puVar19 + 0xc,local_88);
        *(undefined **)(puVar19 + 2) = PTR_DAT_04bbc1a0 + 0x10;
        iVar12 = 0;
        if (*(int *)(param_1 + 0x194) + 1 < *(int *)(param_1 + 400)) {
          iVar12 = *(int *)(param_1 + 0x194) + 1;
        }
        *(int *)(param_1 + 0x194) = iVar12;
        iVar12 = *(int *)(param_1 + 0x198) + -1;
        *(int *)(param_1 + 0x198) = iVar12;
      }
      uVar16 = (ulong)local_b8;
      if (7 < local_b8) {
        uVar16 = 0;
      }
      lVar20 = *(long *)(param_1 + 0x60 + uVar16 * 8);
      if (lVar20 != 0) {
        local_c8 = puVar18 + 0x10;
        iVar8 = (int)local_a0;
        local_c0 = (int)local_a0;
        local_bc = local_a0._4_4_;
        iVar1 = local_90._4_4_ + 1;
        local_d8 = &puStack_a8;
        local_d0 = &puStack_98;
        if (iVar1 != local_a0._4_4_) {
          puVar4 = (undefined8 *)(lVar20 + 0x28);
          do {
            local_e8 = puVar18 + 0x10;
            local_e0 = 0;
            FUN_012e4f58(local_f0,lVar20,&local_c8,&local_e8);
            if ((local_f0[0] != -2) &&
               ((uVar16 = (*(code *)local_88[0][1])(local_88), (uVar16 & 1) == 0 ||
                (uVar16 = (*(code *)*local_88[0])(local_88,local_f0), (uVar16 & 1) != 0)))) {
              puStack_110 = puVar18 + 0x10;
              local_108 = 0;
              local_f8 = 0;
              local_118 = PTR_DAT_04bbc1a0 + 0x10;
              local_100 = puStack_110;
              FUN_012e5518(&local_118,local_f0);
              iVar21 = (int)local_108 + (int)local_e0;
              iVar17 = local_108._4_4_ + local_e0._4_4_;
              local_108 = CONCAT44(iVar17,iVar21);
              iVar12 = local_f8._4_4_ + local_e0._4_4_ + 1;
              local_f8 = CONCAT44(local_f8._4_4_ + local_e0._4_4_,(int)local_f8 + (int)local_e0);
              iVar22 = iVar21;
              if (iVar12 != iVar17) {
                do {
                  iVar15 = *(int *)(lVar20 + 0x14);
                  uVar6 = iVar22 - *(int *)(lVar20 + 0x10);
                  plVar11 = (long *)(*(code *)**(undefined8 **)(lVar20 + 0x28))(puVar4);
                  uVar9 = (**(code **)(*plVar11 + 0x18))();
                  if (uVar6 < uVar9) {
                    uVar9 = iVar17 - iVar15;
                    plVar11 = (long *)(**(code **)*puVar4)(puVar4);
                    uVar10 = (**(code **)(*plVar11 + 0x20))();
                    if ((((uVar9 < uVar10) && (lVar13 = *(long *)(lVar20 + 0x1b8), lVar13 != 0)) &&
                        (uVar6 < *(uint *)(lVar20 + 0x1c8))) && (uVar9 < *(uint *)(lVar20 + 0x1cc)))
                    {
                      uVar6 = uVar6 + *(uint *)(lVar20 + 0x1c8) * uVar9;
                      iVar15 = *(int *)(lVar20 + 0x1c4);
                      *(int *)(lVar20 + 0x1c4) = iVar15 + 1;
                      if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar20 + 0x1c0))) {
                        lVar14 = (ulong)(uVar6 >> 5) * 4;
                        *(uint *)(lVar13 + lVar14) =
                             *(uint *)(lVar13 + lVar14) | 1 << (ulong)(uVar6 & 0x1f);
                        iVar15 = *(int *)(lVar20 + 0x1c4) + -1;
                      }
                      *(int *)(lVar20 + 0x1c4) = iVar15;
                    }
                  }
                  if (iVar22 < (int)local_f8) {
                    iVar22 = iVar22 + 1;
                  }
                  else {
                    iVar17 = iVar17 + 1;
                    iVar22 = (int)local_108;
                  }
                } while ((iVar21 != iVar22) || (iVar12 != iVar17));
                iVar21 = (int)local_108;
              }
              if ((local_b8 == 0) && (lVar13 = *(long *)(param_1 + 0x68), lVar13 != 0)) {
                iVar12 = local_f8._4_4_ + 1;
                if (iVar12 != local_108._4_4_) {
                  puVar5 = (undefined8 *)(lVar13 + 0x28);
                  iVar17 = local_108._4_4_;
                  iVar22 = iVar21;
                  do {
                    iVar15 = *(int *)(lVar13 + 0x14);
                    uVar6 = iVar22 - *(int *)(lVar13 + 0x10);
                    plVar11 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))(puVar5);
                    uVar9 = (**(code **)(*plVar11 + 0x18))();
                    if (uVar6 < uVar9) {
                      uVar9 = iVar17 - iVar15;
                      plVar11 = (long *)(**(code **)*puVar5)(puVar5);
                      uVar10 = (**(code **)(*plVar11 + 0x20))();
                      if ((((uVar9 < uVar10) && (lVar14 = *(long *)(lVar13 + 0x1b8), lVar14 != 0))
                          && (uVar6 < *(uint *)(lVar13 + 0x1c8))) &&
                         (uVar9 < *(uint *)(lVar13 + 0x1cc))) {
                        uVar6 = uVar6 + *(uint *)(lVar13 + 0x1c8) * uVar9;
                        iVar15 = *(int *)(lVar13 + 0x1c4);
                        *(int *)(lVar13 + 0x1c4) = iVar15 + 1;
                        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar13 + 0x1c0))) {
                          lVar7 = (ulong)(uVar6 >> 5) * 4;
                          *(uint *)(lVar14 + lVar7) =
                               *(uint *)(lVar14 + lVar7) | 1 << (ulong)(uVar6 & 0x1f);
                          iVar15 = *(int *)(lVar13 + 0x1c4) + -1;
                        }
                        *(int *)(lVar13 + 0x1c4) = iVar15;
                      }
                    }
                    if (iVar22 < (int)local_f8) {
                      iVar22 = iVar22 + 1;
                    }
                    else {
                      iVar17 = iVar17 + 1;
                      iVar22 = (int)local_108;
                    }
                  } while ((iVar21 != iVar22) || (iVar12 != iVar17));
                }
              }
              puVar18 = PTR_DAT_04bb2010;
            }
            if (local_c0 < *(int *)(local_d0 + 1)) {
              local_c0 = local_c0 + 1;
            }
            else {
              local_bc = local_bc + 1;
              local_c0 = *(int *)(local_d8 + 1);
            }
          } while ((iVar8 != local_c0) || (iVar1 != local_bc));
          iVar12 = *(int *)(param_1 + 0x198);
        }
      }
    } while (iVar12 != 0);
  }
  return;
}

