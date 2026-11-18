
void FUN_0367c9fc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  void *__ptr;
  
  uVar2 = 0;
  if (((((char)param_1[0xc] == '\0' || 0 < *(int *)((long)param_1 + 0x5c)) ||
        *(char *)((long)param_1 + 0x59) != '\0') && ((char)param_1[0xb] == '\0')) &&
     (*(char *)((long)param_1 + 0x59) != '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  }
  if (((uVar2 & 1) == 0) && ((char)param_1[0xb] == '\0')) {
    __ptr = (void *)param_1[10];
    if ((*(long *)((long)__ptr + 0x1e8) == 0) && (*(char *)((long)__ptr + 0x1f0) == '\0')) {
      FUN_03680448(__ptr,param_2);
      return;
    }
    if (*(long *)((long)__ptr + 0x1f8) == 0) {
      param_1[10] = 0;
      FUN_036803b0(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x59) = 1;
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      if (((((char)param_1[0xc] == '\0') || (0 < *(int *)((long)param_1 + 0x5c))) ||
          (*(char *)((long)param_1 + 0x59) != '\0')) &&
         ((((char)param_1[0xb] == '\0' && (*(char *)((long)param_1 + 0x59) != '\0')) &&
          (uVar2 = (**(code **)(*param_1 + 0x18))(param_1), (uVar2 & 1) != 0)))) {
        uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
        *(undefined4 *)((long)param_1 + 0x94) = uVar1;
      }
    }
  }
  return;
}

