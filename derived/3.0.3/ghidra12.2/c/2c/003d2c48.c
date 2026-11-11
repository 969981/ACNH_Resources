
undefined8 FUN_003d2c48(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  if ((puVar4 == (uint *)0x0) || (*puVar4 <= param_3)) {
    return 0;
  }
  uVar2 = puVar4[(ulong)param_3 * 2 + 2];
  *param_2 = *(undefined4 *)((long)puVar4 + (long)(int)uVar2);
  iVar3 = ((undefined4 *)((long)puVar4 + (long)(int)uVar2))[2];
  lVar1 = 0;
  if (iVar3 != -1) {
    lVar1 = param_1[1] + (long)iVar3;
  }
  *(long *)(param_2 + 2) = lVar1;
  return 1;
}

