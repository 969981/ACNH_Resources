
void FUN_01e5c070(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x444);
  **(undefined4 **)(param_1 + 0x350) = *(undefined4 *)(param_1 + 0x444);
  puVar3 = PTR_DAT_04bb2020;
  if (**(int **)(param_1 + 0x348) == *(int *)(param_1 + 800)) {
LAB_01e5c220:
    uVar12 = 1;
    FUN_017081d0(*(undefined8 *)(param_1 + 0x340),
                 &DAT_05390500 + (long)*(int *)(param_1 + 0x56c) * 2,
                 *(undefined4 *)(param_1 + 0x43c),1,0);
    if ((param_2 & 1) == 0) {
      return;
    }
    goto LAB_01e5c3d0;
  }
  if (**(char **)(param_1 + 0x458) == '\0') {
    puVar8 = &DAT_05390480 + (long)*(int *)(param_1 + 0x570) * 2;
  }
  else {
    puVar8 = (undefined8 *)(param_1 + 0x450);
  }
  pcVar13 = (char *)puVar8[1];
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = pcVar13;
  iVar5 = FUN_006bd550(pcVar13,0);
  if (iVar5 < 0x2dd5152d) {
    if ((iVar5 == -0x747d5e62) || (iVar5 == -0x1afc2387)) goto LAB_01e5c16c;
LAB_01e5c250:
    lVar6 = *(long *)(param_1 + 0x340);
    *(undefined1 *)(param_1 + 0x32a) = 0;
    uVar12 = *(undefined4 *)(param_1 + 0x43c);
    uVar7 = 1;
  }
  else {
    if ((iVar5 != 0x43d8fd4d) && (iVar5 != 0x2dd5152d)) goto LAB_01e5c250;
LAB_01e5c16c:
    uVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x358) + 0x68) + 0x2b4) -
            *(int *)(param_1 + 0x444);
    uVar1 = uVar2 >> 0x18;
    if (0.9985 <= *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar1 * 0x10 + 8) +
                  *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar1 * 0x10 + 0xc) *
                  (float)(uVar2 & 0xffffff) * 5.9604645e-08) goto LAB_01e5c220;
    *(undefined2 *)(param_1 + 0x678) = 0x96;
    *(undefined1 *)(param_1 + 0x32a) = 1;
    if (pcVar13 == "NpcPlaneTurn") {
LAB_01e5c26c:
      *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x318) = 0xbf80000000000000;
    }
    else {
      uVar11 = 0;
      bVar4 = true;
      do {
        if (pcVar13[uVar11] != "NpcPlaneTurn"[uVar11]) break;
        if (pcVar13[uVar11] == '\0') {
          if (bVar4) goto LAB_01e5c26c;
          break;
        }
        bVar4 = uVar11 < 0x80000;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x80001);
    }
    fVar14 = (float)NEON_ucvtf(**(undefined4 **)(param_1 + 0x348));
    fVar14 = fVar14 * 8.381903e-08;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 800));
    fVar15 = fVar15 * 8.381903e-08;
    if (fVar14 <= 360.0) {
      if (fVar14 < 0.0) {
        fVar16 = fVar14 / 360.0 + -1.0;
        goto LAB_01e5c2d4;
      }
    }
    else {
      fVar16 = fVar14 / 360.0;
LAB_01e5c2d4:
      fVar14 = fVar14 - (float)(int)fVar16 * 360.0;
    }
    if (fVar15 <= 360.0) {
      if (fVar15 < 0.0) {
        fVar16 = fVar15 / 360.0 + -1.0;
        goto LAB_01e5c310;
      }
    }
    else {
      fVar16 = fVar15 / 360.0;
LAB_01e5c310:
      fVar15 = fVar15 - (float)(int)fVar16 * 360.0;
    }
    fVar16 = 0.0;
    if (fVar14 != fVar15) {
      fVar17 = fVar14 - fVar15;
      fVar16 = fVar17;
      if (fVar14 <= fVar15) {
        fVar16 = fVar15 - fVar14;
      }
      if (fVar16 <= 180.0) {
        fVar16 = fVar15 - fVar14;
        if (fVar15 < fVar14) goto LAB_01e5c36c;
      }
      else {
        fVar17 = 360.0 - fVar16;
        fVar16 = fVar17;
        if (fVar14 <= fVar15) {
LAB_01e5c36c:
          fVar16 = -fVar17;
        }
      }
    }
    lVar6 = *(long *)(param_1 + 0x340);
    local_50 = puVar3 + 0x10;
    pcStack_48 = "NpcDirectionAngle";
    if (((*(long *)(lVar6 + 0x1138) != 0) &&
        (lVar9 = *(long *)(*(long *)(lVar6 + 0x1138) + 0x78), lVar9 != 0)) &&
       (plVar10 = *(long **)(lVar9 + 0x48), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x30))(fVar16,plVar10,&local_50);
      lVar6 = *(long *)(param_1 + 0x340);
    }
    uVar12 = *(undefined4 *)(param_1 + 0x43c);
    uVar7 = 0;
  }
  FUN_017081d0(lVar6,&local_40,uVar12,uVar7,0);
  if ((param_2 & 1) == 0) {
    return;
  }
  uVar12 = 0;
LAB_01e5c3d0:
  *(undefined4 *)(param_1 + 0x4b8) = uVar12;
  return;
}

