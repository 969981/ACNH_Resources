
void FUN_02873b14(undefined2 *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *local_58;
  char *pcStack_50;
  long local_48;
  long local_28;
  
  local_28 = param_2[2];
  FUN_00a81090(&local_28);
  local_48 = param_2[3];
  FUN_00a81090(&local_48);
  puVar4 = PTR_DAT_04bb2020;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "GrowUpAfterPatch2_0";
  uVar5 = FUN_0273f0a0(&local_58);
  if ((uVar5 & 1) != 0) {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    if ((lVar6 <= lVar7) &&
       (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28), lVar7 == lVar6))
    goto LAB_02873bac;
  }
  FUN_02873c80(param_1);
LAB_02873bac:
  local_58 = puVar4 + 0x10;
  pcStack_50 = "GrowUpAfterPatch2_0";
  uVar5 = FUN_0273f0a0(&local_58);
  puVar4 = PTR_DAT_04bb37e0;
  if (((uVar5 & 1) == 0) || (*param_2 != 0)) {
    if (*(char *)(param_1 + 8) != '\0') {
      uVar3 = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *param_1 = uVar3;
      *(undefined *)(param_1 + 1) = puVar4[2];
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined *)((long)param_1 + 3) = puVar4[3];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar4 + 4);
      *(undefined1 *)(param_1 + 0x16) = 2;
      FUN_02873eb0(param_1,0);
    }
    if (*(char *)((long)param_1 + 0x11) != '\0') {
      uVar1 = *(undefined4 *)puVar4;
      uVar2 = *(undefined4 *)(puVar4 + 4);
      *(undefined1 *)((long)param_1 + 0x11) = 0;
      *(undefined8 *)(param_1 + 0x26) = 0;
      *(undefined8 *)(param_1 + 0x2a) = 0;
      *(undefined8 *)(param_1 + 0x2e) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 6) = uVar2;
      *(undefined1 *)(param_1 + 0x32) = 2;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_02873eb0(param_1,1);
    }
  }
  return;
}

