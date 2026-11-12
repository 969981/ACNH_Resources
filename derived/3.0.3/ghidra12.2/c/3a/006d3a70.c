
void FUN_006d3a70(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04bb29c8;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    do {
      lVar3 = *(long *)(param_1 + 8);
      if (iVar2 < 1) {
        lVar3 = 0;
      }
      lVar4 = lVar3 - *(int *)(param_1 + 0x14);
      if (lVar3 != 0 && lVar4 != 0) {
        *(undefined1 *)(*(long *)(lVar4 + 0x10) + 0x5a) = 1;
        plVar5 = *(long **)(lVar4 + 0x10);
        if (*(char *)((long)plVar5 + 0x5a) == '\0') {
          (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 + 2);
          *(undefined1 *)((long)plVar5 + 0x59) = 1;
        }
        else {
          *(undefined *)(plVar5 + 0xb) = *puVar1;
        }
        if (*(int *)(param_1 + 0x10) < 1) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = *(long **)(param_1 + 8);
          if (*plVar5 != 0) {
            *(long *)(*plVar5 + 8) = plVar5[1];
          }
          if ((long *)plVar5[1] != (long *)0x0) {
            *(long *)plVar5[1] = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        lVar3 = 0;
        if (plVar5 != (long *)0x0) {
          lVar3 = (long)plVar5 - (long)*(int *)(param_1 + 0x14);
        }
        plVar5 = (long *)(lVar3 + *(int *)(param_1 + 0x44));
        lVar3 = *(long *)(param_1 + 0x30);
        *(long **)(param_1 + 0x30) = plVar5;
        *plVar5 = lVar3;
        plVar5[1] = param_1 + 0x30;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 8) = plVar5;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        iVar2 = *(int *)(param_1 + 0x10);
      }
    } while (iVar2 != 0);
  }
  return;
}

