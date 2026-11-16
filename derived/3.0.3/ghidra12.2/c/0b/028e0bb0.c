
void FUN_028e0bb0(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined1 *__src;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  long local_28;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar2);
  if (uVar2 < *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x100)) {
    lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb30a0 + 0x108) + (long)(int)uVar2 * 8);
  }
  else {
    lVar5 = 0;
  }
  plVar6 = (long *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
  local_88 = 0x40;
  local_45 = 0;
  local_98 = &PTR_LAB_048fd2d8;
  local_90 = local_84;
  (**(code **)(*plVar6 + 0x18))();
  __src = (undefined1 *)plVar6[1];
  if (local_84 != __src) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar5) == '\0') goto LAB_028e0cac;
      lVar1 = plVar6[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_028e0cac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_028e0cac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_028e0cac:
    iVar10 = (int)lVar5;
    if (local_88 <= (int)lVar5) {
      iVar10 = local_88 + -1;
    }
    memcpy(local_84,__src,(long)iVar10);
    local_84[iVar10] = 0;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  lVar5 = 0;
  local_98 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  local_90[(long)local_88 + -1] = 0;
  do {
    if (local_90[lVar5] == '\0') goto LAB_028e0d3c;
    if (local_90[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_028e0d3c;
    }
    if (local_90[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_028e0d3c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_028e0d3c:
  iVar9 = (int)lVar5;
  iVar10 = iVar9;
  if (1 < iVar9) {
    iVar10 = 2;
  }
  local_90[iVar9 - iVar10] = 0;
  (**(code **)(puVar3 + 0x28))(&local_98);
  (*(code *)local_98[3])(&local_98);
  if (local_90 == &DAT_040b6d0d) {
LAB_028e0dc0:
    uVar7 = *param_1;
    local_a0 = uVar7;
    if ((char)((ulong)uVar7 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a0);
      local_28 = local_28 + -0x15180;
      uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar2 = (uint)uVar7 >> 0x10 & 0xff;
    if (0xb < uVar2 - 1) goto switchD_028e0e1c_caseD_6;
    bVar4 = true;
    iVar10 = (int)(uint)uVar7 >> 0x18;
    cVar8 = '\x02';
    switch(uVar2) {
    default:
      cVar8 = '\x05';
      break;
    case 3:
    case 4:
    case 5:
      cVar8 = '\x04';
      break;
    case 7:
      if (0x14 < iVar10) {
        bVar4 = true;
        goto switchD_028e0e1c_caseD_8;
      }
    case 6:
switchD_028e0e1c_caseD_6:
      cVar8 = '\0';
      break;
    case 9:
      bVar4 = iVar10 < 0x10;
      if (0xf < iVar10) {
        cVar8 = '\x02';
        break;
      }
    case 8:
switchD_028e0e1c_caseD_8:
      cVar8 = bVar4;
      break;
    case 10:
      break;
    case 0xb:
      cVar8 = '\x03';
      if (iVar10 < 0xf) {
        cVar8 = (iVar10 < 0xf) << 1;
      }
    }
    FUN_028dab60(param_1,cVar8);
    return;
  }
  uVar11 = 0;
  bVar4 = true;
  do {
    if (local_90[uVar11] != (&DAT_040b6d0d)[uVar11]) break;
    if (local_90[uVar11] == '\0') {
      if (bVar4) goto LAB_028e0dc0;
      break;
    }
    bVar4 = uVar11 < 0x80000;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80001);
  goto switchD_028e0e1c_caseD_6;
}

