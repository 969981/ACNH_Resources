
uint FUN_023ddd7c(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
                 ulong param_5)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  byte bVar18;
  undefined8 *puVar19;
  byte bVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 uStack_86;
  uint uStack_85;
  undefined1 local_81;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_64;
  
  if (*(long *)(param_4 + 0x70) == 0) {
    uVar15 = 0;
LAB_023dddf4:
    local_bc = CONCAT44(local_bc._4_4_,uVar15);
    local_a8 = 0;
    if (uVar15 != 0x48) {
      pbVar1 = (byte *)(param_4 + 0x1ee8);
      lVar17 = *(long *)PTR_DAT_04bb39b0;
      pbVar16 = PTR_DAT_04bb32e0;
      if (lVar17 == 0) {
LAB_023ddea4:
        if (*pbVar16 < 8) goto LAB_023ddf10;
LAB_023ddeb0:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_023ddf08:
          pbVar16 = PTR_DAT_04bb5038;
          goto LAB_023ddf10;
        }
        lVar17 = **(long **)PTR_DAT_04bb27d0;
        bVar18 = *(byte *)(lVar17 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar18 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
          if (7 < bVar18) {
            puVar2 = (uint *)(lVar17 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar16 = (byte *)(lVar17 + 0x471);
          }
        }
        bVar18 = *pbVar16;
        if (7 < bVar18) goto LAB_023ddf08;
      }
      else {
        if (*(int *)(lVar17 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar17 + 0x158);
        }
        if (7 < *pbVar16) {
          if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_023ddea4;
          }
          goto LAB_023ddeb0;
        }
LAB_023ddf10:
        bVar18 = *pbVar16;
        if (7 < bVar18) {
          bVar18 = 0xff;
        }
      }
      if (7 < bVar18) {
        bVar18 = 0xff;
      }
      bVar14 = *pbVar1;
      bVar20 = bVar14;
      if (7 < bVar14) {
        bVar20 = 0xff;
      }
      if ((bVar18 == bVar20) && (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 != -1)) {
        local_a8 = 0;
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 & 1) == 0) goto LAB_023ddfac;
        local_a8 = 0xfffe;
        FUN_0277d4ac(&local_a8);
        uVar11 = FUN_02167eb8(&local_a8);
        if ((uVar11 & 1) == 0) {
          bVar14 = *pbVar1;
          goto LAB_023ddfac;
        }
        goto LAB_023de194;
      }
