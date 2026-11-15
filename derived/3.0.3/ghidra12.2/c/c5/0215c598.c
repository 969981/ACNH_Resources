
undefined8 FUN_0215c598(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(*(long *)(*param_1 + 8) + 0x3b8);
  if (((*PTR_DAT_04bb4120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4120), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4118 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4120);
  }
  if (((puVar4 == (undefined8 *)0x0) ||
      (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb4118), (uVar2 & 1) == 0)) ||
     ((*(int *)((long)puVar4 + 0x77f4) != 0x5a && (*(int *)(puVar4 + 0xef6) != 0x5a)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

