
undefined2 FUN_013ef740(undefined8 param_1,uint *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long local_28;
  
  uVar12 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar11 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "HarvestFestival";
  local_48 = uVar12;
  if ((char)(uVar12 >> 0x20) < '\x05') {
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_28 = local_28 + -0x15180;
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar4 = local_48;
  uVar5 = local_48 >> 0x30;
  local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
  local_48 = CONCAT26((short)uVar5,(undefined6)local_48) & 0xff00ffffffffffff;
  uVar5 = FUN_00879dd0(uVar11,&local_58,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
  if (((uVar5 & 1) == 0) || (*param_3 + 1 != ((int)uVar12 << 8) >> 0x18)) {
LAB_013ef848:
    switch(*param_3) {
    case 0:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        uVar11 = 0x12;
        uVar3 = 0x3e01d394;
      }
      else if (iVar2 == 1) {
        uVar3 = 0xb3f1a70f;
        uVar11 = 0x10;
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_1;
        uVar11 = 0x11;
        uVar3 = 0x51bcedfa;
      }
      puVar6 = (undefined2 *)FUN_01407990(param_2,uVar11,uVar3);
      if (puVar6 == (undefined2 *)0x0) {
        return 0;
      }
      goto LAB_013f1b8c;
    case 1:
switchD_013ef868_caseD_1:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b719c._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b719c;
          if (-1 < (int)(uint)DAT_051b719c) break;
        }
        uVar8 = (uint)DAT_051b719c;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b719c = CONCAT44(DAT_051b719c._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x91ee0d19) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b719c = CONCAT44(DAT_051b719c._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7194._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b7194;
          if (-1 < (int)(uint)DAT_051b7194) break;
        }
        uVar8 = (uint)DAT_051b7194;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7194 = CONCAT44(DAT_051b7194._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x5cb71135) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7194 = CONCAT44(DAT_051b7194._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_2;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7194._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b7194._4_4_;
          if (-1 < DAT_051b7194) break;
        }
        uVar8 = DAT_051b7194._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7194 = CONCAT44(0xfffffffe,(uint)DAT_051b7194);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xf095b88) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7194 = CONCAT44(uVar9,(uint)DAT_051b7194);
        } while ((int)uVar9 < 0);
      }
      break;
    case 2:
switchD_013ef868_caseD_2:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71d4._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71d4._4_4_;
          if (-1 < DAT_051b71d4) break;
        }
        uVar8 = DAT_051b71d4._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71d4 = CONCAT44(0xfffffffe,(uint)DAT_051b71d4);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x770b5b7d) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71d4 = CONCAT44(uVar9,(uint)DAT_051b71d4);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71cc._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71cc._4_4_;
          if (-1 < DAT_051b71cc) break;
        }
        uVar8 = DAT_051b71cc._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71cc = CONCAT44(0xfffffffe,(uint)DAT_051b71cc);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xdf2eadb2) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71cc = CONCAT44(uVar9,(uint)DAT_051b71cc);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_3;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71d4._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71d4;
          if (-1 < (int)(uint)DAT_051b71d4) break;
        }
        uVar8 = (uint)DAT_051b71d4;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71d4 = CONCAT44(DAT_051b71d4._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x2cb125cc) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71d4 = CONCAT44(DAT_051b71d4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 3:
switchD_013ef868_caseD_3:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7174._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b7174._4_4_;
          if (-1 < DAT_051b7174) break;
        }
        uVar8 = DAT_051b7174._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7174 = CONCAT44(0xfffffffe,(uint)DAT_051b7174);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x1d790df7) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7174 = CONCAT44(uVar9,(uint)DAT_051b7174);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b716c._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b716c._4_4_;
          if (-1 < DAT_051b716c) break;
        }
        uVar8 = DAT_051b716c._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b716c = CONCAT44(0xfffffffe,(undefined4)DAT_051b716c);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x9c4a43c0) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b716c = CONCAT44(uVar9,(undefined4)DAT_051b716c);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_4;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7174._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b7174;
          if (-1 < (int)(uint)DAT_051b7174) break;
        }
        uVar8 = (uint)DAT_051b7174;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7174 = CONCAT44(DAT_051b7174._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xdbbebb5) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7174 = CONCAT44(DAT_051b7174._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 4:
switchD_013ef868_caseD_4:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71e4._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71e4;
          if (-1 < (int)(uint)DAT_051b71e4) break;
        }
        uVar8 = (uint)DAT_051b71e4;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71e4 = CONCAT44(DAT_051b71e4._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x8feba08a) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71e4 = CONCAT44(DAT_051b71e4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71dc._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71dc;
          if (-1 < (int)(uint)DAT_051b71dc) break;
        }
        uVar8 = (uint)DAT_051b71dc;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71dc = CONCAT44(DAT_051b71dc._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xaebc09bc) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71dc = CONCAT44(DAT_051b71dc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_5;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71dc._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71dc._4_4_;
          if (-1 < DAT_051b71dc) break;
        }
        uVar8 = DAT_051b71dc._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71dc = CONCAT44(0xfffffffe,(uint)DAT_051b71dc);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xac8aae8c) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71dc = CONCAT44(uVar9,(uint)DAT_051b71dc);
        } while ((int)uVar9 < 0);
      }
      break;
    case 5:
