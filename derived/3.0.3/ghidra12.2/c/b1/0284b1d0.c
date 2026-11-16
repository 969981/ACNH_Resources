
void FUN_0284b1d0(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_38;
  ulong local_18;
  
  if (*(char *)(param_1 + 0x2f) != '\x02') {
    return;
  }
  if (*(char *)(param_1 + 0x2e) == '\x02') {
    local_18 = *(ulong *)(param_1 + 0x24);
    if ((local_18 & 0xffff) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb32e8;
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar9 + 0x4060));
      if ((lVar6 <= lVar7) &&
         (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar9 + 0x4060)), lVar7 != lVar6))
      goto LAB_0284b454;
    }
    local_38 = *(undefined8 *)(param_1 + 0x1c);
    if ((char)(local_38 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = lVar6 - 0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar8 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar8,(undefined6)local_38) & 0xff00ffffffffffff;
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = lVar6 + 0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    uVar8 = FUN_00a80d84(&local_38,1);
    if ((uVar8 & 1) != 0) {
      bVar4 = *(byte *)(param_1 + 0x2c);
      uVar8 = (ulong)(char)bVar4;
      if ((bVar4 < 10) && ((&DAT_053fee41)[(uVar8 & 0xffffffff) * 0xba0] != '\0')) {
        cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        uVar1 = (int)cVar5 + 0x18;
        if (4 < cVar5) {
          uVar1 = (int)cVar5;
        }
        if (((1 < *(uint *)(&DAT_053fec08 + (uVar8 & 0xffffffff) * 0xba0)) &&
            (lVar6 = *(long *)((&DAT_053fec00)[(uVar8 & 0xffffffff) * 0x174] + 8), lVar6 != 0)) &&
           ((byte *)(lVar6 + -0x10) != (byte *)0x0)) {
          bVar2 = *(byte *)(lVar6 + -0x10);
          uVar1 = uVar1 & 0xff;
          uVar13 = (uint)bVar2;
          bVar3 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
          if (uVar13 <= uVar1 && uVar1 != bVar2) {
            return;
          }
          if (bVar3 == *(byte *)(lVar6 + -0xf) && uVar1 == uVar13) {
            return;
          }
          if (*(byte *)(lVar6 + -0xf) < bVar3 && uVar1 == uVar13) {
            return;
          }
        }
      }
      puVar11 = &DAT_053fe348 + (uVar8 & 0xffffffff) * 0xba0;
      if (9 < bVar4) {
        puVar11 = &DAT_053fe348;
      }
      if ((*(long *)(puVar11 + 0xaa0) == 0) || (*(int *)(*(long *)(puVar11 + 0xaa0) + 4) != 0x1b)) {
        plVar10 = *(long **)(puVar11 + 0x928);
        if (plVar10 != (long *)(puVar11 + 0x920)) {
          plVar12 = plVar10 + -2;
          do {
            if (*(int *)((long)plVar12 + 4) == 0x1b) {
              if (*plVar10 != 0) {
                *(long *)(*plVar10 + 8) = plVar10[1];
              }
              if ((long *)plVar10[1] != (long *)0x0) {
                *(long *)plVar10[1] = *plVar10;
              }
              *plVar10 = 0;
              plVar10[1] = 0;
              *(int *)(puVar11 + 0x930) = *(int *)(puVar11 + 0x930) + -1;
              *plVar12 = *(long *)(puVar11 + 0x938);
              *(long **)(puVar11 + 0x938) = plVar12;
              break;
            }
            plVar10 = (long *)plVar10[1];
            plVar12 = plVar10 + -2;
          } while (plVar12 != (long *)(puVar11 + 0x910));
        }
      }
      else {
        FUN_0214eb90(puVar11 + 0x8b0,uVar8,1);
      }
      lVar6 = FUN_0265c3e0((long)*(char *)(param_1 + 0x2c));
      if (lVar6 != 0) {
        local_18 = CONCAT44(local_18._4_4_,(int)*(char *)(param_1 + 0x2c));
        local_38 = CONCAT44(local_38._4_4_,1);
        FUN_021dafb0(&local_18,&local_38,0,0,0,1);
      }
    }
  }
LAB_0284b454:
  if ((*(char *)(param_1 + 0x2f) == '\x02') &&
     (local_18 = *(ulong *)(param_1 + 0x24), (local_18 & 0xffff) != 0)) {
    lVar9 = *(long *)PTR_DAT_04bb32e8;
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar9 + 0x4060));
    if ((lVar6 <= lVar7) &&
       (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar9 + 0x4060)), lVar7 != lVar6)) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}

