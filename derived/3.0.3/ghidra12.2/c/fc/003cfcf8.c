
void FUN_003cfcf8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__dest;
  undefined8 uVar4;
  
  __dest = (void *)(**(code **)(*(long *)param_2[2] + 0x10))((long *)param_2[2],param_2[4]);
  if (__dest != (void *)0x0) {
    memcpy(__dest,(void *)param_2[3],param_2[4]);
    uVar2 = param_2[4];
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    *(undefined8 *)(param_1 + 0x58) = param_2[3];
    uVar4 = *param_2;
    *(void **)(param_1 + 0x58) = __dest;
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return;
}

