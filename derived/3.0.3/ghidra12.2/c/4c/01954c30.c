
undefined8
FUN_01954c30(long param_1,undefined8 param_2,CalendarTime *param_3,CalendarTime *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  undefined8 local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  long local_68;
  
  lVar7 = nn::time::ToPosixTimeFromUtc(param_3);
  lVar8 = nn::time::ToPosixTimeFromUtc(param_4);
  if (lVar8 < lVar7) {
    return 0;
  }
  nn::time::ToPosixTimeFromUtc(param_4);
  uVar4 = FUN_0277d6c4(param_2);
  uVar9 = (**(code **)*param_5)(param_5,uVar4,param_3);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  uVar13 = *(undefined8 *)PTR_DAT_04bb4008;
  uVar4 = FUN_0277d6c4(param_2);
  uVar5 = FUN_01a1159c(uVar13,uVar4);
  if ((uVar5 < 0xe) && ((1 << (ulong)(uVar5 & 0x1f) & 0x2401U) != 0)) {
    return 1;
  }
  if (DAT_05574040 == 0) {
LAB_01954d60:
    uVar5 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar7 == 0) goto LAB_01954d60;
      lVar7 = lVar7 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar7 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar7 == 0)) goto LAB_01954d60;
    if (*(long **)(lVar7 + 0x28) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar11 = (undefined8 *)**(long **)(lVar7 + 0x28);
      uVar9 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar11)();
      }
    }
    uVar5 = *(uint *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1e3604);
    if (1 < uVar5) {
      uVar5 = 0;
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  local_88 = *(undefined8 *)param_3;
  local_6c = uVar5;
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
  lVar8 = nn::time::ToPosixTimeFromUtc(param_4);
  if (lVar8 < lVar7) {
    return 1;
  }
  nn::time::ToPosixTimeFromUtc(param_4);
  uVar5 = (uint)local_88._2_1_;
  if ((local_88._4_1_ & 0xfc) == 4) {
    iVar10 = 1;
  }
  else if ((local_88._4_1_ & 0xf8) == 8) {
    iVar10 = 2;
  }
  else {
    uVar6 = (uint)local_88._4_1_;
    if (uVar6 == 0x10) {
      iVar10 = 3;
    }
    else if (uVar6 - 0x11 < 2) {
      iVar10 = 4;
    }
    else {
      iVar10 = 5;
      if (3 < uVar6 - 0x13) {
        iVar10 = 0;
      }
    }
  }
  local_74 = iVar10;
  local_70 = uVar5 - 1;
  lVar7 = FUN_01950d30(param_1,&local_6c);
  if (lVar7 != 0) {
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8), lVar7 != 0)) {
      plVar1 = (long *)(param_1 + 0x170);
      uVar5 = iVar10 + (uVar5 - 1) * 6;
      plVar2 = plVar1 + (ulong)uVar5 * 2;
      if (0x47 < uVar5) {
        plVar2 = plVar1;
      }
      pcVar12 = (code *)*plVar2;
      if ((plVar2[1] & 1U) != 0) {
        pcVar12 = *(code **)(pcVar12 + *(long *)(lVar7 + (plVar2[1] >> 1)));
      }
      sVar3 = (*pcVar12)();
      if (sVar3 != 0) {
        FUN_00a80f0c(&local_88,1,0,0);
        local_7c = local_74;
        local_78 = local_70;
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        lVar8 = nn::time::ToPosixTimeFromUtc(param_4);
        if (lVar8 < lVar7) {
          return 1;
        }
        bVar14 = 1;
        do {
          nn::time::ToPosixTimeFromUtc(param_4);
          iVar10 = local_88._2_1_ - 1;
          if ((local_88._4_1_ & 0xfc) == 4) {
            iVar15 = 1;
          }
          else if ((local_88._4_1_ & 0xf8) == 8) {
            iVar15 = 2;
          }
          else {
            uVar5 = (uint)local_88._4_1_;
            if (uVar5 == 0x10) {
              iVar15 = 3;
            }
            else if (uVar5 - 0x11 < 2) {
              iVar15 = 4;
            }
            else {
              iVar15 = 5;
              if (3 < uVar5 - 0x13) {
                iVar15 = 0;
              }
            }
          }
          local_74 = iVar15;
          local_70 = iVar10;
          if ((iVar10 == local_78) && (iVar15 == local_7c)) {
            FUN_00a80f0c(&local_88,1,0,0);
          }
          else {
            lVar7 = FUN_01950d30(param_1,&local_6c);
            if (lVar7 == 0) {
              return 0;
            }
            uVar5 = FUN_0277d6c4(param_2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (*(uint *)(lVar7 + 0x1d8) <= uVar5) {
              return 0;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar7 == 0) {
              return 0;
            }
            uVar5 = iVar15 + iVar10 * 6;
            plVar2 = plVar1 + (ulong)uVar5 * 2;
            if (0x47 < uVar5) {
              plVar2 = plVar1;
            }
            pcVar12 = (code *)*plVar2;
            if ((plVar2[1] & 1U) != 0) {
              pcVar12 = *(code **)(pcVar12 + *(long *)(lVar7 + (plVar2[1] >> 1)));
            }
            sVar3 = (*pcVar12)();
            if (sVar3 == 0) {
              return 0;
            }
            if ((short)local_88 != 0) {
              local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
              local_68 = local_68 + 0xe10;
              local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
            }
            bVar14 = bVar14 + 1;
            local_7c = local_74;
            local_78 = local_70;
            if (0x30 < bVar14) {
              return 0;
            }
          }
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          lVar8 = nn::time::ToPosixTimeFromUtc(param_4);
          if (lVar8 < lVar7) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}

