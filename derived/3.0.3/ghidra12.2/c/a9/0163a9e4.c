
/* WARNING: Removing unreachable block (ram,0x0163aca4) */

void FUN_0163a9e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  char *pcVar15;
  undefined4 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *local_80;
  char *local_78;
  int local_6c;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_04bb2200;
  puVar1 = PTR_DAT_04bb2020;
  lVar20 = *(long *)(param_1 + 0x1b8);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (lVar20 == 0) {
LAB_0163ac2c:
    iVar10 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xd0) == '\0') {
      if (*(char *)(param_1 + 0xd1) == '\0') {
        if ((*(char *)(param_1 + 0xd2) != '\0') && (*(char *)(param_1 + 0xd3) == '\0')) {
          pcStack_60 = "HalloweenOutside";
          goto LAB_0163aad8;
        }
      }
      else {
        pcStack_60 = "NewyearOutside";
LAB_0163aad8:
        local_68 = PTR_DAT_04bb2020 + 0x10;
        plVar13 = (long *)(**(code **)(*(long *)(lVar20 + 0x720) + 0xf0))(lVar20 + 0x720);
        (**(code **)(*plVar13 + 0x10))(plVar13,&local_68);
      }
      if (*(char *)(param_1 + 0xd5) != '\0') {
        local_68 = puVar1 + 0x10;
        pcStack_60 = "CommuneIslandOutside";
        plVar13 = (long *)(**(code **)(*(long *)(lVar20 + 0x720) + 0xf0))(lVar20 + 0x720);
        (**(code **)(*plVar13 + 0x10))(plVar13,&local_68);
      }
      goto LAB_0163ac2c;
    }
    uVar11 = FUN_0180b7a0();
    puVar3 = PTR_DAT_04bb2720;
    if ((uVar11 & 1) == 0) {
      lVar17 = *(long *)PTR_DAT_04bb2720;
      iVar10 = 0;
      if (lVar17 != 0) {
        if (*(long *)(lVar17 + 0x330) == 0) {
          iVar10 = 0;
        }
        else {
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar9 = FUN_006bd550(*puVar12,0);
          iVar10 = 0;
          if (iVar9 == 0x758f7eaf) {
            iVar10 = 0;
            if (*(long *)puVar3 != 0) {
              lVar17 = *(long *)(*(long *)puVar3 + 0x330);
              iVar10 = 0;
              if (lVar17 != 0) {
                iVar10 = *(int *)(lVar17 + 0x244);
              }
            }
          }
        }
      }
      puVar3 = PTR_DAT_04bb5ce0;
      if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) != iVar10) {
        lVar17 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar17 == 0) {
          local_68._0_4_ = 0;
          iVar10 = (int)local_68;
LAB_0163ae24:
          bVar5 = iVar10 == 0;
          bVar8 = false;
          bVar7 = false;
          bVar6 = true;
LAB_0163af64:
          if ((!bVar5) && (!bVar6)) {
            if ((bool)(bVar8 & bVar7)) {
              pcStack_60 = "NormalInside";
            }
            else {
              if (!bVar7) {
                if (bVar8) {
                  pcStack_60 = "NormalInsideRightCurtainClose";
                }
                else {
                  pcStack_60 = "NormalInsideCurtainClose";
                }
                goto LAB_0163b020;
              }
              pcStack_60 = "NormalInsideLeftCurtainClose";
            }
            goto LAB_0163afbc;
          }
          if (bVar5) {
            if (bVar6) {
              pcStack_60 = "WindowNothingInside";
              goto LAB_0163afbc;
            }
            if (bVar8) {
              pcStack_60 = "WindowLeftOnlyInside";
            }
            else {
              pcStack_60 = "WindowLeftOnlyInsideCurtainClose";
            }
          }
          else if (bVar7) {
            pcStack_60 = "WindowRightOnlyInside";
          }
          else {
            pcStack_60 = "WindowRightOnlyInsideCurtainClose";
          }
LAB_0163b020:
          lVar17 = *(long *)(lVar20 + 0x720);
        }
        else {
          if (*(char *)(lVar17 + 0xf1a) == '\0') {
            iVar10 = FUN_017f8a28(lVar17 + 0xda0);
            local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar10);
            lVar17 = *(long *)puVar3;
            if (lVar17 == 0) goto LAB_0163ae24;
          }
          else {
            local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
            puVar4 = local_68;
            local_68._0_4_ = 0;
            iVar10 = (int)local_68;
            local_68 = puVar4;
          }
          if (*(char *)(lVar17 + 0xf1a) == '\0') {
            iVar9 = FUN_017f8990(lVar17 + 0xda0);
            lVar17 = *(long *)puVar3;
            bVar5 = iVar10 == 0;
            bVar6 = iVar9 == 0;
            if (lVar17 == 0) {
              bVar8 = false;
              bVar7 = false;
              goto LAB_0163af64;
            }
          }
          else {
            bVar6 = true;
          }
          bVar5 = iVar10 == 0;
          iVar10 = *(int *)(lVar17 + 0xe48);
          if (iVar10 != 1) {
            if (1 < iVar10) {
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              if (iVar10 < 6) goto LAB_0163af10;
            }
            if (5 < iVar10) {
              local_58 = CONCAT44(local_58._4_4_,iVar10);
              if (iVar10 < 0x11) goto LAB_0163af10;
            }
            if (0x10 < iVar10) {
              local_58 = CONCAT44(local_58._4_4_,iVar10);
            }
          }
