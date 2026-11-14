
bool FUN_019494f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bbe5c0;
  puVar2 = PTR_DAT_04bbe5b8;
  if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
    return false;
  }
  lVar7 = (long)*(int *)(param_1 + 0xbc);
  plVar6 = (long *)(*(long *)(param_1 + 0xb0) - lVar7);
  puVar1 = PTR_DAT_04bbe5c8 + 0x10;
  while( true ) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(puVar3);
    }
    if ((plVar6 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar5 & 1) != 0)) break;
    plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    if (plVar6 == (long *)((param_1 + 0xa8) - lVar7)) {
      return false;
    }
  }
  return *(char *)((long)plVar6 + 0x433) != '\0';
}

