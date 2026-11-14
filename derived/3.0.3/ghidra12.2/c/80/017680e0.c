
void FUN_017680e0(long param_1)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  
  switch(*(undefined4 *)(param_1 + 0x274)) {
  case 1:
    uVar8 = *(uint *)(param_1 + 0x278);
    if ((uVar8 < 0x40) && (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xc + (ulong)uVar8 * 0x14) != '\0')
       ) {
      bVar4 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xc + (ulong)uVar8 * 0x14 + 0x10) != '\0';
    }
    else {
      bVar4 = false;
    }
    *(bool *)(param_1 + 0x3d0) = bVar4;
    iVar6 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar6 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        iVar6 = 0;
        if ((iVar5 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
          iVar6 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (((DAT_0529238c == iVar6) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0))
    {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
         ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
          ((*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 1 &&
           (*(int *)(param_1 + 0x278) == 0)))))) {
        if (((DAT_056b6f18 == 0) || (*(int *)(DAT_056b6f18 + 0x588) == 0)) && (DAT_05292338 != 0)) {
          bVar4 = *(char *)(DAT_05292338 + 0xfe5) != '\0';
        }
        else {
          bVar4 = true;
        }
        bVar2 = false;
        if (*(char *)(param_1 + 0x3d0) != '\0') {
          bVar2 = bVar4;
        }
        *(bool *)(param_1 + 0x3d0) = bVar2;
      }
    }
    lVar12 = *(long *)(param_1 + 0x60);
    bVar3 = *(byte *)(param_1 + 0x3d0);
    goto LAB_017687c0;
  case 2:
    uVar10 = (ulong)*(uint *)(param_1 + 0x278);
    if ((*(uint *)(param_1 + 0x278) < 0x40) &&
       (lVar12 = *(long *)PTR_DAT_04bb5ce0 + 0x50c, *(char *)(lVar12 + uVar10 * 0x10) != '\0'))
    goto LAB_01768314;
LAB_01768328:
    uVar8 = 0;
    goto LAB_017683a8;
  case 3:
    lVar12 = *(long *)(param_1 + 0x60);
    lVar14 = *(long *)(lVar12 + 0x1150);
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = 0.0;
      if (*(uint *)(param_1 + 0x278) < 5) {
        fVar15 = *(float *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*(uint *)(param_1 + 0x278) * 4 +
                           0xfc0);
      }
    }
    if (lVar14 != 0) {
      uVar8 = *(uint *)(lVar14 + 0x20);
      if ((uint)*(ushort *)(lVar14 + 0x284) <= *(uint *)(lVar14 + 0x20)) {
        uVar8 = (uint)*(ushort *)(lVar14 + 0x284);
      }
      if (uVar8 != 0) {
        lVar12 = *(long *)(lVar14 + 0x28);
        uVar9 = 0;
        do {
          FUN_03ad4c20(fVar15,*(undefined8 *)(lVar12 + (long)(int)uVar9 * 0x38),0xffffffff,
                       0xffffffff);
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
        lVar12 = *(long *)(param_1 + 0x60);
      }
    }
    bVar3 = 0.0 < fVar15;
    goto LAB_017684a8;
  case 4:
    lVar12 = *(long *)(param_1 + 0x60);
    lVar14 = *(long *)(lVar12 + 0x1150);
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = 0.0;
      if (*(uint *)(param_1 + 0x278) < 4) {
        fVar15 = *(float *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*(uint *)(param_1 + 0x278) * 4 +
                           0xfd4);
      }
    }
    if (lVar14 != 0) {
      uVar8 = *(uint *)(lVar14 + 0x20);
      if ((uint)*(ushort *)(lVar14 + 0x284) <= *(uint *)(lVar14 + 0x20)) {
        uVar8 = (uint)*(ushort *)(lVar14 + 0x284);
      }
      if (uVar8 != 0) {
        lVar12 = *(long *)(lVar14 + 0x28);
        uVar9 = 0;
        do {
          FUN_03ad4c20(fVar15,*(undefined8 *)(lVar12 + (long)(int)uVar9 * 0x38),0xffffffff,
                       0xffffffff);
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
        lVar12 = *(long *)(param_1 + 0x60);
      }
    }
    bVar3 = fVar15 != 0.0;
LAB_017684a8:
    *(byte *)(param_1 + 0x3d0) = bVar3;
LAB_017687c0:
    *(uint *)(lVar12 + 0x11a0) = *(uint *)(lVar12 + 0x11a0) & 0xfffffffe | (uint)bVar3;
    break;
  case 5:
    if (((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) &&
       (DAT_05292338 != 0)) {
      uVar8 = (uint)(*(int *)(param_1 + 0x278) != 0 || *(char *)(DAT_05292338 + 0xfe4) != '\0');
    }
    else {
      uVar8 = 1;
    }
    *(uint *)(*(long *)(param_1 + 0x60) + 0x11a0) =
         *(uint *)(*(long *)(param_1 + 0x60) + 0x11a0) & 0xfffffffe | uVar8;
    *(char *)(param_1 + 0x3d0) = (char)uVar8;
    break;
  case 10:
    uVar8 = *(uint *)(param_1 + 0x278);
    if ((uVar8 < 0x40) && (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xc + (ulong)uVar8 * 0x14) != '\0')
       ) {
      uVar8 = (uint)(*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xc + (ulong)uVar8 * 0x14 + 0x10) == '\0'
                    );
    }
    else {
      uVar8 = 1;
    }
    goto LAB_017683a8;
  case 0xb:
    iVar6 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar6 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        iVar6 = 0;
        if ((iVar5 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
          iVar6 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (((DAT_05292384 == iVar6) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0))
    {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 != 0x758f7eaf) || (DAT_05aed670 == 0)) ||
         ((*(long *)(DAT_05aed670 + 0x330) == 0 ||
          ((*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) != 1 ||
           (*(int *)(param_1 + 0x278) != 0)))))) goto LAB_01768544;
      lVar12 = DAT_05292338;
