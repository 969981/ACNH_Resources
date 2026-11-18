
void FUN_032bb6c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *__ptr;
  undefined8 *puVar6;
  void *pvVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + 0x20) = 0;
    __ptr = *(undefined8 **)(param_1 + 0xa0);
    puVar6 = (undefined8 *)*__ptr;
    if ((undefined8 *)*__ptr == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      do {
        puVar4 = (undefined8 *)puVar6[2];
        puVar6[2] = 0;
        lVar5 = puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        if ((undefined8 *)*__ptr == puVar6) {
          *__ptr = puVar4;
        }
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[1] = lVar5;
        }
        if (lVar5 != 0) {
          *(undefined8 **)(lVar5 + 0x10) = puVar4;
        }
        puVar6 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      __ptr = *(undefined8 **)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      if (__ptr == (undefined8 *)0x0) goto LAB_032bb77c;
    }
    if (*(long *)puVar2 == 0) {
      free(__ptr);
      puVar6 = *(undefined8 **)(param_1 + 0x98);
      goto joined_r0x032bb808;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
    }
  }
LAB_032bb77c:
  puVar6 = *(undefined8 **)(param_1 + 0x98);
joined_r0x032bb808:
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    plVar3 = (long *)*puVar6;
    puVar6[3] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (plVar3 != (long *)0x0) {
      lVar5 = puVar6[1];
      lVar1 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar3 == puVar6) {
        *plVar3 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar1;
      }
    }
    if (*(long *)puVar2 == 0) {
      free(puVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,puVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,puVar6);
      }
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_032c1404();
    pvVar7 = *(void **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar7);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
        }
      }
    }
  }
  FUN_032c1080(*(undefined8 *)(param_1 + 0x70));
  pvVar7 = *(void **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
  }
  FUN_032c1404(*(undefined8 *)(param_1 + 0x78));
  pvVar7 = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  plVar3 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032bb90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}

