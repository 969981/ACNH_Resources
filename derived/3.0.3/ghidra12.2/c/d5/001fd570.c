
undefined8 FUN_001fd570(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00186ea0(param_1," UserMessage (");
  uVar1 = FUN_00186ea0(uVar1,&DAT_0405a2bd);
  uVar1 = FUN_0018c5f0(uVar1,*(undefined4 *)(param_2 + 0xc));
  uVar1 = FUN_00186ea0(uVar1," ParentID=");
  uVar1 = FUN_0018c5f0(uVar1,*(undefined4 *)(param_2 + 0x10));
  uVar1 = FUN_00186ea0(uVar1," SenderID=");
  uVar1 = FUN_00189cb0(uVar1,*(undefined8 *)(param_2 + 0x18));
  uVar1 = FUN_00186ea0(uVar1," SenderName=");
  uVar1 = FUN_0018c0b0(uVar1,param_2 + 0x58);
  uVar1 = FUN_00186ea0(uVar1," RxTime=");
  uVar1 = FUN_00186e40(uVar1,param_2 + 0x20);
  uVar1 = FUN_00186ea0(uVar1," LifeTime=");
  uVar1 = FUN_0018c5f0(uVar1,*(undefined4 *)(param_2 + 0x28));
  uVar1 = FUN_00186ea0(uVar1," Flags=");
  uVar1 = FUN_0018c5f0(uVar1,*(undefined4 *)(param_2 + 0x2c));
  uVar1 = FUN_00186ea0(uVar1," Subject=");
  uVar1 = FUN_0018c0b0(uVar1,param_2 + 0x30);
  uVar1 = FUN_00186ea0(uVar1,&DAT_04064e67);
  uVar1 = FUN_001fd660(uVar1,param_2 + 0x80);
  FUN_00186ea0(uVar1,&DAT_040c7eb6);
  return param_1;
}

