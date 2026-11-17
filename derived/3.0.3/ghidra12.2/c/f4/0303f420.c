
/* WARNING: Removing unreachable block (ram,0x0303ff2c) */

void FUN_0303f420(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  long *plVar26;
  int *piVar27;
  float fVar28;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_84;
  
  iVar24 = *(int *)(*(long *)(param_1 + 0x1c2a8) + 0x128) * 0x28;
  puVar1 = PTR_DAT_04bc4da0 + 0x10;
  puVar2 = PTR_DAT_04bc0cb8 + 0x10;
  puVar3 = PTR_DAT_04bc4f00 + 0x10;
  iVar5 = iVar24;
  if (iVar24 <= iVar24 + 0x27) {
    iVar5 = iVar24 + 0x27;
  }
LAB_0303f4c0:
  piVar25 = *(int **)(param_1 + 0x1c2a8);
  piVar27 = *(int **)(piVar25 + 0x34);
  if (piVar27 != piVar25 + 0x32) {
    iVar13 = *piVar25;
    piVar23 = piVar27 + -2;
    do {
      if (**(int **)(piVar27 + -2) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = **(undefined8 **)(*(int **)(piVar27 + -2) + 2);
      }
      iVar11 = FUN_03039640(piVar25,uVar16);
      if ((iVar11 <= iVar24) && (iVar24 < iVar11 + iVar13)) {
        if ((uint)(iVar24 - iVar11) < **(uint **)piVar23) {
          plVar26 = *(long **)(*(long *)(*(uint **)piVar23 + 2) + (long)(iVar24 - iVar11) * 8);
          goto LAB_0303f554;
        }
        break;
      }
      piVar27 = *(int **)(piVar27 + 2);
      piVar23 = piVar27 + -2;
    } while (piVar23 != piVar25 + 0x30);
  }
  plVar26 = (long *)0x0;
LAB_0303f554:
  if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bc4d90 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((plVar26 != (long *)0x0) &&
     (uVar14 = (**(code **)*plVar26)(plVar26,PTR_DAT_04bc4d90), (uVar14 & 1) != 0)) {
    local_9c = FUN_0303b860(*(undefined8 *)(param_1 + 0x1c2b0),iVar24);
    switch(local_9c) {
    case 0:
      if ((*(byte *)((long)plVar26 + 0x2c3) & 1) != 0) {
        uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        (**(code **)(*plVar26 + 0x140))(plVar26,0,uVar12 & 1);
      }
      lVar19 = plVar26[99];
      if (((*(int *)(lVar19 + 0x18) != 0) && (*(long *)(lVar19 + 0x10) != 0)) &&
         (lVar20 = *(long *)(lVar19 + 0x10) - (long)*(int *)(lVar19 + 0x1c), lVar20 != 0)) {
        plVar17 = *(long **)(lVar20 + 0x1b0);
        if (plVar17 != (long *)0x0) {
          uVar14 = (**(code **)(*plVar17 + 0x50))(plVar17);
          if ((uVar14 & 1) != 0) goto LAB_0303f630;
          lVar19 = plVar26[99];
        }
        FUN_03464670(lVar19,0);
      }
LAB_0303f630:
      plVar17 = *(long **)plVar26[0x5e];
      if (plVar17 != (long *)0x0) {
        local_b0 = CONCAT44(local_b0._4_4_,7);
        local_b8 = puVar3;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_b8);
        fVar28 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
        if ((fVar28 < -1.1920929e-07) || (1.1920929e-07 < fVar28)) {
          local_b8 = PTR_DAT_04bc4f00 + 0x10;
          local_b0 = CONCAT44(local_b0._4_4_,0x14);
          (**(code **)(*plVar17 + 0x18))(plVar17,&local_b8);
          (**(code **)(plVar17[3] + 0x158))(0,plVar17[1]);
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,2);
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(int)plVar26[0x56]);
      if ((int)plVar26[0x56] != 2) {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x0303f704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0303feec + (ulong)DAT_041837c2 * 4))();
        return;
      }
      break;
    case 1:
      if ((*(byte *)((long)plVar26 + 0x2c3) & 1) == 0) {
        uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        (**(code **)(*plVar26 + 0x140))(plVar26,1,uVar12 & 1);
      }
      lVar19 = plVar26[99];
      if ((((*(int *)(lVar19 + 0x18) != 0) && (*(long *)(lVar19 + 0x10) != 0)) &&
          (lVar19 = *(long *)(lVar19 + 0x10) - (long)*(int *)(lVar19 + 0x1c), lVar19 != 0)) &&
         ((plVar17 = *(long **)(lVar19 + 0x1b0), plVar17 != (long *)0x0 &&
          (uVar14 = (**(code **)(*plVar17 + 0x50))(), (uVar14 & 1) != 0)))) {
        FUN_03464520(plVar26[99],0);
      }
      plVar17 = *(long **)plVar26[0x5e];
      if (plVar17 != (long *)0x0) {
        puVar4 = PTR_DAT_04bc4f00 + 0x10;
        local_b0 = CONCAT44(local_b0._4_4_,7);
        local_b8 = puVar4;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_b8);
        fVar28 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
        if ((fVar28 < -1.1920929e-07) || (1.1920929e-07 < fVar28)) {
          local_b0 = CONCAT44(local_b0._4_4_,0x14);
          local_b8 = puVar4;
          (**(code **)(*plVar17 + 0x18))(plVar17,&local_b8);
          (**(code **)(plVar17[3] + 0x158))(0,plVar17[1]);
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,2);
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(int)plVar26[0x56]);
      if ((int)plVar26[0x56] != 2) {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x0303f84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0303feec + (ulong)DAT_041837bd * 4))();
        return;
      }
      break;
    case 2:
      uVar14 = 0;
      lVar19 = *(long *)(param_1 + 0x210) + 0x6b8;
      puVar21 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0x580);
      do {
        puVar6 = puVar21 + -1;
        if (0x27 < uVar14) {
          puVar6 = (undefined8 *)(lVar19 + (ulong)((int)uVar14 - 0x28) * 8);
        }
        uVar18 = uVar14;
        if ((long *)*puVar6 == plVar26) goto LAB_0303fa10;
        uVar18 = uVar14 + 1;
        puVar6 = puVar21;
        if (0x27 < uVar18) {
          puVar6 = (undefined8 *)(lVar19 + (ulong)((int)uVar14 - 0x27) * 8);
        }
        if ((long *)*puVar6 == plVar26) goto LAB_0303fa10;
        uVar14 = uVar14 + 2;
        puVar21 = puVar21 + 2;
      } while (uVar14 != 0x50);
      uVar18 = 0;
