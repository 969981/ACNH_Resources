
void FUN_026ebca0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  short *psVar21;
  short *psVar22;
  uint uVar23;
  uint local_94;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  if (DAT_05573270 == (code *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = (*DAT_05573270)();
    local_88 = local_88 & 1;
  }
  if (DAT_05573288 == (code *)0x0) {
    local_8c = 0;
  }
  else {
    local_8c = (*DAT_05573288)();
    local_8c = local_8c & 1;
  }
  plVar11 = (long *)PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (FUN_02705554(&local_80,0,1), puVar7 = PTR_DAT_04bb43c0, puVar6 = PTR_DAT_04bb37e0,
     puVar5 = PTR_DAT_04bb2020, local_7c != 8)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    uVar18 = local_7c;
    do {
      uVar9 = uVar18;
      if (7 < uVar18) {
        uVar9 = 0xffffffff;
      }
      pcStack_70 = "MakeVillagePlayerFlag";
      local_84 = uVar9;
      local_78 = puVar1;
      iVar8 = FUN_0274ce10(&local_84,&local_78);
      if ((*plVar11 == 0) || (lVar10 = FUN_026eec4c(*plVar11,uVar9), lVar10 == 0)) {
        if (uVar18 < 8) {
          lVar10 = *plVar11;
          if (lVar10 != 0) {
            (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x18))();
            if ((local_80 == 0) && ((*(byte *)(lVar10 + 0x453) & 1) != 0)) {
              lVar10 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x10) + 0x130) + 0x18))();
            }
            else {
              lVar10 = (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x18))();
              lVar10 = lVar10 + 0x110;
            }
            if (uVar18 != 7) {
              uVar19 = (ulong)uVar18;
              plVar16 = (long *)(lVar10 + (ulong)uVar18 * 0x48 + 0x1e3400);
              do {
                if ((uVar19 < 7) && (plVar16[-1] != 0 || *plVar16 != 0)) {
                  uVar18 = (int)uVar19 + 1;
                  local_7c = uVar18;
                  goto LAB_026ebd8c;
                }
                uVar19 = uVar19 + 1;
                plVar16 = plVar16 + 9;
              } while (uVar19 != 7);
            }
          }
          uVar18 = 8;
          local_7c = 8;
        }
      }
      else {
        lVar17 = lVar10 + 0x194b0;
        if (*(long *)(lVar10 + 0x194b8) == 0) {
          lVar17 = *(long *)(*plVar11 + 0x20);
          lVar14 = *(long *)(lVar17 + 0x98);
          if (lVar14 == 0) goto LAB_026ec0f8;
LAB_026ebdec:
          local_94 = 0;
          if (*(undefined8 **)(lVar14 + 0x10) != (undefined8 *)0x0) {
            local_94 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          }
          if (iVar8 != 0) goto LAB_026ebe08;
LAB_026ec104:
          uVar19 = 0;
          lVar14 = 0xb8;
          while( true ) {
            puVar2 = puVar5 + 0x10;
            pcStack_70 = "UpgradePocket40";
            local_78 = puVar2;
            iVar8 = FUN_0274b8d0(lVar10,&local_78);
            if (iVar8 == 0) {
              pcStack_70 = "UpgradePocket30";
              local_78 = puVar2;
              iVar8 = FUN_0274b8d0(lVar10,&local_78);
              uVar9 = (uint)(iVar8 != 0);
            }
            else {
              uVar9 = 2;
            }
            local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar9);
            uVar12 = 0x1e;
            if (uVar9 != 1) {
              uVar12 = 0x14;
            }
            uVar3 = 0x28;
            if (uVar9 != 2) {
              uVar3 = uVar12;
            }
            if (uVar3 <= uVar19) break;
            if ((*(long *)(lVar17 + 0x98) != 0) &&
               (plVar11 = *(long **)(*(long *)(lVar17 + 0x98) + 0x20), plVar11 != (long *)0x0)) {
              local_78 = *(undefined **)(lVar17 + 0x78);
              pcStack_70 = *(char **)(lVar17 + 0x80);
              local_68 = 0x17c;
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
            }
            lVar20 = *(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78);
            uVar9 = *(uint *)(lVar20 + 0x158);
            if (0x13 < uVar9) {
              uVar9 = 0x14;
            }
            lVar4 = lVar14;
            if ((uint)uVar19 < uVar9) {
LAB_026ec228:
              psVar22 = (short *)(lVar20 + lVar4);
              psVar21 = psVar22;
              if (*psVar22 != -2) {
                lVar20 = *(long *)puVar7;
                uVar9 = FUN_0277d6c4(psVar22);
                if (*(long *)puVar7 == 0) goto LAB_026ec290;
                lVar20 = *(long *)(lVar20 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                psVar21 = (short *)puVar6;
                if (uVar9 < *(uint *)(lVar20 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
                    psVar21 = psVar22;
                  }
                }
              }
            }
            else {
              uVar15 = (uint)(uVar19 + -uVar9);
              if ((int)uVar15 < 0) {
LAB_026ec290:
                psVar21 = (short *)puVar6;
              }
              else {
                uVar23 = *(uint *)(lVar20 + 0xa0);
                if (0x13 < uVar23) {
                  uVar23 = 0x14;
                }
                psVar21 = (short *)puVar6;
                if (uVar15 < uVar23) {
                  lVar4 = (uVar19 + -uVar9 & 0xffffffff) * 8;
                  goto LAB_026ec228;
                }
              }
            }
            lVar20 = *(long *)puVar7;
            uVar9 = FUN_0277d6c4(psVar21);
            if (*(long *)puVar7 != 0) {
              lVar20 = *(long *)(lVar20 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                uVar12 = FUN_0277d7b4(psVar21,&DAT_05573268);
                if (((uVar12 & 1) != 0) && (local_88 != 0 || DAT_05573278 != '\0')) {
                  if ((*(long *)(lVar17 + 0x98) != 0) &&
                     (plVar11 = *(long **)(*(long *)(lVar17 + 0x98) + 0x20), plVar11 != (long *)0x0)
                     ) {
                    local_78 = *(undefined **)(lVar17 + 0x78);
                    pcStack_70 = *(char **)(lVar17 + 0x80);
                    local_68 = 0x17c;
                    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
                  }
                  FUN_027fa2dc(*(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78),uVar19,puVar6,0);
                }
                uVar12 = FUN_0277d7b4(psVar21,&DAT_05573280);
                if (((uVar12 & 1) != 0) && (local_8c != 0 || DAT_05573290 != '\0')) {
                  if ((*(long *)(lVar17 + 0x98) != 0) &&
                     (plVar11 = *(long **)(*(long *)(lVar17 + 0x98) + 0x20), plVar11 != (long *)0x0)
                     ) {
                    local_78 = *(undefined **)(lVar17 + 0x78);
                    pcStack_70 = *(char **)(lVar17 + 0x80);
                    local_68 = 0x17c;
                    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
                  }
                  FUN_027fa2dc(*(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78),uVar19,puVar6,0);
                }
              }
            }
            uVar19 = uVar19 + 1;
            lVar14 = lVar14 + 8;
          }
        }
        else {
          lVar14 = *(long *)(lVar10 + 0x19548);
          if (lVar14 != 0) goto LAB_026ebdec;
LAB_026ec0f8:
          local_94 = 0;
          if (iVar8 == 0) goto LAB_026ec104;
LAB_026ebe08:
          uVar19 = 0;
          lVar14 = 0xb8;
          while( true ) {
            puVar2 = puVar5 + 0x10;
            pcStack_70 = "UpgradePocket40";
            local_78 = puVar2;
            iVar8 = FUN_0274b8d0(lVar10,&local_78);
            if (iVar8 == 0) {
              pcStack_70 = "UpgradePocket30";
              local_78 = puVar2;
              iVar8 = FUN_0274b8d0(lVar10,&local_78);
              uVar9 = (uint)(iVar8 != 0);
            }
            else {
              uVar9 = 2;
            }
            local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar9);
            uVar12 = 0x1e;
            if (uVar9 != 1) {
              uVar12 = 0x14;
            }
            uVar3 = 0x28;
            if (uVar9 != 2) {
              uVar3 = uVar12;
            }
            if (uVar3 <= uVar19) break;
            if ((*(long *)(lVar17 + 0x98) != 0) &&
               (plVar11 = *(long **)(*(long *)(lVar17 + 0x98) + 0x20), plVar11 != (long *)0x0)) {
              local_78 = *(undefined **)(lVar17 + 0x78);
              pcStack_70 = *(char **)(lVar17 + 0x80);
              local_68 = 0x17c;
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
            }
            lVar20 = *(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78);
            uVar9 = *(uint *)(lVar20 + 0x158);
            if (0x13 < uVar9) {
              uVar9 = 0x14;
            }
            lVar4 = lVar14;
            if ((uint)uVar19 < uVar9) {
LAB_026ebf28:
              psVar22 = (short *)(lVar20 + lVar4);
              psVar21 = psVar22;
              if (*psVar22 != -2) {
                lVar20 = *(long *)puVar7;
                uVar9 = FUN_0277d6c4(psVar22);
                if (*(long *)puVar7 == 0) goto LAB_026ebf90;
                lVar20 = *(long *)(lVar20 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                psVar21 = (short *)puVar6;
                if (uVar9 < *(uint *)(lVar20 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
                    psVar21 = psVar22;
                  }
                }
              }
            }
            else {
              uVar15 = (uint)(uVar19 + -uVar9);
              if ((int)uVar15 < 0) {
LAB_026ebf90:
                psVar21 = (short *)puVar6;
              }
              else {
                uVar23 = *(uint *)(lVar20 + 0xa0);
                if (0x13 < uVar23) {
                  uVar23 = 0x14;
                }
                psVar21 = (short *)puVar6;
                if (uVar15 < uVar23) {
                  lVar4 = (uVar19 + -uVar9 & 0xffffffff) * 8;
                  goto LAB_026ebf28;
                }
              }
            }
            lVar20 = *(long *)puVar7;
            uVar9 = FUN_0277d6c4(psVar21);
            if (*(long *)puVar7 != 0) {
              lVar20 = *(long *)(lVar20 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                uVar12 = FUN_0277d7b4(psVar21,&DAT_05573268);
                if ((local_88 != 0) && ((uVar12 & 1) != 0)) {
                  if ((*(long *)(lVar17 + 0x98) != 0) &&
                     (plVar11 = *(long **)(*(long *)(lVar17 + 0x98) + 0x20), plVar11 != (long *)0x0)
                     ) {
                    local_78 = *(undefined **)(lVar17 + 0x78);
                    pcStack_70 = *(char **)(lVar17 + 0x80);
                    local_68 = 0x17c;
                    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
                  }
                  FUN_027fa2dc(*(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78),uVar19,puVar6,0);
                }
                uVar12 = FUN_0277d7b4(psVar21,&DAT_05573280);
                if ((local_8c != 0) && ((uVar12 & 1) != 0)) {
                  if ((*(long *)(lVar17 + 0x98) != 0) &&
                     (plVar11 = *(long **)(*(long *)(lVar17 + 0x98) + 0x20), plVar11 != (long *)0x0)
                     ) {
                    local_78 = *(undefined **)(lVar17 + 0x78);
                    pcStack_70 = *(char **)(lVar17 + 0x80);
                    local_68 = 0x17c;
                    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
                  }
                  FUN_027fa2dc(*(long *)(lVar17 + 0x80) + *(long *)(lVar17 + 0x78),uVar19,puVar6,0);
                }
              }
            }
            uVar19 = uVar19 + 1;
            lVar14 = lVar14 + 8;
          }
        }
        plVar11 = (long *)PTR_DAT_04bb46b0;
        if (uVar18 < 8) {
          lVar10 = *(long *)PTR_DAT_04bb46b0;
          if (lVar10 != 0) {
            (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x18))();
            if ((local_80 == 0) && ((*(byte *)(lVar10 + 0x453) & 1) != 0)) {
              lVar10 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x10) + 0x130) + 0x18))();
            }
            else {
              lVar10 = (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x18))();
              lVar10 = lVar10 + 0x110;
            }
            if (uVar18 != 7) {
              uVar19 = (ulong)uVar18;
              plVar16 = (long *)(lVar10 + (ulong)uVar18 * 0x48 + 0x1e3400);
              do {
                if ((uVar19 < 7) && (plVar16[-1] != 0 || *plVar16 != 0)) {
                  uVar18 = (int)uVar19 + 1;
                  local_7c = uVar18;
                  goto joined_r0x026ec52c;
                }
                uVar19 = uVar19 + 1;
                plVar16 = plVar16 + 9;
              } while (uVar19 != 7);
            }
          }
          uVar18 = 8;
          local_7c = uVar18;
        }
joined_r0x026ec52c:
        if ((((local_94 & 1) != 0) && (*(long *)(lVar17 + 0x98) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x98) + 0x18),
           puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
      }
LAB_026ebd8c:
    } while (uVar18 != 8);
  }
  return;
}

