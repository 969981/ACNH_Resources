
void FUN_014bb6d0(int *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **local_70;
  undefined8 uStack_68;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_014bb740:
    uVar6 = FUN_0180c600();
    if ((uVar6 & 1) == 0) goto LAB_014bb7d4;
  }
  else {
    local_70 = (undefined **)CONCAT44(local_70._4_4_,0x1a);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1a & 1) == 0) goto LAB_014bb740;
  }
  if ((*param_1 != 0) && (DAT_053e0208 != 0)) {
    puVar9 = *(undefined8 **)(param_1 + 2);
    puVar1 = puVar9 + *param_1;
    lVar11 = DAT_053e0208;
    lVar8 = DAT_053e0208;
    do {
      if (lVar8 != 0) {
        uStack_68 = *puVar9;
        local_70 = &PTR_FUN_049a68b8;
        if (*(int *)(lVar8 + 0xb88) != 0) {
          lVar11 = (long)*(int *)(lVar8 + 0xb88) << 3;
          puVar10 = *(undefined8 **)(lVar8 + 0xb90);
          do {
            (*(code *)*local_70)(&local_70,*puVar10);
            lVar11 = lVar11 + -8;
            puVar10 = puVar10 + 1;
          } while (lVar11 != 0);
          lVar11 = DAT_053e0208;
        }
        lVar8 = lVar11;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
LAB_014bb7d4:
  iVar7 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      iVar7 = 0;
      if ((iVar5 == 0x758f7eaf) && (iVar7 = 0, DAT_05aed670 != 0)) {
        iVar7 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar7 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bb9a68;
  if ((DAT_05292434 == iVar7) && (*param_1 != 0)) {
    lVar11 = (long)*param_1 << 3;
    puVar9 = *(undefined8 **)(param_1 + 2);
    do {
      FUN_016b4f08(*(undefined8 *)puVar4,*(undefined4 *)*puVar9,(undefined4 *)*puVar9 + 3,
                   param_1 + 0x878);
      lVar11 = lVar11 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  return;
}

