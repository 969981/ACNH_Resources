
void FUN_01703610(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_0073aab0();
  puVar3 = PTR_DAT_04bb3370;
  puVar2 = PTR_DAT_04bb3368;
  lVar6 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar6 + 0xb0) != lVar6 + 0xa8) {
    lVar8 = (long)*(int *)(lVar6 + 0xbc);
    plVar7 = (long *)(*(long *)(lVar6 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar5 & 1) != 0)) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "TailRoot";
        FUN_00720394(plVar7,&local_60,1);
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((lVar6 + 0xa8) - lVar8));
  }
  FUN_01703724(param_1);
  return;
}

