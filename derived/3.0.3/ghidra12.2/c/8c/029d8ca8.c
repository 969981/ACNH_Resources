
void FUN_029d8ca8(long param_1)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  *(byte *)(param_1 + 0xa40) = *(byte *)(param_1 + 0xa40) & 0xfd;
  FUN_03f45838(param_1 + 0xa50);
  if (*(long *)(param_1 + 0xa48) != 0) {
    *(byte *)(param_1 + 0xa40) = *(byte *)(param_1 + 0xa40) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0xa48),0);
    *(undefined8 *)(param_1 + 0xa48) = 0;
  }
  FUN_029d5d34(param_1 + 0x968);
  FUN_029e18a8(param_1 + 0x10);
  piVar1 = (int *)(DAT_055f6860 + 0xa5960);
  lVar2 = param_1 + *(int *)(DAT_055f6860 + 0xa5964);
  plVar3 = (long *)(lVar2 + 0x30);
  if (*plVar3 != 0) {
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar2 + 0x38);
  }
  if (*(long **)(lVar2 + 0x38) != (long *)0x0) {
    **(long **)(lVar2 + 0x38) = *plVar3;
  }
  *plVar3 = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *piVar1 = *piVar1 + -1;
  __ptr = *(void **)(param_1 + 0x48);
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

