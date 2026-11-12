
void FUN_009399d0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_04928e68;
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  puVar9 = param_1 + 9;
  puVar6 = (undefined8 *)param_1[10];
  while (puVar6 != puVar9) {
    puVar8 = (undefined8 *)puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = puVar8;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = puVar9;
  param_1[10] = puVar9;
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  puVar9 = param_1 + 0x225;
  if ((undefined8 *)param_1[0x226] != puVar9) {
    lVar7 = (long)*(int *)((long)param_1 + 0x113c);
    lVar4 = (long)param_1[0x226] - lVar7;
    lVar10 = lVar4 + lVar7;
    do {
      lVar10 = *(long *)(lVar10 + 8);
      if (*(int *)(lVar4 + 0xa4) == 1) {
        FUN_009392c8();
      }
      lVar4 = lVar10 - lVar7;
    } while (lVar4 != (long)puVar9 - lVar7);
    lVar10 = (long)*(int *)((long)param_1 + 0x113c);
    if ((undefined8 *)param_1[0x226] != puVar9) {
      lVar7 = (long)param_1[0x226] - lVar10;
      lVar4 = lVar7 + lVar10;
      do {
        lVar4 = *(long *)(lVar4 + 8);
        if (*(int *)(lVar7 + 0xa4) == 2) {
          FUN_009392c8();
        }
        lVar7 = lVar4 - lVar10;
      } while ((long)puVar9 - lVar10 != lVar7);
      lVar10 = (long)*(int *)((long)param_1 + 0x113c);
      if ((undefined8 *)param_1[0x226] != puVar9) {
        lVar7 = (long)param_1[0x226] - lVar10;
        lVar4 = lVar7 + lVar10;
        do {
          lVar4 = *(long *)(lVar4 + 8);
          if (*(int *)(lVar7 + 0xa4) == 3) {
            FUN_009392c8();
          }
          lVar7 = lVar4 - lVar10;
        } while ((long)puVar9 - lVar10 != lVar7);
      }
    }
  }
  puVar3 = PTR_DAT_04bb27c8;
  puVar9 = param_1 + 0x228;
  if ((undefined8 *)param_1[0x229] != puVar9) {
    lVar7 = (long)*(int *)((long)param_1 + 0x1154);
    lVar4 = (long)param_1[0x229] - lVar7;
    lVar10 = lVar4 + lVar7;
    do {
      lVar10 = *(long *)(lVar10 + 8);
      if (*(int *)(lVar4 + 0x44) == 1) {
        if (*(char *)(lVar4 + 0x40) != '\0') {
          lVar5 = *(long *)puVar3;
          plVar1 = (long *)(*(int *)(lVar5 + 0x117c) + lVar4);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(lVar5 + 0x1178) = *(int *)(lVar5 + 0x1178) + -1;
          iVar2 = *(int *)(lVar4 + 0x44);
          if (iVar2 == 3) {
            puVar6 = (undefined8 *)(lVar5 + 0xa0);
          }
          else if (iVar2 == 2) {
            puVar6 = (undefined8 *)(lVar5 + 0x98);
          }
          else {
            if (iVar2 != 1) goto LAB_00939bb0;
            puVar6 = (undefined8 *)(lVar5 + 0x90);
          }
          FUN_00971e40(*puVar6,0,lVar4 + 0x18);
        }
LAB_00939bb0:
        *(undefined1 *)(lVar4 + 0x40) = 0;
      }
      lVar4 = lVar10 - lVar7;
    } while (lVar4 != (long)puVar9 - lVar7);
    lVar10 = (long)*(int *)((long)param_1 + 0x1154);
    if ((undefined8 *)param_1[0x229] != puVar9) {
      lVar7 = (long)param_1[0x229] - lVar10;
      lVar4 = lVar7 + lVar10;
      do {
        lVar4 = *(long *)(lVar4 + 8);
        if (*(int *)(lVar7 + 0x44) == 2) {
          if (*(char *)(lVar7 + 0x40) != '\0') {
            lVar5 = *(long *)puVar3;
            plVar1 = (long *)(*(int *)(lVar5 + 0x117c) + lVar7);
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(lVar5 + 0x1178) = *(int *)(lVar5 + 0x1178) + -1;
            iVar2 = *(int *)(lVar7 + 0x44);
            if (iVar2 == 3) {
              puVar6 = (undefined8 *)(lVar5 + 0xa0);
            }
            else if (iVar2 == 2) {
              puVar6 = (undefined8 *)(lVar5 + 0x98);
            }
            else {
              if (iVar2 != 1) goto LAB_00939c8c;
              puVar6 = (undefined8 *)(lVar5 + 0x90);
            }
            FUN_00971e40(*puVar6,0,lVar7 + 0x18);
          }
LAB_00939c8c:
          *(undefined1 *)(lVar7 + 0x40) = 0;
        }
        lVar7 = lVar4 - lVar10;
      } while ((long)puVar9 - lVar10 != lVar7);
      lVar10 = (long)*(int *)((long)param_1 + 0x1154);
      if ((undefined8 *)param_1[0x229] != puVar9) {
        lVar7 = (long)param_1[0x229] - lVar10;
        lVar4 = lVar7 + lVar10;
        do {
          lVar4 = *(long *)(lVar4 + 8);
          if (*(int *)(lVar7 + 0x44) == 3) {
            if (*(char *)(lVar7 + 0x40) != '\0') {
              lVar5 = *(long *)puVar3;
              plVar1 = (long *)(*(int *)(lVar5 + 0x117c) + lVar7);
              if (*plVar1 != 0) {
                *(long *)(*plVar1 + 8) = plVar1[1];
              }
              if ((long *)plVar1[1] != (long *)0x0) {
                *(long *)plVar1[1] = *plVar1;
              }
              *plVar1 = 0;
              plVar1[1] = 0;
              *(int *)(lVar5 + 0x1178) = *(int *)(lVar5 + 0x1178) + -1;
              iVar2 = *(int *)(lVar7 + 0x44);
              if (iVar2 == 3) {
                puVar6 = (undefined8 *)(lVar5 + 0xa0);
              }
              else if (iVar2 == 2) {
                puVar6 = (undefined8 *)(lVar5 + 0x98);
              }
              else {
                if (iVar2 != 1) goto LAB_00939d68;
                puVar6 = (undefined8 *)(lVar5 + 0x90);
              }
              FUN_00971e40(*puVar6,0,lVar7 + 0x18);
            }
LAB_00939d68:
            *(undefined1 *)(lVar7 + 0x40) = 0;
          }
          lVar7 = lVar4 - lVar10;
        } while ((long)puVar9 - lVar10 != lVar7);
      }
    }
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x18))();
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
  }
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 0x20))();
  }
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x20))();
  }
  puVar3 = PTR_DAT_04bbc1a0;
  param_1[0x14] = &PTR_LAB_04928f08;
  param_1[0x1a] = &PTR_LAB_049291e8;
  param_1[0x22f] = puVar3 + 0x10;
  if (0 < *(int *)(param_1 + 0x21)) {
    lVar10 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x22] + lVar10 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar10 = lVar10 + 1;
      *puVar9 = param_1[0x23];
      param_1[0x23] = puVar9;
    } while (lVar10 < *(int *)(param_1 + 0x21));
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  FUN_038e1e68(param_1 + 1);
  return;
}

