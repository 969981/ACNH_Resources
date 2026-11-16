
void FUN_028e15b0(ulong *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  puVar7 = (uint *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar7 == 0) {
    local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_78 = (undefined *)(lVar4 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    }
    puVar7 = (uint *)&local_68;
    uVar9 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(uint)local_68);
    local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  uVar1 = *puVar7;
  lVar4 = *(long *)PTR_DAT_04bb30a0;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = &DAT_0409624f;
  if (*(int *)(lVar4 + 0x653a0) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    do {
      local_68 = CONCAT44(local_68._4_4_,uVar10);
      if (uVar10 < *(uint *)(lVar4 + 0x100)) {
        lVar5 = *(long *)(*(long *)(lVar4 + 0x108) + (long)(int)uVar10 * 8);
      }
      else {
        lVar5 = 0;
      }
      plVar6 = (long *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
      (**(code **)(local_78 + 0x18))(&local_78);
      (**(code **)(local_78 + 0x18))(&local_78);
      puVar2 = local_70;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      puVar8 = (undefined1 *)plVar6[1];
      if (puVar2 == puVar8) goto LAB_028e17a0;
      uVar9 = 0;
      bVar3 = true;
      do {
        if (local_70[uVar9] != puVar8[uVar9]) break;
        if (local_70[uVar9] == '\0') {
          if (bVar3) goto LAB_028e17a0;
          break;
        }
        if (local_70[uVar9 + 1] != puVar8[uVar9 + 1]) break;
        if (local_70[uVar9 + 1] == '\0') goto LAB_028e17a0;
        if (local_70[uVar9 + 2] != puVar8[uVar9 + 2]) break;
        if (local_70[uVar9 + 2] == '\0') goto LAB_028e17a0;
        bVar3 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      uVar11 = uVar11 + 1;
      uVar10 = uVar11 & 0xff;
    } while ((int)uVar10 < *(int *)(lVar4 + 0x653a0));
    uVar10 = 0;
LAB_028e17a0:
    lVar4 = *(long *)PTR_DAT_04bb30a0;
  }
  local_68 = CONCAT44(local_68._4_4_,uVar10);
  *param_1 = (ulong)uVar1 | 0x500000000;
  *(uint *)(param_1 + 1) = uVar10;
  *(uint *)((long)param_1 + 0xc) = uVar10;
  *(uint *)(param_1 + 2) = uVar10;
  *(undefined4 *)(param_1 + 0x29) = 0x34;
  uVar1 = *(uint *)(lVar4 + 0x65204);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar4 + 0x65208);
  FUN_028deee0(param_1);
  FUN_028db6f0(param_1);
  FUN_028dcb50(param_1);
  FUN_028dd9d0(param_1);
  FUN_028de590(param_1);
  *(undefined1 *)((long)param_1 + 0x146) = 0;
  return;
}

