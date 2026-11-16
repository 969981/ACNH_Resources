
uint FUN_027dadcc(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  uVar4 = (ulong)*param_1;
  if ((uVar4 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
    uVar3 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[1] & 0x1f) & 1;
  }
  else {
    uVar3 = 0;
  }
  if ((param_2 & 1) == 0) {
    uVar4 = (ulong)param_1[0x13230];
    if ((uVar4 < 0x23) && (param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar5 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x13231] & 0x1f) & 1;
    }
    else {
      uVar5 = 0;
    }
    uVar4 = (ulong)param_1[0x26460];
    if ((uVar4 < 0x23) && (param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar6 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x26461] & 0x1f) & 1;
    }
    else {
      uVar6 = 0;
    }
    uVar4 = (ulong)param_1[0x39690];
    if ((uVar4 < 0x23) && (param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar7 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x39691] & 0x1f) & 1;
    }
    else {
      uVar7 = 0;
    }
    uVar4 = (ulong)param_1[0x4c8c0];
    if ((uVar4 < 0x23) && (param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar8 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1;
    }
    else {
      uVar8 = 0;
    }
    uVar4 = (ulong)param_1[0x5faf0];
    if ((uVar4 < 0x23) && (param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar9 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x5faf1] & 0x1f) & 1;
    }
    else {
      uVar9 = 0;
    }
    uVar4 = (ulong)param_1[0x72d20];
    if ((uVar4 < 0x23) && (param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar10 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x72d21] & 0x1f) & 1;
    }
    else {
      uVar10 = 0;
    }
    uVar4 = (ulong)param_1[0x85f50];
    if ((uVar4 < 0x23) && (param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar11 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x85f51] & 0x1f) & 1;
    }
    else {
      uVar11 = 0;
    }
    uVar4 = (ulong)param_1[0x99180];
    if ((uVar4 < 0x23) && (param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar12 = (uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x99181] & 0x1f) & 1;
    }
    else {
      uVar12 = 0;
    }
    uVar12 = uVar5 + uVar3 + uVar6 + uVar7 + uVar8 + uVar9 + uVar10 + uVar11 + uVar12;
    uVar4 = (ulong)param_1[0xac3b0];
    if ((uVar4 < 0x23) && (param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
      uVar12 = uVar12 + ((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0xac3b1] & 0x1f) & 1);
    }
  }
  else {
    if (uVar3 == 0) {
      uVar12 = 0;
      puVar13 = PTR_DAT_04bc27f0;
    }
    else {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x1267c,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x1267c,&local_70);
        uVar12 = (uint)(iVar2 != 0);
      }
      else {
        uVar12 = 0;
      }
      puVar13 = &DAT_053e6e93;
    }
    uVar4 = (ulong)param_1[0x13230];
    if (((uVar4 < 0x23) && (param_1[0x13231] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x258ac,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x258ac,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
      puVar13 = &DAT_053e6e93;
    }
    uVar4 = (ulong)param_1[0x26460];
    if (((uVar4 < 0x23) && (param_1[0x26461] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x38adc,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x38adc,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0x39690];
    if (((uVar4 < 0x23) && (param_1[0x39691] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x4bd0c,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x4bd0c,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0x4c8c0];
    if (((uVar4 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x5ef3c,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x5ef3c,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0x5faf0];
    if (((uVar4 < 0x23) && (param_1[0x5faf1] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x7216c,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x7216c,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0x72d20];
    if (((uVar4 < 0x23) && (param_1[0x72d21] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x8539c,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x8539c,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0x85f50];
    if (((uVar4 < 0x23) && (param_1[0x85f51] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0x985cc,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0x985cc,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0x99180];
    if (((uVar4 < 0x23) && (param_1[0x99181] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0xab7fc,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0xab7fc,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar4 = (ulong)param_1[0xac3b0];
    if (((uVar4 < 0x23) && (param_1[0xac3b1] <= (byte)puVar13[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "AbandonedHouse";
      local_80 = puVar1;
      iVar2 = FUN_02749340(param_1 + 0xbea2c,&local_80);
      if (iVar2 < 2) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar1;
        iVar2 = FUN_02749340(param_1 + 0xbea2c,&local_70);
        if (iVar2 != 0) {
          uVar12 = uVar12 + 1;
        }
      }
    }
  }
  return uVar12;
}

