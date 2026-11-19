
int FUN_03b2ef80(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined1 *local_70;
  long *local_68;
  
  puVar2 = PTR_DAT_04bd19f0;
  puVar1 = PTR_DAT_04bd19e8;
  local_68 = (long *)&local_70;
  local_70 = (undefined1 *)&local_70;
  plVar12 = *(long **)(*param_2 + 0x10);
  plVar8 = (long *)(*param_2 + 8);
  if (plVar12 == plVar8) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    do {
      if (plVar12[3] == param_3) {
        plVar4 = (long *)(**(code **)(*param_1 + 0x20))(param_1,plVar12 + -1,param_2[3],param_4);
        if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar2), iVar3 != 0)) {
          if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1a00), iVar3 != 0)) {
            if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar3 != 0)) {
              *(undefined8 *)PTR_DAT_04bd1a08 = 0;
              __cxa_guard_release(PTR_DAT_04bd1a10);
            }
            *(undefined **)PTR_DAT_04bd19f8 = PTR_DAT_04bd1a08;
            __cxa_guard_release(PTR_DAT_04bd1a00);
          }
          *(undefined **)puVar1 = PTR_DAT_04bd19f8;
          __cxa_guard_release(puVar2);
        }
        if (plVar4 != (long *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4);
          if (puVar5 != (undefined8 *)puVar1) {
            do {
              puVar5 = (undefined8 *)*puVar5;
            } while (puVar5 != (undefined8 *)puVar1 && puVar5 != (undefined8 *)0x0);
            if (puVar5 == (undefined8 *)0x0) goto LAB_03b2f004;
          }
          plVar4 = plVar4 + 1;
          puVar7 = (undefined1 *)*plVar4;
          iVar10 = iVar10 + 1;
          *plVar4 = (long)local_70;
          *(undefined1 ***)(puVar7 + 8) = &local_70;
          *(long **)(local_70 + 8) = plVar4;
          local_70 = puVar7;
        }
      }
LAB_03b2f004:
      plVar12 = (long *)plVar12[1];
    } while (plVar12 != plVar8);
    plVar12 = local_68;
    if ((undefined1 **)local_68 != &local_70) {
      do {
        plVar4 = (long *)plVar12[1];
        lVar9 = *plVar4;
        *(long **)(*plVar12 + 8) = plVar4;
        *plVar4 = *plVar12;
        *(long **)(lVar9 + 8) = plVar12;
        *plVar12 = lVar9;
        *plVar12 = *plVar8;
        *(long **)(lVar9 + 8) = plVar8;
        *(long **)(*plVar8 + 8) = plVar12;
        *plVar8 = lVar9;
        plVar12 = plVar4;
      } while ((undefined1 **)plVar4 != &local_70);
    }
  }
  lVar9 = param_2[1];
  lVar11 = *(long *)(lVar9 + 8);
  local_70 = (undefined1 *)&local_70;
  local_68 = (long *)&local_70;
  if (lVar11 != lVar9) {
    do {
      if ((*(long *)(lVar11 + 0x18) == param_3) &&
         (lVar6 = (**(code **)(*param_1 + 0x20))(param_1,lVar11 + -8,param_2[3],param_4), lVar6 != 0
         )) {
        puVar5 = (undefined8 *)(lVar6 + 8);
        puVar7 = (undefined1 *)*puVar5;
        iVar10 = iVar10 + 1;
        *puVar5 = local_70;
        *(undefined1 ***)(puVar7 + 8) = &local_70;
        *(undefined8 **)(local_70 + 8) = puVar5;
        local_70 = puVar7;
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar9);
    plVar8 = local_68;
    if ((undefined1 **)local_68 != &local_70) {
      do {
        plVar12 = (long *)plVar8[1];
        lVar9 = *plVar12;
        *(long **)(*plVar8 + 8) = plVar12;
        *plVar12 = *plVar8;
        *(long **)(lVar9 + 8) = plVar8;
        *plVar8 = lVar9;
        plVar4 = (long *)param_2[1];
        *plVar8 = *plVar4;
        *(long **)(lVar9 + 8) = plVar4;
        *(long **)(*plVar4 + 8) = plVar8;
        *plVar4 = lVar9;
        plVar8 = plVar12;
      } while ((undefined1 **)plVar12 != &local_70);
    }
  }
  lVar9 = param_2[2];
  lVar11 = *(long *)(lVar9 + 8);
  local_70 = (undefined1 *)&local_70;
  local_68 = (long *)&local_70;
  if (lVar11 != lVar9) {
    do {
      if ((*(long *)(lVar11 + 0x18) == param_3) &&
         (lVar6 = (**(code **)(*param_1 + 0x20))(param_1,lVar11 + -8,param_2[3],param_4), lVar6 != 0
         )) {
        puVar5 = (undefined8 *)(lVar6 + 8);
        puVar7 = (undefined1 *)*puVar5;
        iVar10 = iVar10 + 1;
        *puVar5 = local_70;
        *(undefined1 ***)(puVar7 + 8) = &local_70;
        *(undefined8 **)(local_70 + 8) = puVar5;
        local_70 = puVar7;
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar9);
    plVar8 = local_68;
    if ((undefined1 **)local_68 != &local_70) {
      do {
        plVar12 = (long *)plVar8[1];
        lVar9 = *plVar12;
        *(long **)(*plVar8 + 8) = plVar12;
        *plVar12 = *plVar8;
        *(long **)(lVar9 + 8) = plVar8;
        *plVar8 = lVar9;
        plVar4 = (long *)param_2[2];
        *plVar8 = *plVar4;
        *(long **)(lVar9 + 8) = plVar4;
        *(long **)(*plVar4 + 8) = plVar8;
        *plVar4 = lVar9;
        plVar8 = plVar12;
      } while ((undefined1 **)plVar12 != &local_70);
    }
  }
  return iVar10;
}

