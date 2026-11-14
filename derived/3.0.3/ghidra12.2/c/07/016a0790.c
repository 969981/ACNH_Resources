
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_016a0790(long param_1,undefined4 param_2)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  char cVar18;
  undefined1 uVar19;
  int local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  undefined **local_b8;
  undefined8 local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined4 local_60;
  uint local_54;
  
  uVar13 = DAT_05582b78;
  uVar9 = DAT_05582b74;
  lVar14 = *(long *)(param_1 + 0xb18);
  bVar2 = *(int *)(lVar14 + 0x28) == 0;
  if (bVar2) {
    iVar16 = *(int *)(lVar14 + 0x2c);
  }
  else {
    iVar16 = *(int *)(lVar14 + 0x2c);
  }
  uVar8 = (uint)bVar2;
  if (iVar16 == 0) {
    uVar8 = uVar8 | 2;
  }
  local_e4 = (uint)(iVar16 == 0);
  if ((*(uint *)(lVar14 + 0x140) & 0x380) == 0) {
    local_e4 = 2;
    uVar8 = uVar8 | 0x1c;
    iVar16 = *(int *)(lVar14 + 0x38);
  }
  else {
    iVar16 = *(int *)(lVar14 + 0x38);
  }
  if (iVar16 == 0) {
    local_e4 = 5;
    uVar8 = uVar8 | 0x20;
    iVar16 = *(int *)(lVar14 + 0x3c);
  }
  else {
    iVar16 = *(int *)(lVar14 + 0x3c);
  }
  if (iVar16 == 0) {
    local_e4 = 6;
    uVar8 = uVar8 | 0x40;
    iVar16 = *(int *)(lVar14 + 0x40);
  }
  else {
    iVar16 = *(int *)(lVar14 + 0x40);
  }
  if (iVar16 == 0) {
    local_e4 = 7;
    uVar8 = uVar8 | 0x80;
  }
  if ((*(uint *)(lVar14 + 0x140) >> 10 & 1) == 0) {
    local_e4 = 8;
    uVar8 = uVar8 | 0x100;
  }
  if (*(char *)(lVar14 + 0x123) == -1) {
    local_e4 = 9;
    uVar8 = uVar8 | 0x200;
  }
  if (*(char *)(lVar14 + 0x116) == -1) {
    local_e4 = 10;
    uVar8 = uVar8 | 0x400;
  }
  uVar4 = uVar8 - (uVar8 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  uVar3 = DAT_05582b7c;
  if (uVar4 != 0) {
    uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    if (uVar8 == 0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = 0xffffffff;
      iVar16 = (int)((ulong)uVar3 * (ulong)uVar4 >> 0x20) + 2;
      do {
        iVar16 = iVar16 + -1;
        if (iVar16 < 2) {
          uVar8 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
          uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
          uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
          uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
          uVar8 = uVar8 + (uVar8 >> 8);
          uVar17 = uVar8 + (uVar8 >> 0x10) & 0x3f;
          break;
        }
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar8 != 0);
    }
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,param_2);
    lVar14 = *(long *)PTR_DAT_04bb46b0;
    if (lVar14 != 0) {
      puVar10 = *(undefined8 **)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
        DAT_05582b7c = uVar3;
        lVar14 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar14 == 0) {
          return 0;
        }
        lVar14 = lVar14 + 0x70;
      }
      else {
        if (puVar10 == (undefined8 *)0x0) {
          DAT_05582b70 = uVar9;
          DAT_05582b74 = uVar13;
          DAT_05582b7c = uVar3;
          return 0;
        }
        if ((long *)puVar10[0x26] == (long *)0x0) {
          DAT_05582b70 = uVar9;
          DAT_05582b74 = uVar13;
          DAT_05582b7c = uVar3;
          return 0;
        }
        DAT_05582b7c = uVar3;
        lVar14 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
        if (lVar14 == 0) {
          return 0;
        }
      }
      uVar3 = DAT_05582b7c;
      if ((uint)local_b8 < 8) {
        lVar15 = lVar14 + 0x119228 + ((ulong)local_b8 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_b8) {
          lVar15 = lVar14 + 0x119228;
        }
        if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar10 == (undefined8 *)0x0)) {
          cVar18 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
        }
        else {
          uVar7 = (**(code **)*puVar10)();
          cVar18 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
        }
        iVar16 = (int)cVar18;
        uVar3 = DAT_05582b7c;
        if (cVar18 != -1) {
          local_e8 = iVar16;
          if (*(int *)(*(long *)(param_1 + 0xb18) + 8) == 0) {
            local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_b0 = "GetSRankonHHA";
            FUN_0279ac70(&local_e8,&local_b8,1);
          }
          if (uVar17 < 0xb) {
            uVar19 = (&UNK_041769fc)[(int)uVar17];
          }
          else {
            uVar19 = 1;
          }
          uVar7 = *(ulong *)(param_1 + 8);
          local_e0 = uVar7;
          local_54 = uVar17;
          iVar6 = nn::time::GetDayOfWeek
                            ((int)(short)uVar7,(int)(char)(uVar7 >> 0x10),(int)(char)(uVar7 >> 0x18)
                            );
          local_b8 = (undefined **)CONCAT44(local_b8._4_4_,iVar6);
          if (iVar6 == 0) {
            uVar9 = (uint)(uVar7 >> 0x10);
            uVar13 = (uint)(uVar7 >> 0x18);
          }
          else {
            do {
              lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
              local_b8 = (undefined **)(lVar14 + -0x15180);
              local_e0 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
              iVar6 = nn::time::GetDayOfWeek
                                ((int)(short)local_e0,((int)local_e0 << 8) >> 0x18,
                                 (int)local_e0 >> 0x18);
              local_b8 = (undefined **)CONCAT44(local_b8._4_4_,iVar6);
            } while (iVar6 != 0);
            uVar7 = local_e0 & 0xffff;
            uVar9 = (uint)local_e0._2_1_;
            uVar13 = (uint)local_e0._3_1_;
          }
          uVar8 = (uint)uVar7 & 0xffff;
          uVar7 = nn::time::IsValidDate(uVar8,uVar9 & 0xff,uVar13 & 0xff);
          FUN_01b46be0(&local_b8);
          local_60 = 0;
          local_b8 = &PTR_LAB_049bb3c8;
          local_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_62 = 0;
          local_64 = 0xfffe;
          local_80 = 0;
          uStack_78 = 0;
          FUN_0277d4ac(&local_64);
          local_d0 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_c4 = 0xfffe;
          FUN_0277d4ac(&local_c4);
          puVar5 = PTR_DAT_04bb37e0;
          lVar14 = *(long *)(param_1 + 0xb18);
          local_e0 = *(undefined8 *)(lVar14 + 8);
          local_d0 = *(undefined4 *)(lVar14 + 0x18);
          local_d8 = CONCAT44(*(undefined4 *)(lVar14 + 0x20),*(undefined4 *)(lVar14 + 0x14));
          local_cc = 1;
          uStack_c8 = *(undefined4 *)(lVar14 + 0x110);
          local_c4 = *(undefined8 *)PTR_DAT_04bb37e0;
          if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar6 != 0)) {
            FUN_00dd5f80(PTR_DAT_04bb8aa0);
            __cxa_guard_release(PTR_DAT_04bb8aa8);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
            uVar11 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == 0x50) goto LAB_016a0ce0;
              uVar11 = uVar11 + 1;
            } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
          }
          uVar11 = 0;
