
bool FUN_02b7c340(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_04bc4ba8;
  puVar1 = PTR_DAT_04bc4ba0;
  puVar3 = PTR_DAT_04bc4b98;
  puVar2 = PTR_DAT_04bc4b90;
  if (*(int *)(param_1 + 0x174) == 3) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar8 = (long)*(int *)(param_1 + 0xbc);
      plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
      puVar2 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(puVar4);
        }
        if ((plVar7 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar1), (uVar6 & 1) != 0))
        goto LAB_02b7c4c4;
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
      } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
    }
  }
  else if (*(int *)(param_1 + 0x174) == 1) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar8 = (long)*(int *)(param_1 + 0xbc);
      plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
        if ((plVar7 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar6 & 1) != 0)) {
LAB_02b7c4c4:
          return (char)plVar7[0x109] != '\0' && (int)plVar7[0x65] == 1;
        }
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
      } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
    }
  }
  return false;
}

