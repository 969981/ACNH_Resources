
void FUN_029010e0(long param_1,undefined ***param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  int iVar18;
  undefined **local_820;
  uint *puStack_818;
  undefined **local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined1 auStack_70 [16];
  
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar4[3];
  uVar3 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar13 = uVar3 ^ uVar2;
  uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar13;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar1 = PTR_DAT_04bb43c0;
  local_80 = (uVar3 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  uStack_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 2;
  local_78 = (uStack_7c ^ uStack_7c >> 0x1e) * 0x6c078965 + 3;
  uStack_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 4;
  if (param_2 != (undefined ***)0x0) {
    local_800 = &PTR_FUN_04a927a0;
    uVar3 = 0;
    do {
      (*(code *)(*param_2)[2])(&local_820,param_2,uVar3);
      lVar5 = (*(code *)(*param_2)[4])(param_2);
      uVar13 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar5 + (ulong)(uVar3 >> 5) * 4) & uVar13) != 0) {
        lVar5 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(&local_820);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_800)(&local_800,&local_820), (uVar6 & 1) == 0))
          goto LAB_029011e0;
        }
        lVar5 = (*(code *)(*param_2)[3])();
        lVar7 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar5 + lVar7) = *(uint *)(lVar5 + lVar7) & (uVar13 ^ 0xffffffff);
      }
