
/* WARNING: Removing unreachable block (ram,0x0137a130) */
/* WARNING: Removing unreachable block (ram,0x0137a140) */

void FUN_0137a0f0(ushort *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined **local_e8;
  ushort *puStack_e0;
  undefined8 *local_c8;
  ushort *puStack_c0;
  undefined8 *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined **local_70;
  undefined ***pppuStack_68;
  
  local_b8 = &local_80;
  local_80 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  puStack_b0 = PTR_DAT_04bbc1a0 + 0x10;
  local_88 = 0;
  uVar23 = *(uint *)(param_2 + 0x24);
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  uVar25 = *(uint *)(param_2 + 0x20) & 0xffff;
  uVar7 = (ushort)*(uint *)(param_2 + 0x20);
  lStack_78 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  uStack_a0 = 0;
  local_c8 = (undefined8 *)(PTR_DAT_04bbc5a8 + 0x10);
  uStack_90 = 0;
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  param_1[4] = uVar7;
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar26 = uVar3 & 0xffff;
  uVar8 = (ushort)uVar23;
  param_1[5] = uVar8;
  uVar9 = (ushort)uVar3;
  param_1[2] = uVar9;
  uVar10 = (ushort)uVar4;
  param_1[3] = uVar10;
  uVar1 = uVar5;
  if (uVar25 <= uVar5) {
    uVar1 = uVar7;
  }
  uVar23 = uVar23 & 0xffff;
  uVar4 = uVar4 & 0xffff;
  uVar2 = uVar9;
  if (uVar26 <= uVar5) {
    uVar2 = uVar1;
  }
  *param_1 = uVar2;
  uVar1 = uVar6;
  if (uVar23 <= uVar6) {
    uVar1 = uVar8;
  }
  uVar5 = uVar10;
  if (uVar4 <= uVar6) {
    uVar5 = uVar1;
  }
  param_1[1] = uVar5;
  uVar5 = *(ushort *)(param_2 + 0x10);
  uVar6 = *(ushort *)(param_2 + 0x14);
  uVar1 = uVar5;
  if (uVar25 <= uVar5) {
    uVar1 = uVar7;
  }
  if (uVar26 <= uVar5) {
    uVar9 = uVar1;
  }
  uVar7 = uVar6;
  if (uVar23 <= uVar6) {
    uVar7 = uVar8;
  }
  *param_1 = uVar9;
  if (uVar4 <= uVar6) {
    uVar10 = uVar7;
  }
  param_1[1] = uVar10;
  puStack_c0 = param_1;
  local_98 = local_a8;
  memset(param_1 + 0x1fa8,2,400);
  memset(*(void **)(param_1 + 0x2078),0,(long)*(int *)(param_1 + 0x2076) << 2);
  param_1[0x207c] = 0;
  param_1[0x207d] = 0;
  FUN_035a4230(param_1);
  uVar18 = *(ulong *)(param_1 + 0xc);
  if (uVar18 != 0) {
    uVar7 = *param_1;
    uVar21 = 0;
    iVar16 = *(int *)(param_1 + 6);
    uVar25 = (uint)param_1[1];
    uVar26 = (uint)uVar7;
    do {
      iVar11 = uVar26 - *param_1;
      if ((((-1 < iVar11) && (iVar11 < *(int *)(param_1 + 6))) &&
          (iVar12 = uVar25 - param_1[1], -1 < iVar12)) &&
         ((iVar12 < *(int *)(param_1 + 8) && (*(long *)(param_1 + 0x10) != 0)))) {
        (*(code *)*local_c8)
                  (&local_c8,
                   *(long *)(param_1 + 0x10) +
                   (long)(iVar11 + *(int *)(param_1 + 6) * iVar12) * 0x28);
        uVar18 = *(ulong *)(param_1 + 0xc);
      }
      uVar21 = uVar21 + 1;
      bVar15 = uVar26 + 1 == iVar16 + (uint)uVar7;
      if (bVar15) {
        uVar25 = uVar25 + 1;
      }
      uVar23 = (uint)uVar7;
      if (!bVar15) {
        uVar23 = uVar26 + 1;
      }
      uVar26 = uVar23;
    } while (uVar21 < uVar18);
  }
  FUN_035a56c0(param_1,0);
  puVar14 = PTR_DAT_04bb27c0;
  uVar25 = *(uint *)PTR_DAT_04bc2d98;
  if ((uVar25 == 0) || (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 == 0)) goto LAB_0137a4d4;
  lVar22 = *(long *)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) + ((ulong)(uVar25 >> 0x11) & 0x7ff8));
  if ((lVar22 == 0) ||
     (((*(uint *)(lVar22 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar22 + 0x230) != uVar25)))) {
    lVar22 = 0;
  }
  if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar14;
    iVar16 = (**(code **)(*plVar17 + 0x60))();
    if (iVar16 < 0x11) {
      uVar25 = 1;
    }
    else {
      if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_0137a3b4;
      uVar25 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0137a3b4:
    uVar25 = 0;
  }
  if (lVar22 != 0) {
    uVar25 = uVar25 ^ 1;
    if (*(int *)(lVar22 + 0x150) != 1) {
      uVar25 = 1;
    }
    if ((uVar25 == 0) && (lVar19 = *(long *)(lVar22 + 0x68), lVar19 != 0)) {
      fVar30 = *(float *)(lVar19 + 0x278) + -4.75;
      fVar27 = *(float *)(lVar19 + 0x278) + 4.75;
      fVar29 = *(float *)(lVar19 + 0x280) + -4.75;
      fVar28 = *(float *)(lVar19 + 0x280) + 4.75;
      iVar12 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
      iVar16 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
      iVar13 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      iVar11 = iVar12;
      if (iVar13 <= iVar12) {
        iVar11 = iVar13;
      }
      if (iVar12 <= iVar13) {
        iVar12 = iVar13;
      }
      iVar24 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
      iVar13 = iVar16;
      if (iVar16 <= iVar24) {
        iVar13 = iVar24;
      }
      if (iVar24 <= iVar16) {
        iVar16 = iVar24;
      }
      if (iVar13 + 1 != iVar16) {
        iVar24 = iVar11;
        do {
          FUN_035a4360(param_1,iVar24,iVar16,0);
          if (iVar24 < iVar12) {
            iVar24 = iVar24 + 1;
          }
          else {
            iVar16 = iVar16 + 1;
            iVar24 = iVar11;
          }
        } while ((iVar11 != iVar24) || (iVar13 + 1 != iVar16));
      }
    }
  }
LAB_0137a4d4:
  local_e8 = &PTR_LAB_049938e8;
  lVar19 = *(long *)PTR_DAT_04bb3968;
  if (lVar19 != 0) {
    pppuStack_68 = &local_e8;
    local_70 = &PTR_FUN_04993910;
    if (*(int *)(lVar19 + 0xb88) != 0) {
      lVar22 = (long)*(int *)(lVar19 + 0xb88) * 8;
      puVar20 = *(undefined8 **)(lVar19 + 0xb90);
      puStack_e0 = param_1;
      do {
        lVar22 = lVar22 + -8;
        uVar18 = (*(code *)*local_70)(&local_70,*puVar20);
        if ((uVar18 & 1) != 0) {
          return;
        }
        puVar20 = puVar20 + 1;
      } while (lVar22 != 0);
    }
  }
  return;
}

