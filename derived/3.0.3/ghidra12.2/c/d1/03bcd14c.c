
undefined8 FUN_03bcd14c(long param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bd2300);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar5 + 0x33) == '\0') {
    return 0;
  }
  uVar4 = FUN_03bcda68(*(undefined8 *)(param_1 + 0x348));
  uVar1 = FUN_003ba95c(param_1 + 8,uVar4);
  *(uint *)(param_1 + 0x334) = uVar1;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = (int)(*param_2 * (float)uVar1);
  }
  uVar4 = FUN_03bccdf0(param_1,uVar4,iVar2,param_2[1],param_2[2],*(undefined8 *)(param_2 + 4));
  return uVar4;
}

