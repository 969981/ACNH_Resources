
void FUN_014bbc30(int *param_1)

{
  long *plVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined **local_88;
  long lStack_80;
  undefined4 *local_78;
  undefined4 local_64;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_014bbca4:
    uVar6 = FUN_0180c600();
    if ((uVar6 & 1) == 0) goto LAB_014bbd68;
  }
  else {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x1a);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1a & 1) == 0) goto LAB_014bbca4;
  }
  puVar4 = PTR_DAT_04bb3968;
  if ((*param_1 != 0) && (DAT_05abbc58 != 0)) {
    plVar12 = *(long **)(param_1 + 2);
    plVar1 = plVar12 + *param_1;
    lVar13 = DAT_05abbc58;
    lVar9 = DAT_05abbc58;
    do {
      if (lVar9 != 0) {
        lVar10 = *plVar12;
        lVar11 = *(long *)puVar4;
        *(undefined4 *)(lVar9 + 0x121c) = *(undefined4 *)(lVar10 + 0xc);
        *(undefined4 *)(lVar9 + 0x1220) = *(undefined4 *)(lVar10 + 0x10);
        *(undefined4 *)(lVar9 + 0x1224) = *(undefined4 *)(lVar10 + 0x14);
        if (lVar11 != 0) {
          local_64 = 2;
          local_88 = &PTR_FUN_049a68e0;
          lStack_80 = lVar10;
          local_78 = &local_64;
          if (*(int *)(lVar11 + 0xb88) != 0) {
            lVar13 = (long)*(int *)(lVar11 + 0xb88) << 3;
            puVar7 = *(undefined8 **)(lVar11 + 0xb90);
            do {
              (*(code *)*local_88)(&local_88,*puVar7);
              lVar13 = lVar13 + -8;
              puVar7 = puVar7 + 1;
            } while (lVar13 != 0);
            lVar13 = DAT_05abbc58;
          }
          lVar9 = lVar13;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
LAB_014bbd68:
  iVar8 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      iVar8 = 0;
      if ((iVar5 == 0x758f7eaf) && (iVar8 = 0, DAT_05aed670 != 0)) {
        iVar8 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar8 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bb9a68;
  if ((DAT_05292434 == iVar8) && (*param_1 != 0)) {
    lVar13 = (long)*param_1 << 3;
    plVar12 = *(long **)(param_1 + 2);
    do {
      FUN_016b54e4(*(undefined8 *)puVar4,*plVar12 + 0xc);
      lVar13 = lVar13 + -8;
      plVar12 = plVar12 + 1;
    } while (lVar13 != 0);
  }
  return;
}

