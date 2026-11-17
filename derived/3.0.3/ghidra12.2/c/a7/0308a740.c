
void FUN_0308a740(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 local_100 [44];
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb2020;
  local_100[0] = 0;
  local_100[6] = 1;
  local_100[0xc] = 4;
  lVar9 = param_1 + 0x1f8;
  local_100[0x18] = 2;
  local_100[0x12] = 5;
  local_100[0x24] = 6;
  local_100[0x1e] = 3;
  local_100[0x2a] = 7;
  if (*(int *)(param_1 + 0x23fc) == 0) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "Mobile1stBoot_Mydesign";
    iVar5 = FUN_0274bce0(lVar9,&local_50);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x23fc) == 0) {
        pcStack_48 = "MainmenuUnlockMydesingPro";
        local_50 = puVar1 + 0x10;
        iVar5 = FUN_0274bce0(lVar9,&local_50);
        if (iVar5 != 0) {
          pcStack_48 = "Mobile1stBootAfterUnlockPro_Mydesign";
          local_50 = puVar1 + 0x10;
          iVar5 = FUN_0274bce0(lVar9,&local_50);
          if (iVar5 == 0) {
            lVar9 = 1;
            goto LAB_0308aaa4;
          }
        }
        if (*(int *)(param_1 + 0x23fc) == 0) {
          pcStack_48 = "UnlockMydesignPro2";
          local_50 = puVar1 + 0x10;
          iVar5 = FUN_0274bce0(lVar9,&local_50);
          if (iVar5 != 0) {
            pcStack_48 = "ExplainMydesignPro2";
            local_50 = puVar1 + 0x10;
            iVar5 = FUN_0274bce0(lVar9,&local_50);
            if (iVar5 == 0) {
              lVar9 = 2;
              goto LAB_0308aaa4;
            }
          }
          if (*(int *)(param_1 + 0x23fc) == 0) {
            pcStack_48 = "Mobile1stBoot_MydesignShowcase";
            local_50 = puVar1 + 0x10;
            iVar5 = FUN_0274bce0(lVar9,&local_50);
            if (iVar5 == 0) {
              pcStack_48 = "MainmenuMydesignShowcase";
              local_50 = puVar1 + 0x10;
              iVar5 = FUN_0274bce0(lVar9,&local_50);
              if (iVar5 != 0) {
                lVar9 = 3;
                goto LAB_0308aaa4;
              }
            }
            if (*(int *)(param_1 + 0x23fc) == 0) {
              uVar8 = FUN_03089bb0(param_1);
              if ((uVar8 & 1) != 0) {
                local_50 = puVar1 + 0x10;
                pcStack_48 = "Mobile1stBootUnlockCantEditMydesign";
                iVar5 = FUN_0274bce0(lVar9,&local_50);
                if (iVar5 == 0) {
                  lVar9 = 4;
                  goto LAB_0308aaa4;
                }
              }
              if ((*(int *)(param_1 + 0x23fc) == 0) &&
                 (uVar8 = FUN_02658470(lVar9), (uVar8 & 1) != 0)) {
                uVar2 = *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80);
                if ((uVar2 < 2) &&
                   (((uVar2 != 1 || (*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) == 0)) &&
                    (iVar5 = FUN_033fc390(lVar9), iVar5 != 1)))) {
                  pcStack_48 = "Activate_WebService";
                  local_50 = puVar1 + 0x10;
                  iVar5 = FUN_0274bce0(lVar9,&local_50);
                  if (iVar5 != 0) {
                    pcStack_48 = "Mobile1stBoot_Mydesign";
                    local_50 = puVar1 + 0x10;
                    iVar5 = FUN_0274bce0(lVar9,&local_50);
                    if (iVar5 != 0) {
                      local_50 = puVar1 + 0x10;
                      pcStack_48 = "LegacyMyDesignDLEnable";
                      iVar5 = FUN_0274bce0(lVar9,&local_50);
                      if (iVar5 == 0) {
                        lVar9 = 5;
                        goto LAB_0308aaa4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0308a7a4;
    }
    lVar9 = 0;
LAB_0308aaa4:
    uVar7 = local_100[lVar9 * 6];
  }
  else {
LAB_0308a7a4:
    if (*(char *)(param_1 + 0x2418) != '\0') {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "MainmenuMydesignPatternPlus";
      local_50 = puVar1;
      iVar5 = FUN_0274bce0(lVar9,&local_50);
      if (iVar5 != 0) {
        pcStack_48 = "Mobile1stBoot_MydesignPatternPlus";
        local_50 = puVar1;
        iVar5 = FUN_0274bce0(lVar9,&local_50);
        if (iVar5 == 0) {
          lVar9 = 6;
          goto LAB_0308aaa4;
        }
      }
    }
    if ((*(int *)(param_1 + 0x23fc) == 1) && (lVar9 = *(long *)(param_1 + 0x48), lVar9 != 0)) {
      plVar10 = (long *)(lVar9 + 0x80);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      uVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (*(char **)(lVar9 + 0x88) == "cEffectClothSelect") {
LAB_0308aa40:
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "NoticeAboutMagokoroMyDesign";
        iVar5 = FUN_02757a80(uVar6,&local_50);
        if (iVar5 == 0) {
          lVar9 = 7;
          goto LAB_0308aaa4;
        }
      }
      else {
        uVar8 = 0;
        bVar4 = true;
        do {
          cVar3 = (*(char **)(lVar9 + 0x88))[uVar8];
          if (cVar3 != "cEffectClothSelect"[uVar8]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_0308aa40;
            break;
          }
          bVar4 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
      }
    }
    uVar7 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x244c) = uVar7;
  return;
}

