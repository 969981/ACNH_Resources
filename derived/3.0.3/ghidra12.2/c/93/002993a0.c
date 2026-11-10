
void FUN_002993a0(long param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 0x30) = param_3;
    lVar3 = 0;
    *(uint *)(param_1 + 0x38) = param_2;
    do {
      iVar2 = *(int *)(param_1 + 0x2c);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_002236bc(param_1 + 0x18,param_1 + 0x18,(long)puVar1 + (long)iVar2);
      lVar3 = lVar3 + 0x18;
    } while ((ulong)param_2 * 0x18 != lVar3);
  }
  return;
}

