
int FUN_02900bd0(undefined8 param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  undefined **local_88;
  uint *puStack_80;
  undefined1 auStack_68 [8];
  
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar6 = puVar7[3];
  iVar13 = 0;
  uVar4 = *puVar7 ^ *puVar7 << 0xb;
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar5 = uVar4 ^ uVar6;
  uVar4 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar5;
  puVar7[2] = uVar6;
  puVar7[3] = uVar4;
  puVar3 = PTR_DAT_04bb43c0;
  local_98 = (uVar4 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uStack_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 2;
  local_90 = (uStack_94 ^ uStack_94 >> 0x1e) * 0x6c078965 + 3;
  uStack_8c = (local_90 ^ local_90 >> 0x1e) * 0x6c078965 + 4;
  if ((param_2 != (long *)0x0) && (0 < param_3)) {
    iVar13 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar14 = (undefined4 *)PTR_DAT_04bb37e0;
    do {
      lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar11 = 0;
      iVar10 = 0;
      do {
        puVar7 = (uint *)(lVar8 + lVar11);
        lVar11 = lVar11 + 4;
        uVar4 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        iVar10 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar10;
      } while (lVar11 != 0x754);
      if (iVar10 == 0) {
        return iVar13;
      }
      lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar11 = 0;
      iVar10 = 0;
      do {
        puVar7 = (uint *)(lVar8 + lVar11);
        lVar11 = lVar11 + 4;
        uVar4 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        iVar10 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar10;
      } while (lVar11 != 0x754);
      if (iVar10 == 0) {
        local_a0 = *puVar14;
        uStack_9c = puVar14[1];
      }
      else {
        lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
        lVar11 = 0;
        uVar4 = 0;
        do {
          puVar7 = (uint *)(lVar8 + lVar11);
          lVar11 = lVar11 + 4;
          uVar5 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar4 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar4;
        } while (lVar11 != 0x754);
        uVar5 = local_98 ^ local_98 << 0xb;
        local_98 = uStack_94;
        uStack_94 = local_90;
        uVar5 = uVar5 >> 8 ^ uStack_8c >> 0x13 ^ uVar5 ^ uStack_8c;
        local_90 = uStack_8c;
        uStack_8c = uVar5;
        FUN_00889f80(&local_a0,param_2,(int)((ulong)uVar5 * (ulong)uVar4 >> 0x20) + 1);
        FUN_01a4c66c(&local_98,&local_a0);
      }
      lVar11 = *(long *)puVar3;
      uVar4 = FUN_0277d6c4(&local_a0);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_02901aa0(param_1,&local_a0);
          local_a8 = (uint *)0x0;
          lVar11 = *(long *)puVar3;
          local_b0 = local_a0;
          uStack_ac = uStack_9c;
          local_b8 = puVar1;
          uVar5 = FUN_0277d6c4(&local_b0);
          uVar4 = 0;
          if (*(long *)puVar3 == 0) goto LAB_02900fc8;
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(&local_a0);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
               (puVar7 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
               puVar7 == (uint *)0x0)) goto LAB_02900fc4;
            uVar5 = *puVar7;
            local_a8 = puVar7;
            uVar4 = 0;
            if ((uVar5 != 0) && (puVar7 != (uint *)(ulong)uVar5)) {
              puVar12 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
              uVar4 = 0;
              if (*puVar12 != 0) {
                uVar4 = puVar12[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar11 != 0) {
                    uVar5 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar5 = (uint)((ulong)((long)puVar7 - lVar11) / (ulong)uVar4);
                    }
                    if (*puVar12 <= uVar5) {
                      uVar5 = 0xffffffff;
                    }
                    if ((uVar5 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar5 * 2),
                       uVar4 = (uint)uVar2, uVar2 < 0x5b6)) goto LAB_02900fc8;
                  }
                }
                goto LAB_02900fc4;
              }
            }
          }
          else {
LAB_02900fc4:
            uVar4 = 0;
          }
LAB_02900fc8:
          local_bc = uVar4;
          uVar4 = 0;
          puStack_80 = &local_bc;
          local_88 = &PTR_FUN_049ff858;
          do {
            (**(code **)(*param_2 + 0x10))(auStack_68,param_2,uVar4);
            lVar11 = (**(code **)(*param_2 + 0x20))(param_2);
            uVar5 = 1 << (ulong)(uVar4 & 0x1f);
            if ((*(uint *)(lVar11 + (ulong)(uVar4 >> 5) * 4) & uVar5) != 0) {
              lVar11 = *(long *)puVar3;
              uVar6 = FUN_0277d6c4(auStack_68);
              if (*(long *)puVar3 != 0) {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if (((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
                   (uVar9 = (*(code *)*local_88)(&local_88,auStack_68), (uVar9 & 1) == 0))
                goto LAB_02901004;
              }
              lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
              lVar8 = (ulong)(uVar4 >> 5) * 4;
              *(uint *)(lVar11 + lVar8) = *(uint *)(lVar11 + lVar8) & (uVar5 ^ 0xffffffff);
            }
LAB_02901004:
            uVar4 = uVar4 + 1;
          } while (uVar4 != 15000);
          iVar13 = iVar13 + 1;
          puVar14 = (undefined4 *)PTR_DAT_04bb37e0;
        }
      }
    } while (iVar13 < param_3);
  }
  return iVar13;
}

