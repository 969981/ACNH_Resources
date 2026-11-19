
void FUN_03c888f0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  lVar2 = DAT_05aefb18;
  if (DAT_05aefb18 != 0) {
    iVar1 = *(int *)(DAT_05aefb18 + 0x18);
    while (iVar1 != 0) {
      if (0 < iVar1) {
        plVar3 = *(long **)(lVar2 + 8);
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        if ((plVar3 != (long *)0x0) &&
           (__ptr = (void *)((long)plVar3 - (long)*(int *)(lVar2 + 0x1c)), __ptr != (void *)0x0)) {
          FUN_03c889e0(__ptr);
          if (DAT_05ae7600 == 0) {
            free(__ptr);
          }
          else {
            plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
            }
          }
        }
      }
      iVar1 = *(int *)(lVar2 + 0x18);
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0;
  }
  return;
}