LAB_029011e0:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
    iVar18 = 0;
    do {
      lVar7 = (*(code *)(*param_2)[4])();
      lVar5 = 0;
      iVar10 = 0;
      do {
        puVar4 = (uint *)(lVar7 + lVar5);
        lVar5 = lVar5 + 4;
        uVar3 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        iVar10 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar10;
      } while (lVar5 != 0x754);
      if (iVar10 == 0) {
        return;
      }
      local_8c = (uint)*(byte *)(param_1 + 0x200);
      local_88._0_3_ = CONCAT12(DAT_0558600a,DAT_05586008);
      local_88 = CONCAT13(DAT_0558600b,(undefined3)local_88);
      local_84 = DAT_0558600c;
      if (5 < local_8c) {
        local_8c = 0;
      }
      if (local_8c == 0) {
        lVar7 = (*(code *)(*param_2)[4])();
        lVar5 = 0;
        iVar10 = 0;
        do {
          puVar4 = (uint *)(lVar7 + lVar5);
          lVar5 = lVar5 + 4;
          uVar3 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          iVar10 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar10;
        } while (lVar5 != 0x754);
        if (iVar10 == 0) {
          pppuVar17 = (undefined ***)&DAT_05586008;
        }
        else {
          lVar7 = (*(code *)(*param_2)[4])();
          lVar5 = 0;
          uVar3 = 0;
          do {
            puVar4 = (uint *)(lVar7 + lVar5);
            lVar5 = lVar5 + 4;
            uVar13 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
            uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
            uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
            uVar13 = uVar13 + (uVar13 >> 8);
            uVar3 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar3;
          } while (lVar5 != 0x754);
          pppuVar17 = &local_800;
          uVar13 = local_80 ^ local_80 << 0xb;
          local_80 = uStack_7c;
          uStack_7c = local_78;
          uVar13 = uVar13 >> 8 ^ uStack_74 >> 0x13 ^ uVar13 ^ uStack_74;
          local_78 = uStack_74;
          uStack_74 = uVar13;
          FUN_00889f80(&local_800,param_2,(int)((ulong)uVar13 * (ulong)uVar3 >> 0x20) + 1);
          FUN_01a4c66c(&local_80,&local_800);
        }
        local_88 = *(undefined4 *)pppuVar17;
        local_84 = *(undefined4 *)((long)pppuVar17 + 4);
      }
      else {
        iVar10 = 0;
        uVar12 = DAT_0558600a;
        uVar14 = DAT_0558600b;
        uVar15 = DAT_0558600c;
        uVar9 = DAT_05586008;
        do {
          puVar4 = (uint *)((long)&DAT_055bea10 + (long)iVar10 * 0xc);
          if (*puVar4 == local_8c) {
            local_800 = &PTR_LAB_049ff3a8;
            memset(auStack_7f8,0,0x754);
            uVar3 = nn::os::GetSystemTick();
            local_a4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
            local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
            local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
            local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
            memcpy(auStack_7f8,param_2 + 1,0x754);
            puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
            uVar3 = *puVar8 ^ *puVar8 << 0xb;
            uVar13 = puVar8[3];
            *puVar8 = puVar8[1];
            puVar8[1] = puVar8[2];
            uVar3 = uVar3 >> 8 ^ uVar13 >> 0x13 ^ uVar3 ^ uVar13;
            puVar8[2] = uVar13;
            puVar8[3] = uVar3;
            uVar3 = (uint)((ulong)uVar3 * 100 >> 0x20);
            if (uVar3 < 0x32) {
              uVar3 = 0;
              local_820 = &PTR_FUN_04a927c8;
              puStack_818 = puVar4;
              do {
                (*(code *)local_800[2])(auStack_70,&local_800,uVar3);
                lVar5 = (*(code *)local_800[4])(&local_800);
                uVar13 = 1 << (ulong)(uVar3 & 0x1f);
                if ((*(uint *)(lVar5 + (ulong)(uVar3 >> 5) * 4) & uVar13) != 0) {
                  lVar5 = *(long *)puVar1;
                  uVar2 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar1 != 0) {
                    lVar5 = *(long *)(lVar5 + 0x57e58);
                    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
                    if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
                       (uVar6 = (*(code *)*local_820)(&local_820,auStack_70), (uVar6 & 1) != 0))
                    goto LAB_029014c0;
                  }
                  lVar5 = (*(code *)local_800[3])(&local_800);
                  lVar7 = (ulong)(uVar3 >> 5) * 4;
                  *(uint *)(lVar5 + lVar7) = *(uint *)(lVar5 + lVar7) & (uVar13 ^ 0xffffffff);
                }
LAB_029014c0:
                uVar3 = uVar3 + 1;
              } while (uVar3 != 15000);
            }
            else if (uVar3 < 0x4b) {
              uVar3 = 0;
              local_820 = &PTR_FUN_04a927f0;
              puStack_818 = puVar4;
              do {
                (*(code *)local_800[2])(auStack_70,&local_800,uVar3);
                lVar5 = (*(code *)local_800[4])(&local_800);
                uVar13 = 1 << (ulong)(uVar3 & 0x1f);
                if ((*(uint *)(lVar5 + (ulong)(uVar3 >> 5) * 4) & uVar13) != 0) {
                  lVar5 = *(long *)puVar1;
                  uVar2 = FUN_0277d6c4(auStack_70);
                  if (*(long *)puVar1 != 0) {
                    lVar5 = *(long *)(lVar5 + 0x57e58);
                    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
                    if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
                       (uVar6 = (*(code *)*local_820)(&local_820,auStack_70), (uVar6 & 1) != 0))
                    goto LAB_029015b4;
                  }
                  lVar5 = (*(code *)local_800[3])(&local_800);
                  lVar7 = (ulong)(uVar3 >> 5) * 4;
                  *(uint *)(lVar5 + lVar7) = *(uint *)(lVar5 + lVar7) & (uVar13 ^ 0xffffffff);
                }
LAB_029015b4:
                uVar3 = uVar3 + 1;
              } while (uVar3 != 15000);
            }
            lVar7 = (*(code *)local_800[4])(&local_800);
            lVar5 = 0;
            iVar11 = 0;
            do {
              puVar4 = (uint *)(lVar7 + lVar5);
              lVar5 = lVar5 + 4;
              uVar3 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
              uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
              uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
              uVar3 = uVar3 + (uVar3 >> 8);
              iVar11 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar11;
            } while (lVar5 != 0x754);
            if (iVar11 == 0) {
              lVar7 = (*(code *)(*param_2)[4])();
              lVar5 = 0;
              iVar11 = 0;
              do {
                puVar4 = (uint *)(lVar7 + lVar5);
                lVar5 = lVar5 + 4;
                uVar3 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
                uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                uVar3 = uVar3 + (uVar3 >> 8);
                iVar11 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar11;
              } while (lVar5 != 0x754);
              if (iVar11 == 0) goto LAB_02901390;
              lVar7 = (*(code *)(*param_2)[4])();
              lVar5 = 0;
              uVar3 = 0;
              do {
                puVar4 = (uint *)(lVar7 + lVar5);
                lVar5 = lVar5 + 4;
                uVar13 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
                uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
                uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
                uVar13 = uVar13 + (uVar13 >> 8);
                uVar3 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar3;
              } while (lVar5 != 0x754);
              uVar13 = local_80 ^ local_80 << 0xb;
              local_80 = uStack_7c;
              uStack_7c = local_78;
              pppuVar17 = param_2;
LAB_02901864:
              pppuVar16 = &local_820;
              uVar13 = uVar13 >> 8 ^ uStack_74 >> 0x13 ^ uVar13 ^ uStack_74;
              local_78 = uStack_74;
              uStack_74 = uVar13;
              FUN_00889f80(&local_820,pppuVar17,(int)((ulong)uVar13 * (ulong)uVar3 >> 0x20) + 1);
              FUN_01a4c66c(&local_80,&local_820);
            }
            else {
              lVar7 = (*(code *)local_800[4])(&local_800);
              lVar5 = 0;
              iVar11 = 0;
              do {
                puVar4 = (uint *)(lVar7 + lVar5);
                lVar5 = lVar5 + 4;
                uVar3 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
                uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                uVar3 = uVar3 + (uVar3 >> 8);
                iVar11 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar11;
              } while (lVar5 != 0x754);
              if (iVar11 != 0) {
                lVar7 = (*(code *)local_800[4])(&local_800);
                lVar5 = 0;
                uVar3 = 0;
                do {
                  puVar4 = (uint *)(lVar7 + lVar5);
                  lVar5 = lVar5 + 4;
                  uVar13 = *puVar4 - (*puVar4 >> 1 & 0x55555555);
                  uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
                  uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
                  uVar13 = uVar13 + (uVar13 >> 8);
                  uVar3 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar3;
                } while (lVar5 != 0x754);
                uVar13 = local_80 ^ local_80 << 0xb;
                local_80 = uStack_7c;
                uStack_7c = local_78;
                pppuVar17 = &local_800;
                goto LAB_02901864;
              }
LAB_02901390:
              pppuVar16 = (undefined ***)&DAT_05586008;
            }
            uVar9 = *(undefined2 *)pppuVar16;
            uVar12 = *(undefined1 *)((long)pppuVar16 + 2);
            uVar14 = *(undefined1 *)((long)pppuVar16 + 3);
            uVar15 = *(undefined4 *)((long)pppuVar16 + 4);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != 5);
        local_88._0_3_ = CONCAT12(uVar12,uVar9);
        local_88 = CONCAT13(uVar14,(undefined3)local_88);
        local_84 = uVar15;
      }
      lVar5 = *(long *)puVar1;
      uVar3 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          FUN_02901aa0(param_1,&local_88);
          lVar5 = (*(code *)(*param_2)[3])();
          uVar3 = FUN_0277d6c4(&local_88);
          if ((uVar3 >> 3 & 0x1fff) < 0x753) {
            lVar7 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
            *(uint *)(lVar5 + lVar7) =
                 *(uint *)(lVar5 + lVar7) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
          }
          iVar18 = iVar18 + 1;
        }
      }
    } while (iVar18 < 6);
  }
  return;
}

