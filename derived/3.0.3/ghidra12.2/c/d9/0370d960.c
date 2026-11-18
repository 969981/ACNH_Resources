
void FUN_0370d960(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 local_5c;
  float local_54;
  
  puVar9 = PTR_DAT_04bb2720;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  iVar6 = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      iVar6 = 0;
      if (iVar5 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar9 != 0) {
          lVar10 = *(long *)(*(long *)puVar9 + 0x330);
          iVar6 = 0;
          if (lVar10 != 0) {
            iVar6 = *(int *)(lVar10 + 0x244);
          }
        }
      }
    }
  }
  puVar1 = PTR_DAT_04bbe4b0;
  puVar8 = PTR_DAT_04bb2640;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xb0) != iVar6) goto LAB_0370dde4;
  lVar10 = *(long *)puVar9;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
LAB_0370dac0:
    puVar8 = PTR_DAT_04bb5ce0;
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
    }
    lVar10 = *(long *)puVar9;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) &&
          ((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)))) &&
         (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == -0x6efba09b) {
            *(float *)(lVar12 + 0x14) = fVar14 * 5.0 + 205.0;
            *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar12 + 0x20) = 0xb4;
            puVar2 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
            puVar2[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    lVar10 = *(long *)puVar8;
    if (lVar10 == 0) {
      fVar14 = 0.0;
      lVar10 = *(long *)puVar9;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
      lVar10 = *(long *)puVar9;
    }
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if ((iVar6 == 0x758f7eaf) &&
         (((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)) &&
          (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)))) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == 0x5fbb6b26) {
            *(float *)(lVar12 + 0x14) = fVar14 * -5.0 + 115.0;
            *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar12 + 0x20) = 0;
            puVar2 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
            puVar2[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    lVar10 = *(long *)puVar8;
    if (lVar10 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
    }
    local_5c = (ulong)(uint)local_5c;
    lVar10 = *(long *)puVar9;
    fVar14 = fVar14 * 5.0 + 190.0;
    local_54 = fVar14;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) &&
          ((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)))) &&
         (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == 0x483e4538) {
            *(float *)(lVar12 + 0x14) = fVar14;
            *(undefined8 *)(lVar12 + 0xc) = 0x43110000;
            *(undefined4 *)(lVar12 + 0x20) = 0x5a;
            puVar8 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41700000;
            puVar8[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    if (((param_2 & 1) != 0) && (*(int *)PTR_DAT_04bc23a0 == 2)) {
      puVar8 = PTR_DAT_04bb2108;
LAB_0370dddc:
      local_5c = CONCAT44(local_5c._4_4_,0x43200000);
      FUN_02932210(PTR_DAT_04bc39e0,&local_5c,puVar8);
    }
LAB_0370dde4:
    lVar10 = *(long *)puVar9;
    if (lVar10 == 0) goto LAB_0370df70;
    iVar6 = 0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      iVar6 = 0;
      if (iVar5 == 0x758f7eaf) {
        if ((*(long *)puVar9 == 0) || (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 == 0))
        goto LAB_0370df70;
        iVar6 = *(int *)(lVar10 + 0x244);
      }
    }
  }
  else {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if ((iVar6 != 0x758f7eaf) ||
       (((lVar10 = *(long *)puVar9, lVar10 == 0 || (*(long *)(lVar10 + 0x330) == 0)) ||
        (*(int *)(*(long *)(lVar10 + 0x330) + 0x248) == 0)))) goto LAB_0370dac0;
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)puVar8 + 0x18))
                       (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if ((((iVar6 != 0x758f7eaf) || (lVar10 = *(long *)puVar9, lVar10 == 0)) ||
        (*(long *)(lVar10 + 0x330) == 0)) || (*(int *)(*(long *)(lVar10 + 0x330) + 0x248) != 1)) {
      if (*(long *)PTR_DAT_04bb5ce0 == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
      }
      local_5c = local_5c & 0xffffffff;
      lVar10 = *(long *)puVar9;
      fVar14 = fVar14 * 5.0 + 190.0;
      local_54 = fVar14;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)puVar8 + 0x18))
                           (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        if (((iVar6 == 0x758f7eaf) &&
            ((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0))))
           && (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
          lVar12 = lVar11 + -0x40;
          do {
            if (*(int *)(lVar11 + -0x40) == 0xc672fa7) {
              *(float *)(lVar12 + 0x14) = fVar14;
              *(undefined8 *)(lVar12 + 0xc) = 0x432f0000;
              *(undefined4 *)(lVar12 + 0x20) = 0x10e;
              puVar8 = PTR_DAT_04bc39e0;
              *(undefined4 *)(lVar12 + 0x18) = 0x41700000;
              puVar8[0x9d] = 1;
              break;
            }
            lVar11 = *(long *)(lVar11 + 8);
            lVar12 = lVar11 + -0x40;
          } while (lVar12 != lVar10 + 0x210);
        }
      }
      if (((param_2 & 1) == 0) || (*(int *)PTR_DAT_04bc23a0 != 0)) goto LAB_0370dde4;
      puVar8 = PTR_DAT_04bb2cf8;
      goto LAB_0370dddc;
    }
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
    }
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)puVar8 + 0x18))
                       (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if (iVar6 != 0x758f7eaf) goto LAB_0370dde4;
    if (*(long *)puVar9 != 0) {
      lVar10 = *(long *)(*(long *)puVar9 + 0x330);
      if ((lVar10 != 0) && (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == 0xc672fa7) {
            *(float *)(lVar12 + 0x14) = fVar14 * 5.0 + 205.0;
            *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar12 + 0x20) = 0xb4;
            puVar8 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
            puVar8[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
      goto LAB_0370dde4;
    }
LAB_0370df70:
    iVar6 = 0;
  }
  puVar8 = PTR_DAT_04bb2640;
  lVar10 = *(long *)puVar9;
  if (*(int *)(puVar1 + 0xac) == iVar6) {
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) &&
          ((lVar10 = *(long *)puVar9, lVar10 != 0 && (*(long *)(lVar10 + 0x330) != 0)))) &&
         (*(int *)(*(long *)(lVar10 + 0x330) + 0x248) != 0)) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)puVar8 + 0x18))
                           (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        if ((((iVar6 == 0x758f7eaf) && (lVar10 = *(long *)puVar9, lVar10 != 0)) &&
            (*(long *)(lVar10 + 0x330) != 0)) && (*(int *)(*(long *)(lVar10 + 0x330) + 0x248) == 1))
        {
          if (*(long *)PTR_DAT_04bb5ce0 == 0) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
          }
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)puVar8 + 0x18))
                             (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
          iVar6 = FUN_006bd550(*puVar7,0);
          if (iVar6 != 0x758f7eaf) {
            return;
          }
          if (*(long *)puVar9 == 0) {
            return;
          }
          lVar10 = *(long *)(*(long *)puVar9 + 0x330);
          if (lVar10 == 0) {
            return;
          }
          lVar11 = *(long *)(lVar10 + 600);
          if (lVar11 == lVar10 + 0x250) {
            return;
          }
          lVar12 = lVar11 + -0x40;
          while (*(int *)(lVar11 + -0x40) != -0xea9e7e3) {
            lVar11 = *(long *)(lVar11 + 8);
            lVar12 = lVar11 + -0x40;
            if (lVar12 == lVar10 + 0x210) {
              return;
            }
          }
          goto LAB_0370ecc4;
        }
        if (*(long *)PTR_DAT_04bb5ce0 == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
        }
        local_5c = local_5c & 0xffffffff;
        lVar10 = *(long *)puVar9;
        fVar14 = fVar14 * 5.0 + 190.0;
        local_54 = fVar14;
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)puVar8 + 0x18))
                             (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
          iVar6 = FUN_006bd550(*puVar7,0);
          if (((iVar6 == 0x758f7eaf) &&
              ((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)))
              ) && (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
            lVar12 = lVar11 + -0x40;
            do {
              if (*(int *)(lVar11 + -0x40) == -0xea9e7e3) goto LAB_0370ebdc;
              lVar11 = *(long *)(lVar11 + 8);
              lVar12 = lVar11 + -0x40;
            } while (lVar12 != lVar10 + 0x210);
          }
        }
        goto LAB_0370ec08;
      }
    }
    puVar8 = PTR_DAT_04bb5ce0;
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
    }
    lVar10 = *(long *)puVar9;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if ((iVar6 == 0x758f7eaf) &&
         (((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)) &&
          (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)))) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == -0x6efba09b) {
            *(float *)(lVar12 + 0x14) = fVar14 * 5.0 + 205.0;
            *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar12 + 0x20) = 0xb4;
            puVar1 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
            puVar1[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    lVar10 = *(long *)puVar8;
    if (lVar10 == 0) {
      fVar14 = 0.0;
      lVar10 = *(long *)puVar9;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
      lVar10 = *(long *)puVar9;
    }
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) &&
          ((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)))) &&
         (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == -0x74938232) {
            *(float *)(lVar12 + 0x14) = fVar14 * -5.0 + 115.0;
            *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar12 + 0x20) = 0;
            puVar1 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
            puVar1[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    lVar10 = *(long *)puVar8;
    if (lVar10 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
    }
    local_5c = local_5c & 0xffffffff;
    lVar10 = *(long *)puVar9;
    fVar14 = fVar14 * 5.0 + 190.0;
    local_54 = fVar14;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if ((iVar6 == 0x758f7eaf) &&
         (((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)) &&
          (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)))) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == -0x2c3fb610) {
            *(float *)(lVar12 + 0x14) = fVar14;
            *(undefined8 *)(lVar12 + 0xc) = 0x43110000;
            *(undefined4 *)(lVar12 + 0x20) = 0x5a;
            puVar9 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41700000;
            puVar9[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    if ((param_2 & 1) == 0) {
      return;
    }
    if (*(int *)PTR_DAT_04bc23a0 != 2) {
      return;
    }
  }
  else {
    if (lVar10 == 0) {
LAB_0370e0b4:
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar5 = FUN_006bd550(*puVar7,0);
        iVar6 = 0;
        if (iVar5 == 0x758f7eaf) {
          if ((*(long *)puVar9 == 0) || (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 == 0))
          goto LAB_0370e0b4;
          iVar6 = *(int *)(lVar10 + 0x244);
        }
      }
    }
    puVar8 = PTR_DAT_04bb2640;
    lVar10 = *(long *)puVar9;
    if (*(int *)(puVar1 + 0xa8) != iVar6) {
      iVar6 = 0;
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x330) == 0) {
          iVar6 = 0;
        }
        else {
          puVar7 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar5 = FUN_006bd550(*puVar7,0);
          iVar6 = 0;
          if (iVar5 == 0x758f7eaf) {
            iVar6 = 0;
            if (*(long *)puVar9 != 0) {
              lVar10 = *(long *)(*(long *)puVar9 + 0x330);
              iVar6 = 0;
              if (lVar10 != 0) {
                iVar6 = *(int *)(lVar10 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar1 + 0xb4) == iVar6) {
        lVar10 = *(long *)PTR_DAT_04bb5ce0;
      }
      else {
        lVar10 = *(long *)puVar9;
        iVar6 = 0;
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x330) == 0) {
            iVar6 = 0;
          }
          else {
            puVar7 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar5 = FUN_006bd550(*puVar7,0);
            iVar6 = 0;
            if (iVar5 == 0x758f7eaf) {
              iVar6 = 0;
              if (*(long *)puVar9 != 0) {
                lVar10 = *(long *)(*(long *)puVar9 + 0x330);
                iVar6 = 0;
                if (lVar10 != 0) {
                  iVar6 = *(int *)(lVar10 + 0x244);
                }
              }
            }
          }
        }
        puVar8 = PTR_DAT_04bb5ce0;
        lVar10 = *(long *)PTR_DAT_04bb5ce0;
        if (*(int *)(puVar1 + 0xb8) != iVar6) {
          if (lVar10 == 0) {
            fVar14 = 0.0;
            lVar10 = *(long *)puVar9;
            if (lVar10 != 0) goto LAB_0370e484;
LAB_0370eac4:
            if (*(int *)(puVar1 + 0x98) != 0) {
              return;
            }
          }
          else {
            fVar14 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
            lVar10 = *(long *)puVar9;
            if (lVar10 == 0) goto LAB_0370eac4;
LAB_0370e484:
            if (*(long *)(lVar10 + 0x330) != 0) {
              puVar7 = (undefined8 *)
                       (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                 (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
              iVar6 = FUN_006bd550(*puVar7,0);
              lVar10 = *(long *)puVar9;
              if (iVar6 == 0x758f7eaf) {
                if (lVar10 == 0) goto LAB_0370eac4;
                lVar11 = *(long *)(lVar10 + 0x330);
                if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 600), lVar12 == lVar11 + 0x250))
                goto LAB_0370e9ec;
                lVar13 = lVar12 + -0x40;
                do {
                  if (*(int *)(lVar12 + -0x40) == -0x17df00c3) {
                    *(float *)(lVar13 + 0x14) = fVar14 * 5.0 + 205.0;
                    *(undefined8 *)(lVar13 + 0xc) = 0x43200000;
                    *(undefined4 *)(lVar13 + 0x20) = 0xb4;
                    puVar2 = PTR_DAT_04bc39e0;
                    *(undefined4 *)(lVar13 + 0x18) = 0x41a00000;
                    puVar2[0x9d] = 1;
                    break;
                  }
                  lVar12 = *(long *)(lVar12 + 8);
                  lVar13 = lVar12 + -0x40;
                } while (lVar13 != lVar11 + 0x210);
              }
              if (lVar10 == 0) goto LAB_0370eac4;
            }
LAB_0370e9ec:
            if (*(long *)(lVar10 + 0x330) == 0) {
LAB_0370ea48:
              bVar3 = true;
            }
            else {
              puVar7 = (undefined8 *)
                       (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                 (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
              iVar6 = FUN_006bd550(*puVar7,0);
              lVar10 = *(long *)puVar9;
              if (iVar6 != 0x758f7eaf) {
                if (lVar10 == 0) goto LAB_0370eac4;
                goto LAB_0370ea48;
              }
              if (lVar10 == 0) goto LAB_0370eac4;
              if (*(long *)(lVar10 + 0x330) == 0) goto LAB_0370ea48;
              bVar3 = *(int *)(*(long *)(lVar10 + 0x330) + 0x248) == 0;
            }
            if (*(long *)(lVar10 + 0x330) == 0) {
LAB_0370ead0:
              bVar4 = *(int *)(puVar1 + 0x98) == 0;
            }
            else {
              puVar7 = (undefined8 *)
                       (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                 (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
              iVar6 = FUN_006bd550(*puVar7,0);
              if (((iVar6 != 0x758f7eaf) || (*(long *)puVar9 == 0)) ||
                 (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 == 0)) goto LAB_0370ead0;
              bVar4 = *(int *)(puVar1 + 0x98) == *(int *)(lVar10 + 0x244);
            }
            if (!bVar3) {
              if (!bVar4) {
                return;
              }
              if (*(long *)puVar8 == 0) {
                fVar14 = 0.0;
              }
              else {
                fVar14 = (float)(uint)(*(int *)(*(long *)puVar8 + 0xf68) << 1);
              }
              local_5c = 0x432f0000;
              local_54 = fVar14 * 5.0 + 190.0;
              FUN_02917b70(0x41700000,0x868a4718,&local_5c,0x10e);
              if (*(long *)puVar8 == 0) {
                return;
              }
              if (*(char *)(*(long *)puVar8 + 0xf5d) == '\0') {
                return;
              }
              goto LAB_0370ec08;
            }
            if (!bVar4) {
              return;
            }
          }
          if (*(long *)puVar8 == 0) {
            fVar14 = 0.0;
          }
          else {
            fVar14 = (float)(uint)(*(int *)(*(long *)puVar8 + 0xf68) << 1);
          }
          local_5c = 0x43110000;
          local_54 = fVar14 * 5.0 + 190.0;
          FUN_02917b70(0x41700000,0xc1f6dfce,&local_5c,0x5a);
          if (*(long *)puVar8 == 0) {
            return;
          }
          if (*(char *)(*(long *)puVar8 + 0xf5d) == '\0') {
            return;
          }
          goto LAB_0370eb40;
        }
      }
      if (lVar10 == 0) {
        fVar14 = 0.0;
        lVar10 = *(long *)puVar9;
      }
      else {
        fVar14 = (float)(uint)(*(int *)(lVar10 + 0xf68) << 1);
        lVar10 = *(long *)puVar9;
      }
      if (lVar10 == 0) {
        return;
      }
      if (*(long *)(lVar10 + 0x330) == 0) {
        return;
      }
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (iVar6 != 0x758f7eaf) {
        return;
      }
      if (*(long *)puVar9 == 0) {
        return;
      }
      lVar10 = *(long *)(*(long *)puVar9 + 0x330);
      if (lVar10 == 0) {
        return;
      }
      lVar11 = *(long *)(lVar10 + 600);
      if (lVar11 == lVar10 + 0x250) {
        return;
      }
      lVar12 = lVar11 + -0x40;
      while (*(int *)(lVar11 + -0x40) != -0x6efba09b) {
        lVar11 = *(long *)(lVar11 + 8);
        lVar12 = lVar11 + -0x40;
        if (lVar12 == lVar10 + 0x210) {
          return;
        }
      }
LAB_0370ecc4:
      *(float *)(lVar12 + 0x14) = fVar14 * 5.0 + 205.0;
      *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
      *(undefined4 *)(lVar12 + 0x20) = 0xb4;
      puVar9 = PTR_DAT_04bc39e0;
      *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
      puVar9[0x9d] = 1;
      return;
    }
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) &&
          ((lVar10 = *(long *)puVar9, lVar10 != 0 && (*(long *)(lVar10 + 0x330) != 0)))) &&
         (*(int *)(*(long *)(lVar10 + 0x330) + 0x248) != 0)) {
        if (*(long *)PTR_DAT_04bb5ce0 == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
        }
        local_5c = local_5c & 0xffffffff;
        fVar14 = fVar14 * 5.0 + 190.0;
        local_54 = fVar14;
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)puVar8 + 0x18))
                           (*(long **)puVar8,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        if ((((iVar6 == 0x758f7eaf) && (*(long *)puVar9 != 0)) &&
            (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)) &&
           (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
          lVar12 = lVar11 + -0x40;
          do {
            if (*(int *)(lVar11 + -0x40) == 0x7fff3f46) goto LAB_0370ebdc;
            lVar11 = *(long *)(lVar11 + 8);
            lVar12 = lVar11 + -0x40;
          } while (lVar12 != lVar10 + 0x210);
        }
        goto LAB_0370ec08;
      }
    }
    puVar8 = PTR_DAT_04bb5ce0;
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf68) << 1);
    }
    lVar10 = *(long *)puVar9;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if (((iVar6 == 0x758f7eaf) &&
          ((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)))) &&
         (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == -0x6efba09b) {
            *(float *)(lVar12 + 0x14) = fVar14 * 5.0 + 205.0;
            *(undefined8 *)(lVar12 + 0xc) = 0x43200000;
            *(undefined4 *)(lVar12 + 0x20) = 0xb4;
            puVar1 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41a00000;
            puVar1[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
    if (*(long *)puVar8 == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(uint)(*(int *)(*(long *)puVar8 + 0xf68) << 1);
    }
    local_5c = local_5c & 0xffffffff;
    lVar10 = *(long *)puVar9;
    fVar14 = fVar14 * 5.0 + 190.0;
    local_54 = fVar14;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if ((iVar6 == 0x758f7eaf) &&
         (((*(long *)puVar9 != 0 && (lVar10 = *(long *)(*(long *)puVar9 + 0x330), lVar10 != 0)) &&
          (lVar11 = *(long *)(lVar10 + 600), lVar11 != lVar10 + 0x250)))) {
        lVar12 = lVar11 + -0x40;
        do {
          if (*(int *)(lVar11 + -0x40) == -0x7ad2e1aa) {
            *(float *)(lVar12 + 0x14) = fVar14;
            *(undefined8 *)(lVar12 + 0xc) = 0x43110000;
            *(undefined4 *)(lVar12 + 0x20) = 0x5a;
            puVar9 = PTR_DAT_04bc39e0;
            *(undefined4 *)(lVar12 + 0x18) = 0x41700000;
            puVar9[0x9d] = 1;
            break;
          }
          lVar11 = *(long *)(lVar11 + 8);
          lVar12 = lVar11 + -0x40;
        } while (lVar12 != lVar10 + 0x210);
      }
    }
LAB_0370eb40:
    if ((param_2 & 1) == 0) {
      return;
    }
    if (*(int *)PTR_DAT_04bc23a0 != 1) {
      return;
    }
  }
  puVar9 = PTR_DAT_04bb2108;
LAB_0370eb70:
  local_5c = CONCAT44(local_5c._4_4_,0x43200000);
  FUN_02932210(PTR_DAT_04bc39e0,&local_5c,puVar9);
  return;
LAB_0370ebdc:
  *(float *)(lVar12 + 0x14) = fVar14;
  *(undefined8 *)(lVar12 + 0xc) = 0x432f0000;
  *(undefined4 *)(lVar12 + 0x20) = 0x10e;
  puVar9 = PTR_DAT_04bc39e0;
  *(undefined4 *)(lVar12 + 0x18) = 0x41700000;
  puVar9[0x9d] = 1;
LAB_0370ec08:
  if ((param_2 & 1) == 0) {
    return;
  }
  if (*(int *)PTR_DAT_04bc23a0 != 0) {
    return;
  }
  puVar9 = PTR_DAT_04bb2cf8;
  goto LAB_0370eb70;
}

