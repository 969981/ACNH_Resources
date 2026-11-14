
void FUN_01947ab0(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bbe600;
  puVar2 = PTR_DAT_04bbe5f8;
  plVar7 = *(long **)(param_1 + 0x300);
  if (plVar7 == (long *)0x0) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar8 = (long)*(int *)(param_1 + 0xbc);
      plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
      puVar1 = PTR_DAT_04bbe608 + 0x10;
      do {
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
        if ((plVar7 != (long *)0x0) &&
           (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar5 & 1) != 0))
        goto LAB_01947ad4;
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
      } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
    }
  }
  else {
LAB_01947ad4:
    bVar6 = *param_2;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)((long)plVar7 + 0x2ea) = bVar6;
  }
  return;
}

