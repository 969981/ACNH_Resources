
/* WARNING: Type propagation algorithm not settling */

uint * FUN_028d8540(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  void *__dest;
  long lVar14;
  char *__src;
  uint uVar15;
  int *piVar16;
  long *plVar17;
  undefined **ppuVar18;
  undefined2 uVar19;
  undefined1 uVar20;
  undefined4 local_16c8;
  undefined1 local_16c4;
  undefined2 local_16c0;
  undefined1 local_16be;
  undefined1 local_16bd;
  undefined4 local_16bc;
  undefined4 local_16b8 [4];
  undefined8 local_16a8;
  char *local_16a0;
  undefined1 local_1698;
  byte local_1697;
  undefined **local_f38;
  char *local_f30;
  undefined4 local_f28;
  char local_f24 [7];
  undefined1 local_f1d;
  float local_7c8;
  uint local_7c4;
  undefined8 local_7c0;
  undefined4 *local_7b8;
  undefined1 local_7b0;
  byte local_7af;
  
  puVar3 = PTR_DAT_04bb32e8;
  piVar16 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar16 == 0) {
    local_16a8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_16a8 >> 0x20) < '\x05') {
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16a8);
      local_f38 = (undefined **)(lVar9 + -0x15180);
      local_16a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f38);
    }
    piVar16 = (int *)&local_16a8;
    uVar11 = (ulong)local_16a8 >> 0x30;
    local_16a8._0_6_ = CONCAT24(5,(int)local_16a8);
    local_16a8 = (undefined *)(CONCAT26((short)uVar11,(undefined6)local_16a8) & 0xff00ffffffffffff);
  }
  iVar8 = *piVar16;
  uVar7 = nn::time::GetDayOfWeek((int)(short)iVar8,(iVar8 << 8) >> 0x18,iVar8 >> 0x18);
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    uVar11 = (ulong)uVar7;
    if (6 < uVar7) {
      uVar11 = 0;
    }
    uVar15 = *(uint *)(param_1 + uVar11 * 4);
    if (0xb < uVar15) {
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 0;
  }
  local_7c4 = uVar15;
  local_f38._0_4_ = uVar7;
  puVar10 = (uint *)FUN_028d4718();
  puVar2 = PTR_DAT_04bb2020;
  local_f38 = (undefined **)CONCAT44(local_f38._4_4_,(int)puVar10);
  if ((int)puVar10 != 0) {
    local_f30 = "TotakekeTalkBeforeFlag";
    local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    puVar10 = (uint *)FUN_0274bce0(param_2,&local_f38);
    if ((int)puVar10 != 0) {
      puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar7 = *puVar10 ^ *puVar10 << 0xb;
      uVar1 = puVar10[3];
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
      puVar10[2] = uVar1;
      puVar10[3] = uVar7;
      if ((int)uVar7 < 0) {
        local_f30 = "tkkA";
        local_f38 = (undefined **)(puVar2 + 0x10);
        puVar10 = (uint *)FUN_021da350(&local_7c8,param_2,&local_f38);
        if ((((ulong)puVar10 & 1) != 0) && (160.0 <= local_7c8)) {
          lVar9 = FUN_028d4718();
          iVar8 = (int)lVar9;
          plVar17 = (long *)(*(long *)puVar3 + 0x4068);
          if (*(short *)plVar17 == 0) {
            local_16a8 = *(undefined **)(*(long *)puVar3 + 0x4060);
            if ((char)((ulong)local_16a8 >> 0x20) < '\x05') {
              lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16a8);
              local_f38 = (undefined **)(lVar9 + -0x15180);
              lVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f38);
              local_16a8 = (undefined *)lVar9;
            }
            plVar17 = &local_16a8;
            uVar11 = (ulong)local_16a8 >> 0x30;
            local_16a8._0_6_ = CONCAT24(5,(int)local_16a8);
            local_16a8 = (undefined *)
                         (CONCAT26((short)uVar11,(undefined6)local_16a8) & 0xff00ffffffffffff);
          }
          local_f38 = (undefined **)*plVar17;
          puVar10 = (uint *)FUN_028d4550(lVar9,&local_f38);
          uVar4 = DAT_04cea100;
          if ((int)puVar10 == 2) {
            local_f38 = (undefined **)FUN_00a82790(*(undefined8 *)puVar3);
            uVar11 = FUN_00882f60(uVar4,param_2,&local_f38);
            uVar7 = 0xb;
            if ((uVar11 & 1) == 0) {
              uVar7 = 0xd;
            }
            puVar10 = (uint *)(ulong)uVar7;
            if (iVar8 - 1U < 2) {
              return puVar10;
            }
          }
          else if ((int)puVar10 == 1) {
            local_f30 = "TkkFirstLive";
            local_f38 = (undefined **)(puVar2 + 0x10);
            bVar6 = FUN_0273f0a0(&local_f38);
            local_f30 = "TotakekeLive2_0Flag";
            local_f38 = (undefined **)(puVar2 + 0x10);
            iVar8 = FUN_0274bce0(param_2,&local_f38);
            uVar19 = *(undefined2 *)PTR_DAT_04bb37e0;
            bVar6 = bVar6 & iVar8 == 0;
            uVar20 = PTR_DAT_04bb37e0[2];
            local_16c4 = PTR_DAT_04bb37e0[3];
            local_16c8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            FUN_01a44770(&local_f38);
            puVar12 = (undefined4 *)FUN_0264a320(param_2);
            if (puVar12 != (undefined4 *)0x0) {
              local_1698 = 1;
              local_16a0 = (char *)puVar12;
              if (*(long **)(puVar12 + 10) == (long *)0x0) {
                local_1697 = 0;
              }
              else {
                puVar13 = (undefined8 *)**(long **)(puVar12 + 10);
                local_1697 = 0;
                if (puVar13 != (undefined8 *)0x0) {
                  local_1697 = (**(code **)*puVar13)();
                }
              }
              local_1697 = local_1697 & 1;
              local_16a8 = PTR_DAT_04bb64c8 + 0x10;
              memcpy(&local_f30,(void *)(*(long *)(puVar12 + 4) + *(long *)(puVar12 + 2)),0x754);
              FUN_02640184(&local_16a8);
              FUN_01a44770(&local_16a8);
              local_16b8[0] = 0x7b;
              local_7c0 = &PTR_FUN_049ff4e8;
              local_7b8 = local_16b8;
              FUN_008a1ba0(&local_16a8,&local_7c0);
              local_7c0 = &PTR_FUN_049ff4e8;
              local_16b8[0] = 0x7c;
              local_7b8 = local_16b8;
              FUN_008a1ba0(&local_16a8,&local_7c0);
              local_7c0 = &PTR_FUN_049ff4e8;
              local_16b8[0] = 0x7d;
              local_7b8 = local_16b8;
              FUN_008a1ba0(&local_16a8,&local_7c0);
              local_7c0 = &PTR_FUN_049ff4e8;
              local_16b8[0] = 0x7e;
              local_7b8 = local_16b8;
              FUN_008a1ba0(&local_16a8,&local_7c0);
              local_7c0 = &PTR_FUN_049ff4e8;
              local_16b8[0] = 0x7f;
              local_7b8 = local_16b8;
              FUN_008a1ba0(&local_16a8,&local_7c0);
              __dest = (void *)(**(code **)(local_16a8 + 0x18))(&local_16a8);
              lVar14 = (*(code *)local_f38[4])(&local_f38);
              for (lVar9 = 0;
                  *(uint *)((long)&local_7c0 + lVar9) =
                       *(uint *)(lVar14 + lVar9) & *(uint *)((long)__dest + lVar9), lVar9 != 0x750;
                  lVar9 = lVar9 + 8) {
                *(uint *)((long)&local_7c0 + lVar9 + 4) =
                     *(uint *)(lVar14 + lVar9 + 4) & *(uint *)((long)__dest + lVar9 + 4);
              }
              memcpy(__dest,&local_7c0,0x754);
              *(uint *)((long)__dest + 0x750) = *(uint *)((long)__dest + 0x750) & 0xffffff;
              lVar14 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
              lVar9 = 0;
              uVar7 = 0;
              do {
                puVar10 = (uint *)(lVar14 + lVar9);
                lVar9 = lVar9 + 4;
                uVar1 = *puVar10 - (*puVar10 >> 1 & 0x55555555);
                uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                uVar1 = uVar1 + (uVar1 >> 8);
                uVar7 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar7;
              } while (lVar9 != 0x754);
              if (uVar7 < 7) {
                local_7c0 = &PTR_FUN_049ff4e8;
                local_16b8[0] = 0x7b;
                local_7b8 = local_16b8;
                FUN_008a1ba0(&local_16a8,&local_7c0);
                local_7c0 = &PTR_FUN_049ff4e8;
                local_16b8[0] = 0x7c;
                local_7b8 = local_16b8;
                FUN_008a1ba0(&local_16a8,&local_7c0);
                local_7c0 = &PTR_FUN_049ff4e8;
                local_16b8[0] = 0x7d;
                local_7b8 = local_16b8;
                FUN_008a1ba0(&local_16a8,&local_7c0);
                local_7c0 = &PTR_FUN_049ff4e8;
                local_16b8[0] = 0x7e;
                local_7b8 = local_16b8;
                FUN_008a1ba0(&local_16a8,&local_7c0);
                local_7c0 = &PTR_FUN_049ff4e8;
                local_16b8[0] = 0x7f;
                local_7b8 = local_16b8;
                FUN_008a1ba0(&local_16a8,&local_7c0);
                FUN_00ba914c(local_16b8);
                local_7b0 = 1;
                local_7b8 = puVar12;
                if (*(long **)(puVar12 + 10) == (long *)0x0) {
                  local_7af = 0;
                }
                else {
                  puVar13 = (undefined8 *)**(long **)(puVar12 + 10);
                  local_7af = 0;
                  if (puVar13 != (undefined8 *)0x0) {
                    local_7af = (**(code **)*puVar13)();
                  }
                }
                local_7af = local_7af & 1;
                local_7c0 = (undefined **)(PTR_DAT_04bb64c8 + 0x10);
                FUN_01a4d290(&local_16c0,local_16b8,&local_16a8,
                             *(long *)(puVar12 + 4) + *(long *)(puVar12 + 2),0,0,PTR_FUN_04bb67e0,0)
                ;
                local_16c4 = local_16bd;
                local_16c8 = local_16bc;
                FUN_02640184(&local_7c0);
                uVar19 = local_16c0;
                uVar20 = local_16be;
              }
              else {
                bVar6 = 0;
              }
            }
            ppuVar18 = *(undefined ***)(*(long *)puVar3 + 0x4060);
            local_f38 = ppuVar18;
            puVar10 = (uint *)FUN_00a8117c(&local_f38);
            if ((((ulong)puVar10 & 1) == 0) && ('\x04' < (char)((ulong)ppuVar18 >> 0x20))) {
              uVar15 = (uint)((ulong)ppuVar18 >> 0x20) & 0xff;
              uVar7 = 2;
              if (0x11 < uVar15) {
                uVar7 = 6;
              }
              if (bVar6 == 0) {
                return (uint *)(ulong)uVar7;
              }
              lVar9 = *(long *)PTR_DAT_04bb3240;
              *(undefined1 *)(lVar9 + 0xdf87) = local_16c4;
              *(undefined2 *)(lVar9 + 0xdf84) = uVar19;
              *(undefined1 *)(lVar9 + 0xdf86) = uVar20;
              uVar7 = 0x16;
              if (0x11 < uVar15) {
                uVar7 = 0x17;
              }
              *(undefined4 *)(lVar9 + 0xdf88) = local_16c8;
              return (uint *)(ulong)uVar7;
            }
          }
        }
      }
    }
  }
  uVar11 = FUN_028d4428(puVar10);
  if ((((uVar11 & 1) != 0) && (uVar11 = FUN_00a8117c(*(long *)puVar3 + 0x4060), (uVar11 & 1) == 0))
     && (*(byte *)(*(long *)puVar3 + 0x4064) - 5 < 7)) {
    if (uVar15 != 0) {
      puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar7 = *puVar10 ^ *puVar10 << 0xb;
      uVar1 = puVar10[3];
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
      puVar10[2] = uVar1;
      puVar10[3] = uVar7;
      if ((int)uVar7 < 0) goto LAB_028d8778;
    }
    local_f30 = "boc";
    local_f38 = (undefined **)(puVar2 + 0x10);
    uVar11 = FUN_021da350(&local_7c8,param_2,&local_f38);
    if (((uVar11 & 1) != 0) && (160.0 <= local_7c8)) {
      local_f30 = "KaburibaTalkBeforeFlag";
      local_f38 = (undefined **)(puVar2 + 0x10);
      iVar8 = FUN_0274bce0(param_2,&local_f38);
      bVar5 = iVar8 == 0;
      uVar7 = 7;
      goto LAB_028d8824;
    }
  }
