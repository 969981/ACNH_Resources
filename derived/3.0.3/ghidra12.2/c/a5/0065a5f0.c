
void FUN_0065a5f0(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  void *__dest;
  undefined8 uVar4;
  ulong local_28;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *param_1 = uVar1;
  local_28 = FUN_0065ac20();
  puVar3 = PTR_DAT_048607b8;
  if ((ulong)param_1[0x28] < local_28) {
    __dest = (void *)(**(code **)(*(long *)PTR_DAT_048607b8 + 0x10))
                               (PTR_DAT_048607b8,local_28,&local_28);
    __n = param_1[0x27];
    if (local_28 <= (ulong)param_1[0x27]) {
      __n = local_28;
    }
    memcpy(__dest,(void *)param_1[0x26],__n);
    if (*(char *)(param_1 + 0x29) == '\0') {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,param_1[0x26],param_1[0x28]);
    }
    param_1[0x26] = __dest;
    param_1[0x28] = local_28;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  param_1[0x27] = local_28;
  return;
}

