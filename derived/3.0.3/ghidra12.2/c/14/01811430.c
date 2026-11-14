
void FUN_01811430(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c;
  undefined1 local_55;
  
  puVar4 = PTR_DAT_04bb5ce0;
  lVar10 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar10 == 0) {
LAB_01811620:
    uVar8 = FUN_0180df40();
    lVar10 = *(long *)puVar4;
    if ((uVar8 & 1) == 0) {
      if (lVar10 == 0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
      }
      local_55 = 0;
      local_78 = 0x20;
      local_6c = 0;
      local_74 = 0x65636e6172746e45;
      puStack_80 = &local_74;
      fVar14 = fVar12 * 5.0 + 205.0;
      local_88 = PTR_DAT_04bb2028 + 0x10;
      lVar10 = FUN_02917a1c(&local_88);
      puVar3 = PTR_DAT_04bb2720;
      if (lVar10 == 0) {
        fVar15 = 0.0;
        lVar10 = *(long *)PTR_DAT_04bb2720;
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338))
          ;
          iVar5 = FUN_006bd550(*puVar7,0);
          if ((iVar5 == 0x758f7eaf) &&
             (((*(long *)puVar3 != 0 && (lVar10 = *(long *)(*(long *)puVar3 + 0x330), lVar10 != 0))
              && (*(int *)(lVar10 + 0x260) != 0)))) {
            fVar12 = 160.0;
            if ((*(long *)(lVar10 + 600) == 0) ||
               (lVar10 = *(long *)(lVar10 + 600) + -0x40, lVar10 == 0)) {
              fVar13 = 0.0;
              lVar10 = *(long *)puVar4;
              goto joined_r0x018117a4;
            }
            goto LAB_018116f4;
          }
        }
        fVar13 = 0.0;
      }
      else {
LAB_018116f4:
        fVar13 = *(float *)(lVar10 + 0x18);
        fVar15 = *(float *)(lVar10 + 0x1c);
      }
      fVar12 = 160.0;
      lVar10 = *(long *)puVar4;
      goto joined_r0x018117a4;
    }
LAB_0181162c:
    if (lVar10 != 0) goto LAB_01811630;
    iVar5 = 0;
    fVar12 = 40.0;
    iVar9 = 0x10;
  }
  else {
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
LAB_018114e0:
        iVar5 = 0;
        lVar10 = *(long *)puVar4;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        if ((iVar5 == 0x758f7eaf) && (DAT_05aed670 != 0)) {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) goto LAB_018114e0;
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
          lVar10 = *(long *)puVar4;
        }
        else {
          iVar5 = 0;
          lVar10 = *(long *)puVar4;
        }
      }
      if (lVar10 != 0) goto LAB_018114fc;
LAB_01811594:
      iVar9 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar9 = 0;
        }
        else {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar6 = FUN_006bd550(*puVar7,0);
          iVar9 = 0;
          if ((iVar6 == 0x758f7eaf) && (iVar9 = 0, DAT_05aed670 != 0)) {
            iVar9 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar9 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if ((iVar5 != 5) || (DAT_05292438 != iVar9)) goto LAB_01811620;
      lVar10 = *(long *)puVar4;
      goto LAB_0181162c;
    }
    iVar5 = 0;
LAB_018114fc:
    if (DAT_04c487d4 == -1) goto LAB_01811594;
    local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x15);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_01811594;
    }
    if (iVar5 != 5) goto LAB_01811620;
LAB_01811630:
    fVar12 = *(float *)(lVar10 + 0xd74);
    iVar5 = *(int *)(lVar10 + 0xd8c);
    iVar9 = *(int *)(lVar10 + 0xd9c);
  }
  fVar15 = 10.0;
  if (iVar5 <= iVar9) {
    iVar5 = iVar9;
  }
  fVar13 = 20.0;
  fVar14 = (float)iVar5 * 5.0 + 5.0 + 20.0 + 5.0;
  lVar10 = *(long *)puVar4;
joined_r0x018117a4:
  if (lVar10 == 0) {
    iVar5 = 0;
    iVar9 = 0x10;
  }
  else {
    iVar5 = *(int *)(lVar10 + 0xd8c);
    iVar9 = *(int *)(lVar10 + 0xd9c);
  }
  if (iVar5 <= iVar9) {
    iVar5 = iVar9;
  }
  fVar12 = fVar12 + (0.1 - fVar13 * 0.5);
  iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar2 = (int)(fVar13 / 5.0) + iVar6 + -1;
  iVar9 = iVar6;
  if (iVar2 <= iVar6) {
    iVar9 = iVar2;
  }
  if (iVar6 <= iVar2) {
    iVar6 = iVar2;
  }
  iVar11 = (int)(((fVar14 - fVar15 * 0.5) + -0.1) / 5.0);
  iVar2 = iVar11;
  if (iVar5 + 1 < iVar11) {
    iVar2 = iVar5 + 1;
  }
  if (iVar11 < iVar5 + 1) {
    iVar11 = iVar5 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar9;
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x20) = iVar6;
  *(int *)(param_1 + 0x24) = iVar11;
  return;
}

