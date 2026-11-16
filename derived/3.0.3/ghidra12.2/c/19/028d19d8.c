
void FUN_028d19d8(long param_1,ulong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong local_88;
  undefined8 local_80;
  undefined **local_78;
  char *pcStack_70;
  undefined8 local_68;
  ulong local_48;
  
  uVar13 = *param_2;
  local_88 = uVar13;
  uVar6 = nn::time::GetDayOfWeek
                    ((int)(short)uVar13,(int)(char)(uVar13 >> 0x10),(int)(char)(uVar13 >> 0x18));
  puVar5 = PTR_DAT_04bb32f0;
  uVar7 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_88,1,1);
  if ((uVar7 & 1) == 0) {
    uVar17 = *(undefined8 *)puVar5;
    uVar14 = uVar13 >> 0x10;
    uVar16 = uVar13 >> 0x18;
    cVar3 = (char)(uVar13 >> 0x20);
    uVar12 = uVar16 & 0xffffffff;
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "BirthdayLive";
    uVar11 = uVar14 & 0xffffffff;
    uVar7 = uVar13 & 0xffffffff;
    local_80 = uVar13;
    if (cVar3 < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      local_48 = lVar8 - 0x15180;
      uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      uVar11 = uVar7 >> 0x10;
      uVar12 = uVar7 >> 0x18;
      local_80 = uVar7;
    }
    uVar4 = local_80 >> 0x30;
    local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
    local_80 = CONCAT26((short)uVar4,(uint6)local_80) & 0xff00ffffffffffff;
    uVar7 = FUN_00879dd0(uVar17,&local_78,uVar7,uVar11,uVar12,0);
    if ((uVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)puVar5;
      local_78 = &PTR_LAB_048f9770;
      pcStack_70 = "NormalLive";
      local_80 = uVar13;
      if (cVar3 < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
        local_48 = lVar8 - 0x15180;
        local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
        uVar13 = local_80 & 0xffffffff;
        uVar14 = local_80 >> 0x10;
        uVar16 = local_80 >> 0x18;
      }
      uVar7 = local_80;
      local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
      local_80._7_1_ = SUB81(uVar7,7);
      local_80._0_7_ = (uint7)(uint6)local_80;
      uVar7 = FUN_00879dd0(uVar17,&local_78,uVar13 & 0xffffffff,uVar14 & 0xffffffff,
                           uVar16 & 0xffffffff,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
    }
  }
  uVar7 = (ulong)uVar6;
  if (6 < uVar6) {
    uVar7 = 0;
  }
  if (*(int *)(param_1 + uVar7 * 4) == 10) {
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "FoxPreVisitToday";
    FUN_0273f3c4(&local_78,0);
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "FoxPreVisit1Today";
    FUN_0273f3c4(&local_78,0);
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "FoxPreVisit2Today";
    FUN_0273f3c4(&local_78,0);
    FUN_02b1b5bc(8,1);
  }
  uVar7 = (ulong)uVar6;
  if (6 < uVar6) {
    uVar7 = 0;
  }
  if (*(int *)(param_1 + uVar7 * 4) != 0) {
    uVar7 = (ulong)uVar6;
    if (6 < uVar6) {
      uVar7 = 0;
    }
    uVar2 = *(uint *)(param_1 + uVar7 * 4);
    if (0xb < uVar2) {
      uVar2 = 0;
    }
    local_48 = CONCAT44(local_48._4_4_,uVar2);
    puVar1 = (undefined1 *)(param_1 + 0x60) + uVar2;
    if (0xd < uVar2) {
      puVar1 = (undefined1 *)(param_1 + 0x60);
    }
    *puVar1 = 1;
  }
  uVar7 = (ulong)uVar6;
  if (6 < uVar6) {
    uVar7 = 0;
  }
  *(undefined4 *)(param_1 + uVar7 * 4) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "BeyDaily_QuestStart";
  FUN_0274e338(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GstQuestStartLandFlag";
  FUN_02743234(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GstSpiritBlockWanderSpecialPosX";
  FUN_02743234(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GstSpiritBlockWanderSpecialPosZ";
  FUN_02743234(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GstAppearField";
  FUN_0273f3c4(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GstQuestStartFlag";
  FUN_0274e338(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GstQuestBreakFlag";
  FUN_0274e338(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "JohnnyQuestStartFlag";
  FUN_0274e338(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "JohnnyPartsCount";
  FUN_0274e338(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "JohnnyRequirePartsNum";
  FUN_0273f3c4(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GulBQuestStartFlag";
  FUN_0274e338(&local_78,0);
  local_78 = &PTR_LAB_048f9770;
  pcStack_70 = "GulBGetQuestItem";
  FUN_0274e338(&local_78,0);
  local_48 = local_48 & 0xffffffff00000000;
  if (DAT_05574040 == 0) goto LAB_028d1ef4;
  lVar8 = FUN_026eec4c(DAT_05574040,0);
  if (lVar8 != 0) {
    lVar15 = lVar8 + 0x194b0;
    if (*(long *)(lVar8 + 0x194b8) == 0) {
      lVar15 = *(long *)(DAT_05574040 + 0x20);
      lVar8 = *(long *)(lVar15 + 0x98);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x19548);
    }
    if (lVar8 == 0) {
      FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
    }
    else {
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
        plVar9 = *(long **)(lVar8 + 0x20);
joined_r0x028d1e6c:
        if (plVar9 != (long *)0x0) {
          local_78 = *(undefined ***)(lVar15 + 0x78);
          pcStack_70 = *(char **)(lVar15 + 0x80);
          local_68 = 0x17c;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        uVar7 = uVar7 & 0xffffffff;
        if (*(long *)(lVar15 + 0x98) != 0) {
          plVar9 = *(long **)(*(long *)(lVar15 + 0x98) + 0x20);
          goto joined_r0x028d1e6c;
        }
      }
      FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
    }
  }
  local_48 = CONCAT44(local_48._4_4_,1);
  if (DAT_05574040 == 0) {
LAB_028d20ac:
    local_48 = CONCAT44(local_48._4_4_,4);
    if (DAT_05574040 != 0) {
      lVar8 = FUN_026eec4c(DAT_05574040,4);
      if (lVar8 != 0) {
        lVar15 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar15 = *(long *)(DAT_05574040 + 0x20);
          lVar8 = *(long *)(lVar15 + 0x98);
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x19548);
        }
        if (lVar8 == 0) {
          FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
        }
        else {
          if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
            uVar7 = 0;
            plVar9 = *(long **)(lVar8 + 0x20);
joined_r0x028d21dc:
            if (plVar9 != (long *)0x0) {
              local_78 = *(undefined ***)(lVar15 + 0x78);
              pcStack_70 = *(char **)(lVar15 + 0x80);
              local_68 = 0x17c;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
            }
          }
          else {
            uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            uVar7 = uVar7 & 0xffffffff;
            if (*(long *)(lVar15 + 0x98) != 0) {
              plVar9 = *(long **)(*(long *)(lVar15 + 0x98) + 0x20);
              goto joined_r0x028d21dc;
            }
          }
          FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
        }
      }
      local_48 = CONCAT44(local_48._4_4_,5);
      if (DAT_05574040 == 0) {
        return;
      }
      lVar8 = FUN_026eec4c(DAT_05574040,5);
      if (lVar8 != 0) {
        lVar15 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar15 = *(long *)(DAT_05574040 + 0x20);
          lVar8 = *(long *)(lVar15 + 0x98);
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x19548);
        }
        if (lVar8 == 0) {
          FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
        }
        else {
          if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
            uVar7 = 0;
LAB_028d220c:
            plVar9 = *(long **)(lVar8 + 0x20);
            if (plVar9 != (long *)0x0) {
              local_78 = *(undefined ***)(lVar15 + 0x78);
              pcStack_70 = *(char **)(lVar15 + 0x80);
              local_68 = 0x17c;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
            }
          }
          else {
            uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            lVar8 = *(long *)(lVar15 + 0x98);
            uVar7 = uVar7 & 0xffffffff;
            if (lVar8 != 0) goto LAB_028d220c;
          }
          FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
        }
      }
    }
  }
  else {
    lVar8 = FUN_026eec4c(DAT_05574040,1);
    if (lVar8 != 0) {
      lVar15 = lVar8 + 0x194b0;
      if (*(long *)(lVar8 + 0x194b8) == 0) {
        lVar15 = *(long *)(DAT_05574040 + 0x20);
        lVar8 = *(long *)(lVar15 + 0x98);
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x19548);
      }
      if (lVar8 == 0) {
        FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
LAB_028d1e9c:
          plVar9 = *(long **)(lVar8 + 0x20);
          if (plVar9 != (long *)0x0) {
            local_78 = *(undefined ***)(lVar15 + 0x78);
            pcStack_70 = *(char **)(lVar15 + 0x80);
            local_68 = 0x17c;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
          }
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(lVar15 + 0x98);
          uVar7 = uVar7 & 0xffffffff;
          if (lVar8 != 0) goto LAB_028d1e9c;
        }
        FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
      }
    }
LAB_028d1ef4:
    local_48 = CONCAT44(local_48._4_4_,2);
    if (DAT_05574040 == 0) goto LAB_028d20ac;
    lVar8 = FUN_026eec4c(DAT_05574040,2);
    if (lVar8 != 0) {
      lVar15 = lVar8 + 0x194b0;
      if (*(long *)(lVar8 + 0x194b8) == 0) {
        lVar15 = *(long *)(DAT_05574040 + 0x20);
        lVar8 = *(long *)(lVar15 + 0x98);
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x19548);
      }
      if (lVar8 == 0) {
        FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar9 = *(long **)(lVar8 + 0x20);
joined_r0x028d2024:
          if (plVar9 != (long *)0x0) {
            local_78 = *(undefined ***)(lVar15 + 0x78);
            pcStack_70 = *(char **)(lVar15 + 0x80);
            local_68 = 0x17c;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
          }
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          uVar7 = uVar7 & 0xffffffff;
          if (*(long *)(lVar15 + 0x98) != 0) {
            plVar9 = *(long **)(*(long *)(lVar15 + 0x98) + 0x20);
            goto joined_r0x028d2024;
          }
        }
        FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
      }
    }
    local_48 = CONCAT44(local_48._4_4_,3);
    if (DAT_05574040 != 0) {
      lVar8 = FUN_026eec4c(DAT_05574040,3);
      if (lVar8 != 0) {
        lVar15 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar15 = *(long *)(DAT_05574040 + 0x20);
          lVar8 = *(long *)(lVar15 + 0x98);
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x19548);
        }
        if (lVar8 == 0) {
          FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
        }
        else {
          if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
            uVar7 = 0;
LAB_028d2054:
            plVar9 = *(long **)(lVar8 + 0x20);
            if (plVar9 != (long *)0x0) {
              local_78 = *(undefined ***)(lVar15 + 0x78);
              pcStack_70 = *(char **)(lVar15 + 0x80);
              local_68 = 0x17c;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
            }
          }
          else {
            uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            lVar8 = *(long *)(lVar15 + 0x98);
            uVar7 = uVar7 & 0xffffffff;
            if (lVar8 != 0) goto LAB_028d2054;
          }
          FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
        }
      }
      goto LAB_028d20ac;
    }
  }
  local_48 = CONCAT44(local_48._4_4_,6);
  if (DAT_05574040 == 0) {
    return;
  }
  lVar8 = FUN_026eec4c(DAT_05574040,6);
  if (lVar8 != 0) {
    lVar15 = lVar8 + 0x194b0;
    if (*(long *)(lVar8 + 0x194b8) == 0) {
      lVar15 = *(long *)(DAT_05574040 + 0x20);
      lVar8 = *(long *)(lVar15 + 0x98);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x19548);
    }
    if (lVar8 == 0) {
      FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
    }
    else {
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
        plVar9 = *(long **)(lVar8 + 0x20);
joined_r0x028d2394:
        if (plVar9 != (long *)0x0) {
          local_78 = *(undefined ***)(lVar15 + 0x78);
          pcStack_70 = *(char **)(lVar15 + 0x80);
          local_68 = 0x17c;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        uVar7 = uVar7 & 0xffffffff;
        if (*(long *)(lVar15 + 0x98) != 0) {
          plVar9 = *(long **)(*(long *)(lVar15 + 0x98) + 0x20);
          goto joined_r0x028d2394;
        }
      }
      FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
    }
  }
  local_48 = CONCAT44(local_48._4_4_,7);
  if (DAT_05574040 == 0) {
    return;
  }
  lVar8 = FUN_026eec4c(DAT_05574040,7);
  if (lVar8 == 0) {
    return;
  }
  lVar15 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar15 = *(long *)(DAT_05574040 + 0x20);
    lVar8 = *(long *)(lVar15 + 0x98);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x19548);
  }
  if (lVar8 == 0) {
    FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
    return;
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    lVar8 = *(long *)(lVar15 + 0x98);
    uVar7 = uVar7 & 0xffffffff;
    if (lVar8 == 0) goto LAB_028d23ec;
  }
  plVar9 = *(long **)(lVar8 + 0x20);
  if (plVar9 != (long *)0x0) {
    local_78 = *(undefined ***)(lVar15 + 0x78);
    pcStack_70 = *(char **)(lVar15 + 0x80);
    local_68 = 0x17c;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
LAB_028d23ec:
  FUN_027fa50c(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78),&local_48);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