LAB_028d8778:
  uVar11 = FUN_028d5264(param_1);
  if ((uVar11 & 1) != 0) {
    if (uVar15 != 0) {
      puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar7 = *puVar10 ^ *puVar10 << 0xb;
      uVar1 = puVar10[3];
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
      puVar10[2] = uVar1;
      puVar10[3] = uVar7;
      if ((int)uVar7 < 0) goto LAB_028d8830;
    }
    local_f30 = "ows";
    local_f38 = (undefined **)(puVar2 + 0x10);
    uVar11 = FUN_021da350(&local_7c8,param_2,&local_f38);
    if (((uVar11 & 1) != 0) && (160.0 <= local_7c8)) {
      local_f30 = "OwsFirstTalk";
      local_f38 = (undefined **)(puVar2 + 0x10);
      iVar8 = FUN_0274bce0(param_2,&local_f38);
      bVar5 = iVar8 == 0;
      uVar7 = 0x12;
      goto LAB_028d8824;
    }
  }
LAB_028d8830:
  local_f30 = "FoxPreVisitToday";
  local_f38 = (undefined **)(puVar2 + 0x10);
  uVar11 = FUN_0273f0a0(&local_f38);
  if ((uVar11 & 1) != 0) {
    if (uVar15 != 0) {
      puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar7 = *puVar10 ^ *puVar10 << 0xb;
      uVar1 = puVar10[3];
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
      puVar10[2] = uVar1;
      puVar10[3] = uVar7;
      if ((int)uVar7 < 0) goto LAB_028d88d0;
    }
    local_f30 = "fox";
    local_f38 = (undefined **)(puVar2 + 0x10);
    uVar11 = FUN_021da350(&local_7c8,param_2,&local_f38);
    if (((uVar11 & 1) != 0) && (160.0 <= local_7c8)) goto switchD_028d8ccc_caseD_a;
  }
