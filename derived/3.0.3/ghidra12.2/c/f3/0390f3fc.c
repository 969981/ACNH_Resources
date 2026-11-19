
void FUN_0390f3fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long local_40;
  undefined4 local_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x150) + 0x10);
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x1a0) + 0x440);
  if (puVar2 != (undefined8 *)0x0) {
    local_40 = lVar3 + 0x328;
    local_38 = *(undefined4 *)(param_1 + 0x18c);
    (**(code **)*puVar2)(puVar2,param_2,&local_40);
  }
  FUN_0391cd60(lVar3,param_2,1);
  FUN_0391d6c4(lVar3,param_2);
  if (*(long *)(*(long *)(param_1 + 0x160) + 0x158) == 0 &&
      *(long *)(*(long *)(param_1 + 0x160) + 0x150) == 0) {
    *(undefined1 *)(param_1 + 0x199) = 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x18c) + 1;
    *(uint *)(param_1 + 0x18c) = uVar1;
    if ((5 < uVar1) && (*(char *)(param_1 + 0x198) != '\0')) {
      FUN_0390f4d0(param_1,param_2);
    }
  }
  return;
}

