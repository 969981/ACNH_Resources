
void FUN_02810e10(ushort *param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_68;
  undefined8 local_48;
  
  uVar3 = *param_2;
  uVar12 = (ulong)uVar3;
  bVar1 = (byte)param_2[1];
  uVar14 = (ulong)bVar1;
  uVar17 = 0x10107d0;
  bVar2 = *(byte *)((long)param_2 + 3);
  uVar16 = (ulong)bVar2;
  nn::time::IsValidDate((uint)uVar3,(uint)bVar1,(uint)bVar2);
  uVar4 = nn::time::IsValidDate
                    ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
  if ((uVar4 & 1) != 0) {
    uVar4 = nn::time::IsValidDate
                      ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
    if ((uVar4 & 1) != 0) {
      local_48 = FUN_0272eca4(param_1,0);
      uVar11 = (uint)uVar3;
      uVar13 = (uint)bVar1;
      uVar15 = (uint)bVar2;
      uVar4 = nn::time::IsValidDate((uint)uVar3,(uint)bVar1,(uint)bVar2);
      local_68 = uVar17;
      if ((uVar4 & 1) != 0) {
        uVar4 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar6 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        local_68 = uVar16 << 0x18;
        if ((uVar6 & 1) == 0) {
          local_68 = 0x1000000;
        }
        uVar6 = uVar14 << 0x10;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0x10000;
        }
        uVar5 = uVar12;
        if ((uVar4 & 1) == 0) {
          uVar5 = 2000;
        }
        local_68 = uVar6 | uVar5 | local_68;
      }
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      if ((lVar8 < lVar7) ||
         (lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68), lVar8 == lVar7))
      goto LAB_02810f88;
    }
    memset(param_1,0,0x280);
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 0x14;
      *(undefined2 *)((long)param_1 + lVar7 + 0x280) = 0xffff;
      *(undefined2 *)((long)param_1 + lVar7 + 0x28a) = 0xffff;
      *(undefined8 *)((long)param_1 + lVar7 + 0x282) = 0;
      *(undefined8 *)((long)param_1 + lVar7 + 0x28c) = 0;
      lVar7 = lVar8;
    } while (lVar8 != 0x500);
  }
LAB_02810f88:
  uVar4 = nn::time::IsValidDate
                    ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                     (uint)*(byte *)((long)param_1 + 0x783));
  uVar11 = (uint)uVar3;
  uVar13 = (uint)bVar1;
  uVar15 = (uint)bVar2;
  if ((uVar4 & 1) != 0) {
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0x3c0],(uint)(byte)param_1[0x3c1],
                       (uint)*(byte *)((long)param_1 + 0x783));
    if ((uVar4 & 1) != 0) {
      local_48 = FUN_0272eca4(param_1 + 0x3c0,0);
      uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
      uVar4 = uVar17;
      if ((uVar5 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar6 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar9 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar4 = uVar16 << 0x18;
        if ((uVar9 & 1) == 0) {
          uVar4 = 0x1000000;
        }
        uVar9 = uVar14 << 0x10;
        if ((uVar6 & 1) == 0) {
          uVar9 = 0x10000;
        }
        uVar6 = uVar12;
        if ((uVar5 & 1) == 0) {
          uVar6 = 2000;
        }
        uVar4 = uVar9 | uVar6 | uVar4;
      }
      local_68 = uVar4;
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      if ((lVar8 < lVar7) ||
         (lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68), lVar8 == lVar7))
      goto LAB_028110bc;
    }
    memset(param_1 + 0x3c0,0,0x280);
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 0x14;
      *(undefined2 *)((long)param_1 + lVar7 + 0xa00) = 0xffff;
      *(undefined2 *)((long)param_1 + lVar7 + 0xa0a) = 0xffff;
      *(undefined8 *)((long)param_1 + lVar7 + 0xa02) = 0;
      *(undefined8 *)((long)param_1 + lVar7 + 0xa0c) = 0;
      lVar7 = lVar8;
    } while (lVar8 != 0x500);
  }
