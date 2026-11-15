
void FUN_022408b0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  char *__dest;
  undefined1 *puVar5;
  
  *(undefined4 *)(param_1 + 0x518) = 0;
  if (*(int *)(param_1 + 0x500) != 1) {
    if (*(int *)(param_1 + 0x500) != 0) goto LAB_02240aa4;
    *(undefined8 *)(param_1 + 0x578) = 0;
    pvVar4 = *(void **)(param_1 + 0x520);
    *(undefined8 *)(param_1 + 0x570) = 0;
    *(undefined8 *)(param_1 + 0x568) = 0;
    *(undefined8 *)(param_1 + 0x560) = 0;
    puVar2 = PTR_DAT_04bb2698;
    *(undefined8 *)(param_1 + 0x558) = 0;
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    pvVar4 = *(void **)(param_1 + 0x530);
    *(undefined8 *)(param_1 + 0x520) = 0;
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    pvVar4 = *(void **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x530) = 0;
    if (*(long **)((long)pvVar4 + 0x10) == (long *)0x0) {
LAB_02240a60:
      FUN_038fd0e0((long)pvVar4 + 0x50);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    else {
      (**(code **)(**(long **)((long)pvVar4 + 0x10) + 8))();
      pvVar4 = *(void **)(param_1 + 0x510);
      if (pvVar4 != (void *)0x0) goto LAB_02240a60;
    }
    *(undefined8 *)(param_1 + 0x510) = 0;
    FUN_03f45838(param_1 + 0x580);
    goto LAB_02240aa4;
  }
  pvVar4 = *(void **)(param_1 + 0x510);
  if (*(long **)((long)pvVar4 + 0x10) == (long *)0x0) {
LAB_02240944:
    FUN_038fd0e0((long)pvVar4 + 0x50);
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  else {
    (**(code **)(**(long **)((long)pvVar4 + 0x10) + 8))();
    pvVar4 = *(void **)(param_1 + 0x510);
    if (pvVar4 != (void *)0x0) goto LAB_02240944;
  }
  puVar5 = *(undefined1 **)(*(long *)(param_1 + 0x78) + 0x298);
  if ((puVar5 == (undefined1 *)0x0) || (*(long *)(puVar5 + 0x10) != 0 || *(long *)(puVar5 + 8) != 0)
     ) {
    __dest = *(char **)(puVar5 + 0x70);
    if (__dest != "invalid_name") {
      iVar1 = 0xc;
      if (*(int *)(puVar5 + 0x78) < 0xd) {
        iVar1 = *(int *)(puVar5 + 0x78) + -1;
      }
      memcpy(__dest,"invalid_name",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined4 *)(puVar5 + 0x100) = 0;
    *puVar5 = 1;
  }
  **(undefined1 **)(param_1 + 0x5a8) = 0;
LAB_02240aa4:
  *(undefined8 *)(param_1 + 0x508) = 0;
  return;
}