LAB_01768588:
      uVar8 = (uint)(*(char *)(lVar12 + 0xfe5) != '\0');
    }
    else {
LAB_01768544:
      if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
        uVar8 = 1;
        if ((*(uint *)(param_1 + 0x278) < 2) && (DAT_05292338 != 0)) {
          lVar12 = DAT_05292338 + (ulong)*(uint *)(param_1 + 0x278);
          goto LAB_01768588;
        }
      }
      else {
        uVar8 = 1;
      }
    }
    iVar6 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar6 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        iVar6 = 0;
        if ((iVar5 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
          iVar6 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    lVar12 = *(long *)(param_1 + 0x60);
    if (DAT_0529238c == iVar6) {
      iVar6 = (**(code **)(**(long **)**(undefined8 **)(*(long *)(lVar12 + 0x1150) + 0x38) + 0xb8))
                        ();
      if (0 < iVar6) {
        lVar14 = 0;
        lVar12 = 0;
        uVar9 = 0x40;
        if (uVar8 == 0) {
          uVar9 = 0;
        }
        do {
          lVar11 = *(long *)(param_1 + 0x60);
          if (((*(long *)(lVar11 + 0x1150) != 0) &&
              (lVar13 = *(long *)**(undefined8 **)(*(long *)(lVar11 + 0x1150) + 0x38), lVar13 != 0))
             && (lVar13 = *(long *)(lVar13 + 0x70), lVar13 != 0)) {
            puVar1 = (uint *)(*(long *)(lVar13 + 0x10) + lVar14);
            if (*(int *)(lVar13 + 8) <= lVar12) {
              puVar1 = (uint *)0x0;
            }
            *puVar1 = *puVar1 & 0xffffffbf | uVar9;
            lVar11 = *(long *)(param_1 + 0x60);
          }
          lVar12 = lVar12 + 1;
          iVar6 = (**(code **)(**(long **)**(undefined8 **)(*(long *)(lVar11 + 0x1150) + 0x38) +
                              0xb8))();
          lVar14 = lVar14 + 4;
        } while (lVar12 < iVar6);
      }
    }
    else {
      *(uint *)(lVar12 + 0x11a0) = *(uint *)(lVar12 + 0x11a0) & 0xfffffffe | uVar8;
    }
    *(char *)(param_1 + 0x3d0) = (char)uVar8;
    break;
  case 0xd:
    uVar10 = (ulong)*(uint *)(param_1 + 0x278);
    if ((0x3f < *(uint *)(param_1 + 0x278)) ||
       (lVar12 = *(long *)PTR_DAT_04bb5ce0 + 0x90c, *(char *)(lVar12 + uVar10 * 0x10) == '\0'))
    goto LAB_01768328;
LAB_01768314:
    uVar8 = (uint)(*(char *)(lVar12 + uVar10 * 0x10 + 1) != '\0');
LAB_017683a8:
    *(char *)(param_1 + 0x3d0) = (char)uVar8;
    *(uint *)(*(long *)(param_1 + 0x60) + 0x11a0) =
         *(uint *)(*(long *)(param_1 + 0x60) + 0x11a0) & 0xfffffffe | uVar8;
  }
  return;
}

