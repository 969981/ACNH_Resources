
void FUN_01872150(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  FUN_01813f50();
  lVar4 = *(long *)PTR_DAT_04bb47e0;
  plVar5 = *(long **)(lVar4 + 0x28);
  if (((*PTR_DAT_04bbe618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe618), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbe610 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe618);
  }
  if ((plVar5 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bbe610), (uVar2 & 1) == 0)) {
    plVar5 = (long *)FUN_01818550(lVar4);
  }
  else {
    plVar5 = plVar5 + 0x18;
  }
  puVar3 = (undefined4 *)(**(code **)(plVar5[6] + 0xf0))();
  uVar6 = *puVar3;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined2 *)(param_1 + 0x518) = 0;
  *(undefined1 *)(param_1 + 0x51a) = 1;
  *(undefined4 *)(param_1 + 0x4a0) = uVar6;
  return;
}

