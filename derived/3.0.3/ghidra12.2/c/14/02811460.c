
uint * FUN_02811460(uint *param_1,ushort *param_2,undefined1 *param_3)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  uVar4 = *param_2;
  bVar2 = (byte)param_2[1];
  bVar3 = *(byte *)((long)param_2 + 3);
  nn::time::IsValidDate((uint)uVar4,(uint)bVar2,(uint)bVar3);
  uVar5 = nn::time::IsValidDate
                    ((uint)(ushort)*param_1,(uint)*(byte *)((long)param_1 + 2),
                     (uint)*(byte *)((long)param_1 + 3));
  if ((uVar5 & 1) == 0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar5 = nn::time::IsValidDate
                      ((uint)(ushort)*param_1,(uint)*(byte *)((long)param_1 + 2),
                       (uint)*(byte *)((long)param_1 + 3));
    if ((uVar5 & 1) == 0) {
      uVar12 = 0xffffffff;
      uVar11 = 1;
    }
    else {
      uVar12 = 0xffffffff;
      uVar11 = 1;
      if ((((ushort)*param_1 == uVar4) && (*(byte *)((long)param_1 + 2) == bVar2)) &&
         (*(byte *)((long)param_1 + 3) == bVar3)) {
        return param_1;
      }
    }
  }
  uVar5 = nn::time::IsValidDate
                    ((uint)(ushort)param_1[0x1e0],(uint)*(byte *)((long)param_1 + 0x782),
                     (uint)*(byte *)((long)param_1 + 0x783));
  if ((uVar5 & 1) != 0) {
    uVar5 = nn::time::IsValidDate
                      ((uint)(ushort)param_1[0x1e0],(uint)*(byte *)((long)param_1 + 0x782),
                       (uint)*(byte *)((long)param_1 + 0x783));
    uVar11 = uVar12;
    if ((((uVar5 & 1) != 0) && ((ushort)param_1[0x1e0] == uVar4)) &&
       ((*(byte *)((long)param_1 + 0x782) == bVar2 && (*(byte *)((long)param_1 + 0x783) == bVar3))))
    {
      return param_1 + 0x1e0;
    }
  }
  uVar5 = nn::time::IsValidDate
                    ((uint)(ushort)param_1[0x3c0],(uint)*(byte *)((long)param_1 + 0xf02),
                     (uint)*(byte *)((long)param_1 + 0xf03));
  if ((uVar5 & 1) == 0) {
    uVar12 = 2;
    if (uVar11 != 0xffffffff) {
      uVar12 = uVar11;
    }
    uVar11 = uVar12;
  }
  else {
    uVar5 = nn::time::IsValidDate
                      ((uint)(ushort)param_1[0x3c0],(uint)*(byte *)((long)param_1 + 0xf02),
                       (uint)*(byte *)((long)param_1 + 0xf03));
    if ((((uVar5 & 1) != 0) && ((ushort)param_1[0x3c0] == uVar4)) &&
       ((*(byte *)((long)param_1 + 0xf02) == bVar2 &&
        (puVar8 = param_1 + 0x3c0, *(byte *)((long)param_1 + 0xf03) == bVar3)))) goto LAB_0281194c;
  }
  puVar1 = (ushort *)((long)param_1 + 0x1682);
  puVar10 = param_1 + 0x5a0;
  uVar5 = nn::time::IsValidDate
                    ((uint)(ushort)param_1[0x5a0],(uint)*(byte *)puVar1,
                     (uint)*(byte *)((long)param_1 + 0x1683));
  uVar12 = uVar11;
  if ((uVar5 & 1) == 0) {
    uVar12 = 3;
    if (uVar11 != 0xffffffff) {
      uVar12 = uVar11;
    }
  }
  else {
    uVar5 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)puVar1,
                       (uint)*(byte *)((long)param_1 + 0x1683));
    if (((((uVar5 & 1) != 0) && ((ushort)*puVar10 == uVar4)) && (*(byte *)puVar1 == bVar2)) &&
       (*(byte *)((long)param_1 + 0x1683) == bVar3)) {
      return puVar10;
    }
  }
  puVar8 = param_1 + 0x780;
  uVar5 = nn::time::IsValidDate
                    ((uint)(ushort)param_1[0x780],(uint)*(byte *)((long)param_1 + 0x1e02),
                     (uint)*(byte *)((long)param_1 + 0x1e03));
  uVar11 = uVar12;
  if ((uVar5 & 1) == 0) {
    uVar11 = 4;
    if (uVar12 != 0xffffffff) {
      uVar11 = uVar12;
    }
  }
  else {
    uVar5 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar8,(uint)*(byte *)((long)param_1 + 0x1e02),
                       (uint)*(byte *)((long)param_1 + 0x1e03));
    if ((((uVar5 & 1) != 0) && ((uint)(ushort)*puVar8 == (uint)uVar4)) &&
       (((uint)*(byte *)((long)param_1 + 0x1e02) == (uint)bVar2 &&
        (*(byte *)((long)param_1 + 0x1e03) == bVar3)))) goto LAB_0281194c;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  if (uVar11 == 0xffffffff) {
    nn::time::IsValidDate
              ((uint)(ushort)*param_1,(uint)*(byte *)((long)param_1 + 2),
               (uint)*(byte *)((long)param_1 + 3));
    local_68 = FUN_0272eca4(param_1,0);
    nn::time::IsValidDate
              ((uint)(ushort)param_1[0x1e0],(uint)*(byte *)((long)param_1 + 0x782),
               (uint)*(byte *)((long)param_1 + 0x783));
    local_70 = FUN_0272eca4(param_1 + 0x1e0,0);
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    if (lVar6 <= lVar7) {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    }
    uVar5 = (ulong)(lVar6 > lVar7);
    puVar9 = param_1 + uVar5 * 0x1e0;
    nn::time::IsValidDate
              ((uint)(ushort)*puVar9,(uint)*(byte *)((long)puVar9 + 2),
               (uint)*(byte *)((long)puVar9 + 3));
    local_68 = FUN_0272eca4(puVar9,0);
    nn::time::IsValidDate
              ((uint)(ushort)param_1[0x3c0],(uint)*(byte *)((long)param_1 + 0xf02),
               (uint)*(byte *)((long)param_1 + 0xf03));
    local_70 = FUN_0272eca4(param_1 + 0x3c0,0);
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    if (lVar7 < lVar6) {
      uVar5 = 2;
    }
    else {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    }
    puVar9 = param_1 + uVar5 * 0x1e0;
    nn::time::IsValidDate
              ((uint)(ushort)*puVar9,(uint)*(byte *)((long)puVar9 + 2),
               (uint)*(byte *)((long)puVar9 + 3));
    local_68 = FUN_0272eca4(puVar9,0);
    nn::time::IsValidDate
              ((uint)(ushort)param_1[0x5a0],(uint)*(byte *)puVar1,
               (uint)*(byte *)((long)param_1 + 0x1683));
    local_70 = FUN_0272eca4(puVar10,0);
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    if (lVar7 < lVar6) {
      uVar5 = 3;
    }
    else {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    }
    puVar10 = param_1 + uVar5 * 0x1e0;
    nn::time::IsValidDate
              ((uint)(ushort)*puVar10,(uint)*(byte *)((long)puVar10 + 2),
               (uint)*(byte *)((long)puVar10 + 3));
    local_68 = FUN_0272eca4(puVar10,0);
    nn::time::IsValidDate
              ((uint)(ushort)param_1[0x780],(uint)*(byte *)((long)param_1 + 0x1e02),
               (uint)*(byte *)((long)param_1 + 0x1e03));
    local_70 = FUN_0272eca4(puVar8,0);
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    if (lVar7 < lVar6) {
      uVar5 = 4;
    }
    else {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    }
    puVar8 = param_1 + uVar5 * 0x1e0;
    memset(puVar8 + 1,0,0x27c);
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 0x14;
      *(undefined2 *)((long)puVar8 + lVar6 + 0x280) = 0xffff;
      *(undefined2 *)((long)puVar8 + lVar6 + 0x28a) = 0xffff;
      *(undefined8 *)((long)puVar8 + lVar6 + 0x282) = 0;
      *(undefined8 *)((long)puVar8 + lVar6 + 0x28c) = 0;
      lVar6 = lVar7;
    } while (lVar7 != 0x500);
  }
  else {
    puVar8 = param_1 + (ulong)uVar11 * 0x1e0;
    memset(puVar8 + 1,0,0x27c);
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 0x14;
      *(undefined2 *)((long)puVar8 + lVar6 + 0x280) = 0xffff;
      *(undefined2 *)((long)puVar8 + lVar6 + 0x28a) = 0xffff;
      *(undefined8 *)((long)puVar8 + lVar6 + 0x282) = 0;
      *(undefined8 *)((long)puVar8 + lVar6 + 0x28c) = 0;
      lVar6 = lVar7;
    } while (lVar7 != 0x500);
  }
  *puVar8 = (uint)bVar3 << 0x18 | (uint)bVar2 << 0x10 | (uint)uVar4;
LAB_0281194c:
  return puVar8;
}

