
void FUN_0394f380(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    plVar5 = *(long **)(param_1 + 0x30);
    iVar9 = 0;
    plVar10 = plVar5;
    do {
      if ((*(int *)(param_1 + 0x50) == -1 || iVar9 == *(int *)(param_1 + 0x50)) &&
         (*(int *)(param_1 + 8) != 0)) {
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        puVar1 = puVar11 + *(int *)(param_1 + 8);
        do {
          lVar12 = *plVar10;
          plVar5 = (long *)(**(code **)(*(long *)*puVar11 + 0x18))();
          plVar7 = (long *)(lVar12 + 0x18);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          pcVar8 = *(char **)(lVar12 + 0x20);
          (**(code **)(*plVar5 + 0x18))(plVar5);
          pcVar4 = (char *)plVar5[1];
          if (pcVar8 == pcVar4) {
LAB_0394f3f4:
            (**(code **)(*(long *)*puVar11 + 0x28))();
          }
          else {
            cVar2 = **(char **)(lVar12 + 0x20);
            if (cVar2 == *pcVar4) {
              if (cVar2 != '\0') {
                lVar6 = 0x7fffe;
                pcVar8 = *(char **)(lVar12 + 0x20);
                do {
                  if (pcVar8[1] != pcVar4[1]) goto LAB_0394f404;
                  if (pcVar8[1] == '\0') break;
                  if (pcVar8[2] != pcVar4[2]) goto LAB_0394f404;
                  if (pcVar8[2] == '\0') break;
                  if ((lVar6 == 0) || (cVar2 = pcVar8[3], cVar2 != pcVar4[3])) goto LAB_0394f404;
                  lVar6 = lVar6 + -3;
                  pcVar4 = pcVar4 + 3;
                  pcVar8 = pcVar8 + 3;
                } while (cVar2 != '\0');
              }
              goto LAB_0394f3f4;
            }
          }
LAB_0394f404:
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar1);
        plVar5 = *(long **)(param_1 + 0x30);
        iVar3 = *(int *)(param_1 + 0x28);
      }
      plVar10 = plVar10 + 1;
      iVar9 = iVar9 + 1;
    } while (plVar10 != plVar5 + iVar3);
  }
  return;
}

