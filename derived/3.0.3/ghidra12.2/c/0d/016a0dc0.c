
undefined8 FUN_016a0dc0(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  char cVar14;
  undefined **local_98;
  int local_90;
  uint uStack_8c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_38;
  
  if (param_3 < 5) {
    local_98 = (undefined **)CONCAT44(local_98._4_4_,param_2);
    if (DAT_05574040 != 0) {
      puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar7 == 0) {
          return 0;
        }
        lVar7 = lVar7 + 0x70;
      }
      else {
        if (puVar10 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar10[0x26] == (long *)0x0) {
          return 0;
        }
        lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
        if (lVar7 == 0) {
          return 0;
        }
      }
      if ((uint)local_98 < 8) {
        lVar13 = lVar7 + 0x119228 + ((ulong)local_98 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_98) {
          lVar13 = lVar7 + 0x119228;
        }
        if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar10 == (undefined8 *)0x0)) {
          cVar14 = *(char *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x289f8);
        }
        else {
          uVar8 = (**(code **)*puVar10)();
          cVar14 = *(char *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x289f8);
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
        }
        if (cVar14 != -1) {
          nn::time::IsValidDate
                    ((uint)*(ushort *)(param_1 + 8),(uint)*(byte *)(param_1 + 10),
                     (uint)*(byte *)(param_1 + 0xb));
          uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
          FUN_01b8f0d0(&local_58,0xe,param_3 + 1 & 0xff,(int)cVar14);
          uVar8 = *(ulong *)(param_1 + 8);
          local_38 = uVar8;
          iVar6 = nn::time::GetDayOfWeek
                            ((int)(short)uVar8,(int)(char)(uVar8 >> 0x10),(int)(char)(uVar8 >> 0x18)
                            );
          local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar6);
          if (iVar6 == 0) {
            uVar9 = (uint)(uVar8 >> 0x10);
            uVar11 = (uint)(uVar8 >> 0x18);
          }
          else {
            do {
              lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
              local_98 = (undefined **)(lVar7 + -0x15180);
              local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
              iVar6 = nn::time::GetDayOfWeek
                                ((int)(short)local_38,((int)local_38 << 8) >> 0x18,
                                 (int)local_38 >> 0x18);
              local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar6);
            } while (iVar6 != 0);
            uVar8 = local_38 & 0xffff;
            uVar9 = (uint)local_38._2_1_;
            uVar11 = (uint)local_38._3_1_;
          }
          uVar2 = (uint)uVar8 & 0xffff;
          uVar8 = nn::time::IsValidDate(uVar2,uVar9 & 0xff,uVar11 & 0xff);
          FUN_01b46be0(&local_98);
          local_60 = 0;
          local_98 = &PTR_LAB_049bb368;
          uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb18) + 8);
          uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xb18) + 0x110);
          if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&DAT_04f292d0), iVar6 != 0)) {
            FUN_00dd5f80(&DAT_04f292c0);
            __cxa_guard_release(&DAT_04f292d0);
          }
          if (0 < (int)DAT_04f292c0) {
            uVar12 = 0;
            do {
              if (*(int *)(DAT_04f292c8 + uVar12 * 4) == 0x50) goto LAB_016a106c;
              uVar12 = uVar12 + 1;
            } while (DAT_04f292c0 != uVar12);
          }
          uVar12 = 0;
LAB_016a106c:
          local_70 = (undefined1)(param_3 + 1);
          local_78 = (undefined4)uVar12;
          uStack_74 = 0xe;
          local_64 = 0;
          uStack_8c = uVar11 << 0x18 | (uVar9 & 0xff) << 0x10 | uVar2;
          if ((uVar8 & 1) == 0) {
            uStack_8c = 0;
          }
          local_6c = local_58;
          uStack_68 = uStack_54;
          local_60 = CONCAT44(uVar4,uVar3);
          local_90 = (int)cVar14;
          lVar7 = (*(code *)local_98[4])(&local_98,DAT_0532d280);
          plVar5 = DAT_0532d278;
          if (lVar7 != 0) {
            lVar13 = *DAT_0532d278;
            plVar1 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar7);
            *DAT_0532d278 = (long)plVar1;
            *plVar1 = lVar13;
            plVar1[1] = (long)plVar5;
            if (lVar13 != 0) {
              *(long **)(lVar13 + 8) = plVar1;
            }
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

