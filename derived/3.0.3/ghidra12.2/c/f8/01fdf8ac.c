
/* WARNING: Removing unreachable block (ram,0x01fdfc60) */

void FUN_01fdf8ac(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  float *pfVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  uint local_88;
  undefined4 uStack_84;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_5c;
  undefined4 local_54;
  float local_48;
  uint local_44;
  
  lVar16 = *(long *)PTR_DAT_04bb4960;
  if (lVar16 == 0) {
    return;
  }
  uVar19 = *(uint *)(param_1 + 0x123bc);
  if ((int)*(uint *)(lVar16 + 0x5c0) < 1) {
    if (*(long *)(lVar16 + 0x4b0) == 0) {
      return;
    }
    puVar15 = *(uint **)(*(long *)(lVar16 + 0x4b0) + 8);
    if (puVar15 == (uint *)0x0) {
      return;
    }
    if ((uVar19 < *(uint *)(lVar16 + 0x4c8)) &&
       (*(char *)(*(long *)(lVar16 + 0x4d0) + (long)(int)uVar19) == '\0')) {
      return;
    }
    if (*puVar15 <= uVar19) {
      return;
    }
    if (puVar15[1] == 0) {
      return;
    }
    if ((ushort)puVar15[2] == 0) {
      return;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar15 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar15 = (uint *)((ulong)(puVar15[1] * uVar19 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                      (long)puVar15);
  }
  else {
    if (*(uint *)(lVar16 + 0x5c0) <= uVar19) {
      return;
    }
    if (*(uint *)(lVar16 + 0x5b0) <= uVar19) {
      uVar19 = 0;
    }
    puVar15 = *(uint **)(*(long *)(lVar16 + 0x5b8) + (ulong)uVar19 * 8);
  }
  if (puVar15 == (uint *)0x0) {
    return;
  }
  uVar19 = *puVar15;
  if (uVar19 == 0 || puVar15 == (uint *)(ulong)uVar19) {
LAB_01fdf924:
    local_44 = 0;
  }
  else {
    puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar19);
    local_44 = 0;
    if (*puVar17 != 0) {
      uVar19 = puVar17[1];
      if ((uVar19 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
        lVar16 = 0xc;
        if (*(char *)((long)puVar17 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
        if (lVar16 != 0) {
          uVar3 = 0;
          if ((ulong)uVar19 != 0) {
            uVar3 = (uint)((ulong)((long)puVar15 - lVar16) / (ulong)uVar19);
          }
          if (*puVar17 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc23f8) &&
             (local_44 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc23f8 + 8) + (long)(int)uVar3 * 2),
             local_44 < 3)) goto LAB_01fdf928;
        }
      }
      goto LAB_01fdf924;
    }
  }
LAB_01fdf928:
  if (local_44 == 2) {
    local_88 = 0;
    if (*(int *)(param_1 + 0x123c0) == 0) {
      puVar15 = (uint *)PTR_DAT_04bb3238;
    }
    else {
      puVar15 = (uint *)**(undefined8 **)(param_1 + 0x123c8);
    }
    if (*puVar15 == 0) {
      FUN_01fd5450(param_1,&local_88,1);
      if (local_88 == 0) {
        return;
      }
    }
    else {
      local_88 = *puVar15;
    }
    uVar19 = local_88;
    FUN_02085e20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3c0),0,local_88,PTR_DAT_04bb6928,0);
    puVar6 = PTR_DAT_04bb27c0;
    lVar16 = *(long *)PTR_DAT_04bb27c0;
    if (lVar16 == 0) {
      return;
    }
    plVar14 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) + (ulong)(uVar19 >> 0x14) * 8);
    if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar14 + 0x46) != uVar19)) {
      plVar14 = (long *)0x0;
    }
    if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar16 = *(long *)puVar6;
      iVar9 = (**(code **)(*plVar12 + 0x60))();
      if (iVar9 < 0x11) {
        uVar19 = 1;
      }
      else {
        if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_01fdfd48;
        uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01fdfd48:
      uVar19 = 0;
    }
    if (plVar14 == (long *)0x0) {
      return;
    }
    lVar16 = plVar14[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    uVar3 = 0;
    if ((int)lVar16 == 1) {
      uVar3 = uVar19;
    }
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (uVar3 == 0) {
      return;
    }
    uVar28 = FUN_01e3dcdc(plVar14);
    local_5c = CONCAT44(local_5c._4_4_,uVar28);
    lVar16 = *(long *)PTR_DAT_04bb3968;
    plVar12 = (long *)(lVar16 + 0x17fa0);
    switch(uVar28) {
    case 1:
      plVar12 = (long *)(lVar16 + 0x17fd0);
      break;
    case 2:
      plVar12 = (long *)(lVar16 + 0x18000);
      break;
    case 3:
      plVar12 = (long *)(lVar16 + 0x18030);
    }
    pfVar13 = (float *)(**(code **)(*plVar12 + 0xf0))();
    fVar27 = *pfVar13;
    if ((int)plVar14[0xea] == 1) {
      local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
      uVar10 = FUN_021f2ed0(plVar14[0xd] + 0x278,&local_78);
      fVar29 = SUB84(local_78,0);
      if ((uVar10 & 1) == 0) {
        fVar29 = -0.0;
      }
      fVar27 = fVar27 + fVar29;
    }
    puVar18 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar18 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar18 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar18 = &DAT_05240280;
      }
    }
    pcStack_70 = "TargetNpcHeight";
    if (puVar18[0x227] == 0) {
      return;
    }
    lVar16 = *(long *)(puVar18[0x227] + 0x78);
    if (lVar16 == 0) {
      return;
    }
    plVar14 = *(long **)(lVar16 + 0x48);
    if (plVar14 == (long *)0x0) {
      return;
    }
    lVar16 = *plVar14;
