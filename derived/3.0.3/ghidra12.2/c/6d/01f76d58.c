
void FUN_01f76d58(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar16 = *(long *)(param_1[1] + 0x3b0);
  if (lVar16 == 0) {
    return;
  }
  lVar14 = *(long *)(param_1[1] + 0x68);
  pfVar1 = (float *)((long)param_1 + 0xaf94);
  fVar18 = *(float *)(lVar14 + 0x278);
  fVar17 = *(float *)(lVar14 + 0x280);
  lVar14 = *(long *)PTR_DAT_04bc22f8;
  fVar21 = (float)*(int *)(lVar14 + 0x10) * 5.0;
  fVar19 = (float)*(int *)(lVar14 + 0x14) * 5.0;
  bVar5 = false;
  bVar6 = true;
  if (fVar18 <= fVar21) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar17) && !NAN(fVar19)) {
      bVar5 = fVar17 == fVar19;
      bVar6 = fVar19 <= fVar17;
    }
  }
  if (!bVar6 || bVar5) {
    local_28 = 7;
LAB_01f76e38:
    if (*(char *)((long)param_1 + 0xafad) == '\0') {
      FUN_01f769e0(param_1,&local_28,(long)param_1 + 0xaf94);
      goto LAB_01f771b4;
    }
  }
  else {
    fVar20 = (float)*(int *)(lVar14 + 0x24) * 5.0 + 5.0;
    bVar5 = false;
    bVar6 = true;
    if (fVar18 <= fVar21) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar20) && !NAN(fVar17)) {
        bVar5 = fVar20 == fVar17;
        bVar6 = fVar17 <= fVar20;
      }
    }
    if (!bVar6 || bVar5) {
      local_28 = 8;
      goto LAB_01f76e38;
    }
    fVar22 = (float)*(int *)(lVar14 + 0x20) * 5.0 + 5.0;
    bVar5 = false;
    bVar6 = true;
    if (fVar22 <= fVar18) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar17) && !NAN(fVar19)) {
        bVar5 = fVar17 == fVar19;
        bVar6 = fVar19 <= fVar17;
      }
    }
    if (!bVar6 || bVar5) {
      local_28 = 5;
      goto LAB_01f76e38;
    }
    bVar5 = false;
    bVar6 = true;
    if (fVar22 <= fVar18) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar20) && !NAN(fVar17)) {
        bVar5 = fVar20 == fVar17;
        bVar6 = fVar17 <= fVar20;
      }
    }
    if (!bVar6 || bVar5) {
      local_28 = 6;
      goto LAB_01f76e38;
    }
    if (fVar21 <= fVar18) {
      if (fVar18 <= fVar22) {
        if (fVar19 <= fVar17) {
          if (fVar17 <= fVar20) {
            local_28 = 0;
            goto LAB_01f76e38;
          }
          local_28 = 4;
        }
        else {
          local_28 = 3;
        }
      }
      else {
        local_28 = 1;
      }
    }
    else {
      local_28 = 2;
    }
  }
  FUN_01f769e0(param_1,&local_28,pfVar1);
  uVar13 = *(uint *)((long)param_1 + 0xafa4);
  uVar3 = *(uint *)(param_1 + 0x15f5);
  if ((uVar13 != uVar3) || (*(char *)((long)param_1 + 0xafac) != '\0')) {
    uVar13 = uVar13 + 1;
    *(uint *)((long)param_1 + 0xafa4) = uVar13;
  }
  bVar5 = false;
  uVar4 = *(uint *)(*(long *)(param_1[1] + 0x68) + 0x2b4);
  if (((((-0x7f49f4a0 < (int)uVar4) && (0xb60b60 < (uVar4 & 0xbfffffff))) &&
       (bVar5 = false, 0xb60b60 < uVar4 + 0x40b60b60)) &&
      ((0xb60b60 < uVar4 + 0x80b60b60 && (0xb60b60 < uVar4 + 0xc0b60b60)))) &&
     ((0xb60b60 < uVar4 + 0xb60b60 && (0xb60b60 < uVar4 + 0x40000000)))) {
    bVar5 = *(char *)((long)param_1 + 0xafad) == '\0';
  }
  if ((uVar13 == uVar3) && (uVar13 = uVar3, *(char *)((long)param_1 + 0xafac) == '\0')) {
    puVar9 = *(undefined8 **)(param_1[1] + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) != 0) {
        puVar9 = &DAT_05240280;
        goto LAB_01f76f40;
      }
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar9 = &DAT_05240280;
      if (DAT_052413b8 == 0) goto LAB_01f772a0;
