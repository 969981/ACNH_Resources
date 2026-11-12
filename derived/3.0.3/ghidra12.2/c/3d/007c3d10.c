
void FUN_007c3d10(undefined8 *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  long lVar3;
  void *__src;
  
  __dest = (void *)((long)param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 2) = 0x95;
  *param_1 = &PTR_LAB_04914080;
  param_1[1] = __dest;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_007c3dbc;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_007c3dbc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_007c3dbc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_007c3dbc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 2) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 2) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *param_1 = &PTR_LAB_04914050;
  return;
}

