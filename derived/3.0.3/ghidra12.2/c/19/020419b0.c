
void FUN_020419b0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 *__src;
  char *pcVar4;
  undefined1 *__dest;
  bool bVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  undefined *puVar15;
  long local_828;
  undefined1 *local_820;
  undefined *local_790;
  char *local_788;
  undefined4 local_780;
  undefined8 local_77c;
  ulong local_774;
  undefined8 uStack_76c;
  undefined1 *local_760;
  undefined1 *local_758;
  int local_750;
  undefined1 local_74c [127];
  undefined1 local_6cd;
  undefined4 local_6c8;
  undefined2 local_6c4;
  undefined8 local_6c0;
  undefined *local_6b8;
  char *local_6b0;
  int local_6a8;
  char local_6a4 [7];
  undefined1 local_69d;
  undefined1 auStack_694 [4];
  undefined *local_690;
  char *local_688 [191];
  undefined1 auStack_90 [4];
  uint local_8c;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  
  puVar15 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_688[0] = "MuseumCafeAmiiboCustomer";
  local_690 = puVar1;
  sVar6 = FUN_0273ea30(&local_690);
  if (sVar6 != 0) {
    local_688[0] = "SetMuseumCafeAmiiboCustomer";
    local_690 = puVar1;
    iVar7 = FUN_02743000(&local_690);
    puVar1 = PTR_DAT_04bb3768;
    if (iVar7 != 0) {
      local_6d = 0;
      local_78 = 8;
      puStack_80 = local_74;
      local_74[0] = 0;
      local_88 = PTR_DAT_04bb3768 + 0x10;
      FUN_02209f40(&local_88,&local_8c,auStack_90);
      lVar3 = DAT_053e4ff0;
      if ((DAT_053e4ff0 != 0) && (uVar8 = FUN_0291e130(&local_690,auStack_694,0), (uVar8 & 1) != 0))
      {
        local_69d = 0;
        local_6b0 = local_6a4;
        local_6a8 = 8;
        local_6b8 = puVar1 + 0x10;
        uVar8 = 0;
        puVar1 = puVar15 + 0x10;
        local_6a4[0] = '\0';
LAB_02041af4:
        if ((*(uint *)(lVar3 + 0x208) >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0) {
          FUN_020e3ad0(&local_790,lVar3,uVar8 & 0xffffffff);
          pcVar13 = local_6b0;
          (**(code **)(local_790 + 0x18))(&local_790);
          pcVar4 = local_788;
          if (pcVar13 != local_788) {
            (**(code **)(local_790 + 0x18))(&local_790);
            lVar10 = 0;
            do {
              if (local_788[lVar10] == '\0') goto LAB_02041b8c;
              if (local_788[lVar10 + 1] == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_02041b8c;
              }
              if (local_788[lVar10 + 2] == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_02041b8c;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_02041b8c:
            iVar7 = (int)lVar10;
            if (local_6a8 <= (int)lVar10) {
              iVar7 = local_6a8 + -1;
            }
            memcpy(pcVar13,pcVar4,(long)iVar7);
            pcVar13[iVar7] = '\0';
          }
          if (*local_6b0 == '\0') goto LAB_02041ae8;
          local_788 = "poo";
          local_790 = puVar1;
          (**(code **)(local_6b8 + 0x18))(&local_6b8);
          (**(code **)(local_6b8 + 0x18))(&local_6b8);
          pcVar4 = local_6b0;
          (**(code **)(local_790 + 0x18))(&local_790);
          pcVar13 = local_6b0;
          if (pcVar4 == local_788) {
LAB_02041c80:
            local_790 = puVar15 + 0x10;
            local_788 = "B";
            (**(code **)(local_6b8 + 0x18))(&local_6b8);
            lVar10 = 0;
            do {
              if (local_6b0[lVar10] == '\0') goto LAB_02041cec;
              if (local_6b0[lVar10 + 1] == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_02041cec;
              }
              if (local_6b0[lVar10 + 2] == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_02041cec;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_02041cec:
            uVar14 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
            (**(code **)(local_790 + 0x18))(&local_790);
            lVar10 = 0;
            do {
              if (local_788[lVar10] == '\0') goto LAB_02041f88;
              if (local_788[lVar10 + 1] == '\0') goto LAB_02041f7c;
              if (local_788[lVar10 + 2] == '\0') goto LAB_02041f84;
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
LAB_02041d38:
            lVar10 = 0;
            goto LAB_02041f88;
          }
          uVar12 = 0;
          bVar5 = true;
          do {
            if (local_6b0[uVar12] != local_788[uVar12]) break;
            if (local_6b0[uVar12] == '\0') {
              if (bVar5) goto LAB_02041c80;
              break;
            }
            if (local_6b0[uVar12 + 1] != local_788[uVar12 + 1]) break;
            if (local_6b0[uVar12 + 1] == '\0') goto LAB_02041c80;
            if (local_6b0[uVar12 + 2] != local_788[uVar12 + 2]) break;
            if (local_6b0[uVar12 + 2] == '\0') goto LAB_02041c80;
            bVar5 = uVar12 < 0x7fffe;
            uVar12 = uVar12 + 3;
          } while (uVar12 != 0x80001);
          local_790 = puVar15 + 0x10;
          local_788 = "gul";
          (**(code **)(local_6b8 + 0x18))(&local_6b8);
          (**(code **)(local_6b8 + 0x18))(&local_6b8);
          pcVar4 = local_6b0;
          (**(code **)(local_790 + 0x18))(&local_790);
          if (pcVar4 == local_788) {
LAB_02041e04:
            if (DAT_05574040 == 0) {
LAB_02041e5c:
              lVar10 = 0;
            }
            else {
              puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
              if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
                lVar9 = (**(code **)(*(long *)*puVar11 + 0x38))();
                lVar10 = 0;
                if (lVar9 != 0) {
                  lVar10 = lVar9 + 0x70;
                }
              }
              else {
                if (puVar11 == (undefined8 *)0x0) goto LAB_02041e5c;
                lVar10 = 0;
                if ((long *)puVar11[0x26] != (long *)0x0) {
                  lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
                }
              }
            }
            if ((*(long **)(lVar10 + 0x1bf260) == (long *)0x0) ||
               (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x1bf260), puVar11 == (undefined8 *)0x0
               )) {
              uVar12 = 0;
            }
            else {
              uVar12 = (**(code **)*puVar11)();
              uVar12 = uVar12 & 0xffffffff;
            }
            iVar7 = FUN_028d6b0c(*(long *)(lVar10 + 0x1bf248) + *(long *)(lVar10 + 0x1bf240));
            if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x1bf260) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x1bf260) + 8),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            pcVar13 = local_6b0;
            if (iVar7 == 0xb) {
              local_790 = puVar15 + 0x10;
              local_788 = "B";
              (**(code **)(local_6b8 + 0x18))(&local_6b8);
              lVar10 = 0;
              do {
                if (local_6b0[lVar10] == '\0') goto LAB_02041f30;
                if (local_6b0[lVar10 + 1] == '\0') {
                  lVar10 = lVar10 + 1;
                  goto LAB_02041f30;
                }
                if (local_6b0[lVar10 + 2] == '\0') {
                  lVar10 = lVar10 + 2;
                  goto LAB_02041f30;
                }
                lVar10 = lVar10 + 3;
              } while (lVar10 != 0x80001);
              lVar10 = 0;
LAB_02041f30:
              uVar14 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
              (**(code **)(local_790 + 0x18))(&local_790);
              lVar10 = 0;
              do {
                if (local_788[lVar10] == '\0') goto LAB_02041f88;
                if (local_788[lVar10 + 1] == '\0') goto LAB_02041f7c;
                if (local_788[lVar10 + 2] == '\0') goto LAB_02041f84;
                lVar10 = lVar10 + 3;
              } while (lVar10 != 0x80001);
              goto LAB_02041d38;
            }
          }
          else {
            uVar12 = 0;
            bVar5 = true;
            do {
              if (local_6b0[uVar12] != local_788[uVar12]) break;
              if (local_6b0[uVar12] == '\0') {
                if (bVar5) goto LAB_02041e04;
                break;
              }
              if (local_6b0[uVar12 + 1] != local_788[uVar12 + 1]) break;
              if (local_6b0[uVar12 + 1] == '\0') goto LAB_02041e04;
              if (local_6b0[uVar12 + 2] != local_788[uVar12 + 2]) break;
              if (local_6b0[uVar12 + 2] == '\0') goto LAB_02041e04;
              bVar5 = uVar12 < 0x7fffe;
              uVar12 = uVar12 + 3;
            } while (uVar12 != 0x80001);
          }
          goto LAB_02041fdc;
        }
        goto LAB_02041ae8;
      }
    }
  }
  return;
LAB_02041f7c:
  lVar10 = lVar10 + 1;
  goto LAB_02041f88;
LAB_02041f84:
  lVar10 = lVar10 + 2;
LAB_02041f88:
  uVar2 = (uint)lVar10;
  if ((int)(local_6a8 - uVar14) <= (int)(uint)lVar10) {
    uVar2 = local_6a8 + ~uVar14;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_790 + 0x18))(&local_790);
    memcpy(pcVar13 + uVar14,local_788,(ulong)uVar2);
    pcVar13[(int)(uVar2 + uVar14)] = '\0';
  }
  puVar15 = &DAT_048f9760;
