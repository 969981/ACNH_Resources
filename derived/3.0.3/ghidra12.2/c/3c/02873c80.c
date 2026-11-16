
void FUN_02873c80(undefined2 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb37e0;
  if (*(char *)(param_1 + 8) != '\0') {
    uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *param_1 = uVar7;
    *(undefined *)(param_1 + 1) = puVar1[2];
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined *)((long)param_1 + 3) = puVar1[3];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 4);
    *(undefined1 *)(param_1 + 0x16) = 2;
    FUN_02873eb0(param_1,0);
  }
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    uVar11 = *(undefined4 *)puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 4);
    *(undefined1 *)((long)param_1 + 0x11) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 4) = uVar11;
    *(undefined4 *)(param_1 + 6) = uVar3;
    *(undefined1 *)(param_1 + 0x32) = 2;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_02873eb0(param_1,1);
  }
  uVar7 = *(undefined2 *)puVar1;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *param_1 = uVar7;
  uVar5 = puVar1[2];
  param_1[4] = uVar7;
  *(undefined1 *)(param_1 + 0x16) = 2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 1) = uVar5;
  uVar6 = puVar1[3];
  *(undefined1 *)(param_1 + 5) = uVar5;
  *(undefined1 *)((long)param_1 + 3) = uVar6;
  uVar11 = *(undefined4 *)(puVar1 + 4);
  *(undefined1 *)((long)param_1 + 0xb) = uVar6;
  *(undefined4 *)(param_1 + 2) = uVar11;
  *(undefined4 *)(param_1 + 6) = uVar11;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined1 *)(param_1 + 0x32) = 2;
  pcStack_38 = "FoxCommuneRealRate";
  local_40 = puVar1;
  FUN_0273f3c4(&local_40,0x14);
  pcStack_38 = "GrowUpAfterPatch2_0";
  local_40 = puVar1;
  uVar9 = FUN_0273f0a0(&local_40);
  if ((uVar9 & 1) == 0) {
    pcStack_38 = "FoxCommuneRealNum";
    local_40 = puVar1;
    FUN_0273f3c4(&local_40,0);
    uVar11 = 0x1e;
  }
  else {
    pcStack_48 = "FoxCommuneRealNum";
    local_50 = puVar1;
    iVar8 = FUN_0273ea30(&local_50);
    pcStack_38 = "FoxCommuneRealNum";
    local_40 = puVar1;
    FUN_0273f3c4(&local_40,0);
    uVar11 = 100;
    if (iVar8 != 0) {
      uVar11 = 0x1e;
    }
  }
  puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar4 = puVar10[3];
  uVar2 = *puVar10 ^ *puVar10 << 0xb;
  *puVar10 = puVar10[1];
  puVar10[1] = puVar10[2];
  uVar2 = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4;
  puVar10[2] = uVar4;
  puVar10[3] = uVar2;
  uVar2 = uVar2 & 1;
  FUN_02875c40(param_1,uVar2,uVar11);
  FUN_02875c40(param_1,uVar2 ^ 1,0x1e);
  return;
}

