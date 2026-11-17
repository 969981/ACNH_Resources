
void FUN_02f09e48(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *local_30;
  undefined4 local_28;
  
  puVar3 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  plVar4 = *(long **)puVar3[0x41];
  if (plVar4 != (long *)0x0) {
    local_30 = PTR_DAT_04bc0878 + 0x10;
    local_28 = 0x15;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
    (**(code **)(plVar4[3] + 0x640))(plVar4[1]);
  }
  return;
}

