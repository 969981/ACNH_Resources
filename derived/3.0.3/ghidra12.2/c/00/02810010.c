
void FUN_02810010(ushort *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong local_70;
  long local_68;
  
  uVar13 = 0x10107d0;
  local_68 = *(long *)(DAT_04da6480 + 0x20) / 1000000000 + *(long *)(DAT_04da6480 + 8) +
             (((*(long *)(DAT_04da6480 + 0x10) + (long)*(int *)(DAT_04da6480 + 0x38)) -
              *(long *)(DAT_04da6480 + 8)) * 1000000000) / 1000000000;
  uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  uVar11 = (uint)(uVar3 >> 0x18) & 0xff;
  uVar1 = (uint)uVar3 & 0xffff;
  uVar2 = (uint)uVar3 >> 0x10 & 0xff;
  nn::time::IsValidDate(uVar1,uVar2,uVar11);
  uVar4 = nn::time::IsValidDate
                    ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
  if ((param_2 & 1) == 0) {
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3))
       , (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(param_1,0);
      uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
      local_70 = uVar13;
      if ((uVar4 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar4 = uVar3 & 0xffff;
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        local_70 = uVar3 & 0xff000000;
        if ((uVar7 & 1) == 0) {
          local_70 = 0x1000000;
        }
        uVar7 = uVar3 & 0xff0000;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0x10000;
        }
        if ((uVar5 & 1) == 0) {
          uVar4 = 2000;
        }
        local_70 = uVar7 | uVar4 | local_70;
      }
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if (((lVar9 < lVar8) ||
          (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) &&
         ((uVar4 = nn::time::IsValidDate
                             ((uint)*param_1,(uint)(byte)param_1[1],
                              (uint)*(byte *)((long)param_1 + 3)), (uVar4 & 1) == 0 ||
          (((*param_1 != uVar1 || ((byte)param_1[1] != uVar2)) ||
           (*(byte *)((long)param_1 + 3) != uVar11)))))) {
        memset(param_1,0,0x280);
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 0x14;
          *(undefined2 *)((long)param_1 + lVar8 + 0x280) = 0xffff;
          *(undefined2 *)((long)param_1 + lVar8 + 0x28a) = 0xffff;
          *(undefined8 *)((long)param_1 + lVar8 + 0x282) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0x28c) = 0;
          lVar8 = lVar9;
        } while (lVar9 != 0x500);
      }
    }
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                       (uint)*(byte *)((long)param_1 + 0x783));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                           (uint)*(byte *)((long)param_1 + 0x783)), (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(param_1 + 0x3c0,0);
      uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
      if ((uVar4 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar4 = uVar3 & 0xffff;
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar13 = uVar3 & 0xff000000;
        if ((uVar7 & 1) == 0) {
          uVar13 = 0x1000000;
        }
        uVar7 = uVar3 & 0xff0000;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0x10000;
        }
        if ((uVar5 & 1) == 0) {
          uVar4 = 2000;
        }
        uVar13 = uVar7 | uVar4 | uVar13;
      }
      local_70 = uVar13;
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if (((lVar9 < lVar8) ||
          (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) &&
         ((uVar13 = nn::time::IsValidDate
                              ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                               (uint)*(byte *)((long)param_1 + 0x783)), (uVar13 & 1) == 0 ||
          (((param_1[0x3c0] != uVar1 || ((byte)param_1[0x3c1] != uVar2)) ||
           (*(byte *)((long)param_1 + 0x783) != uVar11)))))) {
        memset(param_1 + 0x3c0,0,0x280);
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 0x14;
          *(undefined2 *)((long)param_1 + lVar8 + 0xa00) = 0xffff;
          *(undefined2 *)((long)param_1 + lVar8 + 0xa0a) = 0xffff;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa02) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa0c) = 0;
          lVar8 = lVar9;
        } while (lVar9 != 0x500);
      }
    }
    uVar13 = 0x10107d0;
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                       (uint)*(byte *)((long)param_1 + 0xf03));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                           (uint)*(byte *)((long)param_1 + 0xf03)), (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(param_1 + 0x780,0);
      uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
      uVar4 = uVar13;
      if ((uVar5 & 1) != 0) {
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar5 = uVar3 & 0xffff;
        uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar10 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar4 = uVar3 & 0xff000000;
        if ((uVar10 & 1) == 0) {
          uVar4 = 0x1000000;
        }
        uVar10 = uVar3 & 0xff0000;
        if ((uVar7 & 1) == 0) {
          uVar10 = 0x10000;
        }
        if ((uVar6 & 1) == 0) {
          uVar5 = 2000;
        }
        uVar4 = uVar10 | uVar5 | uVar4;
      }
      local_70 = uVar4;
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if (((lVar9 < lVar8) ||
          (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) &&
         ((uVar4 = nn::time::IsValidDate
                             ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                              (uint)*(byte *)((long)param_1 + 0xf03)), (uVar4 & 1) == 0 ||
          (((param_1[0x780] != uVar1 || ((byte)param_1[0x781] != uVar2)) ||
           (*(byte *)((long)param_1 + 0xf03) != uVar11)))))) {
        memset(param_1 + 0x780,0,0x280);
        lVar8 = 0x80;
        puVar12 = param_1 + 0x8c6;
        do {
          puVar12[-6] = 0xffff;
          lVar8 = lVar8 + -2;
          puVar12[-5] = 0;
          puVar12[-4] = 0;
          puVar12[-3] = 0;
          puVar12[-2] = 0;
          puVar12[-1] = 0xffff;
          puVar12[0] = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          puVar12 = puVar12 + 10;
        } while (lVar8 != 0);
      }
    }
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0xb40],(uint)(byte)param_1[0xb41],
                       (uint)*(byte *)((long)param_1 + 0x1683));
    if ((uVar4 & 1) != 0) {
      puVar12 = param_1 + 0xb40;
      uVar4 = nn::time::IsValidDate
                        ((uint)*puVar12,(uint)(byte)param_1[0xb41],
                         (uint)*(byte *)((long)param_1 + 0x1683));
      if ((uVar4 & 1) != 0) {
        local_68 = FUN_0272eca4(puVar12,0);
        uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        if ((uVar4 & 1) != 0) {
          uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar4 = uVar3 & 0xffff;
          uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar13 = uVar3 & 0xff000000;
          if ((uVar7 & 1) == 0) {
            uVar13 = 0x1000000;
          }
          uVar7 = uVar3 & 0xff0000;
          if ((uVar6 & 1) == 0) {
            uVar7 = 0x10000;
          }
          if ((uVar5 & 1) == 0) {
            uVar4 = 2000;
          }
          uVar13 = uVar7 | uVar4 | uVar13;
        }
        local_70 = uVar13;
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        if (((lVar9 < lVar8) ||
            (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) &&
           (((uVar13 = nn::time::IsValidDate
                                 ((uint)*puVar12,(uint)(byte)param_1[0xb41],
                                  (uint)*(byte *)((long)param_1 + 0x1683)), (uVar13 & 1) == 0 ||
             ((*puVar12 != uVar1 || ((byte)param_1[0xb41] != uVar2)))) ||
            (*(byte *)((long)param_1 + 0x1683) != uVar11)))) {
          memset(puVar12,0,0x280);
          lVar8 = 0x80;
          puVar12 = param_1 + 0xc86;
          do {
            puVar12[-6] = 0xffff;
            lVar8 = lVar8 + -2;
            puVar12[-5] = 0;
            puVar12[-4] = 0;
            puVar12[-3] = 0;
            puVar12[-2] = 0;
            puVar12[-1] = 0xffff;
            puVar12[0] = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12 = puVar12 + 10;
          } while (lVar8 != 0);
        }
      }
    }
    uVar13 = 0x10107d0;
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0xf00],(uint)(byte)param_1[0xf01],
                       (uint)*(byte *)((long)param_1 + 0x1e03));
    if ((uVar4 & 1) != 0) {
      puVar12 = param_1 + 0xf00;
      uVar4 = nn::time::IsValidDate
                        ((uint)*puVar12,(uint)(byte)param_1[0xf01],
                         (uint)*(byte *)((long)param_1 + 0x1e03));
      if ((uVar4 & 1) != 0) {
        local_68 = FUN_0272eca4(puVar12,0);
        uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        if ((uVar4 & 1) != 0) {
          uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar4 = uVar3 & 0xffff;
          uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar13 = uVar3 & 0xff000000;
          if ((uVar7 & 1) == 0) {
            uVar13 = 0x1000000;
          }
          uVar3 = uVar3 & 0xff0000;
          if ((uVar6 & 1) == 0) {
            uVar3 = 0x10000;
          }
          if ((uVar5 & 1) == 0) {
            uVar4 = 2000;
          }
          uVar13 = uVar3 | uVar4 | uVar13;
        }
        local_70 = uVar13;
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        if (((lVar9 < lVar8) ||
            (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) &&
           ((uVar13 = nn::time::IsValidDate
                                ((uint)*puVar12,(uint)(byte)param_1[0xf01],
                                 (uint)*(byte *)((long)param_1 + 0x1e03)), (uVar13 & 1) == 0 ||
            (((*puVar12 != uVar1 || ((byte)param_1[0xf01] != uVar2)) ||
             (*(byte *)((long)param_1 + 0x1e03) != uVar11)))))) {
          memset(puVar12,0,0x280);
          lVar8 = 0x80;
          puVar12 = param_1 + 0x1046;
          do {
            puVar12[-6] = 0xffff;
            lVar8 = lVar8 + -2;
            puVar12[-5] = 0;
            puVar12[-4] = 0;
            puVar12[-3] = 0;
            puVar12[-2] = 0;
            puVar12[-1] = 0xffff;
            puVar12[0] = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12 = puVar12 + 10;
          } while (lVar8 != 0);
        }
      }
    }
  }
  else {
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3))
       , (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(param_1,0);
      uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
      local_70 = uVar13;
      if ((uVar4 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar4 = uVar3 & 0xffff;
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        local_70 = uVar3 & 0xff000000;
        if ((uVar7 & 1) == 0) {
          local_70 = 0x1000000;
        }
        uVar7 = uVar3 & 0xff0000;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0x10000;
        }
        if ((uVar5 & 1) == 0) {
          uVar4 = 2000;
        }
        local_70 = uVar7 | uVar4 | local_70;
      }
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if ((lVar9 < lVar8) ||
         (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) {
        memset(param_1,0,0x280);
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 0x14;
          *(undefined2 *)((long)param_1 + lVar8 + 0x280) = 0xffff;
          *(undefined2 *)((long)param_1 + lVar8 + 0x28a) = 0xffff;
          *(undefined8 *)((long)param_1 + lVar8 + 0x282) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0x28c) = 0;
          lVar8 = lVar9;
        } while (lVar9 != 0x500);
      }
    }
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                       (uint)*(byte *)((long)param_1 + 0x783));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                           (uint)*(byte *)((long)param_1 + 0x783)), (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(param_1 + 0x3c0,0);
      uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
      if ((uVar4 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar4 = uVar3 & 0xffff;
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar13 = uVar3 & 0xff000000;
        if ((uVar7 & 1) == 0) {
          uVar13 = 0x1000000;
        }
        uVar7 = uVar3 & 0xff0000;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0x10000;
        }
        if ((uVar5 & 1) == 0) {
          uVar4 = 2000;
        }
        uVar13 = uVar7 | uVar4 | uVar13;
      }
      local_70 = uVar13;
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if ((lVar9 < lVar8) ||
         (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) {
        memset(param_1 + 0x3c0,0,0x280);
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 0x14;
          *(undefined2 *)((long)param_1 + lVar8 + 0xa00) = 0xffff;
          *(undefined2 *)((long)param_1 + lVar8 + 0xa0a) = 0xffff;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa02) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0xa0c) = 0;
          lVar8 = lVar9;
        } while (lVar9 != 0x500);
      }
    }
    uVar13 = 0x10107d0;
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                       (uint)*(byte *)((long)param_1 + 0xf03));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                           (uint)*(byte *)((long)param_1 + 0xf03)), (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(param_1 + 0x780,0);
      uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
      if ((uVar4 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar4 = uVar3 & 0xffff;
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        uVar13 = uVar3 & 0xff000000;
        if ((uVar7 & 1) == 0) {
          uVar13 = 0x1000000;
        }
        uVar7 = uVar3 & 0xff0000;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0x10000;
        }
        if ((uVar5 & 1) == 0) {
          uVar4 = 2000;
        }
        uVar13 = uVar7 | uVar4 | uVar13;
      }
      local_70 = uVar13;
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if ((lVar9 < lVar8) ||
         (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) {
        memset(param_1 + 0x780,0,0x280);
        lVar8 = 0x80;
        puVar12 = param_1 + 0x8c6;
        do {
          puVar12[-6] = 0xffff;
          lVar8 = lVar8 + -2;
          puVar12[-5] = 0;
          puVar12[-4] = 0;
          puVar12[-3] = 0;
          puVar12[-2] = 0;
          puVar12[-1] = 0xffff;
          puVar12[0] = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          puVar12 = puVar12 + 10;
        } while (lVar8 != 0);
      }
    }
    uVar13 = 0x10107d0;
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0xb40],(uint)(byte)param_1[0xb41],
                       (uint)*(byte *)((long)param_1 + 0x1683));
    if ((uVar4 & 1) != 0) {
      puVar12 = param_1 + 0xb40;
      uVar4 = nn::time::IsValidDate
                        ((uint)*puVar12,(uint)(byte)param_1[0xb41],
                         (uint)*(byte *)((long)param_1 + 0x1683));
      if ((uVar4 & 1) != 0) {
        local_68 = FUN_0272eca4(puVar12,0);
        uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        if ((uVar4 & 1) != 0) {
          uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar4 = uVar3 & 0xffff;
          uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar13 = uVar3 & 0xff000000;
          if ((uVar7 & 1) == 0) {
            uVar13 = 0x1000000;
          }
          uVar7 = uVar3 & 0xff0000;
          if ((uVar6 & 1) == 0) {
            uVar7 = 0x10000;
          }
          if ((uVar5 & 1) == 0) {
            uVar4 = 2000;
          }
          uVar13 = uVar7 | uVar4 | uVar13;
        }
        local_70 = uVar13;
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        if ((lVar9 < lVar8) ||
           (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) {
          memset(puVar12,0,0x280);
          lVar8 = 0x80;
          puVar12 = param_1 + 0xc86;
          do {
            puVar12[-6] = 0xffff;
            lVar8 = lVar8 + -2;
            puVar12[-5] = 0;
            puVar12[-4] = 0;
            puVar12[-3] = 0;
            puVar12[-2] = 0;
            puVar12[-1] = 0xffff;
            puVar12[0] = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12 = puVar12 + 10;
          } while (lVar8 != 0);
        }
      }
    }
    uVar13 = 0x10107d0;
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0xf00],(uint)(byte)param_1[0xf01],
                       (uint)*(byte *)((long)param_1 + 0x1e03));
    if ((uVar4 & 1) != 0) {
      puVar12 = param_1 + 0xf00;
      uVar4 = nn::time::IsValidDate
                        ((uint)*puVar12,(uint)(byte)param_1[0xf01],
                         (uint)*(byte *)((long)param_1 + 0x1e03));
      if ((uVar4 & 1) != 0) {
        local_68 = FUN_0272eca4(puVar12,0);
        uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
        if ((uVar4 & 1) != 0) {
          uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar4 = uVar3 & 0xffff;
          uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar7 = nn::time::IsValidDate(uVar1,uVar2,uVar11);
          uVar13 = uVar3 & 0xff000000;
          if ((uVar7 & 1) == 0) {
            uVar13 = 0x1000000;
          }
          uVar3 = uVar3 & 0xff0000;
          if ((uVar6 & 1) == 0) {
            uVar3 = 0x10000;
          }
          if ((uVar5 & 1) == 0) {
            uVar4 = 2000;
          }
          uVar13 = uVar3 | uVar4 | uVar13;
        }
        local_70 = uVar13;
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        if ((lVar9 < lVar8) ||
           (lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar9 == lVar8)) {
          memset(puVar12,0,0x280);
          lVar8 = 0x80;
          puVar12 = param_1 + 0x1046;
          do {
            puVar12[-6] = 0xffff;
            lVar8 = lVar8 + -2;
            puVar12[-5] = 0;
            puVar12[-4] = 0;
            puVar12[-3] = 0;
            puVar12[-2] = 0;
            puVar12[-1] = 0xffff;
            puVar12[0] = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12 = puVar12 + 10;
          } while (lVar8 != 0);
        }
      }
    }
  }
  return;
}

