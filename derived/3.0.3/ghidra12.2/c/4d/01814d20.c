
/* WARNING: Removing unreachable block (ram,0x01815514) */

void FUN_01814d20(long *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long *plVar16;
  byte bVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  undefined *local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  
  if (param_1[0x7a] == 0) {
    return;
  }
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  if (*(char *)((long)param_1 + 0x494) != '\0') {
    if (uVar5 == 0xffff) {
LAB_01814e48:
      bVar9 = false;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1a);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8);
      if (0xff < uVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((*puVar2 >> 0x1a & 1) == 0) ||
          (local_78 = (undefined *)CONCAT44(local_78._4_4_,1), (*puVar2 >> 1 & 1) == 0)) ||
         (lVar18 = *(long *)PTR_DAT_04bb59d8, lVar18 == 0)) goto LAB_01814e48;
      iVar11 = (int)((float)(int)*(float *)((long)param_1 + 0x334) / 5.0) -
               (uint)(*(float *)((long)param_1 + 0x334) < 0.0);
      if ((iVar11 < *(int *)(lVar18 + 0x28) || *(int *)(lVar18 + 0x38) < iVar11) ||
         (iVar11 = (int)((float)(int)*(float *)((long)param_1 + 0x33c) / 5.0) -
                   (uint)(*(float *)((long)param_1 + 0x33c) < 0.0), iVar11 < *(int *)(lVar18 + 0x2c)
         )) {
        bVar9 = true;
      }
      else {
        bVar9 = *(int *)(lVar18 + 0x3c) < iVar11;
      }
    }
    *(bool *)((long)param_1 + 0x494) = bVar9;
  }
  if (uVar5 != 0xffff) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1a);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8);
    if (0xff < uVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar2 >> 0x1a & 1) != 0) &&
        (local_78 = (undefined *)CONCAT44(local_78._4_4_,1), (*puVar2 >> 1 & 1) != 0)) &&
       (*(char *)((long)param_1 + 0x431) == '\0')) {
      iVar11 = (int)param_1[0x92];
      if (*(char *)((long)param_1 + 0x495) == '\0') {
        if (0 < iVar11) {
          *(int *)(param_1 + 0x92) = iVar11 + -1;
          pfVar13 = (float *)(**(code **)(*(long *)(param_1[0x8c] + 0x1b0) + 0xf0))
                                       (param_1[0x8c] + 0x1b0);
          fVar23 = *pfVar13;
          pfVar13 = (float *)(**(code **)(*(long *)(param_1[0x8c] + 0x1e0) + 0xf0))
                                       (param_1[0x8c] + 0x1e0);
          fVar23 = fVar23 - *pfVar13;
          if (fVar23 == 0.0) {
            fVar23 = 1.0;
          }
          else {
            fVar22 = fVar23 - (float)(int)param_1[0x92];
            fVar23 = (1.0 / (fVar23 * fVar23)) * fVar22 * fVar22;
          }
          lVar18 = *(long *)(*(long *)(param_1[9] + 0x60) + 0x1150);
          if (lVar18 != 0) {
            uVar12 = *(uint *)(lVar18 + 0x20);
            if ((uint)*(ushort *)(lVar18 + 0x284) <= *(uint *)(lVar18 + 0x20)) {
              uVar12 = (uint)*(ushort *)(lVar18 + 0x284);
            }
            if (uVar12 != 0) {
              lVar18 = *(long *)(lVar18 + 0x28);
              uVar20 = 0;
              do {
                FUN_03ad4c20(fVar23,*(undefined8 *)(lVar18 + (long)(int)uVar20 * 0x38),0xffffffff,
                             0xffffffff);
                uVar20 = uVar20 + 1;
              } while (uVar12 != uVar20);
            }
          }
        }
      }
      else {
        *(int *)(param_1 + 0x92) = iVar11 + -1;
        pfVar13 = (float *)(**(code **)(*(long *)(param_1[0x8c] + 0x1b0) + 0xf0))
                                     (param_1[0x8c] + 0x1b0);
        fVar23 = *pfVar13;
        pfVar13 = (float *)(**(code **)(*(long *)(param_1[0x8c] + 0x1e0) + 0xf0))
                                     (param_1[0x8c] + 0x1e0);
        fVar23 = fVar23 - *pfVar13;
        fVar22 = 0.0;
        if (fVar23 != 0.0) {
          fVar22 = fVar23 - (float)(int)param_1[0x92];
          fVar22 = fVar22 * fVar22 * (-1.0 / (fVar23 * fVar23)) + 1.0;
        }
        lVar18 = *(long *)(*(long *)(param_1[9] + 0x60) + 0x1150);
        if (lVar18 != 0) {
          uVar12 = *(uint *)(lVar18 + 0x20);
          if ((uint)*(ushort *)(lVar18 + 0x284) <= *(uint *)(lVar18 + 0x20)) {
            uVar12 = (uint)*(ushort *)(lVar18 + 0x284);
          }
          if (uVar12 != 0) {
            lVar18 = *(long *)(lVar18 + 0x28);
            uVar20 = 0;
            do {
              FUN_03ad4c20(fVar22,*(undefined8 *)(lVar18 + (long)(int)uVar20 * 0x38),0xffffffff,
                           0xffffffff);
              uVar20 = uVar20 + 1;
            } while (uVar12 != uVar20);
          }
        }
        if (((int)param_1[0x92] < 1) && (param_1[0x7a] != 0)) {
          FUN_006fb3d0();
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x218))(param_1);
  uVar14 = (**(code **)(*param_1 + 0x1c8))(param_1);
  if ((uVar14 & 1) == 0) {
LAB_018153fc:
    bVar17 = *(byte *)(param_1 + 0x7c) & 0xfe;
  }
  else {
    fVar23 = *(float *)(param_1[0x60] + 0x278);
    fVar22 = *(float *)(param_1[0x60] + 0x280);
    local_70 = 0;
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_78 = PTR_DAT_04bbfe68 + 0x10;
    local_98 = 0;
    local_80 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iStack_7c = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    lVar18 = *(long *)PTR_DAT_04bb2720;
    local_88 = local_a0;
    if (lVar18 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar18 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar19 + 7);
    uVar10 = FUN_017baf44();
    local_68 = CONCAT71(local_68._1_7_,uVar10) & 0xffffffffffffff01;
    puVar15 = (undefined4 *)FUN_01a5190c(&local_78,0,&local_88,&local_a0);
    local_90 = *(undefined2 *)puVar15;
    local_8e = *(undefined1 *)((long)puVar15 + 2);
    local_8d = *(undefined1 *)((long)puVar15 + 3);
    uVar7 = *puVar15;
    uVar4 = puVar15[1];
    lVar18 = *(long *)PTR_DAT_04bbbc68;
    local_8c = uVar4;
    if (((((lVar18 == 0) || (*(long *)(lVar18 + 0xb0) == 0)) ||
         (*(long *)(*(long *)(lVar18 + 0xb0) + 8) == 0)) ||
        ((*(long *)(lVar18 + 0x488) == 0 || (*(long *)(*(long *)(lVar18 + 0x488) + 8) == 0)))) ||
       ((*(long *)(lVar18 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar18 + 0x2b0) + 8) == 0)))) {
LAB_01815244:
      puVar8 = PTR_DAT_04bb43c0;
      lVar21 = *(long *)PTR_DAT_04bb43c0;
      uVar12 = FUN_0277d6c4(&local_90);
      lVar18 = *(long *)puVar8;
      if (lVar18 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          local_78 = PTR_DAT_04bc0510 + 0x10;
          local_68 = 0;
          local_70 = uVar7;
          local_6c = uVar4;
          uVar12 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar8 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar18 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_90);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if (uVar12 < *(uint *)(lVar18 + 0x1d8)) {
                uVar14 = *(ulong *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar12 * 8);
                if (uVar14 != 0) {
                  local_68 = uVar14;
                }
              }
            }
          }
          uVar14 = FUN_01ae5f4c(&local_78);
          if ((uVar14 & 1) != 0) goto LAB_01815340;
        }
      }
      goto LAB_018153fc;
    }
    uVar12 = FUN_0277d6c4(&local_90);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar12) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_01815244;
