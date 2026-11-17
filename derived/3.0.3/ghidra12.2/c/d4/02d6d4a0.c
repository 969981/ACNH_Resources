
void FUN_02d6d4a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 local_f0 [44];
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  local_f0[0] = 0;
  local_f0[6] = 1;
  local_f0[0xc] = 2;
  lVar9 = param_1 + 0x1f8;
  local_f0[0x18] = 6;
  local_f0[0x12] = 5;
  local_f0[0x24] = 3;
  local_f0[0x1e] = 7;
  local_f0[0x2a] = 4;
  if (*(int *)(param_1 + 0x241c) == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "Mobile1stBoot_Mydesign";
    iVar6 = FUN_0274bce0(lVar9,&local_40);
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0x241c) == 0) {
        pcStack_38 = "MainmenuUnlockMydesingPro";
        local_40 = puVar1 + 0x10;
        iVar6 = FUN_0274bce0(lVar9,&local_40);
        if (iVar6 != 0) {
          pcStack_38 = "Mobile1stBootAfterUnlockPro_Mydesign";
          local_40 = puVar1 + 0x10;
          iVar6 = FUN_0274bce0(lVar9,&local_40);
          if (iVar6 == 0) {
            lVar9 = 1;
            goto LAB_02d6d7ec;
          }
        }
        if (*(int *)(param_1 + 0x241c) == 0) {
          uVar10 = FUN_02d58dc0(param_1 + 0x1750,lVar9);
          if ((uVar10 & 1) != 0) {
            local_40 = puVar1 + 0x10;
            pcStack_38 = "Mobile1stBootUnlockCantEditMydesign";
            iVar6 = FUN_0274bce0(lVar9,&local_40);
            if (iVar6 == 0) {
              lVar9 = 2;
              goto LAB_02d6d7ec;
            }
          }
          if (*(int *)(param_1 + 0x241c) == 0) {
            pcStack_38 = "UnlockMydesignPro2";
            local_40 = puVar1 + 0x10;
            iVar6 = FUN_0274bce0(lVar9,&local_40);
            if (iVar6 != 0) {
              pcStack_38 = "ExplainMydesignPro2";
              local_40 = puVar1 + 0x10;
              iVar6 = FUN_0274bce0(lVar9,&local_40);
              if (iVar6 == 0) {
                lVar9 = 3;
                goto LAB_02d6d7ec;
              }
            }
          }
        }
      }
      goto LAB_02d6d500;
    }
    lVar9 = 0;
LAB_02d6d7ec:
    uVar7 = local_f0[lVar9 * 6];
  }
  else {
LAB_02d6d500:
    if (*(char *)(param_1 + 0x2438) != '\0') {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MainmenuMydesignPatternPlus";
      local_40 = puVar1;
      iVar6 = FUN_0274bce0(lVar9,&local_40);
      if (iVar6 != 0) {
        pcStack_38 = "Mobile1stBoot_MydesignPatternPlus";
        local_40 = puVar1;
        iVar6 = FUN_0274bce0(lVar9,&local_40);
        if (iVar6 == 0) {
          lVar9 = 4;
          goto LAB_02d6d7ec;
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x241c);
    if (iVar6 == 1) {
      lVar11 = *(long *)(param_1 + 0x48);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0x80);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        if (*(char **)(lVar11 + 0x88) == "cEffectClothSelect") {
LAB_02d6d6e4:
          if (((*(long *)PTR_DAT_04bb2230 == 0) ||
              (pcVar8 = *(char **)(*(long *)PTR_DAT_04bb2230 + 0x480), pcVar8 == (char *)0x0)) ||
             (*pcVar8 == '\0')) {
            lVar9 = 5;
            goto LAB_02d6d7ec;
          }
        }
        else {
          uVar10 = 0;
          bVar5 = true;
          do {
            cVar3 = (*(char **)(lVar11 + 0x88))[uVar10];
            if (cVar3 != "cEffectClothSelect"[uVar10]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_02d6d6e4;
              break;
            }
            bVar5 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
        }
      }
      iVar6 = *(int *)(param_1 + 0x241c);
    }
    puVar1 = PTR_DAT_04bb2020;
    if (iVar6 == 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "Mobile1stBoot_MydesignCloudIsland";
      iVar6 = FUN_0274bce0(lVar9,&local_40);
      if (iVar6 == 0) {
        lVar9 = 6;
        goto LAB_02d6d7ec;
      }
      if ((*(int *)(param_1 + 0x241c) == 0) && (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 != -1)) {
        puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
        if (0xff < (uint)(int)sVar4) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        if (((*(uint *)(puVar2 + 4) & 1) != 0) &&
           ((*(long *)PTR_DAT_04bb3728 == 0 || (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 1))))
        {
          local_40 = puVar1 + 0x10;
          pcStack_38 = "Mobile1stBoot_MydesignCloudIsland_Guest";
          iVar6 = FUN_0274bce0(lVar9,&local_40);
          if (iVar6 == 0) {
            lVar9 = 7;
            goto LAB_02d6d7ec;
          }
        }
      }
    }
    uVar7 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x2458) = uVar7;
  return;
}

