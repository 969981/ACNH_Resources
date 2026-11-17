
void FUN_02e27a8c(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x570);
    if (param_2 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x578);
    }
    puVar4[0x36] = *puVar1;
  }
  return;
}

