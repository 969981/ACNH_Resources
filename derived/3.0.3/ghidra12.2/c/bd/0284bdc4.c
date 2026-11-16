
void FUN_0284bdc4(long param_1,long *param_2,uint param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined1 auStack_68 [8];
  undefined *local_60;
  uint local_58;
  undefined4 uStack_54;
  byte local_50;
  ulong local_48;
  
  local_60 = (undefined *)CONCAT44(local_60._4_4_,param_3);
  switch(param_3) {
  default:
    piVar10 = (int *)(param_1 + 8);
    break;
  case 1:
    piVar10 = (int *)(param_1 + 0x44);
    break;
  case 2:
    piVar10 = (int *)(param_1 + 0x80);
    break;
  case 3:
    piVar10 = (int *)(param_1 + 0xc0);
    break;
  case 4:
    piVar10 = (int *)(param_1 + 0xfc);
    break;
  case 5:
    piVar10 = (int *)(param_1 + 0x134);
    break;
  case 6:
    piVar10 = (int *)(param_1 + 0x16c);
  }
  bVar2 = *(byte *)((long)piVar10 + 0x2f);
  if (bVar2 < 2 || bVar2 == 3) {
    if (*param_2 == 0) {
      return;
    }
    if (*(char *)((long)piVar10 + 0x2d) == '\x01') {
      if (bVar2 == 0) {
        return;
      }
    }
    else if (*(char *)((long)piVar10 + 0x2d) == '\x06') {
      if (bVar2 == 0) {
        return;
      }
      if (bVar2 != 2) {
        return;
      }
      local_60 = *(undefined **)(piVar10 + 9);
      if (((ulong)local_60 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)PTR_DAT_04bb32e8;
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
      if (lVar5 < lVar4) {
        return;
      }
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
      if (lVar5 == lVar4) {
        return;
      }
    }
  }
  else if ((bVar2 == 2) && (-1 < *param_2)) {
    local_60 = *(undefined **)(piVar10 + 9);
    if (((ulong)local_60 & 0xffff) != 0) {
      lVar7 = *(long *)PTR_DAT_04bb32e8;
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
      if ((lVar4 <= lVar5) &&
         (lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060)), lVar5 != lVar4)) {
        switch(param_3) {
        default:
          lVar4 = param_1 + 8;
          break;
        case 1:
          lVar4 = param_1 + 0x44;
          break;
        case 2:
          lVar4 = param_1 + 0x80;
          break;
        case 3:
          lVar4 = param_1 + 0xc0;
          break;
        case 4:
          lVar4 = param_1 + 0xfc;
          break;
        case 5:
          lVar4 = param_1 + 0x134;
          break;
        case 6:
          lVar4 = param_1 + 0x16c;
        }
        local_60 = (undefined *)CONCAT44(local_60._4_4_,3);
        *(undefined1 *)(lVar4 + 0x2f) = 3;
        if (3 < param_3) {
          return;
        }
        if (param_3 == 2) {
          return;
        }
        goto LAB_0284c0ac;
      }
    }
    if (param_3 != 1) {
      return;
    }
    local_48 = *(ulong *)(piVar10 + 9);
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_60 = (undefined *)(lVar4 + -0x15180);
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    if ((local_48 & 0xffff) == 0) {
      return;
    }
    lVar7 = *(long *)PTR_DAT_04bb32e8;
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
    if (lVar5 < lVar4) {
      return;
    }
    nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
    if (*piVar10 != 0) {
      return;
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      iVar3 = 0;
      puVar9 = DAT_055c1b60;
      do {
        if (*(int *)(puVar9 + -1) == 0x6622bd46) goto LAB_0284c004;
        puVar9 = (undefined8 *)puVar9[1];
        iVar3 = iVar3 + 1;
      } while (puVar9 != &DAT_055c1b58);
    }
    iVar3 = 0xffff;
LAB_0284c004:
    local_58 = FUN_01a4f5d0(iVar3);
    local_60 = PTR_DAT_04bbfe68 + 0x10;
    puVar1 = &DAT_0516b108 + local_58;
    if (0x38 < local_58) {
      puVar1 = &DAT_0516b108;
    }
    uStack_54 = *puVar1;
    local_50 = FUN_017baf44(uStack_54);
    local_50 = local_50 & 1;
    local_78 = (int)*(short *)(param_1 + 0x7c);
    iStack_74 = (int)*(short *)(param_1 + 0x7e);
    local_80 = PTR_DAT_04bb2010 + 0x10;
    FUN_01a5033c(auStack_68,&local_60,0,&local_80,0);
    uVar6 = FUN_0277d9a8(auStack_68);
    if ((uVar6 & 1) == 0) {
      return;
    }
    FUN_01ad5d04(&local_80,auStack_68);
    uVar6 = FUN_01ad6a30(&local_80,0x8f);
    if ((uVar6 & 1) == 0) {
      return;
    }
  }
LAB_0284c0ac:
  if ((&DAT_055a33e8)[(long)(int)param_3 * 2] != 0 ||
      (&DAT_055a33f0)[(long)(int)param_3 * 2] != 0 &&
      (((&DAT_055a33f0)[(long)(int)param_3 * 2] & 1) != 0 ||
      (&DAT_055a33e8)[(long)(int)param_3 * 2] != 0)) {
    pcVar8 = (code *)(&DAT_055a33e8)[(long)(int)param_3 * 2];
    if (((&DAT_055a33f0)[(long)(int)param_3 * 2] & 1) != 0) {
      pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 +
                                            ((long)(&DAT_055a33f0)[(long)(int)param_3 * 2] >> 1)));
    }
    (*pcVar8)();
  }
  return;
}

