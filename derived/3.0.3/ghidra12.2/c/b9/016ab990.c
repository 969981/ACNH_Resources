
void FUN_016ab990(undefined8 param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  undefined **local_1c8;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [7];
  undefined1 local_1ad;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 *******pppppppuStack_190;
  undefined8 *******local_188;
  undefined8 ******local_180;
  undefined8 *****local_178;
  undefined8 ****local_170;
  undefined8 ***local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148 [8];
  uint local_108;
  int iStack_104;
  long *local_100;
  undefined8 *******local_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******local_e8;
  undefined8 ******local_e0;
  undefined8 *****local_d8;
  undefined8 ****local_d0;
  undefined8 ***local_c8;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long local_a8 [9];
  
  if (DAT_05574040 != 0) {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar7 == 0) {
        return;
      }
      lVar7 = lVar7 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return;
      }
      lVar7 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar7 == 0) {
        return;
      }
    }
    if (*(long **)(lVar7 + 0x2181c8) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar11 = (undefined8 *)**(long **)(lVar7 + 0x2181c8);
      uVar8 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar11)();
      }
    }
    bVar6 = *(byte *)(*(long *)(lVar7 + 0x2181b0) + *(long *)(lVar7 + 0x2181a8) + 0x179d0);
    bVar4 = bVar6;
    if (7 < bVar6) {
      bVar4 = 0xff;
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x2181c8) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x2181c8) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    local_e8 = &local_e0;
    local_e0 = &local_d8;
    iStack_104 = 0;
    local_100 = (long *)0x0;
    local_d8 = &local_d0;
    local_d0 = &local_c8;
    local_f8 = &local_e8;
    local_c8 = &local_c0;
    local_c0 = &local_b8;
    local_b8 = &local_b0;
    local_b0 = 0;
    if (local_a8 != (long *)0x0) {
      iStack_104 = 8;
      local_100 = local_a8;
    }
    local_108 = 0;
    local_1a8 = (undefined **)(((ulong)local_1a8 >> 8 & 0xffffff) << 8);
    pppppppuStack_f0 = local_f8;
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(1,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(2,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(3,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(4,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(5,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(6,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    local_1a8._0_4_ = (uint)local_1a8 & 0xffffff00;
    local_1a8 = (undefined **)CONCAT44(7,(uint)local_1a8);
    uVar8 = FUN_016cedbc(&local_1a8);
    pppppppuVar13 = local_f8;
    if (((uVar8 & 1) != 0) && ((int)local_108 < iStack_104)) {
      if (local_f8 != (undefined8 *******)0x0) {
        local_f8 = (undefined8 *******)*local_f8;
      }
      *pppppppuVar13 = (undefined8 ******)local_1a8;
      if ((int)local_108 < iStack_104) {
        local_100[(int)local_108] = (long)pppppppuVar13;
        local_108 = local_108 + 1;
      }
    }
    uVar1 = param_2 - (uint)(bVar6 < 8);
    if (uVar1 == local_108) {
      if (local_108 != 0) {
        lVar22 = (long)(int)local_108 << 3;
        plVar19 = local_100;
        do {
          lVar15 = *plVar19;
          if (*(long **)(lVar7 + 0x2181c8) == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            puVar11 = (undefined8 *)**(long **)(lVar7 + 0x2181c8);
            uVar8 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar8 = (**(code **)*puVar11)();
            }
          }
          pbVar2 = (byte *)(*(long *)(lVar7 + 0x2181b0) + *(long *)(lVar7 + 0x2181a8));
          uVar1 = *(uint *)(lVar15 + 4);
          pbVar3 = pbVar2 + (ulong)uVar1 * 3;
          if (7 < uVar1) {
            pbVar3 = pbVar2;
          }
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x2181c8) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x2181c8) + 8),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
          pppppppuStack_190._0_4_ = (uint)(uint3)pppppppuStack_190;
          local_198 = (undefined8 *******)CONCAT35(local_198._5_3_,8);
          local_1a8 = &PTR_LAB_04908da0;
          local_1a0 = (undefined8 *)((long)&local_198 + 4);
          FUN_038d1270(&local_1a8,"-----");
          if ((ulong)*pbVar3 < 0x23) {
            FUN_038d1270(&local_1a8,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar3 * 8 + 0xb0),pbVar3[1]);
          }
          FUN_016c92d0(&local_1a8,lVar15);
          plVar19 = plVar19 + 1;
          lVar22 = lVar22 + -8;
        } while (lVar22 != 0);
      }
    }
    else {
      local_1a8 = (undefined **)0x0;
      local_1a0 = (undefined8 *)0x0;
      local_188 = &local_180;
      local_180 = &local_178;
      local_198 = &local_188;
      local_178 = &local_170;
      local_170 = &local_168;
      local_168 = &local_160;
      local_160 = &local_158;
      local_158 = &local_150;
      local_150 = 0;
      if (local_148 != (undefined8 *)0x0) {
        local_1a8 = (undefined **)0x800000000;
        local_1a0 = local_148;
      }
      pppppppuStack_190 = local_198;
      puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar16 = puVar9[3];
      uVar20 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      uVar18 = uVar20 ^ uVar16;
      uVar20 = uVar20 >> 8 ^ uVar16 >> 0x13 ^ uVar18;
      puVar9[2] = uVar16;
      puVar9[3] = uVar20;
      if (0 < (int)uVar1) {
        uVar16 = 0;
        uVar20 = (uVar20 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
        uVar18 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 2;
        uVar21 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
        uVar23 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 4;
        do {
          pppppppuVar13 = local_198;
          uVar20 = uVar20 ^ uVar20 << 0xb;
          uVar5 = uVar23 >> 0x13 ^ uVar20 >> 8 ^ uVar23 ^ uVar20;
          uVar8 = (ulong)local_108 * (ulong)uVar5;
          lVar22 = (long)uVar8 >> 0x20;
          if ((int)(uint)local_1a8 < local_1a8._4_4_) {
            if (local_198 != (undefined8 *******)0x0) {
              local_198 = (undefined8 *******)*local_198;
            }
            *pppppppuVar13 = *(undefined8 *******)local_100[lVar22];
            if ((int)(uint)local_1a8 < local_1a8._4_4_) {
              local_1a0[(int)(uint)local_1a8] = pppppppuVar13;
              local_1a8 = (undefined **)CONCAT44(local_1a8._4_4_,(uint)local_1a8 + 1);
            }
          }
          iVar14 = (int)(uVar8 >> 0x20);
          if (iVar14 < (int)local_108) {
            pppppppuVar13 = local_f8;
            do {
              local_f8 = (undefined8 *******)local_100[lVar22];
              lVar22 = lVar22 + 1;
              *local_f8 = pppppppuVar13;
              pppppppuVar13 = local_f8;
            } while (lVar22 < (long)(uVar8 + 0x100000000) >> 0x20);
          }
          if ((-1 < (long)uVar8) && (iVar14 < (int)local_108)) {
            iVar14 = iVar14 + 1;
            uVar20 = local_108 - iVar14;
            if (uVar20 != 0 && iVar14 <= (int)local_108) {
              memmove(local_100 + (uVar8 >> 0x20),local_100 + iVar14,
                      -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3);
            }
            local_108 = local_108 - 1;
          }
          uVar16 = uVar16 + 1;
          uVar20 = uVar18;
          uVar18 = uVar21;
          uVar21 = uVar23;
          uVar23 = uVar5;
        } while (uVar16 != uVar1);
      }
      iVar17 = 0;
      iVar14 = 0;
      do {
        if ((char)bVar4 != iVar14) {
          lVar22 = lVar7 + 0x218210 + (long)iVar17 * 0x38;
          if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar11 == (undefined8 *)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)*puVar11)();
            uVar8 = uVar8 & 0xffffffff;
          }
          pbVar2 = (byte *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8));
          uVar12 = (ulong)*pbVar2;
          if (((0x22 < uVar12) || (bVar6 = pbVar2[1], (byte)PTR_DAT_04bc27f0[uVar12] < bVar6)) ||
             (((uint)(&DAT_053e6eb8)[uVar12] >> (ulong)(bVar6 & 0x1f) & 1) == 0)) {
            if ((uVar8 & 1) == 0) {
              return;
            }
            if (*(long *)(lVar22 + 0x28) == 0) {
              return;
            }
            puVar11 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8);
            if (puVar11 == (undefined8 *)0x0) {
              return;
            }
            (**(code **)*puVar11)();
            return;
          }
          local_1ad = 0;
          local_1b8 = 8;
          local_1b4[0] = 0;
          local_1c8 = &PTR_LAB_04908da0;
          pbVar2 = (byte *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8));
          puStack_1c0 = local_1b4;
          FUN_038d1270(&local_1c8,"-----");
          uVar12 = (ulong)*pbVar2;
          if (uVar12 < 0x23) {
            FUN_038d1270(&local_1c8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                         pbVar2[1]);
          }
          FUN_016c92d0(&local_1c8,*local_1a0);
          if (0 < (int)(uint)local_1a8) {
            pppppppuVar13 = (undefined8 *******)*local_1a0;
            *pppppppuVar13 = local_198;
            local_198 = pppppppuVar13;
            if (0 < (int)(uint)local_1a8) {
              if ((uint)local_1a8 - 1 == 0) {
                iVar10 = 1;
              }
              else {
                memmove(local_1a0,local_1a0 + 1,(ulong)((uint)local_1a8 - 1) << 3);
                iVar10 = (uint)local_1a8;
              }
              local_1a8 = (undefined **)CONCAT44(local_1a8._4_4_,iVar10 + -1);
            }
          }
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar11 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar11)();
          }
        }
        iVar14 = iVar14 + 1;
        iVar17 = iVar17 + 1;
      } while (iVar14 != 8);
    }
  }
  return;
}