LAB_01815340:
    fVar22 = (float)local_98._4_4_ * 5.0 + 2.5;
    fVar23 = (float)(int)local_98 * 5.0 + 2.5;
    uVar12 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    nn::os::LockMutex((MutexType *)&DAT_050de4b0);
    bVar9 = true;
    if ((uVar12 < 0x120) &&
       (uVar6 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0),
       uVar20 = uVar12 + uVar6 * 0x120, (uVar6 < 0x100 && uVar20 != 0xffffffff) && uVar20 >> 0xd < 9
       )) {
      bVar9 = (*(uint *)(PTR_DAT_04bbbb30 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1)
              == 0;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_050de4b0);
    bVar17 = *(byte *)(param_1 + 0x7c) & 0xfe | bVar9;
  }
  *(byte *)(param_1 + 0x7c) = bVar17;
  if ((bVar17 == 0) && ((param_1[0x7a] == 0 || (*(int *)(param_1[0x7a] + 0x2d0) == 0)))) {
    if ((param_1[9] != 0) &&
       ((plVar16 = *(long **)(param_1[9] + 0x60), plVar16 != (long *)0x0 &&
        (uVar14 = (**(code **)(*plVar16 + 0x100))(), (uVar14 & 1) != 0)))) goto LAB_01815494;
    uVar12 = 1;
    lVar18 = param_1[9];
  }
  else {
    if (((param_1[9] == 0) || (plVar16 = *(long **)(param_1[9] + 0x60), plVar16 == (long *)0x0)) ||
       (uVar14 = (**(code **)(*plVar16 + 0x100))(), (uVar14 & 1) == 0)) goto LAB_01815494;
    uVar12 = 0;
    lVar18 = param_1[9];
  }
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x60), lVar18 != 0)) {
    *(uint *)(lVar18 + 0x11a0) = *(uint *)(lVar18 + 0x11a0) & 0xfffffffe | uVar12;
  }
