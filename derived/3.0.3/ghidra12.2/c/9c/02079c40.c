
/* WARNING: Removing unreachable block (ram,0x0207a2a4) */
/* WARNING: Removing unreachable block (ram,0x02079d54) */
/* WARNING: Removing unreachable block (ram,0x02079d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02079c40(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ushort *puVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_f8;
  float local_f0;
  undefined **local_e8;
  undefined4 *puStack_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  ushort *puStack_c0;
  uint *local_b8;
  undefined4 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  undefined4 local_58;
  uint local_54;
  
  fVar24 = (float)FUN_02078678(param_4,0);
  if (((fVar24 == 0.0) && (param_2 == 0.0)) && (param_3 == 0.0)) {
    *(undefined4 *)((long)param_4 + 0x9c) = 3;
    return 1;
  }
  local_f8 = *(undefined8 *)(*(long *)(*param_4 + 0x68) + 0x278);
  local_f0 = *(float *)(*(long *)(*param_4 + 0x68) + 0x280);
  fVar9 = (float)local_f8;
  fVar26 = *(float *)(param_4 + 3);
  fVar25 = SQRT((param_3 - local_f0) * (param_3 - local_f0) +
                (fVar24 - (float)local_f8) * (fVar24 - (float)local_f8));
  *(float *)(param_4 + 0x38) = fVar25;
  if (fVar26 < fVar25) {
    *(undefined4 *)((long)param_4 + 0x9c) = 2;
    return 2;
  }
  if ((int)param_4[0xb] == 5) {
    if (4.5 < SQRT((*(float *)(param_4 + 0x33) - local_f0) * (*(float *)(param_4 + 0x33) - local_f0)
                   + (*(float *)(param_4 + 0x32) - (float)local_f8) *
                     (*(float *)(param_4 + 0x32) - (float)local_f8))) goto LAB_02079d18;
  }
  else {
    fVar26 = *(float *)((long)param_4 + 0x1c);
  }
  *(undefined4 *)((long)param_4 + 0x9c) = 2;
  if (fVar26 < fVar25) {
    return 2;
  }
  local_c8 = (undefined **)((ulong)local_c8._4_4_ << 0x20);
  lVar20 = *(long *)(DAT_0519d040 + 0x1f8);
  if (lVar20 != 0) {
    iVar15 = (int)fVar24;
    iVar12 = (int)((float)*(int *)(lVar20 + 0x20) * 5.0);
    iVar17 = (int)((float)*(int *)(lVar20 + 0x30) * 5.0 + 5.0);
    iVar16 = iVar15;
    if (iVar17 <= iVar15) {
      iVar16 = iVar17;
    }
    if (iVar12 <= iVar15) {
      iVar12 = iVar16;
    }
    iVar15 = (int)param_3;
    fVar24 = (float)iVar12;
    iVar12 = (int)((float)*(int *)(lVar20 + 0x24) * 5.0);
    iVar17 = (int)((float)*(int *)(lVar20 + 0x34) * 5.0 + 5.0);
    iVar16 = iVar15;
    if (iVar17 <= iVar15) {
      iVar16 = iVar17;
    }
    if (iVar12 <= iVar15) {
      iVar12 = iVar16;
    }
    param_3 = (float)iVar12;
  }
  uVar4 = (int)((float)(int)(fVar24 + 2.5) / 5.0) - (uint)(fVar24 + 2.5 < 0.0);
  uVar22 = (int)((float)(int)(param_3 + 2.5) / 5.0) - (uint)(param_3 + 2.5 < 0.0);
  uVar23 = uVar4 & 0xffff;
  local_54 = uVar4 & 0xffff | uVar22 * 0x10000;
  uVar22 = uVar22 & 0xffff;
  uVar5 = (int)((float)(int)((float)local_f8 + 2.5) / 5.0) - (uint)((float)local_f8 + 2.5 < 0.0);
  uVar4 = uVar5 & 0xffff;
  uVar6 = (int)((float)(int)(local_f0 + 2.5) / 5.0) - (uint)(local_f0 + 2.5 < 0.0);
  uVar7 = uVar23 - uVar4;
  uVar1 = uVar6 & 0xffff;
  uVar2 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar2 = uVar7;
  }
  uVar8 = uVar22 - uVar1;
  uVar7 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar7 = uVar8;
  }
  local_58 = uVar5 & 0xffff | uVar6 * 0x10000;
  uVar8 = uVar23 - 0x19;
  if (uVar23 <= (uVar5 & 0xffff)) {
    uVar8 = uVar23;
  }
  uVar23 = uVar22 - 0x15;
  if (uVar22 <= (uVar6 & 0xffff)) {
    uVar23 = uVar22;
  }
  uVar22 = (int)((float)uVar1 + -10.5);
  if (uVar2 < uVar7) {
    uVar22 = uVar23;
  }
  if (uVar2 < uVar7) {
    uVar8 = (int)((float)uVar4 + -12.5);
  }
  FUN_0207b244(param_4,uVar8,uVar22);
  puVar19 = (ushort *)param_4[2];
  if ((((int)(uVar4 - *puVar19) < 0) || (*(int *)(puVar19 + 6) <= (int)(uVar4 - *puVar19))) ||
     (((int)(uVar1 - puVar19[1]) < 0 || (*(int *)(puVar19 + 8) <= (int)(uVar1 - puVar19[1])))))
  goto LAB_0207a54c;
  _DAT_053d665c = 0;
  DAT_053d6658 = 0;
  memset(puVar19 + 0x2974,2,0x20d);
  memset(*(void **)(puVar19 + 0x2a84),0,(long)*(int *)(puVar19 + 0x2a82) << 2);
  puVar19[0x2a88] = 0;
  puVar19[0x2a89] = 0;
  FUN_035a4230(puVar19);
  lStack_68 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  lVar13 = param_4[0x31];
  local_70 = lVar20;
  if (lVar13 == 0) {
    puVar19 = (ushort *)param_4[2];
    local_b8 = (uint *)&local_70;
    puStack_b0 = (undefined4 *)(PTR_DAT_04bbc1a0 + 0x10);
    local_88 = (ulong)local_88._1_7_ << 8;
    local_a8 = &DAT_048f9750;
    local_a0 = 0;
    local_98 = &DAT_048f9750;
    local_90 = 0;
    local_c8 = &PTR_FUN_04a5eca8;
    uVar14 = *(ulong *)(puVar19 + 0xc);
    puStack_c0 = puVar19;
    if (uVar14 != 0) {
      uVar3 = *puVar19;
      uVar22 = (uint)uVar3;
      uVar21 = 0;
      iVar16 = *(int *)(puVar19 + 6);
      uVar23 = (uint)puVar19[1];
      do {
        iVar12 = uVar22 - *puVar19;
        if (((-1 < iVar12) && (iVar12 < *(int *)(puVar19 + 6))) &&
           ((iVar15 = uVar23 - puVar19[1], -1 < iVar15 &&
            ((iVar15 < *(int *)(puVar19 + 8) && (*(long *)(puVar19 + 0x10) != 0)))))) {
          (*(code *)*local_c8)
                    (&local_c8,
                     *(long *)(puVar19 + 0x10) +
                     (long)(iVar12 + *(int *)(puVar19 + 6) * iVar15) * 0x28);
          uVar14 = *(ulong *)(puVar19 + 0xc);
        }
        uVar21 = uVar21 + 1;
        if (uVar22 + 1 == iVar16 + (uint)uVar3) {
          uVar23 = uVar23 + 1;
          uVar22 = (uint)uVar3;
        }
        else {
          uVar22 = uVar22 + 1;
        }
      } while (uVar21 < uVar14);
    }
  }
  else {
    puVar19 = (ushort *)param_4[2];
    local_b8 = (uint *)&local_70;
    puStack_b0 = (undefined4 *)(PTR_DAT_04bbc1a0 + 0x10);
    local_a8 = &DAT_048f9750;
    local_a0 = 0;
    local_98 = &DAT_048f9750;
    local_90 = 0;
    local_88 = (ulong)local_88._1_7_ << 8;
    uVar14 = *(ulong *)(puVar19 + 0xc);
    local_c8 = &PTR_FUN_04a754a0;
    puStack_c0 = puVar19;
    local_80 = lVar13;
    if (uVar14 != 0) {
      uVar3 = *puVar19;
      uVar22 = (uint)uVar3;
      uVar21 = 0;
      iVar16 = *(int *)(puVar19 + 6);
      uVar23 = (uint)puVar19[1];
      do {
        iVar12 = uVar22 - *puVar19;
        if ((((-1 < iVar12) && (iVar12 < *(int *)(puVar19 + 6))) &&
            (iVar15 = uVar23 - puVar19[1], -1 < iVar15)) &&
           ((iVar15 < *(int *)(puVar19 + 8) && (*(long *)(puVar19 + 0x10) != 0)))) {
          (*(code *)*local_c8)
                    (&local_c8,
                     *(long *)(puVar19 + 0x10) +
                     (long)(iVar12 + *(int *)(puVar19 + 6) * iVar15) * 0x28);
          uVar14 = *(ulong *)(puVar19 + 0xc);
        }
        uVar21 = uVar21 + 1;
        if (uVar22 + 1 == iVar16 + (uint)uVar3) {
          uVar23 = uVar23 + 1;
          uVar22 = (uint)uVar3;
        }
        else {
          uVar22 = uVar22 + 1;
        }
      } while (uVar21 < uVar14);
    }
  }
  FUN_035a56c0(param_4[2],0);
  local_c8 = (undefined **)CONCAT44(local_c8._4_4_,*(undefined4 *)(*param_4 + 0x230));
  FUN_02146570(param_4[2],&local_c8,PTR_DAT_04bb3238,0);
  lVar20 = param_4[2];
  uVar10 = (undefined2)local_58;
  uVar11 = local_58._2_2_;
  lVar13 = param_4[0x30];
  *(undefined1 *)(lVar20 + 0x48) = 1;
  FUN_035a8968(lVar20,(undefined2)local_58,local_58._2_2_);
  FUN_035a81f0(lVar20,uVar10,uVar11,lVar13);
  *(undefined1 *)(lVar20 + 0x48) = 0;
  local_78 = 0;
  puStack_c0 = (ushort *)param_4[2];
  local_98 = (long *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  fVar24 = (float)(int)((local_54 & 0xffff) - (local_58 & 0xffff));
  local_b8 = &local_54;
  puStack_b0 = &local_58;
  fVar25 = (float)(int)((local_54 >> 0x10) - (local_58 >> 0x10));
  local_c8 = &PTR_LAB_04a713e8;
  local_a8 = (undefined8 *)CONCAT44(fVar25,fVar24);
  local_a0 = CONCAT44(local_a0._4_4_,SQRT(fVar25 * fVar25 + fVar24 * fVar24));
  if ((char)param_4[0x2e] == '\0') {
    if (*(char *)((long)param_4 + 0x171) != '\0') {
      lVar20 = 0;
      goto LAB_0207a244;
    }
  }
  else {
    local_98 = param_4 + 0x15;
    if (*(char *)((long)param_4 + 0x171) != '\0') {
      lVar20 = 1;
LAB_0207a244:
      (&local_98)[lVar20] = param_4 + 0x1a;
    }
  }
  if (*(char *)((long)param_4 + 0x172) != '\0') {
    lVar20 = 1;
    if (local_90 != 0) {
      lVar20 = 2;
    }
    lVar13 = 0;
    if (local_98 != (long *)0x0) {
      lVar13 = lVar20;
    }
    (&local_98)[lVar13] = param_4 + 0x1f;
  }
  if (*(char *)((long)param_4 + 0x173) != '\0') {
    lVar20 = 0;
    if (local_98 != (long *)0x0) {
      if (local_90 == 0) {
        lVar20 = 1;
      }
      else if (local_88 == 0) {
        lVar20 = 2;
      }
      else {
        lVar20 = 3;
      }
    }
    (&local_98)[lVar20] = param_4 + 0x24;
  }
  if (*(char *)((long)param_4 + 0x174) != '\0') {
    lVar20 = 0;
    if (local_98 != (long *)0x0) {
      if (local_90 == 0) {
        lVar20 = 1;
      }
      else if (local_88 == 0) {
        lVar20 = 2;
      }
      else if (local_80 == 0) {
        lVar20 = 3;
      }
      else {
        if (local_78 != 0) goto LAB_0207a310;
        lVar20 = 4;
      }
    }
    (&local_98)[lVar20] = param_4 + 0x29;
  }
LAB_0207a310:
  FUN_035a6b30(puStack_c0,local_58,&local_c8);
  puVar19 = (ushort *)param_4[2];
  local_d8 = (float)(int)((local_54 & 0xffff) - (local_58 & 0xffff));
  fStack_d4 = (float)(int)((local_54 >> 0x10) - (local_58 >> 0x10));
  puStack_e0 = &local_58;
  local_e8 = &PTR_FUN_04a71410;
  local_d0 = SQRT(fStack_d4 * fStack_d4 + local_d8 * local_d8);
  uVar14 = *(ulong *)(puVar19 + 0xc);
  if (uVar14 != 0) {
    uVar3 = *puVar19;
    uVar22 = (uint)uVar3;
    uVar21 = 0;
    iVar16 = *(int *)(puVar19 + 6);
    uVar23 = (uint)puVar19[1];
    do {
      iVar12 = uVar22 - *puVar19;
      if (((-1 < iVar12) && (iVar12 < *(int *)(puVar19 + 6))) &&
         ((iVar15 = uVar23 - puVar19[1], -1 < iVar15 &&
          ((iVar15 < *(int *)(puVar19 + 8) && (*(long *)(puVar19 + 0x10) != 0)))))) {
        (*(code *)*local_e8)
                  (&local_e8,
                   *(long *)(puVar19 + 0x10) +
                   (long)(iVar12 + *(int *)(puVar19 + 6) * iVar15) * 0x28);
        uVar14 = *(ulong *)(puVar19 + 0xc);
      }
      uVar21 = uVar21 + 1;
      if (uVar22 + 1 == iVar16 + (uint)uVar3) {
        uVar23 = uVar23 + 1;
        uVar22 = (uint)uVar3;
      }
      else {
        uVar22 = uVar22 + 1;
      }
    } while (uVar21 < uVar14);
  }
  if (((_DAT_053d665c & 0xffff) != 0) && (_DAT_053d665c >> 0x10 != 0)) {
    puVar19 = (ushort *)param_4[2];
    iVar16 = (_DAT_053d665c & 0xffff) - (uint)*puVar19;
    lVar20 = 0;
    if ((-1 < iVar16) &&
       (((iVar16 < *(int *)(puVar19 + 6) &&
         (iVar12 = (_DAT_053d665c >> 0x10) - (uint)puVar19[1], -1 < iVar12)) &&
        (iVar12 < *(int *)(puVar19 + 8))))) {
      lVar20 = *(long *)(puVar19 + 0x10) + (long)(iVar16 + *(int *)(puVar19 + 6) * iVar12) * 0x28;
    }
    iVar16 = (local_58 & 0xffff) - (uint)*puVar19;
    if ((((-1 < iVar16) && (iVar12 = *(int *)(puVar19 + 6), iVar16 < iVar12)) &&
        ((iVar15 = (local_58 >> 0x10) - (uint)puVar19[1], -1 < iVar15 &&
         ((iVar15 < *(int *)(puVar19 + 8) && (lVar20 != 0)))))) &&
       (lVar13 = *(long *)(puVar19 + 0x10), lVar13 != 0)) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      lVar13 = lVar13 + (long)(iVar16 + iVar12 * iVar15) * 0x28;
      while (lVar20 != lVar13) {
        lVar18 = *(long *)(lVar20 + 0x10);
        if (lVar18 == 0) {
          *(undefined1 *)(lVar20 + 6) = 4;
          break;
        }
        *(long *)(lVar18 + 0x18) = lVar20;
        *(undefined1 *)(lVar20 + 6) = 4;
        lVar20 = lVar18;
      }
      *(long *)(puVar19 + 0x1c) = lVar13;
      puVar19 = (ushort *)param_4[2];
    }
    lVar20 = *(long *)(puVar19 + 0x1c);
    if (lVar20 != 0) {
      iVar16 = 1;
      do {
        lVar20 = *(long *)(lVar20 + 0x18);
        iVar16 = iVar16 + -1;
      } while (lVar20 != 0);
      if ((iVar16 != 0) &&
         (uVar14 = FUN_0207b3a0(param_4,&local_58,&DAT_053d665c,&local_f8), (uVar14 & 1) != 0)) {
        if (SQRT((*(float *)(param_4 + 0x33) - local_f0) * (*(float *)(param_4 + 0x33) - local_f0) +
                 (*(float *)(param_4 + 0x32) - fVar9) * (*(float *)(param_4 + 0x32) - fVar9)) <= 4.5
           ) {
          return 2;
        }
LAB_02079d18:
        *(undefined4 *)((long)param_4 + 0x9c) = 1;
        return 5;
      }
    }
  }
LAB_0207a54c:
  *(undefined4 *)((long)param_4 + 0x9c) = 3;
  return 2;
}