LAB_028d88d0:
  if ((DAT_0537d558 == 0) ||
     ((*(long *)(DAT_0537d558 + 0x28) == 0 || (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
    local_f30 = "PynVisitToday";
    local_f38 = (undefined **)(puVar2 + 0x10);
    iVar8 = FUN_0273ea30(&local_f38);
    if (iVar8 != 0) {
      local_f30 = "pyn";
      local_16a8 = *(undefined **)(*(long *)puVar3 + 0x4060);
      local_f38 = (undefined **)(puVar2 + 0x10);
      uVar11 = FUN_028d4a98(&local_16a8,&local_f38);
      if ((uVar11 & 1) != 0) {
        local_f38 = (undefined **)(puVar2 + 0x10);
        local_f30 = "pyn";
        uVar11 = FUN_021da350(&local_7c8,param_2,&local_f38);
        if (((uVar11 & 1) != 0) && (160.0 <= local_7c8)) {
          if (uVar15 == 0) {
            return (uint *)0x13;
          }
          puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar7 = *puVar10 ^ *puVar10 << 0xb;
          uVar1 = puVar10[3];
          *puVar10 = puVar10[1];
          puVar10[1] = puVar10[2];
          uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
          puVar10[2] = uVar1;
          puVar10[3] = uVar7;
          if (-1 < (int)uVar7) {
            return (uint *)0x13;
          }
        }
      }
    }
  }
  local_7c0 = *(undefined ***)(*(long *)puVar3 + 0x4060);
  if (uVar15 < 0xc) {
    local_f30 = (&PTR_DAT_049868c8)[uVar15];
  }
  else {
    local_f30 = "";
  }
  local_f38 = (undefined **)(puVar2 + 0x10);
  uVar11 = FUN_028d4a98(&local_7c0,&local_f38);
  if ((uVar11 & 1) == 0) {
    return (uint *)0x0;
  }
  if (local_7c4 < 0xc) {
    local_f30 = local_f24;
    local_f1d = 0;
    __src = (&PTR_DAT_04a92640)[local_7c4];
    local_f28 = 8;
    local_f38 = &PTR_LAB_048f96d0;
    if (local_f30 != __src) goto LAB_028d8be8;
  }
  else {
    __src = "";
    local_f38 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
LAB_028d8be8:
    local_f1d = 0;
    local_f28 = 8;
    local_f30 = local_f24;
    lVar9 = 0;
    do {
      if (__src[lVar9] == '\0') {
LAB_028d8c28:
        iVar8 = (int)lVar9;
joined_r0x028d8c2c:
        if (7 < iVar8) {
          iVar8 = 7;
        }
        goto LAB_028d8c34;
      }
      if (__src[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_028d8c28;
      }
      if (__src[lVar9 + 2] == '\0') {
        iVar8 = (int)lVar9 + 2;
        goto joined_r0x028d8c2c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    iVar8 = 0;
LAB_028d8c34:
    memcpy(local_f30,__src,(long)iVar8);
    local_f24[iVar8] = '\0';
  }
  local_f38 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  uVar11 = FUN_021da350(&local_7c8,param_2,&local_f38);
  if (((uVar11 & 1) != 0) && (local_7c8 < 160.0)) {
LAB_028d8c84:
    return (uint *)0x0;
  }
  switch(local_7c4) {
  case 1:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "JohnnyTalkBeforeFlag";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    uVar7 = 100;
    if (iVar8 != 0) {
      uVar7 = 1;
    }
    return (uint *)(ulong)uVar7;
  case 2:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "KotonoTalkBeforeFlag";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 3;
    break;
  case 3:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "RollanTalkBeforeFlag";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 4;
    break;
  case 4:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "GstAppearField";
    uVar11 = FUN_0273f0a0(&local_16a8);
    uVar7 = 9;
    if ((uVar11 & 1) == 0) {
      uVar7 = 0;
    }
    return (uint *)(ulong)uVar7;
  case 5:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "KinuyoTalkBoforeFlag";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 0xe;
    break;
  case 6:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "BeyDaily_TalkFirst";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 0xf;
    break;
  case 7:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "ChyDaily_TalkFirst";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 0x10;
    break;
  case 8:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "SkkTalkBeforeFlag";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 0x11;
    break;
  case 9:
    local_16a8 = puVar2 + 0x10;
    local_16a0 = "ReijiTalkBeforeFlag";
    iVar8 = FUN_0274bce0(param_2,&local_16a8);
    bVar5 = iVar8 == 0;
    uVar7 = 0x14;
    break;
  case 10:
switchD_028d8ccc_caseD_a:
    return (uint *)&DAT_00000008;
  case 0xb:
    return (uint *)&DAT_00000015;
  default:
    goto LAB_028d8c84;
  }
LAB_028d8824:
  uVar15 = 100;
  if (!bVar5) {
    uVar15 = uVar7;
  }
  return (uint *)(ulong)uVar15;
}

