
void FUN_03029f30(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar4 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) &&
     (*(int *)(param_1 + 0x220) != 1)) {
    *(undefined4 *)(param_1 + 0x220) = 1;
    FUN_0302a040(param_1);
    plVar3 = *(long **)puVar4[0x45];
    if (plVar3 != (long *)0x0) {
      local_38 = 1;
      local_40 = PTR_DAT_04bc4e68 + 0x10;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 400))(0x3f800000,plVar3[1]);
    }
  }
  return;
}