LAB_0303fa10:
      uVar12 = (uint)uVar18;
      if (*(uint *)(param_1 + 0x340) <= uVar12) {
        uVar12 = 0;
      }
      plVar17 = *(long **)(*(long *)(param_1 + 0x348) + (ulong)uVar12 * 8);
      if (((plVar17[0x42] != 0) &&
          ((plVar15 = *(long **)(plVar17[0x42] + 0x1b0), plVar15 == (long *)0x0 ||
           (uVar14 = (**(code **)(*plVar15 + 0x58))(), (uVar14 & 1) == 0)))) ||
         (1 < *(uint *)(plVar17 + 0x36))) {
        if ((*(byte *)((long)plVar26 + 0x2c3) & 1) == 0) {
          uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          (**(code **)(*plVar26 + 0x140))(plVar26,1,uVar12 & 1);
        }
        lVar19 = plVar26[99];
        if (((*(int *)(lVar19 + 0x18) != 0) && (*(long *)(lVar19 + 0x10) != 0)) &&
           (lVar20 = *(long *)(lVar19 + 0x10) - (long)*(int *)(lVar19 + 0x1c), lVar20 != 0)) {
          plVar17 = *(long **)(lVar20 + 0x1b0);
          if (plVar17 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar17 + 0x50))(plVar17);
            if ((uVar14 & 1) != 0) goto LAB_0303fb6c;
            lVar19 = plVar26[99];
          }
          FUN_03464670(lVar19,0);
        }
