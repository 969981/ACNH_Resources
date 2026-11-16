
void FUN_027d9ad0(byte *param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  char *pcStack_68;
  
  pbVar1 = param_1 + 0x1267c;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar1,0,&local_70,0,0);
  pbVar3 = param_1 + 0x258ac;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar3,1,&local_70,0,0);
  pbVar4 = param_1 + 0x38adc;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar4,2,&local_70,0,0);
  pbVar5 = param_1 + 0x4bd0c;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar5,3,&local_70,0,0);
  pbVar6 = param_1 + 0x5ef3c;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar6,4,&local_70,0,0);
  pbVar7 = param_1 + 0x7216c;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar7,5,&local_70,0,0);
  pbVar8 = param_1 + 0x8539c;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar8,6,&local_70,0,0);
  pbVar9 = param_1 + 0x985cc;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar9,7,&local_70,0,0);
  pbVar10 = param_1 + 0xab7fc;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar10,8,&local_70,0,0);
  pbVar11 = param_1 + 0xbea2c;
  pcStack_68 = "EquipEasterWear";
  local_70 = puVar2;
  FUN_02749650(pbVar11,9,&local_70,0,0);
  local_70 = puVar2;
  pcStack_68 = "Easter";
  uVar15 = *(undefined8 *)PTR_DAT_04bb32f0;
  puVar14 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar14 == 0) {
    local_80 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_80 >> 0x20) < '\x05') {
      local_78 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      local_78 = local_78 + -0x15180;
      local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    }
    uVar13 = local_80;
    puVar14 = &local_80;
    local_80._7_1_ = SUB81(uVar13,7);
    local_80._0_7_ = (uint7)CONCAT24(5,(undefined4)local_80);
  }
  uVar13 = *puVar14;
  uVar13 = FUN_00879dd0(uVar15,&local_70,uVar13,uVar13 >> 0x10,uVar13 >> 0x18,0);
  if ((uVar13 & 1) != 0) {
    uVar13 = (ulong)*param_1;
    if (((uVar13 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar1,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x1267a]);
        if ((char)param_1[0x1267a] == 0) {
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar1,0,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x13230];
    if (((uVar13 < 0x23) && (param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar3,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x258aa]);
        if ((char)param_1[0x258aa] == 0) {
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar3,1,&local_70,1,0);
        }
      }
    }
    puVar2 = PTR_DAT_04bb2020;
    uVar13 = (ulong)param_1[0x26460];
    if (((uVar13 < 0x23) && (param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar4,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x38ada]);
        if ((char)param_1[0x38ada] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar4,2,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x39690];
    if (((uVar13 < 0x23) && (param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar5,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x4bd0a]);
        if ((char)param_1[0x4bd0a] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar5,3,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x4c8c0];
    if (((uVar13 < 0x23) && (param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar6,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x5ef3a]);
        if ((char)param_1[0x5ef3a] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar6,4,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x5faf0];
    if (((uVar13 < 0x23) && (param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar7,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x7216a]);
        if ((char)param_1[0x7216a] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar7,5,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x72d20];
    if (((uVar13 < 0x23) && (param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar8,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x8539a]);
        if ((char)param_1[0x8539a] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar8,6,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x85f50];
    if (((uVar13 < 0x23) && (param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar9,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0x985ca]);
        if ((char)param_1[0x985ca] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar9,7,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0x99180];
    if (((uVar13 < 0x23) && (param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar10,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0xab7fa]);
        if ((char)param_1[0xab7fa] == 0) {
          local_70 = puVar2 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar10,8,&local_70,1,0);
        }
      }
    }
    uVar13 = (ulong)param_1[0xac3b0];
    if (((uVar13 < 0x23) && (param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "MoveInCompletion";
      iVar12 = FUN_02749340(pbVar11,&local_70);
      if (iVar12 != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)param_1[0xbea2a]);
        if ((char)param_1[0xbea2a] == 0) {
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "EquipEasterWear";
          FUN_02749650(pbVar11,9,&local_70,1,0);
        }
      }
    }
  }
  return;
}

