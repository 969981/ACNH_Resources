
void FUN_03d4b514(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long local_40;
  undefined8 *local_38;
  undefined8 local_30;
  uint local_24;
  
  local_38 = &local_30;
  local_40 = param_1;
  local_30 = param_3;
  local_24 = param_2;
  uVar2 = (**(code **)(*DAT_05af83f8 + 0x48))();
  if (((uVar2 & 1) == 0) && (param_2 == 2)) {
    local_24 = 1;
  }
  puVar1 = (undefined8 *)(param_1 + 0x18) + (ulong)local_24 * 4;
  if (4 < local_24) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
  }
  (**(code **)*puVar1)(puVar1,(ulong)local_24,&local_40);
  return;
}