LAB_023ddfac:
      puVar8 = PTR_DAT_04bbc1a0;
      puVar7 = PTR_DAT_04bb37e0;
      puVar5 = PTR_DAT_04bb2010;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_98 = PTR_DAT_04bbc1a0 + 0x10;
      local_90 = PTR_DAT_04bb2010 + 0x10;
      local_88 = (undefined2)DAT_054b22d8;
      uStack_86 = (undefined1)((uint)DAT_054b22d8 >> 0x10);
      uStack_85._1_3_ = (undefined3)DAT_054b22dc;
      uStack_85 = CONCAT31(uStack_85._1_3_,(char)((uint)DAT_054b22d8 >> 0x18));
      local_81 = (undefined1)((uint)DAT_054b22dc >> 0x18);
      local_a8 = CONCAT71(local_a8._1_7_,bVar14);
      uStack_80 = SUB82(local_90,0);
      uStack_7e = (undefined1)((ulong)local_90 >> 0x10);
      uStack_7d = (undefined1)((ulong)local_90 >> 0x18);
      uStack_7c = (undefined4)((ulong)local_90 >> 0x20);
      local_78 = DAT_054b22e8;
      uStack_74 = DAT_054b22ec;
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(PTR_DAT_04bb37e0 + 4));
      local_a8._4_4_ = *(uint *)PTR_DAT_04bb37e0;
      uVar11 = FUN_01512a38(&local_a8);
      puVar6 = PTR_DAT_04bb32e0;
      uVar15 = 0;
      if (((uVar11 & 1) == 0) ||
         (local_a8 = (ulong)local_a8._4_4_ << 0x20,
         (*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0)) goto LAB_023dde14;
      pbVar16 = PTR_DAT_04bb32e0;
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a4);
      }
      if (*pbVar16 < 8) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          iVar9 = FUN_02582d8c(pbVar16,2);
          if (iVar9 < 0) goto LAB_023de0a0;
        }
        else {
          local_a8 = CONCAT71(local_a8._1_7_,*pbVar16);
          uVar11 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_a8);
          if ((uVar11 & 1) == 0) goto LAB_023de0a0;
        }
      }
      else {
LAB_023de0a0:
        uVar11 = FUN_023de480(param_4);
        if ((uVar11 & 1) != 0) {
          uVar21 = *(uint *)(param_4 + 0x1810);
          uVar10 = uVar21 & 0xfffffff7;
          if (uVar10 == 1) {
            lVar17 = FUN_0231e70c(param_4);
            if ((lVar17 != 0) && (uVar11 = FUN_0277d9a8(param_4 + 0x2238), (uVar11 & 1) != 0)) {
              local_98 = puVar8 + 0x10;
              local_90 = puVar5 + 0x10;
              uStack_80 = SUB82(local_90,0);
              uStack_7e = (undefined1)((ulong)local_90 >> 0x10);
              uStack_7d = (undefined1)((ulong)local_90 >> 0x18);
              uStack_7c = (undefined4)((ulong)local_90 >> 0x20);
              local_78 = DAT_054b22e8;
              uStack_74 = DAT_054b22ec;
              local_88 = (undefined2)DAT_054b22d8;
              uStack_86 = (undefined1)((uint)DAT_054b22d8 >> 0x10);
              uStack_85._1_3_ = (undefined3)DAT_054b22dc;
              uStack_85 = CONCAT31(uStack_85._1_3_,(char)((uint)DAT_054b22d8 >> 0x18));
              local_81 = (undefined1)((uint)DAT_054b22dc >> 0x18);
              bVar18 = *pbVar1;
              if (7 < bVar18) {
                bVar18 = 0xff;
              }
              local_a8 = CONCAT71(local_a8._1_7_,bVar18);
              local_a8 = CONCAT44(*(undefined4 *)(param_4 + 0x2238),(undefined4)local_a8);
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_4 + 0x223c));
              uVar11 = FUN_01512e10(&local_a8);
              if ((uVar11 & 1) == 0) goto LAB_023de194;
            }
            uVar21 = *(uint *)(param_4 + 0x1810);
          }
          else {
            uVar15 = 0;
            if ((7 < uVar21) || ((1 << (ulong)(uVar21 & 0x1f) & 0x8cU) == 0)) goto LAB_023dde14;
          }
          if ((*(byte *)(param_4 + 0x17d0) >> 6 & 1) == 0) {
            FUN_016debb0(param_4);
            uVar11 = FUN_0170bf6c();
            if (((uVar11 & 1) == 0) &&
               ((*(long *)(param_4 + 0x70) == 0 ||
                (2 < *(int *)(*(long *)(param_4 + 0x70) + 0x280) - 0x10aU)))) {
              lVar17 = FUN_0231e70c(param_4);
              if (uVar10 == 1) {
                if (lVar17 == 0) goto LAB_023de194;
              }
              else {
                if (uVar21 == 7) {
                  local_a0 = puVar5 + 0x10;
                  local_98 = (undefined *)0x0;
                  local_a8 = *(long *)puVar7;
                  uStack_7c = 0;
                  local_90 = (undefined *)0x0;
                  local_88 = 0;
                  uStack_86 = 0;
                  uStack_85 = 0;
                  bVar18 = *pbVar1;
                  puVar3 = &DAT_054e9a58;
                  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
                    puVar3 = *(undefined8 **)(param_4 + 0x4c8);
                  }
                  local_b4 = *(undefined4 *)(puVar3 + 0x50);
                  local_81 = 0;
                  uStack_80 = 0;
                  uStack_7e = 0;
                  if (7 < bVar18) {
                    bVar18 = 0xff;
                  }
                  local_bc = puVar3[0x4f];
                  local_b0 = *(float *)((long)puVar3 + 0x2b4);
                  local_ac = CONCAT11(*(int *)(param_4 + 0x1810) == 7,bVar18);
                  local_64 = 2;
                  uVar11 = FUN_01508a18(&local_a8,&local_bc,&local_64);
                }
                else {
                  local_a0 = puVar5 + 0x10;
                  local_98 = (undefined *)0x0;
                  local_a8 = *(long *)puVar7;
                  uStack_7c = 0;
                  local_90 = (undefined *)0x0;
                  local_88 = 0;
                  uStack_86 = 0;
                  uStack_85 = 0;
                  puVar3 = &DAT_054e9a58;
                  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
                    puVar3 = *(undefined8 **)(param_4 + 0x4c8);
                  }
                  bVar18 = *pbVar1;
                  local_b4 = *(undefined4 *)(puVar3 + 0x50);
                  local_81 = 0;
                  uStack_80 = 0;
                  uStack_7e = 0;
                  if (7 < bVar18) {
                    bVar18 = 0xff;
                  }
                  local_bc = puVar3[0x4f];
                  local_b0 = *(float *)((long)puVar3 + 0x2b4);
                  local_ac = (ushort)bVar18;
                  uVar11 = FUN_01507210(&local_a8,&local_bc);
                }
                uVar15 = 0;
                if ((uVar11 & 1) == 0) goto LAB_023dde14;
              }
              if ((*(char *)(param_4 + 0x7fd) != '\0') &&
                 (*(int *)(param_4 + 0x7f0) < *(int *)(param_4 + 0x7f8))) {
                uVar11 = FUN_0231e7ec(param_4,0,0);
                uVar15 = 0;
                if ((uVar11 & 1) != 0) {
                  FUN_023de684(param_4);
                  uVar15 = 0;
                }
                goto LAB_023dde14;
              }
              if (((uVar21 & 0xfffffffe) == 2) || (lVar17 == 0)) {
                puVar3 = &DAT_054e9a58;
                if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
                  puVar3 = *(undefined8 **)(param_4 + 0x4c8);
                }
                puVar19 = puVar3 + 0x4f;
                lVar17 = (long)puVar3 + 0x2b4;
              }
              else {
                puVar19 = (undefined8 *)(lVar17 + 0x14);
                lVar17 = lVar17 + 0x24;
              }
              if (uVar10 == 1) {
                lVar12 = FUN_0251e98c(1);
                pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x2a0) + 0xf0))(lVar12 + 0x2a0);
                fVar24 = *pfVar13 * 0.98;
                uVar11 = FUN_016e9008(fVar24,puVar19,0x77,0,0,0,0);
                uVar15 = 0;
                if ((uVar11 & 1) != 0) goto LAB_023dde14;
                local_aa = 0;
                uVar23 = *(undefined4 *)((long)puVar19 + 4);
                local_bc = *puVar19;
                local_b4 = *(undefined4 *)(puVar19 + 1);
                local_ac = 1;
                local_b0 = fVar24;
                uVar11 = FUN_016e9c68(&local_bc);
                if (((uVar11 & 1) == 0) &&
                   (uVar11 = FUN_016eafec(fVar24,puVar19,0,0,0), (uVar11 & 1) != 0))
                goto LAB_023de194;
                bVar18 = *puVar6;
                local_a8 = 0;
                local_a0 = (undefined *)0x3f80000000000000;
                local_90 = (undefined *)0xbf8000000000001f;
                local_88 = 0x101;
                if (7 < bVar18) {
                  bVar18 = 0xff;
                }
                local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar18);
                local_98 = (undefined *)
                           CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(undefined4)local_98);
                uStack_86 = 1;
                uStack_85 = uStack_85 & 0xff;
                local_81 = 0;
                uStack_80 = 0;
                uStack_7e = 1;
                uStack_7d = 0;
                uVar22 = FUN_016e45b0(0x40f00000,puVar19,lVar17);
                uStack_86 = 0;
                bVar18 = *pbVar1;
                local_a8 = CONCAT44(uVar23,uVar22);
                local_a0 = (undefined *)CONCAT44(0x40100000,param_3);
                uStack_80 = 0x100;
                if (7 < bVar18) {
                  bVar18 = 0xff;
                }
                local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar18);
                local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
                uVar10 = FUN_0251fad0(&local_a8,0);
                uVar15 = uVar10 ^ 1;
                if (((uVar10 & 1) != 0) || ((param_5 & 1) != 0)) goto LAB_023dde14;
              }
              else if ((param_5 & 1) != 0) goto LAB_023dde10;
              FUN_023de7c4(param_4,puVar19,lVar17);
              goto LAB_023dde10;
            }
          }
        }
      }
LAB_023de194:
      uVar15 = 0;
      goto LAB_023dde14;
    }
  }
  else {
    uVar10 = *(uint *)(*(long *)(param_4 + 0x70) + 0x280);
    uVar15 = 0;
    if (uVar10 < 0x149) {
      uVar15 = uVar10;
    }
    if (uVar15 != 0x47) goto LAB_023dddf4;
  }
LAB_023dde10:
  uVar15 = 1;
LAB_023dde14:
  return uVar15 & 1;
}

