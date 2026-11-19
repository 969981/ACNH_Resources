
void * FUN_039b57d4(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  uVar1 = FUN_003a0a08(param_2);
  lVar5 = DAT_05ae7600;
  if ((uVar1 & 1) == 0) {
    return (void *)0x0;
  }
  if (DAT_05ae7600 == 0) {
    pvVar4 = malloc(0x50);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_039b5874;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x50,8);
  }
LAB_039b5874:
  FUN_03ad28ac(pvVar4);
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(void **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = pvVar4;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  if (param_2 != 0) {
    *(long *)((long)pvVar4 + 0x20) = param_2;
    lVar5 = FUN_003a0970(param_2);
    *(undefined8 *)((long)pvVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x20);
    FUN_03ad2d00(pvVar4,param_3,param_4);
  }
  return pvVar4;
}

