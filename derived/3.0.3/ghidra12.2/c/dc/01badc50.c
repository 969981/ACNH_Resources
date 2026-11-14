
void FUN_01badc50(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  void *pvVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb49b8;
  puVar2 = PTR_DAT_04bb2698;
  piVar1 = param_1 + 6000;
  lVar8 = -0x5da8;
  do {
    puVar6 = *(undefined4 **)((long)param_1 + lVar8 + 0x5ed0);
    if (puVar6 != (undefined4 *)0x0) {
      if ((*(byte *)(puVar6 + 4) >> 1 & 1) != 0) {
        *(byte *)(puVar6 + 4) = *(byte *)(puVar6 + 4) & 0xf8 | 4;
        if (*(long *)(puVar6 + 0xc) == 0) {
          if (*(long *)(puVar6 + 6) != 0) goto LAB_01badcec;
        }
        else {
          FUN_03f45838(puVar6 + 8);
          if (*(long *)(puVar6 + 6) == 0) {
            puVar6[5] = 0xe;
          }
          else {
LAB_01badcec:
            lVar4 = *(long *)puVar3;
            if (lVar4 != 0) {
              FUN_03f350f4(lVar4,puVar6 + 2);
            }
          }
        }
      }
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      puVar6[0x12] = 0;
      **(undefined1 **)(puVar6 + 0x16) = 0;
      **(undefined1 **)(puVar6 + 0x2c) = 0;
      pvVar7 = *(void **)((long)param_1 + lVar8 + 0x5ed0);
      if (pvVar7 != (void *)0x0) {
        if ((*(byte *)((long)pvVar7 + 0x10) >> 1 & 1) != 0) {
          *(byte *)((long)pvVar7 + 0x10) = *(byte *)((long)pvVar7 + 0x10) & 0xf8 | 4;
          if (*(long *)((long)pvVar7 + 0x30) == 0) {
            if (*(long *)((long)pvVar7 + 0x18) != 0) goto LAB_01badd60;
          }
          else {
            FUN_03f45838((long)pvVar7 + 0x20);
            if (*(long *)((long)pvVar7 + 0x18) == 0) {
              *(undefined4 *)((long)pvVar7 + 0x14) = 0xe;
            }
            else {
LAB_01badd60:
              lVar4 = *(long *)puVar3;
              if (lVar4 != 0) {
                FUN_03f350f4(lVar4,(long)pvVar7 + 8);
              }
            }
          }
        }
        FUN_03f457c4((long)pvVar7 + 0x20);
        lVar4 = *(long *)puVar2;
        if (lVar4 == 0) {
          free(pvVar7);
        }
        else {
          plVar5 = (long *)FUN_038cb610(lVar4,pvVar7);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
          }
        }
      }
      *(undefined8 *)((long)param_1 + lVar8 + 0x5ed0) = 0;
    }
    lVar8 = lVar8 + 0x128;
  } while (lVar8 != 0);
  while (0 < *piVar1) {
    plVar5 = *(long **)(param_1 + 0x176e);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *piVar1 = *piVar1 + -1;
    if ((plVar5 == (long *)0x0) ||
       (pvVar7 = (void *)((long)plVar5 - (long)(int)param_1[0x1771]), pvVar7 == (void *)0x0)) break;
    FUN_01bad244(pvVar7);
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar8,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  *param_1 = 0;
  return;
}

