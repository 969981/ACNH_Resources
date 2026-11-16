
undefined2 FUN_02953e40(uint *param_1,int *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
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
  uVar3 = local_48;
  uVar4 = local_48 >> 0x30;
  local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
  local_48 = CONCAT26((short)uVar4,(undefined6)local_48) & 0xff00ffffffffffff;
  uVar4 = FUN_00879dd0(uVar11,&local_58,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  if (((uVar4 & 1) == 0) || (*param_2 + 1 != ((int)uVar12 << 8) >> 0x18)) {
LAB_02953f48:
    switch(*param_2) {
    case 0:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        uVar11 = 0x13;
        uVar6 = 0x3e01d394;
      }
      else if (iVar2 == 1) {
        uVar11 = 0x11;
        uVar6 = 0xb3f1a70f;
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_1;
        uVar11 = 0x12;
        uVar6 = 0x51bcedfa;
      }
      puVar5 = (undefined2 *)FUN_0295ed20(param_1,uVar11,uVar6);
      if (puVar5 == (undefined2 *)0x0) {
        return 0;
      }
      goto LAB_02956288;
    case 1:
switchD_02953f68_caseD_1:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d94._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6d94._4_4_;
          if (-1 < DAT_055d6d94) break;
        }
        uVar8 = DAT_055d6d94._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d94 = CONCAT44(0xfffffffe,(uint)DAT_055d6d94);
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
          DAT_055d6d94 = CONCAT44(uVar9,(uint)DAT_055d6d94);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d8c._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6d8c._4_4_;
          if (-1 < DAT_055d6d8c) break;
        }
        uVar8 = DAT_055d6d8c._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d8c = CONCAT44(0xfffffffe,(uint)DAT_055d6d8c);
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
          DAT_055d6d8c = CONCAT44(uVar9,(uint)DAT_055d6d8c);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_2;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d94._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6d94;
          if (-1 < (int)(uint)DAT_055d6d94) break;
        }
        uVar8 = (uint)DAT_055d6d94;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d94 = CONCAT44(DAT_055d6d94._4_4_,0xfffffffe);
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
          DAT_055d6d94 = CONCAT44(DAT_055d6d94._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 2:
switchD_02953f68_caseD_2:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dd4._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6dd4;
          if (-1 < (int)(uint)DAT_055d6dd4) break;
        }
        uVar8 = (uint)DAT_055d6dd4;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dd4 = CONCAT44(DAT_055d6dd4._4_4_,0xfffffffe);
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
          DAT_055d6dd4 = CONCAT44(DAT_055d6dd4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dcc._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6dcc;
          if (-1 < (int)(uint)DAT_055d6dcc) break;
        }
        uVar8 = (uint)DAT_055d6dcc;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dcc = CONCAT44(DAT_055d6dcc._4_4_,0xfffffffe);
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
          DAT_055d6dcc = CONCAT44(DAT_055d6dcc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_3;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dcc._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6dcc._4_4_;
          if (-1 < DAT_055d6dcc) break;
        }
        uVar8 = DAT_055d6dcc._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dcc = CONCAT44(0xfffffffe,(uint)DAT_055d6dcc);
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
          DAT_055d6dcc = CONCAT44(uVar9,(uint)DAT_055d6dcc);
        } while ((int)uVar9 < 0);
      }
      break;
    case 3:
switchD_02953f68_caseD_3:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d74._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6d74;
          if (-1 < (int)(uint)DAT_055d6d74) break;
        }
        uVar8 = (uint)DAT_055d6d74;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d74 = CONCAT44(DAT_055d6d74._4_4_,0xfffffffe);
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
          DAT_055d6d74 = CONCAT44(DAT_055d6d74._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d6c._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6d6c;
          if (-1 < (int)(uint)DAT_055d6d6c) break;
        }
        uVar8 = (uint)DAT_055d6d6c;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d6c = CONCAT44(DAT_055d6d6c._4_4_,0xfffffffe);
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
          DAT_055d6d6c = CONCAT44(DAT_055d6d6c._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_4;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d6c._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6d6c._4_4_;
          if (-1 < DAT_055d6d6c) break;
        }
        uVar8 = DAT_055d6d6c._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d6c = CONCAT44(0xfffffffe,(uint)DAT_055d6d6c);
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
          DAT_055d6d6c = CONCAT44(uVar9,(uint)DAT_055d6d6c);
        } while ((int)uVar9 < 0);
      }
      break;
    case 4:
switchD_02953f68_caseD_4:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6ddc._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6ddc._4_4_;
          if (-1 < DAT_055d6ddc) break;
        }
        uVar8 = DAT_055d6ddc._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6ddc = CONCAT44(0xfffffffe,(uint)DAT_055d6ddc);
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
          DAT_055d6ddc = CONCAT44(uVar9,(uint)DAT_055d6ddc);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dd4._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6dd4._4_4_;
          if (-1 < DAT_055d6dd4) break;
        }
        uVar8 = DAT_055d6dd4._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dd4 = CONCAT44(0xfffffffe,(uint)DAT_055d6dd4);
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
          DAT_055d6dd4 = CONCAT44(uVar9,(uint)DAT_055d6dd4);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_5;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6ddc._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6ddc;
          if (-1 < (int)(uint)DAT_055d6ddc) break;
        }
        uVar8 = (uint)DAT_055d6ddc;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6ddc = CONCAT44(DAT_055d6ddc._4_4_,0xfffffffe);
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
          DAT_055d6ddc = CONCAT44(DAT_055d6ddc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 5:
switchD_02953f68_caseD_5:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dc4._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6dc4._4_4_;
          if (-1 < DAT_055d6dc4) break;
        }
        uVar8 = DAT_055d6dc4._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dc4 = CONCAT44(0xfffffffe,(uint)DAT_055d6dc4);
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
          DAT_055d6dc4 = CONCAT44(uVar9,(uint)DAT_055d6dc4);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dbc._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6dbc._4_4_;
          if (-1 < DAT_055d6dbc) break;
        }
        uVar8 = DAT_055d6dbc._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dbc = CONCAT44(0xfffffffe,(uint)DAT_055d6dbc);
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
          DAT_055d6dbc = CONCAT44(uVar9,(uint)DAT_055d6dbc);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_6;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dc4._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6dc4;
          if (-1 < (int)(uint)DAT_055d6dc4) break;
        }
        uVar8 = (uint)DAT_055d6dc4;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dc4 = CONCAT44(DAT_055d6dc4._4_4_,0xfffffffe);
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
          DAT_055d6dc4 = CONCAT44(DAT_055d6dc4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 6:
switchD_02953f68_caseD_6:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dbc._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6dbc;
          if (-1 < (int)(uint)DAT_055d6dbc) break;
        }
        uVar8 = (uint)DAT_055d6dbc;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dbc = CONCAT44(DAT_055d6dbc._4_4_,0xfffffffe);
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
          DAT_055d6dbc = CONCAT44(DAT_055d6dbc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6db4._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6db4;
          if (-1 < (int)(uint)DAT_055d6db4) break;
        }
        uVar8 = (uint)DAT_055d6db4;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6db4 = CONCAT44(DAT_055d6db4._4_4_,0xfffffffe);
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
          DAT_055d6db4 = CONCAT44(DAT_055d6db4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_7;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6db4._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6db4._4_4_;
          if (-1 < DAT_055d6db4) break;
        }
        uVar8 = DAT_055d6db4._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6db4 = CONCAT44(0xfffffffe,(uint)DAT_055d6db4);
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
          DAT_055d6db4 = CONCAT44(uVar9,(uint)DAT_055d6db4);
        } while ((int)uVar9 < 0);
      }
      break;
    case 7:
switchD_02953f68_caseD_7:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d7c._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6d7c._4_4_;
          if (-1 < DAT_055d6d7c) break;
        }
        uVar8 = DAT_055d6d7c._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d7c = CONCAT44(0xfffffffe,(uint)DAT_055d6d7c);
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
          DAT_055d6d7c = CONCAT44(uVar9,(uint)DAT_055d6d7c);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d74._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6d74._4_4_;
          if (-1 < DAT_055d6d74) break;
        }
        uVar8 = DAT_055d6d74._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d74 = CONCAT44(0xfffffffe,(uint)DAT_055d6d74);
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
          DAT_055d6d74 = CONCAT44(uVar9,(uint)DAT_055d6d74);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_8;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d7c._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6d7c;
          if (-1 < (int)(uint)DAT_055d6d7c) break;
        }
        uVar8 = (uint)DAT_055d6d7c;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d7c = CONCAT44(DAT_055d6d7c._4_4_,0xfffffffe);
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
          DAT_055d6d7c = CONCAT44(DAT_055d6d7c._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 8:
switchD_02953f68_caseD_8:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6e04;
          if (-1 < (int)DAT_055d6e04) break;
        }
        uVar8 = DAT_055d6e04;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          if (uVar12 == 0) {
            DAT_055d6e04 = 0xfffffffe;
            return 0;
          }
          puVar10 = (uint *)(lVar1 + 4);
          while (puVar10[-1] != 0x260ec620) {
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              DAT_055d6e04 = 0xfffffffe;
              return 0;
            }
          }
          uVar8 = *puVar10;
          uVar9 = 0;
          if (uVar8 != 0xffffffff) {
            uVar9 = uVar8;
          }
          DAT_055d6e04 = uVar9;
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dfc._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6dfc;
          if (-1 < (int)(uint)DAT_055d6dfc) break;
        }
        uVar8 = (uint)DAT_055d6dfc;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dfc = CONCAT44(DAT_055d6dfc._4_4_,0xfffffffe);
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
          DAT_055d6dfc = CONCAT44(DAT_055d6dfc._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_9;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dfc._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6dfc._4_4_;
          if (-1 < DAT_055d6dfc) break;
        }
        uVar8 = DAT_055d6dfc._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dfc = CONCAT44(0xfffffffe,(uint)DAT_055d6dfc);
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
          DAT_055d6dfc = CONCAT44(uVar9,(uint)DAT_055d6dfc);
        } while ((int)uVar9 < 0);
      }
      break;
    case 9:
switchD_02953f68_caseD_9:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6df4._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6df4._4_4_;
          if (-1 < DAT_055d6df4) break;
        }
        uVar8 = DAT_055d6df4._4_4_;
        if (param_1 == puVar7) {
switchD_02953f68_default:
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6df4 = CONCAT44(0xfffffffe,(uint)DAT_055d6df4);
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
          DAT_055d6df4 = CONCAT44(uVar9,(uint)DAT_055d6df4);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dec._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6dec._4_4_;
          if (-1 < DAT_055d6dec) break;
        }
        uVar8 = DAT_055d6dec._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dec = CONCAT44(0xfffffffe,(uint)DAT_055d6dec);
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
          DAT_055d6dec = CONCAT44(uVar9,(uint)DAT_055d6dec);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_a;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6df4._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6df4;
          if (-1 < (int)(uint)DAT_055d6df4) break;
        }
        uVar8 = (uint)DAT_055d6df4;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6df4 = CONCAT44(DAT_055d6df4._4_4_,0xfffffffe);
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
          DAT_055d6df4 = CONCAT44(DAT_055d6df4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      break;
    case 10:
switchD_02953f68_caseD_a:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6dec._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6dec;
          if (-1 < (int)(uint)DAT_055d6dec) break;
        }
        uVar8 = (uint)DAT_055d6dec;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6dec = CONCAT44(DAT_055d6dec._4_4_,0xfffffffe);
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
          DAT_055d6dec = CONCAT44(DAT_055d6dec._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6de4._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6de4;
          if (-1 < (int)(uint)DAT_055d6de4) break;
        }
        uVar8 = (uint)DAT_055d6de4;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6de4 = CONCAT44(DAT_055d6de4._4_4_,0xfffffffe);
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
          DAT_055d6de4 = CONCAT44(DAT_055d6de4._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) goto switchD_02953f68_caseD_b;
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6de4._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6de4._4_4_;
          if (-1 < DAT_055d6de4) break;
        }
        uVar8 = DAT_055d6de4._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6de4 = CONCAT44(0xfffffffe,(uint)DAT_055d6de4);
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
          DAT_055d6de4 = CONCAT44(uVar9,(uint)DAT_055d6de4);
        } while ((int)uVar9 < 0);
      }
      break;
    case 0xb:
switchD_02953f68_caseD_b:
      iVar2 = *param_3;
      if (iVar2 == 2) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d8c._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6d8c;
          if (-1 < (int)(uint)DAT_055d6d8c) break;
        }
        uVar8 = (uint)DAT_055d6d8c;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d8c = CONCAT44(DAT_055d6d8c._4_4_,0xfffffffe);
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
          DAT_055d6d8c = CONCAT44(DAT_055d6d8c._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else if (iVar2 == 1) {
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d84._0_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = (uint)DAT_055d6d84;
          if (-1 < (int)(uint)DAT_055d6d84) break;
        }
        uVar8 = (uint)DAT_055d6d84;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d84 = CONCAT44(DAT_055d6d84._4_4_,0xfffffffe);
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
          DAT_055d6d84 = CONCAT44(DAT_055d6d84._4_4_,uVar9);
        } while ((int)uVar9 < 0);
      }
      else {
        if (iVar2 != 0) {
          return 0;
        }
        puVar7 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if ((DAT_055d6d60 & 1) == 0) {
          DAT_055d6d60 = 1;
          DAT_055d6e04 = 0xffffffff;
          DAT_055d6d64 = 0xffffffffffffffff;
          DAT_055d6d6c = -1;
          DAT_055d6d84._4_4_ = 0xffffffff;
          DAT_055d6d74 = -1;
          DAT_055d6d7c = -1;
          DAT_055d6d84 = -1;
          DAT_055d6d8c = -1;
          DAT_055d6d94 = -1;
          DAT_055d6d9c = -1;
          DAT_055d6da4 = 0xffffffffffffffff;
          DAT_055d6dac = 0xffffffffffffffff;
          DAT_055d6db4 = -1;
          DAT_055d6dbc = -1;
          DAT_055d6dc4 = -1;
          DAT_055d6dcc = -1;
          DAT_055d6dd4 = -1;
          DAT_055d6ddc = -1;
          DAT_055d6de4 = -1;
          DAT_055d6dec = -1;
          DAT_055d6df4 = -1;
          DAT_055d6dfc = -1;
        }
        else {
          uVar9 = DAT_055d6d84._4_4_;
          if (-1 < DAT_055d6d84) break;
        }
        uVar8 = DAT_055d6d84._4_4_;
        if (param_1 == puVar7) {
          return 0;
        }
        do {
          if (uVar8 != 0xffffffff) {
            return 0;
          }
          lVar1 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return 0;
          }
          uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
          DAT_055d6d84 = CONCAT44(0xfffffffe,(uint)DAT_055d6d84);
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
          DAT_055d6d84 = CONCAT44(uVar9,(uint)DAT_055d6d84);
        } while ((int)uVar9 < 0);
      }
      break;
    default:
      goto switchD_02953f68_default;
    }
  }
  else {
    iVar2 = *param_3;
    if (iVar2 == 2) {
      puVar7 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if ((DAT_055d6d60 & 1) == 0) {
        DAT_055d6d60 = 1;
        DAT_055d6e04 = 0xffffffff;
        DAT_055d6d64 = 0xffffffffffffffff;
        DAT_055d6d6c = -1;
        DAT_055d6da4._0_4_ = 0xffffffff;
        DAT_055d6d74 = -1;
        DAT_055d6d7c = -1;
        DAT_055d6d84 = -1;
        DAT_055d6d8c = -1;
        DAT_055d6d94 = -1;
        DAT_055d6d9c = -1;
        DAT_055d6da4 = 0xffffffffffffffff;
        DAT_055d6dac = 0xffffffffffffffff;
        DAT_055d6db4 = -1;
        DAT_055d6dbc = -1;
        DAT_055d6dc4 = -1;
        DAT_055d6dcc = -1;
        DAT_055d6dd4 = -1;
        DAT_055d6ddc = -1;
        DAT_055d6de4 = -1;
        DAT_055d6dec = -1;
        DAT_055d6df4 = -1;
        DAT_055d6dfc = -1;
      }
      else {
        uVar9 = (uint)DAT_055d6da4;
        if (-1 < (int)(uint)DAT_055d6da4) goto LAB_02956280;
      }
      uVar8 = (uint)DAT_055d6da4;
      if (param_1 == puVar7) {
        return 0;
      }
      do {
        if (uVar8 != 0xffffffff) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
        DAT_055d6da4 = CONCAT44(DAT_055d6da4._4_4_,0xfffffffe);
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
        DAT_055d6da4 = CONCAT44(DAT_055d6da4._4_4_,uVar9);
      } while ((int)uVar9 < 0);
    }
    else if (iVar2 == 1) {
      puVar7 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if ((DAT_055d6d60 & 1) == 0) {
        DAT_055d6d60 = 1;
        DAT_055d6e04 = 0xffffffff;
        DAT_055d6d64 = 0xffffffffffffffff;
        DAT_055d6d6c = -1;
        DAT_055d6d9c._0_4_ = 0xffffffff;
        DAT_055d6d74 = -1;
        DAT_055d6d7c = -1;
        DAT_055d6d84 = -1;
        DAT_055d6d8c = -1;
        DAT_055d6d94 = -1;
        DAT_055d6d9c = -1;
        DAT_055d6da4 = 0xffffffffffffffff;
        DAT_055d6dac = 0xffffffffffffffff;
        DAT_055d6db4 = -1;
        DAT_055d6dbc = -1;
        DAT_055d6dc4 = -1;
        DAT_055d6dcc = -1;
        DAT_055d6dd4 = -1;
        DAT_055d6ddc = -1;
        DAT_055d6de4 = -1;
        DAT_055d6dec = -1;
        DAT_055d6df4 = -1;
        DAT_055d6dfc = -1;
      }
      else {
        uVar9 = (uint)DAT_055d6d9c;
        if (-1 < (int)(uint)DAT_055d6d9c) goto LAB_02956280;
      }
      uVar8 = (uint)DAT_055d6d9c;
      if (param_1 == puVar7) {
        return 0;
      }
      do {
        if (uVar8 != 0xffffffff) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
        DAT_055d6d9c = CONCAT44(DAT_055d6d9c._4_4_,0xfffffffe);
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
        DAT_055d6d9c = CONCAT44(DAT_055d6d9c._4_4_,uVar9);
      } while ((int)uVar9 < 0);
    }
    else {
      if (iVar2 != 0) goto LAB_02953f48;
      puVar7 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if ((DAT_055d6d60 & 1) == 0) {
        DAT_055d6d60 = 1;
        DAT_055d6e04 = 0xffffffff;
        DAT_055d6d64 = 0xffffffffffffffff;
        DAT_055d6d6c = -1;
        DAT_055d6d9c._4_4_ = 0xffffffff;
        DAT_055d6d74 = -1;
        DAT_055d6d7c = -1;
        DAT_055d6d84 = -1;
        DAT_055d6d8c = -1;
        DAT_055d6d94 = -1;
        DAT_055d6d9c = -1;
        DAT_055d6da4 = 0xffffffffffffffff;
        DAT_055d6dac = 0xffffffffffffffff;
        DAT_055d6db4 = -1;
        DAT_055d6dbc = -1;
        DAT_055d6dc4 = -1;
        DAT_055d6dcc = -1;
        DAT_055d6dd4 = -1;
        DAT_055d6ddc = -1;
        DAT_055d6de4 = -1;
        DAT_055d6dec = -1;
        DAT_055d6df4 = -1;
        DAT_055d6dfc = -1;
      }
      else {
        uVar9 = DAT_055d6d9c._4_4_;
        if (-1 < DAT_055d6d9c) goto LAB_02956280;
      }
      uVar8 = DAT_055d6d9c._4_4_;
      if (param_1 == puVar7) {
        return 0;
      }
      do {
        if (uVar8 != 0xffffffff) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_1 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
        DAT_055d6d9c = CONCAT44(0xfffffffe,(uint)DAT_055d6d9c);
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
        DAT_055d6d9c = CONCAT44(uVar9,(uint)DAT_055d6d9c);
      } while ((int)uVar9 < 0);
    }
  }
LAB_02956280:
  puVar5 = (undefined2 *)((long)param_1 + (ulong)uVar9);
  if (puVar5 == (undefined2 *)0x0) {
    return 0;
  }
LAB_02956288:
  return *puVar5;
}

