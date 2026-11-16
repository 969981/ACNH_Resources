
void FUN_028e1320(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *__src;
  undefined **local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  undefined8 local_28;
  
  *(undefined1 *)((long)param_1 + 0x145) = 0;
  puVar3 = PTR_DAT_04bb30a0;
  local_28 = *param_1;
  uVar13 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)(local_28 >> 0x20) < '\x05') {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_98 = (undefined **)(lVar6 + -0x15180);
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
  }
  uVar8 = local_28 >> 0x10;
  uVar12 = local_28 >> 0x30;
  uVar9 = local_28 >> 0x18;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar12,(undefined6)local_28) & 0xff00ffffffffffff;
  cVar5 = FUN_00a8ae20(uVar13,uVar8,uVar9,7);
  if (cVar5 != '\0') {
    uVar2 = *(uint *)((long)param_1 + 0xc);
    local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar2);
    if (uVar2 < *(uint *)(*(long *)puVar3 + 0x100)) {
      lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x108) + (long)(int)uVar2 * 8);
    }
    else {
      lVar6 = 0;
    }
    plVar7 = (long *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
    local_88 = 0x40;
    local_45 = 0;
    local_98 = &PTR_LAB_048fd2d8;
    local_90 = local_84;
    (**(code **)(*plVar7 + 0x18))();
    __src = (undefined1 *)plVar7[1];
    if (local_84 != __src) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar6 = 0;
      do {
        if (*(char *)(plVar7[1] + lVar6) == '\0') goto LAB_028e147c;
        lVar1 = plVar7[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_028e147c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_028e147c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_028e147c:
      iVar11 = (int)lVar6;
      if (local_88 <= (int)lVar6) {
        iVar11 = local_88 + -1;
      }
      memcpy(local_84,__src,(long)iVar11);
      local_84[iVar11] = 0;
    }
    puVar3 = PTR_DAT_04bb2bc0;
    lVar6 = 0;
    local_98 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    local_90[(long)local_88 + -1] = 0;
    do {
      if (local_90[lVar6] == '\0') goto LAB_028e150c;
      if (local_90[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_028e150c;
      }
      if (local_90[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_028e150c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_028e150c:
    iVar10 = (int)lVar6;
    iVar11 = iVar10;
    if (1 < iVar10) {
      iVar11 = 2;
    }
    local_90[iVar10 - iVar11] = 0;
    (**(code **)(puVar3 + 0x28))(&local_98);
    (*(code *)local_98[3])(&local_98);
    if (local_90 == &DAT_040cb35c) {
LAB_028e1590:
      *(undefined1 *)((long)param_1 + 0x145) = 1;
    }
    else {
      uVar12 = 0;
      bVar4 = true;
      do {
        if (local_90[uVar12] != (&DAT_040cb35c)[uVar12]) {
          return;
        }
        if (local_90[uVar12] == '\0') {
          if (!bVar4) {
            return;
          }
          goto LAB_028e1590;
        }
        bVar4 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
    }
  }
  return;
}

