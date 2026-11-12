
void FUN_00716ac0(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb3338;
  puVar2 = PTR_DAT_04bb3330;
  puVar1 = PTR_DAT_04bb3040 + 0x10;
  lVar7 = (long)*(int *)(param_2 + 0xbc);
  plVar6 = (long *)(*(long *)(param_2 + 0xb0) - lVar7);
  while( true ) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(puVar3);
    }
    if ((plVar6 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar5 & 1) != 0)) break;
    plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
  }
  if (((((*(byte *)(plVar6 + 0x55) & 1) != 0) && (lVar7 = plVar6[0x56], lVar7 != 0)) &&
      ((*(byte *)(lVar7 + 8) & 10) == 2)) && (*(long *)(lVar7 + 0x18) != 0)) {
    *(undefined4 *)(*(long *)(lVar7 + 0x18) + 0x1a0) = param_1;
  }
  return;
}

