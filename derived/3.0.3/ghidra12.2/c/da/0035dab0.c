
void FUN_0035dab0(long param_1,undefined8 param_2,long *param_3,long param_4,ushort param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  size_t __n;
  ulong uVar3;
  
  *(long *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((ulong)*(ushort *)(param_4 + 0xc) != 0) {
    __n = (ulong)*(ushort *)(param_4 + 0xc) << 3;
    pvVar1 = (void *)FUN_00367b30(__n);
    if (pvVar1 == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      memset(pvVar1,0,__n);
      *(void **)(param_1 + 0x28) = pvVar1;
      if (*(short *)(param_4 + 0xc) != 0) {
        uVar3 = 0;
        do {
          uVar2 = (**(code **)(*param_3 + 0x70))
                            (param_3,param_2,
                             param_4 + 0x14 + (ulong)*(uint *)(param_4 + 0x14 + uVar3 * 4));
          *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = uVar2;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(param_4 + 0xc));
      }
    }
  }
  pvVar1 = (void *)FUN_00367b30((ulong)param_5 << 4);
  if ((param_5 == 0) || (pvVar1 == (void *)0x0)) {
    *(void **)(param_1 + 0x30) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return;
    }
  }
  else {
    memset(pvVar1,0,(ulong)param_5 << 4);
    *(void **)(param_1 + 0x30) = pvVar1;
  }
  *(ushort *)(param_1 + 0x3a) = param_5;
  return;
}

