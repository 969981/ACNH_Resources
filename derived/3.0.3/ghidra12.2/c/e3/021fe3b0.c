
undefined8 FUN_021fe3b0(uint param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  char cVar11;
  int *piVar12;
  undefined8 local_48;
  uint local_3c;
  long local_38;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_3c = param_1;
  if ((char)(local_48 >> 0x20) < '\x05') {
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_38 = local_38 + -0x15180;
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar7 = local_48 >> 0x30;
  local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
  local_48 = CONCAT26((short)uVar7,(undefined6)local_48) & 0xff00ffffffffffff;
  lVar5 = FUN_0265c2a0(param_1);
  if (lVar5 == 0) {
    return 0;
  }
  if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  uVar8 = FUN_02697e80(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),&local_48);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (((uVar8 & 1) != 0) && (lVar5 = *(long *)PTR_DAT_04bb46b0, lVar5 != 0)) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return 0;
      }
    }
    if ((*(long **)(lVar5 + 0xe6bc8) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe6bc8), puVar6 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar7 = uVar7 & 0xffffffff;
    }
    uVar4 = FUN_0284f400(*(long *)(lVar5 + 0xe6bb0) + *(long *)(lVar5 + 0xe6ba8),&local_3c);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0xe6bc8) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xe6bc8) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    puVar3 = PTR_DAT_04bc2638;
    puVar2 = PTR_DAT_04bc2630;
    if ((param_1 < 10 && (uVar4 & 1) == 0) && ((&DAT_053fee41)[(ulong)param_1 * 0xba0] != '\0')) {
      lVar5 = *(long *)PTR_DAT_04bb3968;
      if (lVar5 == 0) {
        return 0;
      }
      if ((&DAT_053fede8)[(ulong)param_1 * 0x174] == 0) {
        return 0;
      }
      uVar4 = *(uint *)((&DAT_053fede8)[(ulong)param_1 * 0x174] + 4);
      if ((int)*(uint *)(lVar5 + 0x16718) < 1) {
        if (*(long *)(lVar5 + 0x16608) == 0) {
          return 0;
        }
        puVar9 = *(uint **)(*(long *)(lVar5 + 0x16608) + 8);
        if (puVar9 == (uint *)0x0) {
          return 0;
        }
        if ((uVar4 < *(uint *)(lVar5 + 0x16620)) &&
           (*(char *)(*(long *)(lVar5 + 0x16628) + (long)(int)uVar4) == '\0')) {
          return 0;
        }
        if (*puVar9 <= uVar4) {
          return 0;
        }
        if (puVar9[1] == 0) {
          return 0;
        }
        if ((ushort)puVar9[2] == 0) {
          return 0;
        }
        iVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar4 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                         (long)puVar9);
      }
      else {
        if (*(uint *)(lVar5 + 0x16718) <= uVar4) {
          return 0;
        }
        if (*(uint *)(lVar5 + 0x16708) <= uVar4) {
          uVar4 = 0;
        }
        puVar9 = *(uint **)(*(long *)(lVar5 + 0x16710) + (ulong)uVar4 * 8);
      }
      if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
        cVar11 = *PTR_DAT_04bc2630;
        while( true ) {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar3 + 4);
            if (-1 < (int)uVar4) {
              if ((char *)((ulong)uVar4 + (long)puVar9) == (char *)0x0) {
                return 0;
              }
              if (*(char *)((ulong)uVar4 + (long)puVar9) == '\0') {
                return 0;
              }
              return 1;
            }
            if (uVar4 != 0xffffffff) {
              return 0;
            }
          }
          lVar5 = (long)puVar9 - (ulong)*puVar9;
          if (*puVar9 == 0) {
            return 0;
          }
          if (lVar5 == 0) break;
          lVar1 = 0xc;
          if (*(char *)(lVar5 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar5 == 0) {
            return 0;
          }
          uVar7 = (ulong)*(ushort *)(lVar5 + 8);
          *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar12 = (int *)(lVar1 + lVar5 + 4);
          while (piVar12[-1] != -0x53fa6c34) {
            piVar12 = piVar12 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar10 = 0;
          if (*piVar12 != -1) {
            iVar10 = *piVar12;
          }
          *(int *)(puVar3 + 4) = iVar10;
          if (*puVar9 == 0) {
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