LAB_01fdffd4:
    local_78 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(lVar16 + 0x30))(fVar27,plVar14,&local_78);
    return;
  }
  if (local_44 != 1) {
    if ((local_44 != 0) || (uVar19 = *puVar15, uVar19 == 0 || puVar15 == (uint *)(ulong)uVar19)) {
LAB_01fdfb54:
      lVar16 = *(long *)(param_1 + 0x18);
      uVar10 = FUN_02085a50(lVar16,1,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      *(undefined1 *)(lVar16 + 0x801) = 1;
      lVar1 = lVar16 + 0x10 + (ulong)*(uint *)(lVar16 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar16 + 0x294)) {
        lVar1 = lVar16 + 0x10;
      }
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      return;
    }
    puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar19);
    if ((*puVar17 == 0) || ((uVar19 = puVar17[1], uVar19 == 0 || ((ulong)(ushort)puVar17[2] == 0))))
    goto LAB_01fdfb54;
    lVar16 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
    if (lVar16 == 0) goto LAB_01fdfb54;
    uVar3 = 0;
    if ((ulong)uVar19 != 0) {
      uVar3 = (uint)((ulong)((long)puVar15 - lVar16) / (ulong)uVar19);
    }
    if (*puVar17 <= uVar3) {
      uVar3 = 0xffffffff;
    }
    if (((*(uint *)PTR_DAT_04bc23e0 <= uVar3) ||
        (*(short *)(*(long *)(PTR_DAT_04bc23e0 + 8) + (long)(int)uVar3 * 2) != 2)) ||
       (*(int *)(*(long *)(param_1 + 8) + 0x750) != 0)) goto LAB_01fdfb54;
    uVar10 = FUN_0277d9a8(param_1 + 0x11fc8);
    if ((uVar10 & 1) == 0) goto LAB_01fdfb54;
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
    local_5c = 0;
    local_54 = 0;
    if (*(int *)(param_1 + 0x11ff8) - 2U < 4) {
      FUN_01a4f4bc(&local_78);
      local_78 = PTR_DAT_04bb3140 + 0x10;
      uVar11 = FUN_014fbd50(&local_78,*(int *)(param_1 + 0x11ff8),param_1 + 0x11fd8);
      FUN_0071ca50(&local_88,uVar11,0);
      lVar16 = *(long *)(CONCAT44(uStack_84,local_88) + 0x68);
      local_48 = *(float *)(lVar16 + 0x27c);
      local_5c = *(undefined8 *)(lVar16 + 0x278);
      local_54 = *(undefined4 *)(lVar16 + 0x280);
    }
    else {
      FUN_0207da6c(param_1 + 0xafb8,&local_5c,&local_48,param_1 + 0x11fc8,param_1 + 0x11fd0);
    }
    lVar16 = FUN_016e3954(*(undefined8 *)(param_1 + 8));
    pcStack_70 = "NpcFtrHeight";
    if (*(long *)(lVar16 + 0x1138) == 0) {
      return;
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0x1138) + 0x78);
    if (lVar16 == 0) {
      return;
    }
    plVar14 = *(long **)(lVar16 + 0x48);
    if (plVar14 == (long *)0x0) {
      return;
    }
    lVar16 = *plVar14;
    fVar27 = local_48;
    goto LAB_01fdffd4;
  }
  lVar16 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar16 == 0) {
    return;
  }
  uVar5 = *(ushort *)(lVar16 + 0xf6c);
  iVar9 = *(int *)(lVar16 + 0xed0);
  if ((uVar5 & 2) != 0) {
    iVar9 = 0;
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)(lVar16 + 0xecc);
    if ((uVar5 & 2) != 0) {
      iVar9 = 0;
    }
    if (iVar9 == 0) {
      return;
    }
    fVar20 = *(float *)(lVar16 + 0xf34);
    fVar27 = 0.0;
    uVar28 = 0;
    uVar21 = *(undefined4 *)(lVar16 + 0xf38);
    fVar29 = 0.0;
    bVar7 = false;
    fVar22 = *(float *)(lVar16 + 0xf3c);
    bVar4 = *(byte *)(lVar16 + 0xedc);
