
void FUN_020e3ad0(long *param_1,long param_2,uint param_3)

{
  undefined **ppuVar1;
  void *pvVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  void *__src;
  long lVar8;
  undefined8 uVar9;
  void *__dest;
  undefined1 *__src_00;
  long *plVar10;
  undefined ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined **local_78;
  long *plStack_70;
  int local_68;
  undefined1 auStack_64 [31];
  undefined1 local_45;
  
  *(undefined4 *)(param_1 + 2) = 8;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1b) = 0;
  puVar5 = PTR_DAT_04bb3768;
  *param_1 = (long)(PTR_DAT_04bb3768 + 0x10);
  param_1[1] = (long)param_1 + 0x14;
  puVar6 = PTR_DAT_04bb70a8;
  puVar4 = PTR_DAT_04bb2020;
  if (0xf < param_3) {
    return;
  }
  if ((*(uint *)(param_2 + 0x208) >> (ulong)(param_3 & 0x1f) & 1) != 0) {
    local_45 = 0;
    param_2 = param_2 + (ulong)param_3 * 0x20;
    local_68 = 0x20;
    plVar10 = (long *)(param_2 + 8);
    local_78 = (undefined **)(PTR_DAT_04bb2a08 + 0x10);
    plStack_70 = (long *)auStack_64;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    __src_00 = *(undefined1 **)(param_2 + 0x10);
    if (auStack_64 != __src_00) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x10) + lVar8) == '\0') goto LAB_020e3d7c;
        lVar3 = *(long *)(param_2 + 0x10) + lVar8;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_020e3d7c;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_020e3d7c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_020e3d7c:
      iVar7 = (int)lVar8;
      if (local_68 <= (int)lVar8) {
        iVar7 = local_68 + -1;
      }
      memcpy(auStack_64,__src_00,(long)iVar7);
      auStack_64[iVar7] = 0;
    }
    local_90 = (void *)((ulong)local_90._4_4_ << 0x20);
    local_78 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = &DAT_040b5039;
    local_98 = &local_78;
    FUN_0076e020(&local_98,param_1);
    return;
  }
  if (param_3 != 10) {
    if (param_3 != 0xb) {
      return;
    }
    FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",PTR_DAT_04bb70a8);
    iVar7 = FUN_0273ea30(&local_78);
    if (iVar7 == 1) {
      lVar8 = 0;
    }
    else {
      FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 6);
      iVar7 = FUN_0273ea30(&local_78);
      if (iVar7 == 1) {
        lVar8 = 1;
      }
      else {
        FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0xc);
        iVar7 = FUN_0273ea30(&local_78);
        if (iVar7 == 1) {
          lVar8 = 2;
        }
        else {
          FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x12);
          iVar7 = FUN_0273ea30(&local_78);
          if (iVar7 == 1) {
            lVar8 = 3;
          }
          else {
            FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x18);
            iVar7 = FUN_0273ea30(&local_78);
            if (iVar7 == 1) {
              lVar8 = 4;
            }
            else {
              FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x1e);
              iVar7 = FUN_0273ea30(&local_78);
              if (iVar7 == 1) {
                lVar8 = 5;
              }
              else {
                FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x24);
                iVar7 = FUN_0273ea30(&local_78);
                if (iVar7 == 1) {
                  lVar8 = 6;
                }
                else {
                  FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x2b);
                  iVar7 = FUN_0273ea30(&local_78);
                  if (iVar7 == 1) {
                    lVar8 = 7;
                  }
                  else {
                    FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x31);
                    iVar7 = FUN_0273ea30(&local_78);
                    if (iVar7 == 1) {
                      lVar8 = 8;
                    }
                    else {
                      FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x37);
                      iVar7 = FUN_0273ea30(&local_78);
                      if (iVar7 == 1) {
                        lVar8 = 9;
                      }
                      else {
                        FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x3d);
                        iVar7 = FUN_0273ea30(&local_78);
                        if (iVar7 == 1) {
                          lVar8 = 10;
                        }
                        else {
                          FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x43);
                          iVar7 = FUN_0273ea30(&local_78);
                          if (iVar7 == 1) {
                            lVar8 = 0xb;
                          }
                          else {
                            FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x49);
                            iVar7 = FUN_0273ea30(&local_78);
                            if (iVar7 == 1) {
                              lVar8 = 0xc;
                            }
                            else {
                              FUN_006d8678(&local_78,"MuseumCafeRandomVisitSp_%s",puVar6 + 0x4f);
                              iVar7 = FUN_0273ea30(&local_78);
                              if (iVar7 != 1) {
                                return;
                              }
                              lVar8 = 0xd;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pvVar2 = (void *)((long)&local_88 + 4);
    local_80._0_4_ = (uint)(uint3)local_80;
    __src = *(void **)(puVar6 + lVar8 * 8 + 0x58);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,8);
    local_90 = pvVar2;
    if (pvVar2 == __src) {
      lVar8 = 7;
    }
    else {
      lVar8 = 0;
      do {
        if (*(char *)((long)__src + lVar8) == '\0') {
LAB_020e40a8:
          iVar7 = (int)lVar8;
          if (7 < iVar7) {
            iVar7 = 7;
          }
          goto LAB_020e40b4;
        }
        if (*(char *)((long)__src + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_020e40a8;
        }
        if (*(char *)((long)__src + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_020e40a8;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      iVar7 = 0;
LAB_020e40b4:
      memcpy(pvVar2,__src,(long)iVar7);
      *(undefined1 *)((long)pvVar2 + (long)iVar7) = 0;
      lVar8 = (long)(int)local_88 + -1;
      __src = local_90;
    }
    pvVar2 = local_90;
    local_98 = (undefined ***)(puVar5 + 0x10);
    __dest = (void *)param_1[1];
    *(undefined1 *)((long)__src + lVar8) = 0;
    if (__dest == local_90) {
      return;
    }
    (**(code **)(puVar5 + 0x28))(&local_98);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_90 + lVar8) == '\0') goto LAB_020e414c;
      if (*(char *)((long)local_90 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_020e414c;
      }
      if (*(char *)((long)local_90 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_020e414c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_020e414c:
    iVar7 = (int)lVar8;
    if ((int)param_1[2] <= (int)lVar8) {
      iVar7 = (int)param_1[2] + -1;
    }
    memcpy(__dest,pvVar2,(long)iVar7);
    *(undefined1 *)((long)__dest + (long)iVar7) = 0;
    return;
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  plStack_70 = (long *)0x40ca914;
  local_78 = ppuVar1;
  iVar7 = FUN_027490f0(0,&local_78);
  uVar9 = 0;
  if (iVar7 < 2) {
    uVar9 = 1;
    plStack_70 = (long *)0x40ca914;
    local_78 = ppuVar1;
    iVar7 = FUN_027490f0(1,&local_78);
    if (iVar7 < 2) {
      plStack_70 = (long *)0x40ca914;
      uVar9 = 2;
      local_78 = (undefined **)(puVar4 + 0x10);
      iVar7 = FUN_027490f0(2,&local_78);
      if (iVar7 < 2) {
        uVar9 = 3;
        plStack_70 = (long *)0x40ca914;
        local_78 = (undefined **)(puVar4 + 0x10);
        iVar7 = FUN_027490f0(3,&local_78);
        if (iVar7 < 2) {
          plStack_70 = (long *)0x40ca914;
          uVar9 = 4;
          local_78 = (undefined **)(puVar4 + 0x10);
          iVar7 = FUN_027490f0(4,&local_78);
          if (iVar7 < 2) {
            uVar9 = 5;
            plStack_70 = (long *)0x40ca914;
            local_78 = (undefined **)(puVar4 + 0x10);
            iVar7 = FUN_027490f0(5,&local_78);
            if (iVar7 < 2) {
              plStack_70 = (long *)0x40ca914;
              uVar9 = 6;
              local_78 = (undefined **)(puVar4 + 0x10);
              iVar7 = FUN_027490f0(6,&local_78);
              if (iVar7 < 2) {
                uVar9 = 7;
                plStack_70 = (long *)0x40ca914;
                local_78 = (undefined **)(puVar4 + 0x10);
                iVar7 = FUN_027490f0(7,&local_78);
                if (iVar7 < 2) {
                  plStack_70 = (long *)0x40ca914;
                  uVar9 = 8;
                  local_78 = (undefined **)(puVar4 + 0x10);
                  iVar7 = FUN_027490f0(8,&local_78);
                  if (iVar7 < 2) {
                    uVar9 = 9;
                    plStack_70 = (long *)0x40ca914;
                    local_78 = (undefined **)(puVar4 + 0x10);
                    iVar7 = FUN_027490f0(9,&local_78);
                    if (iVar7 < 2) goto LAB_020e3d4c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_021d7c00(param_1,uVar9);
LAB_020e3d4c:
  if (*(char *)param_1[1] == '\0') {
    local_78 = &PTR_LAB_04a74060;
    plStack_70 = param_1;
    FUN_016d43e0(&local_78);
  }
  return;
}

