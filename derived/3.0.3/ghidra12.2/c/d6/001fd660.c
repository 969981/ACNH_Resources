
undefined8 FUN_001fd660(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00186ea0(param_1," MessageRecipient(");
  uVar1 = FUN_00186ea0(uVar1,&DAT_040bdb5e);
  uVar1 = FUN_00189cb0(uVar1,*(undefined8 *)(param_2 + 0x10));
  uVar1 = FUN_00186ea0(uVar1,", GID=");
  uVar1 = FUN_0018c5f0(uVar1,*(undefined4 *)(param_2 + 0x18));
  FUN_00186ea0(uVar1,&DAT_0408f28c);
  if (*(int *)(param_2 + 0xc) == 2) {
    pcVar2 = " Type=GatheringID-type";
  }
  else {
    if (*(int *)(param_2 + 0xc) != 1) {
      uVar1 = FUN_00186ea0(param_1," UNK type=");
      FUN_0018c5f0(uVar1,*(undefined4 *)(param_2 + 0xc));
      goto LAB_001fd6fc;
    }
    pcVar2 = " Type=PID-type";
  }
  FUN_00186ea0(param_1,pcVar2);
LAB_001fd6fc:
  FUN_00186ea0(param_1,&DAT_040c7eb6);
  return param_1;
}

