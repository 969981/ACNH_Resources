
void FUN_03ebfae0(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_60;
  long lStack_58;
  undefined4 local_50;
  long local_48;
  
  local_60 = *(undefined8 *)(param_1 + 0x18);
  local_50 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  *(undefined1 *)(param_2 + 0x58) = 0;
  *(undefined2 *)(param_2 + 0x50) = 0xffff;
  *(undefined8 *)(param_2 + 0xa8) = uVar2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  plVar1 = *(long **)(*(long *)(lVar3 + 0x40) + (long)*(int *)(*(long *)(lVar3 + 8) + 0x10) * 8);
  *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x54) = *(undefined4 *)(param_1 + 0xa4);
  lStack_58 = param_1;
  local_48 = param_2;
  (**(code **)(*plVar1 + 0x88))(plVar1,&local_60);
  *(undefined2 *)(param_1 + 0xb0) = 0xffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_03ec0ea0(param_3,param_2,*(undefined1 *)(param_1 + 0xac));
  if (((*(long *)(param_1 + 0x28) != 0) && ((param_4 & 1) != 0)) &&
     ((*(long *)(param_1 + 0x38) == 0 || ((*(byte *)(*(long *)(param_1 + 0x38) + 0x140) & 1) == 0)))
     ) {
    FUN_03ebfef0(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,
                 *(undefined8 *)(param_1 + 0x40));
  }
  FUN_03eced80(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}

