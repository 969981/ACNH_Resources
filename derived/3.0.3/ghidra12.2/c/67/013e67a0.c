
void FUN_013e67a0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bbc8f8;
  puVar2 = PTR_DAT_04bbc8f0;
  if (param_2 == 0) {
    return;
  }
  lVar9 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar9 = *(long *)(param_1 + 0x70) + 0x278;
  }
  iVar4 = *(int *)(lVar9 + 8);
  if (iVar4 != 7 && *(int *)(lVar9 + 0xc) == 0) {
    iVar4 = *(int *)(lVar9 + 0x10);
  }
  iVar7 = 1;
  switch(iVar4) {
  case 0:
    break;
  case 1:
    iVar7 = 2;
    break;
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
    iVar7 = iVar4;
    break;
  case 6:
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar9 = (long)*(int *)(param_1 + 0xbc);
      plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar2), (uVar5 & 1) != 0)) {
          if ((*(byte *)(plVar8 + 0x60) >> 3 & 1) != 0) {
            iVar7 = 6;
            goto switchD_013e6814_caseD_0;
          }
          break;
        }
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
      } while (plVar8 != (long *)((param_1 + 0xa8) - lVar9));
    }
  case 2:
    iVar7 = 3;
    break;
  case 10:
    iVar7 = 9;
    break;
  default:
    goto switchD_013e6814_default;
  }
switchD_013e6814_caseD_0:
  *(int *)(param_2 + 0x1c) = iVar7;
switchD_013e6814_default:
  uVar6 = (**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  return;
}

