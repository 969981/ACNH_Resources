
void FUN_038f37b0(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest;
  long *plVar4;
  void *__ptr;
  int iVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb2698;
  lVar6 = 0;
  do {
    if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_038f3830;
    lVar3 = param_2[1] + lVar6;
    if (*(char *)(lVar3 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038f3830;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038f3830;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_038f3830:
  iVar5 = (int)lVar6;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    __dest = malloc((long)(iVar5 + 1));
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      __dest = (void *)0x0;
      if (param_3 == (long *)0x0) goto LAB_038f38a0;
    }
    __dest = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(iVar5 + 1),8);
  }
LAB_038f38a0:
  (**(code **)(*param_2 + 0x18))(param_2);
  memcpy(__dest,(void *)param_2[1],(long)iVar5);
  *(undefined1 *)((long)__dest + (long)iVar5) = 0;
  __ptr = *(void **)(param_1 + 0x80);
  if (__ptr != __dest) {
    if ((__ptr != (void *)0x0) && (*(char *)(param_1 + 0x8c) != '\0')) {
      if (*(long *)puVar2 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
    }
    *(void **)(param_1 + 0x80) = __dest;
    *(int *)(param_1 + 0x88) = iVar5;
    *(undefined1 *)(param_1 + 0x8c) = 1;
  }
  return;
}

