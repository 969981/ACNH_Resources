
void FUN_029bc9c0(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  
  lVar10 = param_1[0x369];
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x20) == (int)param_1[0x36a])) {
    *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | 0x10;
    if ((*(long *)(lVar10 + 0x28) != 0) && (*(long *)(lVar10 + 0x58) != 0)) {
      plVar6 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar10 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
      (**(code **)(*plVar6 + 0x10))();
      (**(code **)(**(long **)(lVar10 + 0x58) + 0x38))(*(long **)(lVar10 + 0x58),0xffffffff);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  param_1[0x369] = 0;
  lVar10 = *param_1;
  *(undefined4 *)(param_1 + 0x36a) = 0;
  puVar5 = PTR_DAT_04bb3350;
  if (lVar10 == 0) {
    lVar11 = 1;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar7 + 0xa8);
    *(long *)(lVar7 + 0xa8) = lVar10;
  }
  puVar4 = PTR_DAT_04bb2698;
  if (param_1[0x36b] != 0) {
    FUN_029bdd40();
    pvVar9 = (void *)param_1[0x36b];
    if (pvVar9 != (void *)0x0) {
      lVar10 = (long)pvVar9 + 0x2a8;
      do {
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 != (long)pvVar9 + 0x2a8);
      lVar10 = (long)pvVar9 + 0x98;
      do {
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 != (long)pvVar9 + 0x98);
      FUN_038e1a84((long)pvVar9 + 0x48);
      lVar10 = *(long *)puVar4;
      if (lVar10 == 0) {
        free(pvVar9);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar10,pvVar9);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
        }
      }
    }
    param_1[0x36b] = 0;
  }
  (**(code **)(*(long *)param_1[0x76f] + 0x50))((long *)param_1[0x76f],1);
  if ((long *)param_1[0x76f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x76f] + 8))();
  }
  iVar8 = (int)param_1[0x36e];
  param_1[0x76f] = 0;
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      if (0 < iVar8) {
        iVar2 = *(int *)((long)param_1 + 0x1b6c);
        iVar3 = (int)param_1[0x36d];
        iVar1 = 0;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        pvVar9 = *(void **)(param_1[0x36c] + (long)(iVar2 - iVar1) * 8);
        *(int *)(param_1 + 0x36e) = iVar8 + -1;
        iVar1 = 0;
        if (iVar2 + 1 < iVar3) {
          iVar1 = iVar2 + 1;
        }
        *(int *)((long)param_1 + 0x1b6c) = iVar1;
        if (pvVar9 == (void *)0x0) {
          iVar8 = iVar8 + -1;
        }
        else {
          lVar10 = *(long *)puVar4;
          if (lVar10 == 0) {
            free(pvVar9);
          }
          else {
            plVar6 = (long *)FUN_038cb610(lVar10,pvVar9);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
            }
          }
          iVar8 = (int)param_1[0x36e];
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar8);
  }
  *(undefined8 *)((long)param_1 + 0x1b6c) = 0;
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  (**(code **)(*(long *)*param_1 + 0x20))();
  *param_1 = 0;
  return;
}

