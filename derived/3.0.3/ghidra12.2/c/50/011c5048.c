
void FUN_011c5048(long *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  long local_18;
  
  if (((DAT_050d71a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d71a0), iVar4 != 0)) {
    DAT_050d7190 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d7198 = "TreeActor";
    __cxa_guard_release(&DAT_050d71a0);
  }
  if (((DAT_050d71b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d71b8), iVar4 != 0)) {
    DAT_050d71a8 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d71b0 = "TreeOak";
    __cxa_guard_release(&DAT_050d71b8);
  }
  if (((DAT_050d71d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d71d0), iVar4 != 0)) {
    DAT_050d71c0 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d71c8 = "TreeCedar";
    __cxa_guard_release(&DAT_050d71d0);
  }
  if (((DAT_050d71e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d71e8), iVar4 != 0)) {
    DAT_050d71d8 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d71e0 = "TreePalm";
    __cxa_guard_release(&DAT_050d71e8);
  }
  if (((DAT_050d7200 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d7200), iVar4 != 0)) {
    DAT_050d71f0 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d71f8 = "TreeBamboo";
    __cxa_guard_release(&DAT_050d7200);
  }
  if (((DAT_050d7218 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d7218), iVar4 != 0)) {
    DAT_050d7208 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d7210 = "TreeSakura";
    __cxa_guard_release(&DAT_050d7218);
  }
  if (((DAT_050d7230 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050d7230), iVar4 != 0)) {
    DAT_050d7220 = PTR_DAT_04bb2020 + 0x10;
    DAT_050d7228 = "Bush";
    __cxa_guard_release(&DAT_050d7230);
  }
  if ((*(byte *)(param_2 + 0x29b) >> 1 & 1) == 0) {
    pcVar9 = PTR_DAT_04bb2120;
    goto LAB_011c527c;
  }
  lVar11 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))) {
    uVar3 = FUN_0277d6c4(param_2 + 0x284);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(auStack_50,param_2 + 0x284);
      iVar4 = FUN_0123db50(auStack_48,local_40);
      if (iVar4 - 0xbU < 7) {
        pcVar9 = DAT_050d7228;
        goto LAB_011c527c;
      }
      uVar5 = FUN_0123db50(auStack_48,local_40);
      switch(uVar5) {
      case 1:
      case 10:
      case 0x20:
        uVar10 = *(undefined8 *)PTR_DAT_04bb30a0;
        local_38 = FUN_00a8c31c(uVar10);
        if ((char)(local_38 >> 0x20) < '\x05') {
          local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
          local_18 = local_18 + -0x15180;
          local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
        }
        uVar6 = local_38 >> 0x10;
        uVar1 = local_38 >> 0x30;
        uVar7 = local_38 >> 0x18;
        local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
        local_38 = CONCAT26((short)uVar1,(undefined6)local_38) & 0xff00ffffffffffff;
        cVar2 = FUN_00a8ae20(uVar10,uVar6,uVar7,8);
        plVar8 = (long *)&DAT_050d7210;
        if (2 < (byte)(cVar2 - 1U)) {
          plVar8 = (long *)&DAT_050d71b0;
        }
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        break;
      default:
        goto switchD_011c51d0_caseD_2;
      case 3:
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        plVar8 = (long *)&DAT_050d71c8;
        break;
      case 5:
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        plVar8 = (long *)&DAT_050d71e0;
        break;
      case 7:
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        plVar8 = (long *)&DAT_050d71f8;
        break;
      case 9:
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        plVar8 = (long *)&DAT_050d71b0;
      }
      param_1[1] = *plVar8;
      return;
    }
  }
switchD_011c51d0_caseD_2:
  pcVar9 = DAT_050d7198;
LAB_011c527c:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)pcVar9;
  return;
}

