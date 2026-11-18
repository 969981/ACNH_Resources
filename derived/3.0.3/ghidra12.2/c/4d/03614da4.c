
/* WARNING: Type propagation algorithm not settling */

bool FUN_03614da4(long param_1,ulong *param_2,ulong param_3)

{
  undefined8 *******__dest;
  ulong *******pppppppuVar1;
  ulong ******ppppppuVar2;
  ulong ******ppppppuVar3;
  ulong ******ppppppuVar4;
  ulong ******ppppppuVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  ulong ******ppppppuVar8;
  ulong ******ppppppuVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong ******ppppppuVar18;
  long lVar19;
  ulong ******ppppppuVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong local_121;
  ulong local_119;
  ulong local_111;
  ulong local_109;
  ulong local_101;
  uint local_f8 [2];
  undefined8 local_f0;
  ulong local_e8;
  long *local_e0;
  ulong *******local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  long *local_b8;
  undefined8 *******local_b0 [2];
  bool local_a0;
  ulong local_9f;
  undefined7 local_97;
  undefined4 uStack_90;
  undefined5 uStack_8c;
  undefined8 local_87;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  
  if (*(int *)(param_1 + 0xf68) == 2) {
    lVar17 = 0x2020;
  }
  else {
    lVar17 = *(long *)(&DAT_04197028 + (long)*(char *)(*(long *)(param_1 + 0xec8) + 0x149) * 8);
  }
  lVar19 = (ulong)*(ushort *)(param_1 + 0xf88) << 1;
  if (*(int *)(param_1 + 0xf68) != 6) {
    lVar19 = 0;
  }
  if ((*(byte *)(param_1 + 0xec5) >> 1 & 1) == 0) {
    return true;
  }
  lVar19 = lVar19 + lVar17;
  if (param_3 < lVar19 + 0x28U) {
LAB_0361505c:
    bVar11 = false;
  }
  else {
    if (lVar19 + 0x28U == param_3) {
      uVar22 = 0;
      puVar24 = param_2 + 5;
    }
    else {
      local_f0 = 0;
      local_e8 = 0x1e;
      local_c8 = 0;
      local_c0 = 0x1e;
      local_e0 = *(long **)PTR_DAT_04bdf328;
      local_d8[0] = (ulong *******)0x0;
      local_b0[0] = (undefined8 *******)0x0;
      local_b8 = local_e0;
      if ((int)*param_2 != 0x4d415253) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      }
      uVar22 = *(uint *)((long)param_2 + 4);
      if (3 < uVar22) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      }
      local_f8[0] = uVar22;
      iVar12 = FUN_036152e8(&local_f0,0x28,0x20);
      if (iVar12 != 0) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      }
      ppppppuVar5 = (ulong ******)param_2[3];
      pppppppuVar1 = (ulong *******)local_d8;
      if ((local_e8 & 1) != 0) {
        pppppppuVar1 = local_d8[0];
      }
      ppppppuVar2 = (ulong ******)param_2[4];
      ppppppuVar6 = (ulong ******)param_2[5];
      pppppppuVar1[1] = (ulong ******)param_2[2];
      pppppppuVar1[2] = ppppppuVar5;
      pppppppuVar1[3] = ppppppuVar2;
      pppppppuVar1[4] = ppppppuVar6;
      *pppppppuVar1 = (ulong ******)param_2[1];
      if (uVar22 < 2) {
        param_2 = param_2 + 6;
      }
      else {
        uVar23 = (ulong)(uint)param_2[6];
        iVar12 = FUN_036152e8(&local_c8,uVar23,0x20);
        if (iVar12 != 0) {
          FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        }
        __dest = local_b0;
        if ((local_c0 & 1) != 0) {
          __dest = local_b0[0];
        }
        memcpy(__dest,(void *)((long)param_2 + 0x34),uVar23);
        puVar24 = (ulong *)((long)param_2 + 0x34 + uVar23);
        param_2 = puVar24;
        if (2 < uVar22) {
          param_2 = (ulong *)((long)puVar24 + 1);
          local_a0 = (char)*puVar24 != '\0';
          if ((char)*puVar24 != '\0') {
            local_9f = *param_2;
            local_97 = (undefined7)*(undefined8 *)((long)puVar24 + 9);
            uStack_90._0_1_ = (undefined1)((ulong)*(undefined8 *)((long)puVar24 + 9) >> 0x38);
            param_2 = (ulong *)((long)puVar24 + 0x21);
            uStack_90._1_3_ = (undefined3)*(undefined8 *)((long)puVar24 + 0x11);
            uStack_8c = (undefined5)((ulong)*(undefined8 *)((long)puVar24 + 0x11) >> 0x18);
            local_87 = *(undefined8 *)((long)puVar24 + 0x19);
          }
        }
      }
      uVar23 = local_e8 & 1;
      pppppppuVar1 = (ulong *******)local_d8;
      if (uVar23 != 0) {
        pppppppuVar1 = local_d8[0];
      }
      ppppppuVar5 = pppppppuVar1[2];
      ppppppuVar2 = pppppppuVar1[3];
      puVar24 = (ulong *)(param_1 + 0x48);
      if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
        puVar24 = *(ulong **)(param_1 + 0x48);
      }
      ppppppuVar6 = *pppppppuVar1;
      ppppppuVar7 = pppppppuVar1[1];
      ppppppuVar18 = pppppppuVar1[4];
      ppppppuVar3 = (ulong ******)*puVar24;
      ppppppuVar8 = (ulong ******)puVar24[1];
      ppppppuVar4 = (ulong ******)puVar24[2];
      ppppppuVar9 = (ulong ******)puVar24[3];
      ppppppuVar20 = (ulong ******)puVar24[4];
      if ((((ppppppuVar6 == ppppppuVar3 && ppppppuVar7 == ppppppuVar8) && ppppppuVar5 == ppppppuVar4
           ) && ppppppuVar2 == ppppppuVar9) && ppppppuVar18 == ppppppuVar20) {
        puVar24 = param_2 + 5;
        uVar22 = local_f8[0];
        if (2 < local_f8[0]) {
          if (*(int *)(param_1 + 0xf68) == 2) {
            lVar17 = 0x2000;
          }
          else {
            lVar17 = *(long *)(&DAT_04197058 +
                              (long)*(char *)(*(long *)(param_1 + 0xec8) + 0x149) * 8);
          }
          uVar21 = (uint)*(byte *)(param_1 + 0x1010);
          lVar19 = (ulong)*(ushort *)(param_1 + 0xf88) << 1;
          if (*(int *)(param_1 + 0xf68) != 6) {
            lVar19 = 0;
          }
          lVar19 = lVar19 + lVar17;
          if ((*(byte *)(param_1 + 0x1010) >> 6 & 1) == 0) {
            if (0x3fffff < (ulong)(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0xff8))) {
              uVar14 = (uint)*(byte *)(param_1 + 0x100c);
              lVar17 = -*(long *)(param_1 + 0xff8);
              uVar13 = (uint)*(byte *)(param_1 + 0x100d);
              uVar15 = (uint)*(byte *)(param_1 + 0x100e);
              uVar16 = (ulong)*(byte *)(param_1 + 0x100f);
              do {
                lVar17 = lVar17 + -0x400000;
                uVar15 = uVar14 + (uVar13 + (uVar15 + ((uVar21 & 1) << 8 | (uint)uVar16) * 0x18) *
                                            0x3c) * 0x3c + 1;
                uVar21 = uVar15 / 0x1518000 & 1 | uVar21;
                uVar14 = uVar15 % 0x3c;
                uVar13 = uVar15 / 0x3c + (uVar15 / 0xe10) * -0x3c;
                uVar16 = (ulong)uVar15 / 0x15180 & 0xff;
                uVar15 = uVar15 / 0xe10 + ((uVar15 / 0xe10 & 0xffff) / 0x18) * -0x18 & 0xffff;
              } while ((ulong)(*(long *)(param_1 + 0x110) + lVar17) >> 0x16 != 0);
              *(byte *)(param_1 + 0x100c) = (byte)uVar14;
              *(char *)(param_1 + 0x100d) = (char)uVar13;
              *(char *)(param_1 + 0x100e) = (char)uVar15;
              *(long *)(param_1 + 0xff8) = -lVar17;
            }
          }
          *(ulong *)(param_1 + 0x1004) = local_9f;
          *(ulong *)(param_1 + 0x100c) = CONCAT17((undefined1)uStack_90,local_97);
          *(ulong *)(param_1 + 0x1014) = CONCAT53(uStack_8c,uStack_90._1_3_);
          *(undefined8 *)(param_1 + 0x101c) = local_87;
        }
      }
      else {
        lVar19 = 0;
        puVar24 = (ulong *)0x0;
        param_2 = (ulong *)0x0;
        uVar22 = 0;
      }
      if ((local_c0 & 1) != 0) {
        (**(code **)(*local_b8 + 0x18))(local_b8,local_b0[0]);
        uVar23 = local_e8 & 1;
      }
      if (uVar23 != 0) {
        (**(code **)(*local_e0 + 0x18))(local_e0,local_d8[0]);
      }
      if ((((ppppppuVar6 != ppppppuVar3 || ppppppuVar7 != ppppppuVar8) || ppppppuVar5 != ppppppuVar4
           ) || ppppppuVar2 != ppppppuVar9) || ppppppuVar18 != ppppppuVar20) goto LAB_0361505c;
    }
    uStack_90 = 0;
    nn::crypto::detail::Sha1Impl::Initialize();
    nn::crypto::detail::Sha1Impl::Update(local_f8,(ulong)puVar24);
    nn::crypto::detail::Sha1Impl::GetHash(local_f8,(ulong)&local_74);
    uVar21 = (local_74 & 0xff00ff00) >> 8 | (local_74 & 0xff00ff) << 8;
    uVar15 = (uStack_70 & 0xff00ff00) >> 8 | (uStack_70 & 0xff00ff) << 8;
    uVar14 = (local_6c & 0xff00ff00) >> 8 | (local_6c & 0xff00ff) << 8;
    uVar13 = (uStack_68 & 0xff00ff00) >> 8 | (uStack_68 & 0xff00ff) << 8;
    uVar10 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    FUN_04002a40(&local_121,0x29,"%08x%08x%08x%08x%08x",uVar21 >> 0x10 | uVar21 << 0x10,
                 uVar15 >> 0x10 | uVar15 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar13 >> 0x10 | uVar13 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
    nn::crypto::detail::Sha1Impl::~Sha1Impl((Sha1Impl *)local_f8);
    bVar11 = (((local_121 ^ *param_2) == 0 && (local_119 ^ param_2[1]) == 0) &&
             ((local_111 ^ param_2[2]) == 0 && (local_109 ^ param_2[3]) == 0)) &&
             (local_101 ^ param_2[4]) == 0;
    if ((((local_121 ^ *param_2) == 0 && (local_119 ^ param_2[1]) == 0) &&
        ((local_111 ^ param_2[2]) == 0 && (local_109 ^ param_2[3]) == 0)) &&
        (local_101 ^ param_2[4]) == 0) {
      FUN_03601f00(param_1 + 0xec0,puVar24,lVar19,uVar22);
    }
  }
  return bVar11;
}