LAB_01f76f48:
      local_5c = 1;
      uVar10 = FUN_0170a6d0(puVar9,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    }
    else {
LAB_01f76f40:
      if (puVar9[0x227] != 0) goto LAB_01f76f48;
LAB_01f772a0:
      uVar10 = FUN_0170a6d0(puVar9,0);
    }
    if ((uVar10 & 1) != 0) {
      lVar16 = *param_1;
      uVar11 = 0x38;
      uVar12 = 0;
      goto LAB_01f772c0;
    }
    uVar13 = *(uint *)((long)param_1 + 0xafa4);
  }
  if (uVar13 < 0x709) {
    bVar5 = true;
  }
  if (bVar5) goto LAB_01f771b4;
  lVar14 = param_1[0x15f4];
  lVar15 = *(long *)(param_1[1] + 0x68);
  fVar18 = *(float *)(lVar15 + 0x278);
  fVar17 = *(float *)(lVar15 + 0x280);
  if (*(char *)((long)param_1 + 0xafad) != '\0') {
    fVar21 = *(float *)((long)param_1 + 0xafc4);
    fVar19 = *(float *)((long)param_1 + 0xafbc);
    fVar20 = *(float *)(param_1 + 0x15f6);
    fVar22 = *(float *)(param_1 + 0x15f7);
    goto LAB_01f7706c;
  }
  uVar23 = *(undefined4 *)(lVar15 + 0x27c);
  *(float *)(param_1 + 0x15f6) = fVar18;
  *(float *)(param_1 + 0x15f7) = fVar17;
  *(float *)((long)param_1 + 0xafbc) = fVar18;
  *(float *)((long)param_1 + 0xafc4) = fVar17;
  *(undefined4 *)((long)param_1 + 0xafb4) = uVar23;
  *(undefined4 *)(param_1 + 0x15f8) = uVar23;
  fVar19 = fVar18;
  fVar21 = fVar17;
  switch(local_28) {
  case 1:
    fVar19 = 80.0;
    break;
  case 2:
    fVar19 = -80.0;
    break;
  case 3:
    fVar21 = -80.0;
    goto LAB_01f7704c;
  case 4:
    fVar21 = 80.0;
LAB_01f7704c:
    *(float *)((long)param_1 + 0xafc4) = fVar17 + fVar21;
    fVar21 = fVar17 + fVar21;
  default:
    goto switchD_01f7700c_default;
  }
  fVar19 = fVar18 + fVar19;
  *(float *)((long)param_1 + 0xafbc) = fVar19;
switchD_01f7700c_default:
  *(undefined1 *)((long)param_1 + 0xafad) = 1;
  fVar20 = fVar18;
  fVar22 = fVar17;
LAB_01f7706c:
  iVar7 = FUN_006f0400(fVar20 - fVar19,fVar22 - fVar21);
  iVar8 = FUN_006f0400(fVar18 - *(float *)((long)param_1 + 0xafbc),
                       fVar17 - *(float *)((long)param_1 + 0xafc4));
  if (((uint)(iVar7 - iVar8) >> 0x1e == 0) || ((uint)(iVar8 - iVar7) >> 0x1e == 0)) {
    lVar15 = *(long *)(param_1[1] + 0x68);
    uVar23 = *(undefined4 *)(lVar15 + 0x27c);
    iVar8 = FUN_006f0400(*(float *)(lVar15 + 0x278) - *(float *)((long)param_1 + 0xafbc),
                         *(float *)(lVar15 + 0x280) - *(float *)((long)param_1 + 0xafc4));
    iVar7 = 0x38e38e4;
    if ((char)lVar14 == '\0') {
      iVar7 = -0x38e38e4;
    }
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)((uint)(iVar8 + iVar7) >> 0x18) * 0x10);
    fVar18 = (float)(iVar8 + iVar7 & 0xffffff) * 5.9604645e-08;
    fVar17 = *(float *)((long)param_1 + 0xafc4) + (pfVar2[2] + fVar18 * pfVar2[3]) * 80.0;
    *pfVar1 = *(float *)((long)param_1 + 0xafbc) + (*pfVar2 + fVar18 * pfVar2[1]) * 80.0;
    *(undefined4 *)(param_1 + 0x15f3) = uVar23;
  }
  else {
    if (0xa8c < *(uint *)((long)param_1 + 0xafa4)) {
      lVar16 = *param_1;
      uVar11 = 0x10;
      uVar12 = 1;
LAB_01f772c0:
      (**(code **)(lVar16 + 0x38))(param_1,uVar11,0,uVar12);
      return;
    }
    uVar13 = *(uint *)(*(long *)(param_1[1] + 0x68) + 0x2b4);
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar13 >> 0x14) & 0xff0));
    fVar19 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
    fVar17 = fVar17 + (pfVar2[2] + fVar19 * pfVar2[3]) * -10.0;
    *pfVar1 = fVar18 + (*pfVar2 + fVar19 * pfVar2[1]) * -10.0;
  }
  *(float *)((long)param_1 + 0xaf9c) = fVar17;
LAB_01f771b4:
  local_5c = *(undefined4 *)(lVar16 + 0x558);
  local_24 = 0;
  local_58 = 0xbf80000000000000;
  FUN_01e5a930(0x40000000,lVar16,0x1f,(long)param_1 + 0xaf94,&local_24,PTR_DAT_04bb6740,&local_5c,6)
  ;
  return;
}