LAB_028110bc:
  uVar4 = nn::time::IsValidDate
                    ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                     (uint)*(byte *)((long)param_1 + 0xf03));
  if ((uVar4 & 1) != 0) {
    uVar4 = nn::time::IsValidDate
                      ((uint)param_1[0x780],(uint)(byte)param_1[0x781],
                       (uint)*(byte *)((long)param_1 + 0xf03));
    if ((uVar4 & 1) != 0) {
      local_48 = FUN_0272eca4(param_1 + 0x780,0);
      uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
      uVar4 = uVar17;
      if ((uVar5 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar6 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar9 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar4 = uVar16 << 0x18;
        if ((uVar9 & 1) == 0) {
          uVar4 = 0x1000000;
        }
        uVar9 = uVar14 << 0x10;
        if ((uVar6 & 1) == 0) {
          uVar9 = 0x10000;
        }
        uVar6 = uVar12;
        if ((uVar5 & 1) == 0) {
          uVar6 = 2000;
        }
        uVar4 = uVar9 | uVar6 | uVar4;
      }
      local_68 = uVar4;
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      if ((lVar8 < lVar7) ||
         (lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68), lVar8 == lVar7))
      goto LAB_028111e8;
    }
    memset(param_1 + 0x780,0,0x280);
    lVar7 = 0x80;
    puVar10 = param_1 + 0x8c6;
    do {
      puVar10[-6] = 0xffff;
      lVar7 = lVar7 + -2;
      puVar10[-5] = 0;
      puVar10[-4] = 0;
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      puVar10[-1] = 0xffff;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 10;
    } while (lVar7 != 0);
  }
LAB_028111e8:
  uVar4 = nn::time::IsValidDate
                    ((uint)param_1[0xb40],(uint)(byte)param_1[0xb41],
                     (uint)*(byte *)((long)param_1 + 0x1683));
  if ((uVar4 & 1) != 0) {
    puVar10 = param_1 + 0xb40;
    uVar4 = nn::time::IsValidDate
                      ((uint)*puVar10,(uint)(byte)param_1[0xb41],
                       (uint)*(byte *)((long)param_1 + 0x1683));
    if ((uVar4 & 1) != 0) {
      local_48 = FUN_0272eca4(puVar10,0);
      uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
      uVar4 = uVar17;
      if ((uVar5 & 1) != 0) {
        uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar6 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar9 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar4 = uVar16 << 0x18;
        if ((uVar9 & 1) == 0) {
          uVar4 = 0x1000000;
        }
        uVar9 = uVar14 << 0x10;
        if ((uVar6 & 1) == 0) {
          uVar9 = 0x10000;
        }
        uVar6 = uVar12;
        if ((uVar5 & 1) == 0) {
          uVar6 = 2000;
        }
        uVar4 = uVar9 | uVar6 | uVar4;
      }
      local_68 = uVar4;
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      if ((lVar8 < lVar7) ||
         (lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68), lVar8 == lVar7))
      goto LAB_02811318;
    }
    memset(puVar10,0,0x280);
    lVar7 = 0x80;
    puVar10 = param_1 + 0xc86;
    do {
      puVar10[-6] = 0xffff;
      lVar7 = lVar7 + -2;
      puVar10[-5] = 0;
      puVar10[-4] = 0;
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      puVar10[-1] = 0xffff;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 10;
    } while (lVar7 != 0);
  }
LAB_02811318:
  uVar4 = nn::time::IsValidDate
                    ((uint)param_1[0xf00],(uint)(byte)param_1[0xf01],
                     (uint)*(byte *)((long)param_1 + 0x1e03));
  if ((uVar4 & 1) != 0) {
    puVar10 = param_1 + 0xf00;
    uVar4 = nn::time::IsValidDate
                      ((uint)*puVar10,(uint)(byte)param_1[0xf01],
                       (uint)*(byte *)((long)param_1 + 0x1e03));
    if ((uVar4 & 1) != 0) {
      local_48 = FUN_0272eca4(puVar10,0);
      uVar4 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
      if ((uVar4 & 1) != 0) {
        uVar4 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar17 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar5 = nn::time::IsValidDate(uVar11,uVar13,uVar15);
        uVar16 = uVar16 << 0x18;
        if ((uVar5 & 1) == 0) {
          uVar16 = 0x1000000;
        }
        uVar14 = uVar14 << 0x10;
        if ((uVar17 & 1) == 0) {
          uVar14 = 0x10000;
        }
        if ((uVar4 & 1) == 0) {
          uVar12 = 2000;
        }
        uVar17 = uVar14 | uVar12 | uVar16;
      }
      local_68 = uVar17;
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      if (lVar8 < lVar7) {
        return;
      }
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      if (lVar8 == lVar7) {
        return;
      }
    }
    memset(puVar10,0,0x280);
    lVar7 = 0x80;
    puVar10 = param_1 + 0x1046;
    do {
      puVar10[-6] = 0xffff;
      lVar7 = lVar7 + -2;
      puVar10[-5] = 0;
      puVar10[-4] = 0;
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      puVar10[-1] = 0xffff;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 10;
    } while (lVar7 != 0);
  }
  return;
}

