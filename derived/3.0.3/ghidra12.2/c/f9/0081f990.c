
void FUN_0081f990(undefined4 *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)(param_1 + 5);
  *param_1 = param_1[1];
  param_1[2] = param_1[3];
  puVar4 = PTR_DAT_04bb2720;
  puVar3 = PTR_DAT_04bb2640;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    bVar5 = false;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar8,0);
      bVar5 = false;
      if (iVar6 == 0x758f7eaf) {
        bVar5 = *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x43080996;
      }
    }
    lVar10 = *(long *)puVar4;
    *(bool *)(param_1 + 5) = bVar5;
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar3 + 0x18))
                           (*(long **)puVar3,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (iVar6 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x43080996) {
          uVar9 = 3;
          goto LAB_0081fc50;
        }
        lVar10 = *(long *)puVar4;
        if (lVar10 == 0) goto LAB_0081fbcc;
      }
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar3 + 0x18))
                           (*(long **)puVar3,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (iVar6 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x30e4fc6) {
          lVar10 = *(long *)PTR_DAT_04bb46b0;
          if (lVar10 != 0) {
            puVar8 = *(undefined8 **)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
              lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
              if (lVar10 != 0) {
                lVar10 = lVar10 + 0x70;
LAB_0081fcc4:
                if ((*(long **)(lVar10 + 0xe7610) == (long *)0x0) ||
                   (puVar8 = (undefined8 *)**(long **)(lVar10 + 0xe7610),
                   puVar8 == (undefined8 *)0x0)) {
                  uVar7 = 1;
                }
                else {
                  uVar7 = (**(code **)*puVar8)();
                  uVar7 = uVar7 ^ 1;
                }
                local_40 = PTR_DAT_04bb2020 + 0x10;
                pcStack_38 = "ValidateVillageSave";
                iVar6 = FUN_0273ec70(*(long *)(lVar10 + 0xe75f8) + *(long *)(lVar10 + 0xe75f0),
                                     &local_40);
                if ((((uVar7 & 1) == 0) && (*(long *)(lVar10 + 0xe7610) != 0)) &&
                   (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0xe7610) + 8),
                   puVar8 != (undefined8 *)0x0)) {
                  (**(code **)*puVar8)();
                }
                if (0 < iVar6) {
                  uVar9 = 2;
                  param_1[1] = 2;
                  goto LAB_0081fd60;
                }
              }
            }
            else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
                    (lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar10 != 0))
            goto LAB_0081fcc4;
          }
          param_1[1] = 2;
          uVar9 = 1;
LAB_0081fd60:
          param_1[3] = uVar9;
          return;
        }
        lVar10 = *(long *)puVar4;
        if (lVar10 == 0) goto LAB_0081fbcc;
      }
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar3 + 0x18))
                           (*(long **)puVar3,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (iVar6 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x30e4fc6) {
          return;
        }
        lVar10 = *(long *)puVar4;
        if (lVar10 == 0) goto LAB_0081fbcc;
      }
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar3 + 0x18))
                           (*(long **)puVar3,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (iVar6 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531) {
          return;
        }
        lVar10 = *(long *)puVar4;
        if (lVar10 == 0) goto LAB_0081fbcc;
      }
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)puVar3 + 0x18))
                           (*(long **)puVar3,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (iVar6 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x4e4af961) {
          return;
        }
      }
    }
  }
LAB_0081fbcc:
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0xf & 1) != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "EntryGame";
      iVar6 = FUN_02743000(&local_40);
      if (iVar6 != 0) {
        return;
      }
    }
  }
  uVar9 = 1;
LAB_0081fc50:
  param_1[1] = uVar9;
  param_1[3] = 0;
  return;
}

