
void FUN_01947750(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 != 0) {
    *(uint *)(lVar7 + 0x178) = *(uint *)(lVar7 + 0x178) & 0xfffffffe;
  }
  puVar4 = PTR_DAT_04bbe5c8;
  puVar3 = PTR_DAT_04bbe5c0;
  puVar2 = PTR_DAT_04bbe5b8;
  lVar7 = param_1 + 0xa8;
  if (*(long *)(param_1 + 0xb0) != lVar7) {
    lVar9 = (long)*(int *)(param_1 + 0xbc);
    plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
    puVar1 = PTR_DAT_04bbe5c8 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar2), (uVar6 & 1) != 0)) {
        uVar6 = (**(code **)(*plVar8 + 0x1d0))(plVar8);
        if ((uVar6 & 1) != 0) {
          if ((*(char *)(param_1 + 0x32e) != '\0') || (*(long *)(param_1 + 0xb0) == lVar7))
          goto LAB_01947864;
          lVar9 = (long)*(int *)(param_1 + 0xbc);
          plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
          goto LAB_01947898;
        }
        break;
      }
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
    } while (plVar8 != (long *)(lVar7 - lVar9));
  }
  *(undefined4 *)(param_1 + 0x2d0) = 2;
  goto LAB_01947864;
  while (plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9),
        plVar8 != (long *)(lVar7 - lVar9)) {
LAB_01947898:
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      *(undefined **)puVar2 = puVar4 + 0x10;
      __cxa_guard_release(puVar3);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar2), (uVar6 & 1) != 0)) {
      (**(code **)(*plVar8 + 0x1d8))(plVar8);
      *(undefined1 *)(param_1 + 0x32e) = 1;
      break;
    }
  }
LAB_01947864:
  *(undefined1 *)(param_1 + 0x32d) = 0;
  return;
}

