
void FUN_03ea7780(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  if (*(long *)(param_1 + 0x70) != 0 && *(long *)(param_1 + 0x48) != 0) {
    local_30 = 0;
    local_28 = 0;
    FUN_03bf47b0(*(long *)(param_1 + 0x70),param_1 + 0x40,&local_30);
    plVar3 = (long *)(*(long *)(param_1 + 0x38) + 0xf8);
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    if ((uVar2 & 1) != 0) {
      (**(code **)*plVar3)(plVar3,&local_30,param_1);
    }
  }
  if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    local_30 = 0;
    local_28 = 0;
    FUN_03bf47b0(*(long *)(param_1 + 0x78),param_1 + 0x58,&local_30);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x118);
    uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x118) + 8))(puVar1);
    if ((uVar2 & 1) != 0) {
      (**(code **)*puVar1)(puVar1,&local_30,param_1);
    }
  }
  return;
}