LAB_0303fb6c:
        plVar17 = *(long **)plVar26[0x5e];
        if (plVar17 != (long *)0x0) {
          puVar4 = PTR_DAT_04bc4f00 + 0x10;
          local_b0 = CONCAT44(local_b0._4_4_,7);
          local_b8 = puVar4;
          (**(code **)(*plVar17 + 0x20))(plVar17,&local_b8);
          fVar28 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
          bVar9 = false;
          bVar8 = true;
          if (-1.1920929e-07 <= fVar28) {
            bVar9 = false;
            bVar8 = true;
            if (!NAN(fVar28)) {
              bVar9 = fVar28 == 1.1920929e-07;
              bVar8 = 1.1920929e-07 <= fVar28;
            }
          }
          if (bVar8 && !bVar9) {
            local_b0 = CONCAT44(local_b0._4_4_,0x14);
            local_b8 = puVar4;
            (**(code **)(*plVar17 + 0x18))(plVar17,&local_b8);
            (**(code **)(plVar17[3] + 0x158))(0,plVar17[1]);
          }
        }
        local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(int)plVar26[0x56]);
        if ((int)plVar26[0x56] != 0) {
          local_b8 = (undefined *)((ulong)local_b8._4_4_ << 0x20);
                    /* WARNING: Could not recover jumptable at 0x0303fc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_0303feec + (ulong)DAT_041837b1 * 4))();
          return;
        }
        break;
      }
      FUN_0303ba80(&local_98,*(undefined8 *)(param_1 + 0x1c2b0),iVar24);
      lVar20 = *(long *)(param_1 + 0x1c2b0);
      lVar19 = *(long *)(lVar20 + 0x48);
      if (lVar19 != 0) {
        uVar14 = *(ulong *)(lVar20 + 0x10);
        iVar13 = *(int *)(lVar20 + 0x18);
        lVar22 = lVar19;
        if (*(char *)(lVar20 + 8) == '\0') {
LAB_0303fa90:
          if (*(char *)(lVar22 + 0x20) == '\0') {
            uVar18 = *(ulong *)(lVar22 + 0x28);
            if (uVar14 != uVar18) {
              if (uVar14 < uVar18) goto LAB_0303fa84;
              if (uVar14 <= uVar18) goto LAB_0303fc8c;
LAB_0303fadc:
              lVar22 = *(long *)(lVar22 + 0x10);
              goto joined_r0x0303fa8c;
            }
            iVar11 = *(int *)(lVar22 + 0x30);
            if (iVar13 == iVar11) {
              iVar7 = *(int *)(lVar22 + 0x34);
              bVar9 = SBORROW4(iVar7,iVar24);
              iVar11 = iVar7 - iVar24;
              if (iVar24 < iVar7) goto LAB_0303fa84;
LAB_0303fad8:
              if (iVar11 < 0 != bVar9) goto LAB_0303fadc;
              goto LAB_0303fc8c;
            }
            if (iVar11 <= iVar13) {
              bVar9 = SBORROW4(iVar11,iVar13);
              iVar11 = iVar11 - iVar13;
              goto LAB_0303fad8;
            }
          }
LAB_0303fa84:
          lVar22 = *(long *)(lVar22 + 8);
joined_r0x0303fa8c:
          if (lVar22 == 0) goto LAB_0303fae8;
          goto LAB_0303fa90;
        }
LAB_0303fc48:
        if (*(char *)(lVar22 + 0x20) == '\0') {
LAB_0303fc3c:
          lVar22 = *(long *)(lVar22 + 0x10);
joined_r0x0303fc7c:
          if (lVar22 == 0) goto LAB_0303fae8;
          goto LAB_0303fc48;
        }
        iVar11 = *(int *)(lVar22 + 0x30);
        if (iVar13 == iVar11) {
          if (iVar24 < *(int *)(lVar22 + 0x34)) goto LAB_0303fc74;
          if (*(int *)(lVar22 + 0x34) < iVar24) goto LAB_0303fc3c;
          goto LAB_0303fc8c;
        }
        if (iVar13 < iVar11) {
LAB_0303fc74:
          lVar22 = *(long *)(lVar22 + 8);
          goto joined_r0x0303fc7c;
        }
        if (iVar11 < iVar13) goto LAB_0303fc3c;
LAB_0303fc8c:
        lVar22 = *(long *)(lVar22 + 0x70);
        goto joined_r0x0303fc90;
      }
      lVar22 = 0;
      goto LAB_0303fd68;
    case 3:
      if ((*(byte *)((long)plVar26 + 0x2c3) & 1) == 0) {
        uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        (**(code **)(*plVar26 + 0x140))(plVar26,1,uVar12 & 1);
      }
      lVar19 = plVar26[99];
      if (((*(int *)(lVar19 + 0x18) != 0) && (*(long *)(lVar19 + 0x10) != 0)) &&
         (lVar20 = *(long *)(lVar19 + 0x10) - (long)*(int *)(lVar19 + 0x1c), lVar20 != 0)) {
        plVar17 = *(long **)(lVar20 + 0x1b0);
        if (plVar17 != (long *)0x0) {
          uVar14 = (**(code **)(*plVar17 + 0x50))(plVar17);
          if ((uVar14 & 1) != 0) goto LAB_0303f938;
          lVar19 = plVar26[99];
        }
        FUN_03464670(lVar19,0);
      }
LAB_0303f938:
      plVar17 = *(long **)plVar26[0x5e];
      if (plVar17 != (long *)0x0) {
        puVar4 = PTR_DAT_04bc4f00 + 0x10;
        local_b0 = CONCAT44(local_b0._4_4_,7);
        local_b8 = puVar4;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_b8);
        fVar28 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
        fVar28 = fVar28 + -1.0;
        bVar9 = false;
        bVar8 = true;
        if (-1.1920929e-07 <= fVar28) {
          bVar9 = false;
          bVar8 = true;
          if (!NAN(fVar28)) {
            bVar9 = fVar28 == 1.1920929e-07;
            bVar8 = 1.1920929e-07 <= fVar28;
          }
        }
        if (bVar8 && !bVar9) {
          local_b0 = CONCAT44(local_b0._4_4_,0x14);
          local_b8 = puVar4;
          (**(code **)(*plVar17 + 0x18))(plVar17,&local_b8);
          (**(code **)(plVar17[3] + 0x158))(0x3f800000,plVar17[1]);
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,2);
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(int)plVar26[0x56]);
      if ((int)plVar26[0x56] != 2) {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x0303fa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0303feec + (ulong)DAT_041837ae * 4))();
        return;
      }
    }
    goto switchD_0303f5b4_default;
  }
  goto LAB_0303f4b4;
LAB_0303fae8:
  lVar22 = 0;
joined_r0x0303fc90:
  if (*(char *)(lVar20 + 8) != '\0') {
    do {
      if (*(char *)(lVar19 + 0x20) == '\0') {
LAB_0303fd0c:
        lVar19 = *(long *)(lVar19 + 0x10);
      }
      else {
        iVar11 = *(int *)(lVar19 + 0x30);
        if (iVar13 == iVar11) {
          if (*(int *)(lVar19 + 0x34) <= iVar24) {
            if (*(int *)(lVar19 + 0x34) < iVar24) goto LAB_0303fd0c;
            goto LAB_0303fd5c;
          }
        }
        else if (iVar11 <= iVar13) {
          if (iVar11 < iVar13) goto LAB_0303fd0c;
          goto LAB_0303fd5c;
        }
        lVar19 = *(long *)(lVar19 + 8);
      }
    } while (lVar19 != 0);
LAB_0303fd68:
    lVar19 = 0;
    goto LAB_0303fd6c;
  }
LAB_0303fcac:
  if (*(char *)(lVar19 + 0x20) == '\0') {
    uVar18 = *(ulong *)(lVar19 + 0x28);
    if (uVar14 != uVar18) {
      if (uVar14 < uVar18) goto LAB_0303fca0;
      if (uVar14 <= uVar18) goto LAB_0303fd5c;
LAB_0303fcf8:
      lVar19 = *(long *)(lVar19 + 0x10);
      goto joined_r0x0303fd00;
    }
    iVar11 = *(int *)(lVar19 + 0x30);
    if (iVar13 == iVar11) {
      iVar7 = *(int *)(lVar19 + 0x34);
      bVar9 = SBORROW4(iVar7,iVar24);
      iVar11 = iVar7 - iVar24;
      if (iVar24 < iVar7) goto LAB_0303fca0;
LAB_0303fcf4:
      if (iVar11 < 0 != bVar9) goto LAB_0303fcf8;
      goto LAB_0303fd5c;
    }
    if (iVar11 <= iVar13) {
      bVar9 = SBORROW4(iVar11,iVar13);
      iVar11 = iVar11 - iVar13;
      goto LAB_0303fcf4;
    }
  }
LAB_0303fca0:
  lVar19 = *(long *)(lVar19 + 8);
joined_r0x0303fd00:
  if (lVar19 == 0) goto LAB_0303fd68;
  goto LAB_0303fcac;
LAB_0303fd5c:
  lVar19 = lVar19 + 0x78;
LAB_0303fd6c:
  FUN_007ef010(&local_b8,&local_98);
  plVar17[0x44] = lVar22;
  *(undefined2 *)(plVar17 + 0x43) = (undefined2)local_b8;
  if ((char)plVar17[0x46] == '\0') {
    plVar17[0x45] = lVar19;
  }
  local_b0 = lVar22;
  lStack_a8 = lVar19;
  (**(code **)(*plVar17 + 0xa8))(plVar17);
  if ((*(byte *)((long)plVar26 + 0x2c3) & 1) == 0) {
    uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
    (**(code **)(*plVar26 + 0x140))(plVar26,1,uVar12 & 1);
  }
  lVar19 = plVar26[99];
  if ((((*(int *)(lVar19 + 0x18) != 0) && (*(long *)(lVar19 + 0x10) != 0)) &&
      (lVar19 = *(long *)(lVar19 + 0x10) - (long)*(int *)(lVar19 + 0x1c), lVar19 != 0)) &&
     ((plVar17 = *(long **)(lVar19 + 0x1b0), plVar17 != (long *)0x0 &&
      (uVar14 = (**(code **)(*plVar17 + 0x50))(), (uVar14 & 1) != 0)))) {
    FUN_03464520(plVar26[99],0);
  }
  plVar17 = *(long **)plVar26[0x5e];
  if (plVar17 != (long *)0x0) {
    puVar4 = PTR_DAT_04bc4f00 + 0x10;
    local_90 = 7;
    local_98 = puVar4;
    (**(code **)(*plVar17 + 0x20))(plVar17,&local_98);
    fVar28 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
    if ((fVar28 < -1.1920929e-07) || (1.1920929e-07 < fVar28)) {
      local_90 = 0x14;
      local_98 = puVar4;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_98);
      (**(code **)(plVar17[3] + 0x158))(0,plVar17[1]);
    }
  }
  local_84 = 2;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)plVar26[0x56]);
  if ((int)plVar26[0x56] != 2) {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x0303fee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0303feec + (ulong)DAT_041837b8 * 4))();
    return;
  }
switchD_0303f5b4_default:
  uVar14 = 0;
  lVar19 = *(long *)(param_1 + 0x210) + 0x6b8;
  puVar21 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0x580);
  do {
    puVar6 = puVar21 + -1;
    if (0x27 < uVar14) {
      puVar6 = (undefined8 *)(lVar19 + (ulong)((int)uVar14 - 0x28) * 8);
    }
    uVar18 = uVar14;
    if ((long *)*puVar6 == plVar26) goto LAB_0303ffa4;
    uVar18 = uVar14 + 1;
    puVar6 = puVar21;
    if (0x27 < uVar18) {
      puVar6 = (undefined8 *)(lVar19 + (ulong)((int)uVar14 - 0x27) * 8);
    }
    if ((long *)*puVar6 == plVar26) goto LAB_0303ffa4;
    uVar14 = uVar14 + 2;
    puVar21 = puVar21 + 2;
  } while (uVar14 != 0x50);
  uVar18 = 0;
LAB_0303ffa4:
  uVar12 = (uint)uVar18;
  if (*(uint *)(param_1 + 0x340) <= uVar12) {
    uVar12 = 0;
  }
  lVar19 = *(long *)(*(long *)(param_1 + 0x348) + (ulong)uVar12 * 8);
  lVar20 = *(long *)(lVar19 + 0x210);
  if ((lVar20 != 0) && (plVar26 = *(long **)(lVar20 + 0x210), plVar26 != (long *)0x0)) {
    iVar13 = *(int *)(lVar19 + 0x1b0);
    local_b0 = CONCAT44(local_b0._4_4_,7);
    local_b8 = puVar2;
    (**(code **)(*plVar26 + 0x20))(plVar26,&local_b8);
    bVar10 = (**(code **)(plVar26[3] + 0x90))(plVar26[1]);
    if ((iVar13 == 3) != (bool)(bVar10 & 1)) {
      local_b8 = PTR_DAT_04bc0cb8 + 0x10;
      local_b0 = CONCAT44(local_b0._4_4_,7);
      (**(code **)(*plVar26 + 0x18))(plVar26,&local_b8);
      (**(code **)(plVar26[3] + 0x88))(plVar26[1],iVar13 == 3);
    }
  }
LAB_0303f4b4:
  bVar9 = iVar24 == iVar5;
  iVar24 = iVar24 + 1;
  if (bVar9) {
    return;
  }
  goto LAB_0303f4c0;
}

