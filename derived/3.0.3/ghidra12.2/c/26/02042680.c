
void FUN_02042680(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *__dest;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *local_830;
  undefined1 *local_828;
  undefined4 local_820;
  undefined1 local_81c [31];
  undefined1 local_7fd;
  undefined *local_798;
  undefined1 *local_790;
  undefined4 local_788;
  undefined1 local_784 [7];
  undefined1 local_77d;
  undefined8 local_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined8 local_764;
  ulong local_75c;
  undefined8 local_754;
  undefined *local_748;
  undefined1 *local_740;
  int local_738;
  undefined1 local_734 [127];
  undefined1 local_6b5;
  undefined4 local_6b0;
  undefined2 local_6ac;
  undefined8 local_6a8;
  undefined1 auStack_6a0 [60];
  undefined1 auStack_664 [4];
  undefined1 auStack_660 [140];
  undefined4 local_5d4;
  
  uVar3 = FUN_0291e130(auStack_660,auStack_664,0);
  puVar1 = PTR_DAT_04bb70a8;
  if ((uVar3 & 1) != 0) {
    FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",PTR_DAT_04bb70a8);
    iVar2 = FUN_0273ea30(auStack_6a0);
    if (iVar2 == 1) {
      lVar5 = 0;
    }
    else {
      FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 6);
      iVar2 = FUN_0273ea30(auStack_6a0);
      if (iVar2 == 1) {
        lVar5 = 1;
      }
      else {
        FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0xc);
        iVar2 = FUN_0273ea30(auStack_6a0);
        if (iVar2 == 1) {
          lVar5 = 2;
        }
        else {
          FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x12);
          iVar2 = FUN_0273ea30(auStack_6a0);
          if (iVar2 == 1) {
            lVar5 = 3;
          }
          else {
            FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x18);
            iVar2 = FUN_0273ea30(auStack_6a0);
            if (iVar2 == 1) {
              lVar5 = 4;
            }
            else {
              FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x1e);
              iVar2 = FUN_0273ea30(auStack_6a0);
              if (iVar2 == 1) {
                lVar5 = 5;
              }
              else {
                FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x24);
                iVar2 = FUN_0273ea30(auStack_6a0);
                if (iVar2 == 1) {
                  lVar5 = 6;
                }
                else {
                  FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x2b);
                  iVar2 = FUN_0273ea30(auStack_6a0);
                  if (iVar2 == 1) {
                    lVar5 = 7;
                  }
                  else {
                    FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x31);
                    iVar2 = FUN_0273ea30(auStack_6a0);
                    if (iVar2 == 1) {
                      lVar5 = 8;
                    }
                    else {
                      FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x37);
                      iVar2 = FUN_0273ea30(auStack_6a0);
                      if (iVar2 == 1) {
                        lVar5 = 9;
                      }
                      else {
                        FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x3d);
                        iVar2 = FUN_0273ea30(auStack_6a0);
                        if (iVar2 == 1) {
                          lVar5 = 10;
                        }
                        else {
                          FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x43);
                          iVar2 = FUN_0273ea30(auStack_6a0);
                          if (iVar2 == 1) {
                            lVar5 = 0xb;
                          }
                          else {
                            FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x49);
                            iVar2 = FUN_0273ea30(auStack_6a0);
                            if (iVar2 == 1) {
                              lVar5 = 0xc;
                            }
                            else {
                              FUN_006d8678(auStack_6a0,"MuseumCafeRandomVisitSp_%s",puVar1 + 0x4f);
                              iVar2 = FUN_0273ea30(auStack_6a0);
                              if (iVar2 != 1) {
                                return;
                              }
                              lVar5 = 0xd;
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
    local_768 = 0;
    local_764 = 0x3f800000;
    local_778 = 0xffffffff00000000;
    local_770 = 0;
    local_740 = local_734;
    local_738 = 0x80;
    local_6b5 = 0;
    local_734[0] = 0;
    local_748 = PTR_DAT_04bb2d88 + 0x10;
    local_6a8 = 0;
    local_6ac = 0;
    local_75c = 0;
    local_754 = 0;
    local_790 = local_784;
    local_77d = 0;
    local_784[0] = 0;
    local_6b0 = 7;
    local_788 = 8;
    puVar4 = *(undefined1 **)(puVar1 + lVar5 * 8 + 0x58);
    local_798 = PTR_DAT_04bb3768 + 0x10;
    local_820 = 0x20;
    local_7fd = 0;
    local_828 = local_81c;
    if (local_81c != puVar4) {
      lVar5 = 0;
      do {
        if (puVar4[lVar5] == '\0') {
LAB_02042a24:
          iVar2 = (int)lVar5;
joined_r0x02042a28:
          if (0x1f < iVar2) {
            iVar2 = 0x1f;
          }
          goto LAB_02042a30;
        }
        if (puVar4[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_02042a24;
        }
        if (puVar4[lVar5 + 2] == '\0') {
          iVar2 = (int)lVar5 + 2;
          goto joined_r0x02042a28;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      iVar2 = 0;
LAB_02042a30:
      memcpy(local_81c,puVar4,(long)iVar2);
      local_81c[iVar2] = 0;
    }
    local_830 = PTR_DAT_04bb2028 + 0x10;
    FUN_0220a410(&local_798,&local_830);
    local_778 = CONCAT44(10,(undefined4)local_778);
    local_764 = CONCAT44(0x80000000,(undefined4)local_764);
    local_768 = local_5d4;
    (**(code **)(local_798 + 0x18))(&local_798);
    FUN_0074fda4(&local_830,"%s/AIC:CafeCustomer/AIF:AI_NPC_MuseumCafeCustomer",local_790);
    __dest = local_740;
    (**(code **)(local_830 + 0x18))(&local_830);
    puVar4 = local_828;
    if (__dest != local_828) {
      (**(code **)(local_830 + 0x18))(&local_830);
      lVar5 = 0;
      do {
        if (local_828[lVar5] == '\0') goto LAB_02042b1c;
        if (local_828[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_02042b1c;
        }
        if (local_828[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_02042b1c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_02042b1c:
      iVar2 = (int)lVar5;
      if (local_738 <= (int)lVar5) {
        iVar2 = local_738 + -1;
      }
      memcpy(__dest,puVar4,(long)iVar2);
      __dest[iVar2] = 0;
    }
    local_75c = local_75c & 0xffffffff;
    local_754 = CONCAT44(1,(undefined4)local_754);
    if (*(int *)(*(long *)PTR_DAT_04bb4128 + 0x248) == 0) {
      FUN_020e6430(*(long *)PTR_DAT_04bb4128,0xb);
    }
    FUN_02030e80(param_1,&local_778);
  }
  return;
}

