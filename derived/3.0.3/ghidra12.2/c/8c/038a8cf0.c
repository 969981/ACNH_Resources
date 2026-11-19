
void FUN_038a8cf0(ulong *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined **local_50;
  ulong *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  pvVar5 = (void *)param_1[6];
  if (pvVar5 == (void *)0x0) goto LAB_038a8da4;
  puStack_48 = param_1 + 4;
  local_40 = PTR_LAB_04bcbc00;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b62740;
  if (*puStack_48 == 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
LAB_038a8d64:
    if (DAT_05ae7600 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  else {
    FUN_038a8950(*puStack_48,&local_50);
    pvVar5 = (void *)param_1[6];
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
    if (pvVar5 != (void *)0x0) goto LAB_038a8d64;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
LAB_038a8da4:
  pvVar5 = (void *)param_1[2];
  if (pvVar5 != (void *)0x0) {
    uVar6 = *param_1;
    if (uVar6 != 0) {
      lVar3 = *(long *)(uVar6 + 8);
      while (lVar3 != 0) {
        *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar6;
        uVar6 = *(ulong *)(uVar6 + 8);
        lVar3 = *(long *)(uVar6 + 8);
      }
      do {
        while( true ) {
          if (*(long **)(uVar6 + 0x28) != (long *)0x0) {
            (**(code **)(**(long **)(uVar6 + 0x28) + 0x18))();
          }
          lVar3 = *(long *)(uVar6 + 0x10);
          if (lVar3 == 0) break;
          *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar6;
          uVar6 = *(ulong *)(uVar6 + 0x10);
          lVar3 = *(long *)(uVar6 + 8);
          while (lVar3 != 0) {
            *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar6;
            uVar6 = *(ulong *)(uVar6 + 8);
            lVar3 = *(long *)(uVar6 + 8);
          }
        }
        uVar4 = uVar6;
        do {
          uVar6 = *(ulong *)(uVar4 + 0x18) & 0xfffffffffffffffe;
          if (uVar6 == 0) {
            pvVar5 = (void *)param_1[2];
            if (pvVar5 == (void *)0x0) {
              return;
            }
            local_40 = &LAB_038a9df8;
            uStack_38 = 0;
            local_50 = &PTR_LAB_04b627f8;
            puStack_48 = param_1;
            if (*param_1 == 0) goto LAB_038a8eac;
            FUN_038a9e10(*param_1,&local_50);
            pvVar5 = (void *)param_1[2];
            *(undefined4 *)(param_1 + 3) = 0;
            *param_1 = 0;
            if (pvVar5 == (void *)0x0) goto LAB_038a8ef0;
            goto LAB_038a8eb8;
          }
          bVar1 = *(ulong *)(uVar6 + 8) != uVar4;
          uVar4 = uVar6;
        } while (bVar1);
      } while( true );
    }
LAB_038a8eac:
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = 0;
LAB_038a8eb8:
    if (DAT_05ae7600 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
LAB_038a8ef0:
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