switchD_013ef868_caseD_5:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71cc._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71cc;
          if (-1 < (int)(uint)DAT_051b71cc) break;
        }
        uVar8 = (uint)DAT_051b71cc;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71cc = CONCAT44(DAT_051b71cc._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x202e64dd) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71cc = CONCAT44(DAT_051b71cc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71c4._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71c4;
          if (-1 < (int)(uint)DAT_051b71c4) break;
        }
        uVar8 = (uint)DAT_051b71c4;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71c4 = CONCAT44(DAT_051b71c4._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xc74f6b43) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71c4 = CONCAT44(DAT_051b71c4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_6;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71c4._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71c4._4_4_;
          if (-1 < DAT_051b71c4) break;
        }
        uVar8 = DAT_051b71c4._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71c4 = CONCAT44(0xfffffffe,(uint)DAT_051b71c4);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x5092ca25) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71c4 = CONCAT44(uVar9,(uint)DAT_051b71c4);
        } while ((int)uVar9 < 0);
      }
      break;
    case 6:
switchD_013ef868_caseD_6:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71bc._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71bc._4_4_;
          if (-1 < DAT_051b71bc) break;
        }
        uVar8 = DAT_051b71bc._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71bc = CONCAT44(0xfffffffe,(uint)DAT_051b71bc);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x24dbb4e0) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71bc = CONCAT44(uVar9,(uint)DAT_051b71bc);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71b4._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71b4._4_4_;
          if (-1 < DAT_051b71b4) break;
        }
        uVar8 = DAT_051b71b4._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71b4 = CONCAT44(0xfffffffe,(undefined4)DAT_051b71b4);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x2b74f5dc) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71b4 = CONCAT44(uVar9,(undefined4)DAT_051b71b4);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_7;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71bc._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71bc;
          if (-1 < (int)(uint)DAT_051b71bc) break;
        }
        uVar8 = (uint)DAT_051b71bc;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71bc = CONCAT44(DAT_051b71bc._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x7ec203a5) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71bc = CONCAT44(DAT_051b71bc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 7:
switchD_013ef868_caseD_7:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7184._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b7184;
          if (-1 < (int)(uint)DAT_051b7184) break;
        }
        uVar8 = (uint)DAT_051b7184;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7184 = CONCAT44(DAT_051b7184._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xada9eb19) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7184 = CONCAT44(DAT_051b7184._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b717c._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b717c;
          if (-1 < (int)(uint)DAT_051b717c) break;
        }
        uVar8 = (uint)DAT_051b717c;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b717c = CONCAT44(DAT_051b717c._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x15de6a3f) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b717c = CONCAT44(DAT_051b717c._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_8;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b717c._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b717c._4_4_;
          if (-1 < DAT_051b717c) break;
        }
        uVar8 = DAT_051b717c._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b717c = CONCAT44(0xfffffffe,(uint)DAT_051b717c);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x74ea1d73) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b717c = CONCAT44(uVar9,(uint)DAT_051b717c);
        } while ((int)uVar9 < 0);
      }
      break;
    case 8:
switchD_013ef868_caseD_8:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7204._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b7204._4_4_;
          if (-1 < DAT_051b7204) break;
        }
        uVar8 = DAT_051b7204._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7204 = CONCAT44(0xfffffffe,(uint)DAT_051b7204);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x260ec620) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7204 = CONCAT44(uVar9,(uint)DAT_051b7204);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71fc._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71fc._4_4_;
          if (-1 < DAT_051b71fc) break;
        }
        uVar8 = DAT_051b71fc._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71fc = CONCAT44(0xfffffffe,(uint)DAT_051b71fc);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x5e853057) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71fc = CONCAT44(uVar9,(uint)DAT_051b71fc);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_9;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7204._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b7204;
          if (-1 < (int)(uint)DAT_051b7204) break;
        }
        uVar8 = (uint)DAT_051b7204;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7204 = CONCAT44(DAT_051b7204._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x1fe65c0c) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7204 = CONCAT44(DAT_051b7204._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 9:
switchD_013ef868_caseD_9:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71fc._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71fc;
          if (-1 < (int)(uint)DAT_051b71fc) break;
        }
        uVar8 = (uint)DAT_051b71fc;
        if (param_2 == puVar7) {
switchD_013ef868_default:
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71fc = CONCAT44(DAT_051b71fc._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xce420c64) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71fc = CONCAT44(DAT_051b71fc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71f4._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71f4;
          if (-1 < (int)(uint)DAT_051b71f4) break;
        }
        uVar8 = (uint)DAT_051b71f4;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71f4 = CONCAT44(DAT_051b71f4._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xb12179b4) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71f4 = CONCAT44(DAT_051b71f4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_a;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71f4._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71f4._4_4_;
          if (-1 < DAT_051b71f4) break;
        }
        uVar8 = DAT_051b71f4._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71f4 = CONCAT44(0xfffffffe,(uint)DAT_051b71f4);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x6aed60aa) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71f4 = CONCAT44(uVar9,(uint)DAT_051b71f4);
        } while ((int)uVar9 < 0);
      }
      break;
    case 10:
switchD_013ef868_caseD_a:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71ec._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71ec._4_4_;
          if (-1 < DAT_051b71ec) break;
        }
        uVar8 = DAT_051b71ec._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71ec = CONCAT44(0xfffffffe,(uint)DAT_051b71ec);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x5b0802f1) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71ec = CONCAT44(uVar9,(uint)DAT_051b71ec);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71e4._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b71e4._4_4_;
          if (-1 < DAT_051b71e4) break;
        }
        uVar8 = DAT_051b71e4._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71e4 = CONCAT44(0xfffffffe,(uint)DAT_051b71e4);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x5aafbfa6) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71e4 = CONCAT44(uVar9,(uint)DAT_051b71e4);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_013ef868_caseD_b;
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b71ec._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b71ec;
          if (-1 < (int)(uint)DAT_051b71ec) break;
        }
        uVar8 = (uint)DAT_051b71ec;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b71ec = CONCAT44(DAT_051b71ec._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xc57d2eb8) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b71ec = CONCAT44(DAT_051b71ec._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 0xb:
switchD_013ef868_caseD_b:
      iVar2 = *param_4;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b718c._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b718c._4_4_;
          if (-1 < DAT_051b718c) break;
        }
        uVar8 = DAT_051b718c._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b718c = CONCAT44(0xfffffffe,(uint)DAT_051b718c);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x9217f8b8) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b718c = CONCAT44(uVar9,(uint)DAT_051b718c);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b7184._4_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = DAT_051b7184._4_4_;
          if (-1 < DAT_051b7184) break;
        }
        uVar8 = DAT_051b7184._4_4_;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b7184 = CONCAT44(0xfffffffe,(uint)DAT_051b7184);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x267c99f7) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b7184 = CONCAT44(uVar9,(uint)DAT_051b7184);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) {
          return 0;
        }
        puVar7 = (uint *)(ulong)*param_2;
        if (*param_2 == 0) {
          return 0;
        }
        if ((DAT_051b7168 & 1) == 0) {
          DAT_051b7168 = 1;
          DAT_051b720c = 0xffffffff;
          DAT_051b716c = -1;
          DAT_051b7174 = -1;
          DAT_051b718c._0_4_ = 0xffffffff;
          DAT_051b717c = -1;
          DAT_051b7184 = -1;
          DAT_051b718c = -1;
          DAT_051b7194 = -1;
          DAT_051b719c = -1;
          DAT_051b71a4 = -1;
          DAT_051b71ac = 0xffffffffffffffff;
          DAT_051b71b4 = -1;
          DAT_051b71bc = -1;
          DAT_051b71c4 = -1;
          DAT_051b71cc = -1;
          DAT_051b71d4 = -1;
          DAT_051b71dc = -1;
          DAT_051b71e4 = -1;
          DAT_051b71ec = -1;
          DAT_051b71f4 = -1;
          DAT_051b71fc = -1;
          DAT_051b7204 = -1;
        }
        else {
          uVar9 = (uint)DAT_051b718c;
          if (-1 < (int)(uint)DAT_051b718c) break;
        }
        uVar8 = (uint)DAT_051b718c;
        if (param_2 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
          DAT_051b718c = CONCAT44(DAT_051b718c._4_4_,0xfffffffe);
          if (uVar12 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0xc11af347) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_051b718c = CONCAT44(DAT_051b718c._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    default:
      goto switchD_013ef868_default;
    }
  }
  else {
    iVar2 = *param_4;
    if (iVar2 == 2) {
      puVar7 = (uint *)(ulong)*param_2;
      if (*param_2 == 0) {
        return 0;
      }
      if ((DAT_051b7168 & 1) == 0) {
        DAT_051b7168 = 1;
        DAT_051b720c = 0xffffffff;
        DAT_051b716c = -1;
        DAT_051b7174 = -1;
        DAT_051b71a4._4_4_ = 0xffffffff;
        DAT_051b717c = -1;
        DAT_051b7184 = -1;
        DAT_051b718c = -1;
        DAT_051b7194 = -1;
        DAT_051b719c = -1;
        DAT_051b71a4 = -1;
        DAT_051b71ac = 0xffffffffffffffff;
        DAT_051b71b4 = -1;
        DAT_051b71bc = -1;
        DAT_051b71c4 = -1;
        DAT_051b71cc = -1;
        DAT_051b71d4 = -1;
        DAT_051b71dc = -1;
        DAT_051b71e4 = -1;
        DAT_051b71ec = -1;
        DAT_051b71f4 = -1;
        DAT_051b71fc = -1;
        DAT_051b7204 = -1;
      }
      else {
        uVar9 = DAT_051b71a4._4_4_;
        if (-1 < DAT_051b71a4) goto LAB_013f1b84;
      }
      uVar8 = DAT_051b71a4._4_4_;
      if (param_2 == puVar7) {
        return 0;
      }
      do {
        if (uVar8 != 0xffffffff) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
        DAT_051b71a4 = CONCAT44(0xfffffffe,(uint)DAT_051b71a4);
        if (uVar12 == 0) {
          return 0;
        }
        puVar10 = (uint *)(lVar1 + 4);
        while (puVar10[-1] != 0x7b28f877) {
          puVar10 = puVar10 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            return 0;
          }
        }
        uVar8 = *puVar10;
        uVar9 = 0;
        if (uVar8 != 0xffffffff) {
          uVar9 = uVar8;
        }
        DAT_051b71a4 = CONCAT44(uVar9,(uint)DAT_051b71a4);
      } while ((int)uVar9 < 0);
    }
    else if (iVar2 == 1) {
      puVar7 = (uint *)(ulong)*param_2;
      if (*param_2 == 0) {
        return 0;
      }
      if ((DAT_051b7168 & 1) == 0) {
        DAT_051b7168 = 1;
        DAT_051b720c = 0xffffffff;
        DAT_051b716c = -1;
        DAT_051b7174 = -1;
        DAT_051b719c._4_4_ = 0xffffffff;
        DAT_051b717c = -1;
        DAT_051b7184 = -1;
        DAT_051b718c = -1;
        DAT_051b7194 = -1;
        DAT_051b719c = -1;
        DAT_051b71a4 = -1;
        DAT_051b71ac = 0xffffffffffffffff;
        DAT_051b71b4 = -1;
        DAT_051b71bc = -1;
        DAT_051b71c4 = -1;
        DAT_051b71cc = -1;
        DAT_051b71d4 = -1;
        DAT_051b71dc = -1;
        DAT_051b71e4 = -1;
        DAT_051b71ec = -1;
        DAT_051b71f4 = -1;
        DAT_051b71fc = -1;
        DAT_051b7204 = -1;
      }
      else {
        uVar9 = DAT_051b719c._4_4_;
        if (-1 < DAT_051b719c) goto LAB_013f1b84;
      }
      uVar8 = DAT_051b719c._4_4_;
      if (param_2 == puVar7) {
        return 0;
      }
      do {
        if (uVar8 != 0xffffffff) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
        DAT_051b719c = CONCAT44(0xfffffffe,(uint)DAT_051b719c);
        if (uVar12 == 0) {
          return 0;
        }
        puVar10 = (uint *)(lVar1 + 4);
        while (puVar10[-1] != 0x6a1ebb49) {
          puVar10 = puVar10 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            return 0;
          }
        }
        uVar8 = *puVar10;
        uVar9 = 0;
        if (uVar8 != 0xffffffff) {
          uVar9 = uVar8;
        }
        DAT_051b719c = CONCAT44(uVar9,(uint)DAT_051b719c);
      } while ((int)uVar9 < 0);
    }
    else {
      if (iVar2 != 0) goto LAB_013ef848;
      puVar7 = (uint *)(ulong)*param_2;
      if (*param_2 == 0) {
        return 0;
      }
      if ((DAT_051b7168 & 1) == 0) {
        DAT_051b7168 = 1;
        DAT_051b720c = 0xffffffff;
        DAT_051b716c = -1;
        DAT_051b7174 = -1;
        DAT_051b71a4._0_4_ = 0xffffffff;
        DAT_051b717c = -1;
        DAT_051b7184 = -1;
        DAT_051b718c = -1;
        DAT_051b7194 = -1;
        DAT_051b719c = -1;
        DAT_051b71a4 = -1;
        DAT_051b71ac = 0xffffffffffffffff;
        DAT_051b71b4 = -1;
        DAT_051b71bc = -1;
        DAT_051b71c4 = -1;
        DAT_051b71cc = -1;
        DAT_051b71d4 = -1;
        DAT_051b71dc = -1;
        DAT_051b71e4 = -1;
        DAT_051b71ec = -1;
        DAT_051b71f4 = -1;
        DAT_051b71fc = -1;
        DAT_051b7204 = -1;
      }
      else {
        uVar9 = (uint)DAT_051b71a4;
        if (-1 < (int)(uint)DAT_051b71a4) goto LAB_013f1b84;
      }
      uVar8 = (uint)DAT_051b71a4;
      if (param_2 == puVar7) {
        return 0;
      }
      do {
        if (uVar8 != 0xffffffff) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_2 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
        DAT_051b71a4 = CONCAT44(DAT_051b71a4._4_4_,0xfffffffe);
        if (uVar12 == 0) {
          return 0;
        }
        puVar10 = (uint *)(lVar1 + 4);
        while (puVar10[-1] != 0xec475a23) {
          puVar10 = puVar10 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            return 0;
          }
        }
        uVar8 = *puVar10;
        uVar9 = 0;
        if (uVar8 != 0xffffffff) {
          uVar9 = uVar8;
        }
        DAT_051b71a4 = CONCAT44(DAT_051b71a4._4_4_,uVar9);
      } while ((int)uVar9 < 0);
    }
  }
LAB_013f1b84:
  puVar6 = (undefined2 *)((long)param_2 + (ulong)uVar9);
  if (puVar6 == (undefined2 *)0x0) {
    return 0;
  }
LAB_013f1b8c:
  return *puVar6;
}

