
void FUN_021e91f0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  char *pcVar13;
  undefined8 local_38;
  long local_18;
  
  puVar3 = PTR_DAT_04bb2720;
  if ((param_2 != 0) && (uVar1 = *(uint *)(param_2 + 0x50c), uVar1 != 0xffffffff)) {
    pcVar13 = &DAT_05454358 + (ulong)uVar1 * 0x2d8;
    if (0x10 < uVar1) {
      pcVar13 = &DAT_05454358;
    }
    if (*pcVar13 != '\0') {
      iVar2 = *(int *)(pcVar13 + 0x24);
      if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar10 = *(long *)PTR_DAT_04bb2720, lVar10 == 0)) ||
         (*(long *)(lVar10 + 0x330) == 0)) {
LAB_021e92e8:
        uVar11 = *(undefined8 *)PTR_DAT_04bb30a0;
        puVar12 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*(short *)puVar12 == 0) {
          local_38 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)(local_38 >> 0x20) < '\x05') {
            local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
            local_18 = local_18 + -0x15180;
            local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
          }
          uVar4 = local_38;
          puVar12 = &local_38;
          local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
          local_38._7_1_ = SUB81(uVar4,7);
          local_38._0_7_ = (uint7)(uint6)local_38;
        }
        local_38 = *puVar12;
        if ((char)(local_38 >> 0x20) < '\x05') {
          local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
          local_18 = local_18 + -0x15180;
          local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
        }
        uVar4 = local_38;
        uVar8 = local_38 >> 0x10;
        uVar9 = local_38 >> 0x18;
        local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
        local_38._7_1_ = SUB81(uVar4,7);
        local_38._0_7_ = (uint7)(uint6)local_38;
        cVar5 = FUN_00a8ae20(uVar11,uVar8,uVar9,5);
        local_18 = CONCAT44(local_18._4_4_,(int)cVar5);
        if (cVar5 == 3) {
          uVar11 = 0x217d;
        }
        else if (iVar2 == 1) {
          uVar11 = 0x1ce8;
        }
        else {
          if (iVar2 != 0) {
            FUN_021e8e40(param_1);
            return;
          }
          uVar11 = 0x1ce7;
        }
        *param_1 = uVar11;
        FUN_0277d4ac(param_1);
        return;
      }
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 != 0x758f7eaf) || (*(long *)puVar3 == 0)) ||
         ((lVar10 = *(long *)(*(long *)puVar3 + 0x330), lVar10 == 0 ||
          (*(int *)(lVar10 + 0x244) == 0)))) goto LAB_021e92e8;
      if (iVar2 == 1) {
        uVar11 = 0x1df5;
        goto LAB_021e92cc;
      }
      if (iVar2 != 0) {
        uVar11 = 0x1124;
        goto LAB_021e92cc;
      }
    }
  }
  uVar11 = 0x1ce7;
LAB_021e92cc:
  *param_1 = uVar11;
  FUN_0277d4ac(param_1);
  return;
}

