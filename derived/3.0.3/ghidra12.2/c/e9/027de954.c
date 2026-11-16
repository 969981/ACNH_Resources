
uint FUN_027de954(byte *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bc27f0;
  uVar7 = (uint)(char)param_1[0x1e3361];
  uVar6 = (ulong)*param_1;
  if (((uVar6 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar3 = FUN_02749340(param_1 + 0x1267c,&local_70);
    if (iVar3 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar3 = FUN_02749340(param_1 + 0x1267c,&local_70);
      uVar7 = uVar7 & iVar3 >> 0x1f;
      if (iVar3 < 0) {
        iVar3 = -1;
      }
      goto LAB_027dea00;
    }
  }
  iVar3 = -1;
LAB_027dea00:
  uVar6 = (ulong)param_1[0x13230];
  iVar5 = iVar3;
  if (((uVar6 < 0x23) && (param_1[0x13231] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x258ac,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x258ac,&local_70);
      if (iVar3 <= iVar4) {
        iVar5 = iVar4;
      }
      if (iVar3 < iVar4) {
        uVar7 = 1;
      }
    }
  }
  uVar6 = (ulong)param_1[0x26460];
  iVar3 = iVar5;
  uVar8 = uVar7;
  if (((uVar6 < 0x23) && (param_1[0x26461] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x38adc,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x38adc,&local_70);
      if (iVar5 <= iVar4) {
        iVar3 = iVar4;
      }
      uVar8 = 2;
      if (iVar4 <= iVar5) {
        uVar8 = uVar7;
      }
    }
  }
  uVar6 = (ulong)param_1[0x39690];
  iVar5 = iVar3;
  uVar7 = uVar8;
  if (((uVar6 < 0x23) && (param_1[0x39691] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x4bd0c,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x4bd0c,&local_70);
      if (iVar3 <= iVar4) {
        iVar5 = iVar4;
      }
      uVar7 = 3;
      if (iVar4 <= iVar3) {
        uVar7 = uVar8;
      }
    }
  }
  uVar6 = (ulong)param_1[0x4c8c0];
  iVar3 = iVar5;
  uVar8 = uVar7;
  if (((uVar6 < 0x23) && (param_1[0x4c8c1] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x5ef3c,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x5ef3c,&local_70);
      if (iVar5 <= iVar4) {
        iVar3 = iVar4;
      }
      uVar8 = 4;
      if (iVar4 <= iVar5) {
        uVar8 = uVar7;
      }
    }
  }
  uVar6 = (ulong)param_1[0x5faf0];
  iVar5 = iVar3;
  uVar7 = uVar8;
  if (((uVar6 < 0x23) && (param_1[0x5faf1] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x7216c,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x7216c,&local_70);
      if (iVar3 <= iVar4) {
        iVar5 = iVar4;
      }
      uVar7 = 5;
      if (iVar4 <= iVar3) {
        uVar7 = uVar8;
      }
    }
  }
  uVar6 = (ulong)param_1[0x72d20];
  iVar3 = iVar5;
  uVar8 = uVar7;
  if (((uVar6 < 0x23) && (param_1[0x72d21] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x8539c,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x8539c,&local_70);
      if (iVar5 <= iVar4) {
        iVar3 = iVar4;
      }
      uVar8 = 6;
      if (iVar4 <= iVar5) {
        uVar8 = uVar7;
      }
    }
  }
  uVar6 = (ulong)param_1[0x85f50];
  iVar5 = iVar3;
  uVar7 = uVar8;
  if (((uVar6 < 0x23) && (param_1[0x85f51] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0x985cc,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0x985cc,&local_70);
      if (iVar3 <= iVar4) {
        iVar5 = iVar4;
      }
      uVar7 = 7;
      if (iVar4 <= iVar3) {
        uVar7 = uVar8;
      }
    }
  }
  uVar6 = (ulong)param_1[0x99180];
  iVar3 = iVar5;
  uVar8 = uVar7;
  if (((uVar6 < 0x23) && (param_1[0x99181] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar1;
    iVar4 = FUN_02749340(param_1 + 0xab7fc,&local_70);
    if (iVar4 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar1;
      iVar4 = FUN_02749340(param_1 + 0xab7fc,&local_70);
      if (iVar5 <= iVar4) {
        iVar3 = iVar4;
      }
      uVar8 = 8;
      if (iVar4 <= iVar5) {
        uVar8 = uVar7;
      }
    }
  }
  uVar6 = (ulong)param_1[0xac3b0];
  uVar7 = uVar8;
  if (((uVar6 < 0x23) && (param_1[0xac3b1] <= (byte)puVar2[uVar6])) &&
     (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "MoveInCompletion";
    local_70 = puVar2;
    iVar5 = FUN_02749340(param_1 + 0xbea2c,&local_70);
    if (iVar5 == 0) {
      pcStack_68 = "MoveInOrder";
      local_70 = puVar2;
      iVar5 = FUN_02749340(param_1 + 0xbea2c,&local_70);
      uVar7 = 9;
      if (iVar5 <= iVar3) {
        uVar7 = uVar8;
      }
    }
  }
  return uVar7;
}

