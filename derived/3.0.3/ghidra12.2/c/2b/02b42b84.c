
undefined8 FUN_02b42b84(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 local_34;
  undefined8 local_30;
  char *pcStack_28;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == -1) {
    uVar8 = 0;
  }
  else {
    *(int *)(param_2 + 8) = *(int *)(param_1 + 8);
    local_34 = 0;
    FUN_02b67620(&local_34);
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "ValidateVillageSave";
    uVar7 = FUN_0273f0a0(&local_30);
    if ((uVar7 & 1) == 0) {
      FUN_02b22450(&local_30,local_34);
      uVar9 = 0;
      *(undefined2 *)(param_2 + 0x10) = (undefined2)local_30;
      *(undefined4 *)(param_2 + 0x12) = local_30._2_4_;
      puVar4 = PTR_DAT_04bb37e0;
      *(undefined1 *)(param_2 + 0x30) = 0;
      uVar6 = *(undefined2 *)puVar4;
      uVar2 = puVar4[2];
      *(undefined2 *)(param_2 + 0x18) = uVar6;
      *(undefined2 *)(param_2 + 0x20) = uVar6;
      uVar3 = puVar4[3];
      uVar1 = *(undefined4 *)(puVar4 + 4);
      *(undefined1 *)(param_2 + 0x1a) = uVar2;
      *(undefined1 *)(param_2 + 0x22) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar1;
      *(undefined1 *)(param_2 + 0x1b) = uVar3;
      *(undefined1 *)(param_2 + 0x23) = uVar3;
      *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar6 = FUN_02b59580(local_34);
      *(undefined2 *)(param_2 + 0x10) = uVar6;
      uVar6 = FUN_02b59c00(local_34);
      *(undefined2 *)(param_2 + 0x12) = uVar6;
      uVar6 = FUN_02b59e20(local_34);
      *(undefined2 *)(param_2 + 0x14) = uVar6;
      FUN_02b5a310(&local_30,local_34);
      puVar4 = PTR_DAT_04bb37e0;
      *(undefined4 *)(param_2 + 0x18) = (undefined4)local_30;
      *(undefined4 *)(param_2 + 0x1c) = local_30._4_4_;
      uVar9 = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)puVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar9;
      *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
      bVar5 = FUN_02b60290();
      *(byte *)(param_2 + 0x30) = (bVar5 ^ 0xff) & 1;
      uVar9 = *(undefined4 *)(param_1 + 0x1c);
    }
    uVar8 = 1;
    *(undefined4 *)(param_2 + 0x34) = uVar9;
  }
  return uVar8;
}

