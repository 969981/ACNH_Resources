
void FUN_028e1844(ulong *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 local_68;
  long local_48;
  
  puVar3 = PTR_DAT_04bb32e8;
  puVar2 = PTR_DAT_04bb30a0;
  uVar10 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < uVar10) {
    uVar10 = 0;
  }
  *(uint *)((long)param_1 + 0x14) = uVar10;
  lVar11 = *(long *)puVar3;
  puVar12 = (ulong *)(lVar11 + 0x4068);
  if (*(short *)puVar12 == 0) {
    local_68 = *(ulong *)(lVar11 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_48 = local_48 + -0x15180;
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar13 = local_68;
    puVar12 = &local_68;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68._7_1_ = SUB81(uVar13,7);
    local_68._0_7_ = (uint7)(uint6)local_68;
  }
  puVar4 = PTR_DAT_04bb4928;
  uVar16 = *puVar12;
  uVar13 = uVar16 >> 0x10;
  iVar7 = (int)(uVar16 >> 0x18);
  uVar15 = uVar16 >> 0x20;
  if (*(long *)PTR_DAT_04bb4928 == 0) {
    bVar17 = 0;
  }
  else {
    if (*(int *)((long)param_1 + 0x14) == 1) {
      iVar6 = FUN_01c5c710();
      if ((iVar6 == 0) || (iVar6 = FUN_01c5c890(*(undefined8 *)puVar4), iVar6 == 0))
      goto LAB_028e19ac;
      uVar13 = FUN_01c5c710(*(undefined8 *)puVar4);
      iVar7 = FUN_01c5c890(*(undefined8 *)puVar4);
joined_r0x028e1984:
      if (((uVar16 & 0xffff) == 0) ||
         (uVar8 = nn::time::IsValidDate((int)(short)uVar16,(int)(char)uVar13,(int)(char)iVar7),
         (uVar8 & 1) == 0)) {
        lVar11 = *(long *)puVar3;
        puVar12 = (ulong *)(lVar11 + 0x4068);
        if (*(short *)puVar12 == 0) {
          local_68 = *(ulong *)(lVar11 + 0x4060);
          if ((char)(local_68 >> 0x20) < '\x05') {
            local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_48 = local_48 + -0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
          }
          uVar13 = local_68;
          puVar12 = &local_68;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68._7_1_ = SUB81(uVar13,7);
          local_68._0_7_ = (uint7)(uint6)local_68;
        }
        uVar16 = *puVar12;
        uVar13 = uVar16 >> 0x10;
        iVar7 = (int)(uVar16 >> 0x18);
        uVar15 = uVar16 >> 0x20;
      }
      else {
        uVar13 = uVar13 & 0xffffffff;
      }
      bVar17 = 1;
    }
    else {
      if (((*(int *)((long)param_1 + 0x14) == 0) && (iVar6 = FUN_01c5c410(), iVar6 != 0)) &&
         (iVar6 = FUN_01c5c410(*(undefined8 *)puVar4), iVar6 != 0)) {
        uVar13 = FUN_01c5c410(*(undefined8 *)puVar4);
        iVar7 = FUN_01c5c590(*(undefined8 *)puVar4);
        goto joined_r0x028e1984;
      }
LAB_028e19ac:
      bVar17 = 0;
    }
    uVar10 = (uint)*(ushort *)(*(long *)puVar4 + 10) - (uint)DAT_0534e320;
    if (((uVar10 < DAT_0534e300) &&
        (lVar11 = *(long *)(DAT_0534e308 + (long)(int)uVar10 * 8), lVar11 != 0)) &&
       (puVar9 = (ushort *)FUN_01c560f0(lVar11,4,0x6b3738e0,*(undefined8 *)PTR_DAT_04bc0e70),
       puVar9 != (ushort *)0x0)) {
      uVar10 = (uint)*puVar9;
      goto LAB_028e1a7c;
    }
  }
  uVar10 = 0;
LAB_028e1a7c:
  *(uint *)(param_1 + 1) = uVar10;
  *(uint *)((long)param_1 + 0xc) = uVar10;
  uVar13 = uVar16 & 0xffff | (uVar13 & 0xff) << 0x10;
  *(uint *)(param_1 + 2) = uVar10;
  *(undefined4 *)(param_1 + 0x29) = 0x34;
  *param_1 = uVar13 | (uint)(iVar7 << 0x18) | 0x500000000;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(*(long *)puVar2 + 0x65208);
  FUN_028deee0(param_1);
  uVar14 = *(undefined8 *)puVar2;
  local_68 = uVar13 | (ulong)(uint)(iVar7 << 0x18) | uVar15 << 0x20;
  if ((char)uVar15 < '\x05') {
    local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_48 = local_48 + -0x15180;
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  }
  uVar13 = local_68;
  uVar15 = local_68 >> 0x10;
  uVar16 = local_68 >> 0x18;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68._7_1_ = SUB81(uVar13,7);
  local_68._0_7_ = (uint7)(uint6)local_68;
  cVar5 = FUN_00a8ae20(uVar14,uVar15,uVar16,3);
  bVar1 = (bool)(bVar17 ^ 1);
  if (cVar5 != '\x01') {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_028db6f0(param_1);
  }
  else {
    *(undefined8 *)((long)param_1 + 0x3c) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x34) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0x200000002;
    *(undefined8 *)((long)param_1 + 0x4c) = 0x200000002;
    *(undefined8 *)((long)param_1 + 0x54) = 0x200000002;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x200000002;
    *(undefined8 *)((long)param_1 + 100) = 0x200000002;
    *(undefined4 *)((long)param_1 + 0x6c) = 3;
  }
  FUN_028dcb50(param_1);
  FUN_028dd9d0(param_1);
  FUN_028de590(param_1);
  *(undefined1 *)((long)param_1 + 0x146) = 0;
  return;
}

