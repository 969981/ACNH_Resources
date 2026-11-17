
undefined8 FUN_02db4a28(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((((puVar4 == (undefined8 *)0x0) ||
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar2 & 1) == 0)) ||
      ((long *)puVar4[0x36] == (long *)0x0)) ||
     ((uVar2 = (**(code **)(*(long *)puVar4[0x36] + 0x68))(), (uVar2 & 1) == 0 &&
      (((long *)puVar4[0x36] == (long *)0x0 ||
       (uVar2 = (**(code **)(*(long *)puVar4[0x36] + 0x70))(), (uVar2 & 1) == 0)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