LAB_01fdfd88:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    bVar8 = (bVar4 >> 1 & 1) == 0;
  }
  else {
    iVar9 = *(int *)(lVar16 + 0xecc);
    if ((uVar5 & 2) != 0) {
      iVar9 = 0;
    }
    fVar27 = *(float *)(lVar16 + 0xf28);
    uVar28 = *(undefined4 *)(lVar16 + 0xf2c);
    fVar29 = *(float *)(lVar16 + 0xf30);
    if (iVar9 != 0) {
      fVar20 = *(float *)(lVar16 + 0xf34);
      uVar21 = *(undefined4 *)(lVar16 + 0xf38);
      fVar22 = *(float *)(lVar16 + 0xf3c);
      bVar4 = *(byte *)(lVar16 + 0xedc);
      bVar7 = (bVar4 >> 3 & 1) == 0;
      goto LAB_01fdfd88;
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    bVar7 = (*(byte *)(lVar16 + 0xedc) >> 3 & 1) == 0;
    bVar8 = false;
    fVar20 = 0.0;
    uVar21 = 0;
    fVar22 = 0.0;
  }
  if ((!bVar7) && (!bVar8)) {
    return;
  }
  if ((bool)(bVar7 & bVar8)) {
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar23 = *(float *)(lVar16 + 0x278);
    fVar25 = *(float *)(lVar16 + 0x280);
    fVar24 = fVar27 - fVar23;
    fVar26 = fVar29 - fVar25;
    fVar23 = fVar20 - fVar23;
    fVar25 = fVar22 - fVar25;
    if (SQRT(fVar26 * fVar26 + fVar24 * fVar24) < SQRT(fVar25 * fVar25 + fVar23 * fVar23))
    goto LAB_01fdfecc;
  }
  else if (bVar7) goto LAB_01fdfecc;
  fVar27 = fVar20;
  fVar29 = fVar22;
  uVar28 = uVar21;
LAB_01fdfecc:
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x3c0);
  uVar10 = FUN_02085a50(lVar16,3,0);
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(lVar16 + 0x801) = 1;
    lVar1 = lVar16 + 0x10;
    lVar2 = lVar1 + (ulong)*(uint *)(lVar16 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar16 + 0x294)) {
      lVar2 = lVar1;
    }
    *(float *)(lVar2 + 0xc) = fVar27;
    *(undefined4 *)(lVar2 + 0x10) = uVar28;
    *(float *)(lVar2 + 0x14) = fVar29;
    lVar2 = lVar1 + (ulong)*(uint *)(lVar16 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar16 + 0x294)) {
      lVar2 = lVar1;
    }
    *(undefined1 *)(lVar2 + 0x7e) = 0;
  }
  return;
}

