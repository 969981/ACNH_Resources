
void FUN_02884a34(long param_1,short *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb32e8;
  piVar6 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar6 == 0) {
    local_38 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_60 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_60 = local_60 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    piVar6 = (int *)&local_38;
    uVar5 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(int)local_38);
    local_38 = CONCAT26((short)uVar5,(undefined6)local_38) & 0xff00ffffffffffff;
  }
  iVar4 = *piVar6;
  uVar3 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
  puVar2 = PTR_DAT_04bb43c0;
  local_60 = CONCAT44(local_60._4_4_,uVar3);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  lVar7 = param_1 + (ulong)uVar3 * 0x10;
  if (6 < uVar3) {
    lVar7 = param_1;
  }
  uVar3 = FUN_0277d6c4(lVar7);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar5 = FUN_0277d7b4(lVar7,param_2);
      if ((uVar5 & 1) != 0) {
        lVar7 = 0;
        goto LAB_02884ba0;
      }
      lVar8 = *(long *)puVar2;
    }
  }
  uVar3 = FUN_0277d6c4(lVar7 + 8);
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  uVar5 = FUN_0277d7b4(lVar7 + 8,param_2);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar7 = 1;
LAB_02884ba0:
  iVar4 = FUN_0288474c(param_1,param_2);
  if (0 < iVar4) {
    piVar6 = (int *)(*(long *)puVar1 + 0x4068);
    if (*(short *)piVar6 == 0) {
      local_38 = *(undefined8 *)(*(long *)puVar1 + 0x4060);
      if ((char)(local_38 >> 0x20) < '\x05') {
        local_60 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_60 = local_60 + -0x15180;
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
      }
      piVar6 = (int *)&local_38;
      uVar5 = local_38 >> 0x30;
      local_38._0_6_ = CONCAT24(5,(int)local_38);
      local_38 = CONCAT26((short)uVar5,(undefined6)local_38) & 0xff00ffffffffffff;
    }
    iVar4 = *piVar6;
    uVar3 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
    local_60 = CONCAT44(local_60._4_4_,uVar3);
    lVar9 = param_1 + 0x70 + (ulong)uVar3 * 8;
    if (6 < uVar3) {
      lVar9 = param_1 + 0x70;
    }
    *(int *)(lVar9 + lVar7 * 4) = *(int *)(lVar9 + lVar7 * 4) + -1;
    iVar4 = FUN_0288474c(param_1,param_2);
    if (iVar4 == 0) {
      FUN_02884cf0(param_1,param_2);
    }
    if (*param_2 != -2) {
      uVar5 = local_38 >> 0x30;
      local_60 = CONCAT44(*(undefined4 *)(param_2 + 2),CONCAT22(param_2[1],*param_2));
      uStack_58 = 0xffffffff;
      local_38 = CONCAT26((ushort)uVar5 & 0xff00,0xff0000000000);
      if (-1 < *(int *)(PTR_DAT_04bc2bd0 + 8)) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc2bd0 + 8),&local_38,
                     &local_60,0xc,0);
      }
    }
  }
  return;
}