LAB_01815494:
  lVar18 = param_1[0x7a];
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x2d8) + 0x28))(lVar18 + 0x2d8);
    puVar8 = PTR_DAT_04bb27d0;
    if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
      (**(code **)(*(long *)(param_1[0x7a] + 0x2d8) + 0x28))(param_1[0x7a] + 0x2d8);
      lVar18 = **(long **)puVar8;
      bVar17 = *(byte *)(lVar18 + 0x473);
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(lVar18 + 0x48);
        uVar14 = (long)(char)bVar17 & 0xffffffff;
        pbVar3 = pbVar1 + uVar14 * 0x80;
        if (7 < bVar17) {
          pbVar3 = pbVar1;
        }
        if ((*pbVar3 >> 3 & 1) != 0) {
          lVar18 = (*(long **)puVar8)[2] + 0x108;
          lVar21 = lVar18 + uVar14 * 0xc;
          if (0xb < bVar17) {
            lVar21 = lVar18;
          }
          if (*(char *)(lVar21 + 10) == '\0') {
            return;
          }
        }
      }
      if (*(char *)((long)param_1 + 0x432) == '\0') {
        lVar18 = param_1[0x7a];
        plVar16 = (long *)(**(code **)(*(long *)(lVar18 + 0x2d8) + 0x20))(lVar18 + 0x2d8);
        (**(code **)(*plVar16 + 0x38))(plVar16,*(undefined4 *)(lVar18 + 0x2e0),0);
      }
    }
  }
  return;
}

