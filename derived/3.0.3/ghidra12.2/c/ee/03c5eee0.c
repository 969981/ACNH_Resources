
void FUN_03c5eee0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *__ptr;
  void *__ptr_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_04bb2698;
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    __ptr = plVar7 + -1;
    if (*__ptr != 0) {
      puVar1 = PTR_DAT_04bd3910 + 0x10;
      plVar8 = plVar7 + *__ptr * 4;
      do {
        plVar6 = plVar8 + -4;
        *plVar6 = (long)puVar1;
        iVar2 = (int)plVar8[-1];
        while (iVar2 != 0) {
          if (iVar2 < 1) {
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = (long *)plVar8[-3];
            if (*plVar5 != 0) {
              *(long *)(*plVar5 + 8) = plVar5[1];
            }
            if ((long *)plVar5[1] != (long *)0x0) {
              *(long *)plVar5[1] = *plVar5;
            }
            *plVar5 = 0;
            plVar5[1] = 0;
            *(int *)(plVar8 + -1) = (int)plVar8[-1] + -1;
          }
          lVar4 = 0;
          if (plVar5 != (long *)0x0) {
            lVar4 = (long)plVar5 - (long)*(int *)((long)plVar8 + -4);
          }
          (**(code **)(plVar8[-4] + 0x58))(plVar6,lVar4);
          iVar2 = (int)plVar8[-1];
        }
        plVar8 = plVar6;
      } while (plVar6 != plVar7);
    }
    lVar4 = *(long *)puVar3;
    if (lVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar4,__ptr);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(char *)(param_1 + 0x26) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10));
    __ptr_00 = *(void **)(param_1 + 0x18);
    if (__ptr_00 != (void *)0x0) {
      lVar4 = *(long *)puVar3;
      if (lVar4 == 0) {
        free(__ptr_00);
      }
      else {
        plVar7 = (long *)FUN_038cb610(lVar4,__ptr_00);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,__ptr_00);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  return;
}

