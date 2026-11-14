
void FUN_01947ba0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_04bbe5c8;
  puVar4 = PTR_DAT_04bbe5c0;
  puVar3 = PTR_DAT_04bbe5b8;
  lVar1 = param_1 + 0xa8;
  if (*(long *)(param_1 + 0xb0) != lVar1) {
    lVar9 = (long)*(int *)(param_1 + 0xbc);
    plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
    puVar2 = PTR_DAT_04bbe5c8 + 0x10;
    do {
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(puVar4);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar7 & 1) != 0)) {
        uVar7 = (**(code **)(*plVar8 + 0x1d0))(plVar8);
        if ((uVar7 & 1) != 0) {
          if ((*(char *)(param_1 + 0x32e) != '\0') || (*(long *)(param_1 + 0xb0) == lVar1))
          goto LAB_01947ca0;
          lVar9 = (long)*(int *)(param_1 + 0xbc);
          plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
          goto LAB_01947cd4;
        }
        break;
      }
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
    } while (plVar8 != (long *)(lVar1 - lVar9));
  }
  FUN_006fb3d0(param_1);
  goto LAB_01947ca0;
  while (plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9),
        plVar8 != (long *)(lVar1 - lVar9)) {
LAB_01947cd4:
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      *(undefined **)puVar3 = puVar5 + 0x10;
      __cxa_guard_release(puVar4);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar7 & 1) != 0)) {
      (**(code **)(*plVar8 + 0x1d8))(plVar8);
      *(undefined1 *)(param_1 + 0x32e) = 1;
      break;
    }
  }
LAB_01947ca0:
  *(undefined1 *)(param_1 + 0x32d) = 0;
  return;
}

