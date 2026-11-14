
/* WARNING: Removing unreachable block (ram,0x0156a984) */

void FUN_0156a660(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                 undefined8 param_6,uint param_7)

{
  float *pfVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  float *pfVar17;
  long *plVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  
  lVar12 = *(long *)(*(long *)(param_1 + 8) + 8);
  pcVar8 = (char *)(**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
  puVar3 = PTR_DAT_04bb2200;
  if (param_2 == 0) {
    return;
  }
  if (*pcVar8 == '\0') {
    return;
  }
  if (param_4 == 0) {
    cVar10 = '\x01';
    cVar6 = '\x01';
    goto LAB_0156aa5c;
  }
  puVar13 = *(undefined8 **)(*(long *)(param_2 + 0x18) + 0x38);
  uVar15 = *puVar13;
  uVar14 = puVar13[1];
  local_a8._0_4_ = (float)uVar15;
  local_a8._4_4_ = (float)((ulong)uVar15 >> 0x20);
  fVar24 = *(float *)(param_3 + 0x1c) + local_a8._4_4_;
  fVar23 = *(float *)(param_3 + 0xc) + (float)local_a8;
  local_a0._0_4_ = (float)uVar14;
  fVar25 = *(float *)(param_3 + 0x2c) + (float)local_a0;
  local_a8 = CONCAT44(fVar24,fVar23);
  local_a0._4_4_ = (float)((ulong)uVar14 >> 0x20);
  local_a0 = CONCAT44(local_a0._4_4_,fVar25);
  local_b8 = local_a8;
  local_b0 = local_a0;
  lVar12 = *(long *)PTR_DAT_04bb2200;
  lVar16 = *(long *)(lVar12 + 0x78);
  fVar20 = fVar24;
  fVar2 = fVar25;
  if (lVar16 != 0) {
    fVar22 = *(float *)(lVar16 + 0x40) * 0.017453292 *
             ((fVar25 + *(float *)(lVar16 + 0x38)) / 160.0);
    fVar2 = 57600.0 / (*(float *)(lVar16 + 0x40) * 6.2831855) + fVar24;
    fVar20 = cosf(fVar22);
    if (fVar20 == 0.0) {
      fVar20 = 0.001;
    }
    else {
      fVar20 = cosf(fVar22);
    }
    fVar22 = sinf(fVar22);
    lVar12 = *(long *)puVar3;
    fVar21 = *(float *)(*(long *)(lVar12 + 0x78) + 0x3c);
    fVar20 = fVar24 * (1.0 - fVar21) +
             fVar21 * (fVar20 * fVar2 +
                      -57600.0 / (*(float *)(*(long *)(lVar12 + 0x78) + 0x40) * 6.2831855));
    fVar2 = fVar22 * fVar2 * fVar21 + (1.0 - fVar21) * fVar25;
  }
  local_b8 = CONCAT44(fVar20,fVar23);
  local_b0 = CONCAT44(local_b0._4_4_,fVar2);
  if ((*(long *)(lVar12 + 0x58) == 0) ||
     (pfVar17 = *(float **)(*(long *)(lVar12 + 0x58) + 0xea8), pfVar17 == (float *)0x0)) {
LAB_0156a8a0:
    uVar9 = FUN_0073e274(local_b0._4_4_,param_4,&local_b8);
    if ((uVar9 & 1) == 0) {
      iVar19 = -1;
      cVar10 = '\0';
    }
    else {
      lVar12 = *(long *)(*(long *)puVar3 + 0x78);
      cVar10 = '\x01';
      if (((0.0 < *(float *)(lVar12 + 0x3c)) && (0.0 <= fVar24)) &&
         ((float)local_b0 < *(float *)(lVar12 + 0x58))) {
        fVar20 = (*(float *)(lVar12 + 100) * local_b8._4_4_ +
                  (float)local_b8 * *(float *)(lVar12 + 0x60) +
                 (float)local_b0 * *(float *)(lVar12 + 0x68)) - *(float *)(lVar12 + 0x6c);
        if ((fVar20 < 0.0) && (local_b0._4_4_ < -fVar20)) {
          cVar10 = '\0';
        }
      }
      iVar19 = 0;
      cVar6 = cVar10;
      if (cVar10 != '\0') goto LAB_0156aa5c;
    }
    cVar6 = cVar10;
    if (iVar19 == 0) goto LAB_0156aa5c;
    lVar12 = *(long *)(*(long *)puVar3 + 0x78);
    if (lVar12 != 0) {
      fVar25 = *(float *)(lVar12 + 0x3c) * (fVar25 + *(float *)(lVar12 + 0x38)) +
               (1.0 - *(float *)(lVar12 + 0x3c)) * fVar25;
    }
    fVar20 = local_a0._4_4_;
    local_94 = 0;
    lVar12 = *(long *)(*(long *)puVar3 + 0x58);
    if (lVar12 == 0) {
      lVar12 = 0;
LAB_0156a9f8:
      uVar11 = 0xffffffff;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0xe88);
      local_94 = 0;
      plVar18 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bbdb78 + 0x28);
      if (((*PTR_DAT_04bbdb68 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdb68);
      }
      if ((plVar18 == (long *)0x0) ||
         (uVar9 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bbdb60), (uVar9 & 1) == 0))
      goto LAB_0156a9f8;
      uVar11 = (uint)(char)plVar18[0x1a3];
    }
    if (0.0 < fVar20) {
      if (*(uint *)(lVar12 + 0x1a70) <= uVar11) {
        uVar11 = 0;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x1a78) + (long)(int)uVar11 * 0xfc8 + 0x378);
      uVar11 = *(uint *)(lVar12 + 0x438);
      if ((int)uVar11 < 1) {
LAB_0156ab10:
        if (iVar19 < 0) {
          cVar6 = FUN_015e9d34(*(undefined8 *)(*(long *)puVar3 + 0x78),&local_b8,&local_a8);
          cVar10 = '\0';
        }
        else {
          cVar10 = '\0';
          cVar6 = '\x01';
        }
        goto LAB_0156aa5c;
      }
      if ((fVar24 * *(float *)(lVar12 + 0x440) + fVar23 * *(float *)(lVar12 + 0x43c) +
          fVar25 * *(float *)(lVar12 + 0x444)) - *(float *)(lVar12 + 0x448) <= fVar20) {
        uVar9 = 0;
        pfVar17 = (float *)(lVar12 + 0x44c);
        do {
          if ((ulong)uVar11 - 1 == uVar9) goto LAB_0156ab10;
          bVar4 = 0x16 < uVar9;
          uVar9 = uVar9 + 1;
          pfVar1 = pfVar17;
          if (bVar4) {
            pfVar1 = (float *)(lVar12 + 0x43c);
          }
          pfVar17 = pfVar17 + 4;
        } while ((fVar24 * pfVar1[1] + fVar23 * *pfVar1 + fVar25 * pfVar1[2]) - pfVar1[3] <= fVar20)
        ;
        if (uVar11 <= uVar9) goto LAB_0156ab10;
      }
    }
  }
  else {
    fVar20 = pfVar17[3];
    bVar4 = false;
    bVar5 = true;
    if (*pfVar17 <= fVar23) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar23) && !NAN(fVar20)) {
        bVar4 = fVar23 == fVar20;
        bVar5 = fVar20 <= fVar23;
      }
    }
    if (!bVar5 || bVar4) {
      cVar10 = '\0';
      if (fVar24 < pfVar17[1]) {
        cVar6 = '\0';
        goto LAB_0156aa5c;
      }
      cVar6 = '\0';
      if (pfVar17[4] < fVar24) goto LAB_0156aa5c;
      if ((pfVar17[2] <= fVar25) && (fVar25 <= pfVar17[5])) goto LAB_0156a8a0;
    }
  }
  cVar10 = '\0';
  cVar6 = '\0';
LAB_0156aa5c:
  local_a8 = CONCAT62(local_a8._2_6_,CONCAT11(cVar6,cVar10)) & 0xffffffffffff01ff;
  FUN_0156ab80(param_1,param_2,param_3,0,&local_a8,param_5,param_6,param_7 & 1);
  return;
}

