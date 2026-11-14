
void FUN_015ff620(long param_1,long param_2,long param_3,uint *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_04bb2fb8;
  puVar3 = PTR_DAT_04bb2fb0;
  puVar2 = PTR_DAT_04bb2fa8;
  if ((param_2 != 0) && (plVar10 = *(long **)(param_3 + 0x28), plVar10 != (long *)0x0)) {
    plVar11 = (long *)(param_2 + 0x28);
    puVar1 = PTR_DAT_04bb2fb8 + 0x10;
    do {
      plVar11 = (long *)*plVar11;
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar2);
      if ((uVar6 & 1) == 0) {
        if (*(char *)(param_1 + 0x348) == '\0') {
          if (*param_4 < *(uint *)(param_1 + 0x1b0)) {
            lVar9 = *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)*param_4 * 8);
          }
          else {
            lVar9 = 0;
          }
          pcVar7 = (char *)(**(code **)(*(long *)(lVar9 + 0x158) + 0xf0))(lVar9 + 0x158);
          if (*pcVar7 == '\0') goto LAB_015ff6e8;
        }
        else {
LAB_015ff6e8:
          (**(code **)(*plVar11 + 0x98))(plVar11,plVar10);
        }
        *param_4 = *param_4 + 1;
      }
      else {
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          *(undefined **)puVar2 = puVar4 + 0x10;
          __cxa_guard_release(puVar3);
        }
        if (plVar11 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar2);
          plVar8 = plVar11;
          if ((uVar6 & 1) == 0) {
            plVar8 = (long *)0x0;
          }
        }
        FUN_015ff620(param_1,plVar8,plVar10,param_4);
      }
      plVar10 = (long *)plVar10[2];
      plVar11 = plVar11 + 2;
    } while (plVar10 != (long *)0x0);
  }
  return;
}