LAB_02041fdc:
  local_6cd = 0;
  local_74c[0] = 0;
  local_77c = 0xc00000003f800000;
  local_6c0 = 0;
  local_750 = 0x80;
  local_6c4 = 0;
  local_774 = 0;
  uStack_76c = 0;
  local_760 = &DAT_048fc708;
  local_6c8 = 7;
  local_788 = *(char **)(auStack_694 + uVar8 * 0xc + 4);
  local_780 = *(undefined4 *)((long)local_688 + uVar8 * 0xc);
  local_790 = (undefined *)0xa00000000;
  local_758 = local_74c;
  (**(code **)(local_6b8 + 0x18))(&local_6b8);
  FUN_0074fda4(&local_828,"%s/AIC:CafeCustomer/AIF:AI_NPC_MuseumCafeCustomer",local_6b0);
  __dest = local_758;
  (**(code **)(local_828 + 0x18))(&local_828);
  __src = local_820;
  if (__dest != local_820) {
    (**(code **)(local_828 + 0x18))(&local_828);
    lVar10 = 0;
    do {
      if (local_820[lVar10] == '\0') goto LAB_020420d0;
      if (local_820[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_020420d0;
      }
      if (local_820[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_020420d0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_020420d0:
    iVar7 = (int)lVar10;
    if (local_750 <= (int)lVar10) {
      iVar7 = local_750 + -1;
    }
    memcpy(__dest,__src,(long)iVar7);
    __dest[iVar7] = 0;
  }
  local_774 = (ulong)local_8c;
  uStack_76c = CONCAT44(1,(undefined4)uStack_76c);
  if ((0xf < (uint)uVar8) || (*(int *)(lVar3 + 0x21c + uVar8 * 4) == 0)) {
    FUN_020e6430(lVar3,uVar8 & 0xffffffff);
  }
  FUN_02030e80(param_1,&local_790);
LAB_02041ae8:
  uVar8 = uVar8 + 1;
  if (uVar8 == 0x10) {
    return;
  }
  goto LAB_02041af4;
}

