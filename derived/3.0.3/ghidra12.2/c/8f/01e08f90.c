
void FUN_01e08f90(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  piVar5 = (int *)*param_1;
  iVar2 = *piVar5;
  if (0 < iVar2) {
    iVar1 = *param_2;
    if (0 < iVar1) {
      lVar4 = param_1[1];
      lVar6 = 0;
      do {
        if ((0 < iVar2) &&
           (pvVar3 = *(void **)(*(long *)(param_2 + 2) + lVar6 * 8),
           *(char *)((long)pvVar3 + 0xfb0) == '\0')) {
          lVar8 = *(long *)(lVar4 + 8);
          if (*(int *)(lVar8 + 0xa8) < *(int *)(lVar8 + 0xac)) {
            puVar7 = *(undefined8 **)(lVar8 + 0xb8);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar8 + 0xb8) = *puVar7;
            }
            *(undefined4 *)(puVar7 + 1) = 0;
            *(undefined1 *)(puVar7 + 4) = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            memset(puVar7 + 6,0,0xfa8);
            *(undefined4 *)puVar7 = 0;
            *(undefined4 *)(puVar7 + 5) = 0;
            if (*(int *)(lVar8 + 0xa8) < *(int *)(lVar8 + 0xac)) {
              *(undefined8 **)(*(long *)(lVar8 + 0xb0) + (long)*(int *)(lVar8 + 0xa8) * 8) = puVar7;
              *(int *)(lVar8 + 0xa8) = *(int *)(lVar8 + 0xa8) + 1;
            }
            *(undefined4 *)puVar7 = 2;
            memcpy(puVar7 + 6,pvVar3,0xfa8);
            iVar2 = *piVar5;
          }
          iVar2 = iVar2 + -1;
          *piVar5 = iVar2;
          iVar1 = *param_2;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
      if (0 < iVar1) {
        piVar5 = (int *)*param_1;
        iVar2 = *piVar5;
        if (0 < iVar2) {
          lVar6 = 0;
          do {
            if ((0 < iVar2) &&
               (pvVar3 = *(void **)(*(long *)(param_2 + 2) + lVar6 * 8),
               *(char *)((long)pvVar3 + 0xfc0) == '\0')) {
              lVar8 = *(long *)(lVar4 + 8);
              if (*(int *)(lVar8 + 0xa8) < *(int *)(lVar8 + 0xac)) {
                puVar7 = *(undefined8 **)(lVar8 + 0xb8);
                if (puVar7 != (undefined8 *)0x0) {
                  *(undefined8 *)(lVar8 + 0xb8) = *puVar7;
                }
                *(undefined4 *)(puVar7 + 1) = 0;
                *(undefined1 *)(puVar7 + 4) = 0;
                puVar7[2] = 0;
                puVar7[3] = 0;
                memset(puVar7 + 6,0,0xfa8);
                *(undefined4 *)puVar7 = 0;
                *(undefined4 *)(puVar7 + 5) = 0;
                if (*(int *)(lVar8 + 0xa8) < *(int *)(lVar8 + 0xac)) {
                  *(undefined8 **)(*(long *)(lVar8 + 0xb0) + (long)*(int *)(lVar8 + 0xa8) * 8) =
                       puVar7;
                  *(int *)(lVar8 + 0xa8) = *(int *)(lVar8 + 0xa8) + 1;
                }
                *(undefined4 *)puVar7 = 4;
                memcpy(puVar7 + 6,pvVar3,0xfa8);
                iVar2 = *piVar5;
              }
              iVar2 = iVar2 + -1;
              *piVar5 = iVar2;
              iVar1 = *param_2;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar1);
          if (0 < iVar1) {
            piVar5 = (int *)*param_1;
            iVar2 = *piVar5;
            if (0 < iVar2) {
              lVar6 = 0;
              do {
                if (((0 < iVar2) &&
                    (pvVar3 = *(void **)(*(long *)(param_2 + 2) + lVar6 * 8),
                    *(char *)((long)pvVar3 + 0xfd0) == '\0')) &&
                   (*(char *)((long)pvVar3 + 0x98c) != '\0')) {
                  lVar8 = *(long *)(lVar4 + 8);
                  if (*(int *)(lVar8 + 0xa8) < *(int *)(lVar8 + 0xac)) {
                    puVar7 = *(undefined8 **)(lVar8 + 0xb8);
                    if (puVar7 != (undefined8 *)0x0) {
                      *(undefined8 *)(lVar8 + 0xb8) = *puVar7;
                    }
                    *(undefined4 *)(puVar7 + 1) = 0;
                    *(undefined1 *)(puVar7 + 4) = 0;
                    puVar7[2] = 0;
                    puVar7[3] = 0;
                    memset(puVar7 + 6,0,0xfa8);
                    *(undefined4 *)puVar7 = 0;
                    *(undefined4 *)(puVar7 + 5) = 0;
                    if (*(int *)(lVar8 + 0xa8) < *(int *)(lVar8 + 0xac)) {
                      *(undefined8 **)(*(long *)(lVar8 + 0xb0) + (long)*(int *)(lVar8 + 0xa8) * 8) =
                           puVar7;
                      *(int *)(lVar8 + 0xa8) = *(int *)(lVar8 + 0xa8) + 1;
                    }
                    *(undefined4 *)puVar7 = 5;
                    memcpy(puVar7 + 6,pvVar3,0xfa8);
                    iVar2 = *piVar5;
                  }
                  iVar2 = iVar2 + -1;
                  *piVar5 = iVar2;
                  iVar1 = *param_2;
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 < iVar1);
            }
          }
        }
      }
    }
  }
  return;
}