LAB_0163af10:
          bVar7 = (*(byte *)(lVar17 + 0xedd) & 2) == 0;
          bVar8 = (*(byte *)(lVar17 + 0xedd) & 8) == 0;
          if (iVar10 != 1) goto LAB_0163af64;
          pcStack_60 = "TentInside";
LAB_0163afbc:
          lVar17 = *(long *)(lVar20 + 0x720);
        }
        local_68 = puVar1 + 0x10;
        plVar13 = (long *)(**(code **)(lVar17 + 0xf0))(lVar20 + 0x720);
        (**(code **)(*plVar13 + 0x10))(plVar13,&local_68);
        uVar16 = 2;
        iVar10 = 1;
        goto LAB_0163ac34;
      }
    }
    lVar17 = *(long *)(param_1 + 0x1f8);
    if (*(int *)(lVar17 + 0x298) == -1) goto LAB_0163ac2c;
    lVar17 = FUN_0160cc10(lVar17,*(int *)(lVar17 + 0x298),lVar17 + 0x240,lVar17 + 0x298);
    if (lVar17 == 0) {
LAB_0163ad40:
      local_68 = puVar1 + 0x10;
      pcStack_60 = "IdrInside";
      plVar13 = (long *)(**(code **)(*(long *)(lVar20 + 0x720) + 0xf0))(lVar20 + 0x720);
      (**(code **)(*plVar13 + 0x10))(plVar13,&local_68);
      lVar20 = FUN_01558074(*(undefined8 *)(param_1 + 0x1f8));
      local_78 = *(char **)(lVar20 + 8);
    }
    else {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
      uVar11 = (**(code **)(*(long *)(lVar17 + 0x2a0) + 0x118))(lVar17 + 0x2a0,&local_68);
      if ((uVar11 & 1) == 0) goto LAB_0163ad40;
      uVar16 = *(undefined4 *)(lVar17 + 0x358);
      uVar19 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0x70) + 0x1d8);
      plVar13 = (long *)(**(code **)(*(long *)(lVar17 + 0x2d0) + 0xf0))(lVar17 + 0x2d0);
      (**(code **)(*plVar13 + 0x18))();
      pcStack_60 = (char *)plVar13[1];
      local_68 = puVar1 + 0x10;
      lVar17 = FUN_0160cc10(uVar19,uVar16,&local_68,lVar17 + 0x358);
      if (lVar17 == 0) goto LAB_0163ad40;
      uVar19 = (**(code **)(*(long *)(lVar17 + 0x158) + 0xf0))(lVar17 + 0x158);
      plVar13 = (long *)(**(code **)(*(long *)(lVar20 + 0x720) + 0xf0))(lVar20 + 0x720);
      (**(code **)(*plVar13 + 0x10))(plVar13,uVar19);
    }
    lVar20 = *(long *)(param_1 + 0x1f8);
    lVar20 = FUN_0160cc10(lVar20,*(undefined4 *)(lVar20 + 0x298),lVar20 + 0x240,lVar20 + 0x298);
    if (lVar20 == 0) {
      iVar10 = 0;
    }
    else {
      piVar14 = (int *)(**(code **)(*(long *)(lVar20 + 0x360) + 0xf0))(lVar20 + 0x360);
      iVar10 = *piVar14;
    }
    lVar20 = *(long *)(param_1 + 0x1f8);
    lVar20 = FUN_0160cc10(lVar20,*(undefined4 *)(lVar20 + 0x298),lVar20 + 0x240,lVar20 + 0x298);
    if (lVar20 != 0) {
      pcVar15 = (char *)(**(code **)(*(long *)(lVar20 + 0x390) + 0xf0))(lVar20 + 0x390);
      uVar16 = 1;
      if (*pcVar15 == '\0') {
        uVar16 = 2;
      }
      goto LAB_0163ac34;
    }
  }
  uVar16 = 2;
LAB_0163ac34:
  if (*(char *)(param_1 + 0xdd) != '\0') {
    local_78 = "Demo_TkkLive";
  }
  FUN_0160bf50(*(undefined8 *)(param_1 + 0x1e0),&local_80);
  lVar20 = *(long *)puVar2;
  lVar17 = *(long *)(lVar20 + 0x130);
  if ((lVar17 != 0) && (*(int *)(param_1 + 0x2e0) != iVar10)) {
    *(int *)(param_1 + 0x2e0) = iVar10;
    plVar13 = *(long **)(lVar17 + 0x38);
    *(int *)(lVar17 + 0x2384) = iVar10;
    if (plVar13 != (long *)0x0) {
      local_58 = 0;
      plVar18 = *(long **)(*(long *)(*(long *)(lVar20 + 0x58) + 0xe88) + 0x2ea8);
      pcStack_60 = (&PTR_s_env_baglccr_049abd70)[*(int *)(lVar17 + 0x2384)];
      local_68 = puVar1 + 0x10;
      local_6c = iVar10;
      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_68,&local_58);
      FUN_03964240(&local_68,uVar19);
      (**(code **)(*plVar18 + 0x50))(plVar18,local_68);
    }
    *(bool *)(lVar17 + 0x2380) = *(int *)(lVar17 + 0x2384) != 0;
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar16;
  return;
}

