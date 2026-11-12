
void FUN_006dc788(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x58);
  uStack_18 = *(undefined8 *)(param_1 + 0x90);
  puVar1 = (undefined8 *)(param_1 + 0x68);
  puVar2 = (undefined8 *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xa8) != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x78);
    puVar2 = (undefined8 *)(param_1 + 0xa0);
  }
  uStack_28 = *puVar2;
  local_30 = *puVar1;
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_00698110(param_2,param_1 + 0x88,&local_20,&local_30,*(long *)(param_1 + 0x30) + 8,
                 *(long *)(param_1 + 0x28) + 0x20);
  }
  return;
}

