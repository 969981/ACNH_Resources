
undefined8 FUN_0224c4dc(long param_1)

{
  long lVar1;
  undefined4 local_4;
  
  lVar1 = *(long *)(param_1 + 0x5c0);
  *(code **)(lVar1 + 0x138) = FUN_0224c554;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  *(undefined ***)(lVar1 + 0x128) = &PTR_LAB_04a79cc8;
  *(long *)(lVar1 + 0x130) = param_1;
  lVar1 = *(long *)(param_1 + 0x5c0);
  *(undefined1 **)(lVar1 + 0x118) = &LAB_0224c5a4;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined ***)(lVar1 + 0x108) = &PTR_LAB_04a79d18;
  *(long *)(lVar1 + 0x110) = param_1;
  local_4 = *(undefined4 *)(param_1 + 0x230);
  FUN_01c000c8(*(undefined8 *)(param_1 + 0x5c0),&local_4);
  *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x290) = *(undefined8 *)(param_1 + 0x5c0);
  return 0;
}

