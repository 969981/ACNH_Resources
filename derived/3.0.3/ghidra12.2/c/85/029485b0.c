
undefined4 FUN_029485b0(long param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bc3b60;
  puVar3 = PTR_DAT_04bc3b58;
  plVar8 = (long *)PTR_DAT_04bb3238;
  if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
LAB_029486ac:
    plVar8 = (long *)PTR_DAT_04bb3238;
  }
  else {
    lVar9 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
    puVar1 = PTR_DAT_04bbca00 + 0x10;
    do {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar3), (uVar6 & 1) != 0)) {
        bVar2 = *param_2;
        if (0x13 < bVar2) goto LAB_029486ac;
        if (((int)(uint)*(byte *)((long)plVar7 + 0x59a) <= (int)(char)bVar2) &&
           ((int)((uint)*(byte *)((long)plVar7 + 0x59b) + (uint)*(byte *)((long)plVar7 + 0x59a)) <=
            (int)(char)bVar2)) goto LAB_029486ac;
        plVar8 = plVar7 + (ulong)bVar2 + 0x9f;
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar9));
  }
  return (int)*plVar8;
}

