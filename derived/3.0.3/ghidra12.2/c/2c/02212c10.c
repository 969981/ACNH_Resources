
void FUN_02212c10(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *__s;
  size_t __n;
  undefined8 *__src;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    __s = *(undefined8 **)(param_2 + 8);
  }
  else {
    __s = *(undefined8 **)(param_2 + 8);
    plVar4 = *(long **)(*(long *)(param_1 + 0x38) + (long)(*(int *)(param_1 + 0x30) + -1) * 8);
    if (*(char *)plVar4[1] != '\0') {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      __src = (undefined8 *)plVar4[1];
      if (__s == __src) {
        return;
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = 0;
      do {
        if (*(char *)(plVar4[1] + lVar3) == '\0') goto LAB_02212cfc;
        lVar1 = plVar4[1] + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_02212cfc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_02212cfc;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02212cfc:
      iVar2 = (int)lVar3;
      if (*(int *)(param_2 + 0x10) <= (int)lVar3) {
        iVar2 = *(int *)(param_2 + 0x10) + -1;
      }
      __n = (size_t)iVar2;
      memcpy(__s,__src,__n);
      goto LAB_02212d20;
    }
  }
  if (__s == &DAT_0407ebb1) {
    return;
  }
  iVar2 = 0;
  if (*(int *)(param_2 + 0x10) < 1) {
    iVar2 = *(int *)(param_2 + 0x10) + -1;
  }
  __n = (size_t)iVar2;
  memset(__s,0,__n);
LAB_02212d20:
  *(undefined1 *)((long)__s + __n) = 0;
  return;
}

