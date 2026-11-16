
void FUN_027e9bf0(long param_1,byte *param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  short *psVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined1 local_8c [7];
  undefined1 local_85;
  undefined8 local_80;
  undefined1 local_74 [4];
  undefined2 local_70 [2];
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined8 uStack_58;
  
  psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar10 == 0) {
    local_68 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_68 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_a0 = (undefined *)(lVar5 + -0x15180);
      local_68 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
    }
    uVar6 = (ulong)local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68 = (undefined *)(CONCAT26((short)uVar6,(undefined6)local_68) & 0xff00ffffffffffff);
    psVar10 = (short *)&local_68;
  }
  uVar13 = *(undefined8 *)psVar10;
  local_80 = uVar13;
  local_a0 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
  if (param_4 != 1) {
    local_a0 = local_a0 + ((long)(1 - param_4) * 86400000000000) / 1000000000;
  }
  local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
  uVar6 = (ulong)local_80 >> 0x10;
  uVar12 = (uint)local_80;
  nn::time::IsValidDate
            (uVar12 & 0xffff,uVar12 >> 0x10 & 0xff,(uint)((ulong)local_80 >> 0x18) & 0xff);
  local_85 = 0;
  local_90 = 8;
  puStack_98 = local_8c;
  local_8c[0] = 0;
  *(uint *)(param_2 + 0x12674) =
       uVar12 & 0xff000000 | ((uint)uVar6 & 0xff) << 0x10 | uVar12 & 0xffff;
  local_a0 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_a0,"-----");
  if ((ulong)*param_2 < 0x23) {
    FUN_038d1270(&local_a0,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),
                 param_2[1]);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "MoveInOrder";
  local_68 = puVar1;
  FUN_02749650(param_2 + 0x1267c,param_3,&local_68,0,0);
  local_60 = "MoveInCompletion";
  local_68 = puVar1;
  FUN_02749650(param_2 + 0x1267c,param_3,&local_68,1,0);
  local_60 = "LE_NnpcHouseMoveIn";
  local_68 = puVar1;
  uVar6 = FUN_01b61690(local_70,local_74,&local_a0);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)PTR_DAT_04bb49a0;
    local_6c = FUN_006bd550("LE_NnpcHouseMoveIn",0);
    uVar7 = FUN_01b5b650(lVar5 + 0x238,&local_6c);
    FUN_01b60bc0(&local_68,local_70[0],local_74[0],uVar7,0,0);
  }
  *(char *)(param_1 + 0x1e3361) = (char)param_3;
  if ((((uint)(ushort)*(uint *)(param_2 + 0x12674) == ((uint)uVar13 & 0xffff)) &&
      ((uint)param_2[0x12676] == ((uint)((ulong)uVar13 >> 0x10) & 0xff))) &&
     ((uint)param_2[0x12677] == (uint)uVar13 >> 0x18)) {
    local_68._0_1_ = (CalendarTime)0x1;
    goto LAB_027e9f94;
  }
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar5 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))(),
     lVar5 != 0)) {
    if (((DAT_05594bc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05594bc8), iVar4 != 0)) {
      DAT_05594bc0 = 0xe58;
      FUN_0277d4ac(&DAT_05594bc0);
      __cxa_guard_release(&DAT_05594bc8);
    }
    lVar11 = *(long *)(lVar5 + 0x276fb0);
    if (lVar11 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar8 = *(long **)(lVar11 + 0x20);
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar5 + 0x276fb0) == 0) goto LAB_027e9f38;
        plVar8 = *(long **)(*(long *)(lVar5 + 0x276fb0) + 0x20);
      }
      if (plVar8 != (long *)0x0) {
        local_68 = *(undefined **)(lVar5 + 0x276f90);
        local_60 = *(char **)(lVar5 + 0x276f98);
        uStack_58 = 0x280;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
      }
    }
LAB_027e9f38:
    lVar11 = *(long *)(lVar5 + 0x276f90);
    lVar2 = *(long *)(lVar5 + 0x276f98);
    local_68 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_68);
    uVar3 = (ulong)local_60 >> 0x10;
    local_68 = (undefined *)DAT_05594bc0;
    local_60 = (char *)CONCAT62((uint6)uVar3 & 0xffffffffff00,1);
    FUN_027a9730(lVar2 + lVar11,&local_68);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x276fb0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0x276fb0) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
  }
  local_68._0_1_ = (CalendarTime)0x0;
LAB_027e9f94:
  *(CalendarTime *)(param_2 + 0x1267a) = local_68._0_1_;
  return;
}

