
void FUN_02c7d490(long param_1,int *param_2)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  short *psVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_80;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar7 == 0) {
        return;
      }
      lVar7 = lVar7 + 0x70;
    }
    else {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar9[0x26] == (long *)0x0) {
        return;
      }
      lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      if (lVar7 == 0) {
        return;
      }
    }
    if ((*(long **)(&LAB_001b72d8 + lVar7) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(&LAB_001b72d8 + lVar7), puVar9 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar9)();
      uVar4 = uVar4 ^ 1;
    }
    uVar13 = 0;
    lVar8 = *(long *)(lVar7 + 0x1b72c0) + *(long *)(lVar7 + 0x1b72b8);
    do {
      lVar10 = DAT_053274a0;
      psVar1 = (short *)(lVar8 + ((long)((ulong)uVar13 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(psVar1);
      if (DAT_053274a0 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
            (sVar2 = *psVar1, sVar2 != -2)) && (*param_2 < param_2[1])) {
          psVar11 = *(short **)(param_2 + 4);
          if (psVar11 != (short *)0x0) {
            *(undefined8 *)(param_2 + 4) = *(undefined8 *)psVar11;
            sVar2 = *psVar1;
          }
          *psVar11 = sVar2;
          lVar10 = lVar8 + (long)(int)uVar13 * 8;
          *(undefined1 *)(psVar11 + 1) = *(undefined1 *)(lVar10 + 2);
          *(undefined1 *)((long)psVar11 + 3) = *(undefined1 *)(lVar10 + 3);
          *(undefined4 *)(psVar11 + 2) = *(undefined4 *)(lVar10 + 4);
          if (*param_2 < param_2[1]) {
            *(short **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = psVar11;
            *param_2 = *param_2 + 1;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x40);
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "AOC_EventFlag_002";
    iVar6 = FUN_0274bce0(param_1 + 0x1f8,&local_78);
    uVar3 = local_80;
    if (iVar6 != 0) {
      local_80 = 0x3667;
      FUN_0277d4ac(&local_80);
      plVar12 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)plVar12 == 0) {
        local_68 = *(long *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_78 = (undefined *)(lVar8 + -0x15180);
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
        }
        plVar12 = &local_68;
        uVar3 = local_68 >> 0x30;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar3,(undefined6)local_68) & 0xff00ffffffffffff;
      }
      local_78 = (undefined *)*plVar12;
      FUN_0286a648(&local_68,&local_80,&local_78);
      local_80._2_6_ = (uint6)(local_68 >> 0x10) & 0xffff;
      uVar3 = local_68;
      if (*param_2 < param_2[1]) {
        puVar9 = *(undefined8 **)(param_2 + 4);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar9;
        }
        *(undefined2 *)puVar9 = (undefined2)local_68;
        *(undefined1 *)((long)puVar9 + 2) = local_80._2_1_;
        *(undefined1 *)((long)puVar9 + 3) = local_80._3_1_;
        *(undefined4 *)((long)puVar9 + 4) = local_68._4_4_;
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar9;
          *param_2 = *param_2 + 1;
        }
      }
    }
    local_80 = uVar3;
    if ((((uVar4 & 1) == 0) && (*(long *)(&LAB_001b72d8 + lVar7) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(&LAB_001b72d8 + lVar7) + 8), puVar9 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar9)();
    }
  }
  return;
}