LAB_016a0ce0:
          local_8c = *(undefined4 *)puVar5;
          uStack_88 = *(undefined4 *)(puVar5 + 4);
          local_98 = (undefined4)uVar11;
          uStack_94 = 0xb;
          local_84 = 0;
          uVar8 = uVar13 << 0x18 | (uVar9 & 0xff) << 0x10 | uVar8;
          local_80 = local_e0;
          uStack_78 = local_d8;
          if ((uVar7 & 1) == 0) {
            uVar8 = 0;
          }
          local_70 = local_d0;
          uStack_6c = local_cc;
          uStack_68 = uStack_c8;
          local_64 = (undefined2)local_c4;
          uStack_62 = (undefined2)((ulong)local_c4 >> 0x10);
          local_60 = local_c4._4_4_;
          local_b0 = (char *)CONCAT44(uVar8,iVar16);
          local_90 = uVar19;
          lVar14 = (*(code *)local_b8[4])(&local_b8,*(undefined8 *)PTR_DAT_04bc0580);
          if (lVar14 != 0) {
            plVar12 = *(long **)PTR_DAT_04bb4fa8;
            lVar15 = *plVar12;
            plVar1 = (long *)(*(int *)((long)plVar12 + 0x14) + lVar14);
            *plVar12 = (long)plVar1;
            *plVar1 = lVar15;
            plVar1[1] = (long)plVar12;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 8) = plVar1;
            }
            *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
          }
          return 1;
        }
      }
    }
  }
  DAT_05582b7c = uVar3;
  return 0;
}

