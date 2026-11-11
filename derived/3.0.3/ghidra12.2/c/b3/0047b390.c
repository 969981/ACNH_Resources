
undefined8 FUN_0047b390(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x68) + 0xa8);
  local_28 = param_2;
  lVar3 = FUN_0047c500(plVar1,&local_28);
  uVar4 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(*plVar1 + (long)*(int *)(lVar3 + 4) * 0x10 + 8);
    if (iVar2 < 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + (long)iVar2 * 8);
  }
  return uVar4;
}

