
undefined8 FUN_01e5b3e0(long param_1,undefined2 *param_2)

{
  long lVar1;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  undefined4 local_14;
  
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  local_14 = 0;
  FUN_01e5a930(0x40000000,param_1,0xe,PTR_DAT_04bb2150,&local_68,&local_14,&DAT_04178e00,6);
  local_35 = 0;
  local_58 = 0x20;
  local_54[0] = 0;
  *(undefined2 *)(param_1 + 0x408) = *param_2;
  *(undefined1 *)(param_1 + 0x40a) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x40b) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 2);
  puStack_60 = local_54;
  lVar1 = *(long *)(param_1 + 0x358);
  local_68 = PTR_DAT_04bb2028 + 0x10;
  (**(code **)(*(long *)(lVar1 + 0x3e0) + 0x18))(lVar1 + 0x3e0);
  FUN_038d1270(&local_68,"NpcActorAction.%s",*(undefined8 *)(lVar1 + 1000));
  return 1;
}

