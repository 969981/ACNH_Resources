
/* WARNING: Removing unreachable block (ram,0x0207ac2c) */
/* WARNING: Removing unreachable block (ram,0x0207ac3c) */

undefined8 FUN_0207a9c0(long *param_1,float *param_2,float *param_3,int *param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ushort *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_d0;
  uint local_c8;
  uint uStack_c4;
  undefined8 *local_c0;
  ushort *puStack_b8;
  undefined8 *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  long local_78;
  undefined8 local_70;
  long lStack_68;
  undefined4 local_44;
  
  *(undefined2 *)((long)param_1 + 0x1cc) = 0;
  fVar21 = *param_2 + 2.5;
  fVar23 = param_2[2] + 2.5;
  fVar24 = *param_3 + 2.5;
  fVar22 = param_3[2] + 2.5;
  uVar18 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  uVar19 = uVar18 & 0xffff;
  uVar20 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  local_44 = uVar18 & 0xffff | uVar20 * 0x10000;
  uVar20 = uVar20 & 0xffff;
  uVar18 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0) & 0xffff;
  uVar1 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) & 0xffff;
  if (*(char *)((long)param_1 + 0x1d5) == '\0') {
    fVar21 = (param_2[2] + param_3[2]) * 0.5 + 2.5;
    iVar4 = uVar19 - uVar18;
    iVar3 = -iVar4;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 == *(int *)(param_1[2] + 0xc)) {
      uVar10 = uVar19;
      if (uVar18 <= uVar19) {
        uVar10 = uVar18;
      }
    }
    else {
      fVar22 = (*param_2 + *param_3) * 0.5 + 2.5;
      uVar10 = (int)((float)((int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) & 0xffff) +
                    -12.5);
    }
    iVar4 = uVar20 - uVar1;
    iVar3 = -iVar4;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 == *(int *)(param_1[2] + 0x10)) {
      uVar11 = uVar20;
      if (uVar1 <= uVar20) {
        uVar11 = uVar1;
      }
    }
    else {
      uVar11 = (uint)((float)((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0) & 0xffff) +
                     -10.5);
    }
  }
  else {
    uVar10 = (uint)*(ushort *)param_1[2];
    uVar11 = (uint)((ushort *)param_1[2])[1];
  }
  FUN_0207b244(param_1,uVar10,uVar11);
  puVar16 = (ushort *)param_1[2];
  uVar15 = 0;
  iVar3 = uVar19 - *puVar16;
  if ((-1 < iVar3) && (iVar3 < *(int *)(puVar16 + 6))) {
    iVar3 = uVar20 - puVar16[1];
    if ((-1 < iVar3) && (iVar3 < *(int *)(puVar16 + 8))) {
      uVar15 = 0;
      iVar3 = uVar18 - *puVar16;
      if ((((-1 < iVar3) && (iVar3 < *(int *)(puVar16 + 6))) &&
          (iVar3 = uVar1 - puVar16[1], -1 < iVar3)) && (iVar3 < *(int *)(puVar16 + 8))) {
        memset(puVar16 + 0x2974,2,0x20d);
        memset(*(void **)(puVar16 + 0x2a84),0,(long)*(int *)(puVar16 + 0x2a82) << 2);
        puVar16[0x2a88] = 0;
        puVar16[0x2a89] = 0;
        FUN_035a4230(puVar16);
        local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
        lStack_68 = *(long *)PTR_DAT_04bb27c8 + 0x28;
        lVar12 = param_1[0x31];
        if (lVar12 == 0) {
          local_b0 = &local_70;
          local_80 = 0;
          puStack_a8 = PTR_DAT_04bbc1a0 + 0x10;
          puVar16 = (ushort *)param_1[2];
          local_a0 = PTR_DAT_04bb2010 + 0x10;
          local_c0 = (undefined8 *)(PTR_DAT_04bc1990 + 0x10);
          uStack_98 = 0;
          uStack_88 = 0;
          puStack_b8 = puVar16;
          local_90 = local_a0;
          if (*param_4 != 0) {
            local_d0 = local_a0;
            local_c8 = uVar18;
            uStack_c4 = uVar1;
            FUN_021442cc(&local_c0,&local_d0);
            puVar16 = (ushort *)param_1[2];
          }
          uVar13 = *(ulong *)(puVar16 + 0xc);
          if (uVar13 != 0) {
            uVar2 = *puVar16;
            uVar17 = 0;
            iVar3 = *(int *)(puVar16 + 6);
            uVar19 = (uint)puVar16[1];
            uVar20 = (uint)uVar2;
            do {
              iVar4 = uVar20 - *puVar16;
              if (((-1 < iVar4) && (iVar4 < *(int *)(puVar16 + 6))) &&
                 ((iVar5 = uVar19 - puVar16[1], -1 < iVar5 &&
                  ((iVar5 < *(int *)(puVar16 + 8) && (*(long *)(puVar16 + 0x10) != 0)))))) {
                (*(code *)*local_c0)
                          (&local_c0,
                           *(long *)(puVar16 + 0x10) +
                           (long)(iVar4 + *(int *)(puVar16 + 6) * iVar5) * 0x28);
                uVar13 = *(ulong *)(puVar16 + 0xc);
              }
              uVar17 = uVar17 + 1;
              bVar8 = uVar20 + 1 == iVar3 + (uint)uVar2;
              if (bVar8) {
                uVar19 = uVar19 + 1;
              }
              uVar18 = (uint)uVar2;
              if (!bVar8) {
                uVar18 = uVar20 + 1;
              }
              uVar20 = uVar18;
            } while (uVar17 < uVar13);
          }
        }
        else {
          local_b0 = &local_70;
          puStack_a8 = PTR_DAT_04bbc1a0 + 0x10;
          local_c0 = (undefined8 *)(PTR_DAT_04bc2690 + 0x10);
          puVar16 = (ushort *)param_1[2];
          local_80 = 0;
          local_a0 = PTR_DAT_04bb2010 + 0x10;
          uStack_98 = 0;
          uStack_88 = 0;
          puStack_b8 = puVar16;
          local_90 = local_a0;
          local_78 = lVar12;
          if (*param_4 != 0) {
            local_d0 = local_a0;
            local_c8 = uVar18;
            uStack_c4 = uVar1;
            FUN_02145ff4(&local_c0,&local_d0);
            puVar16 = (ushort *)param_1[2];
          }
          uVar13 = *(ulong *)(puVar16 + 0xc);
          if (uVar13 != 0) {
            uVar2 = *puVar16;
            uVar17 = 0;
            iVar3 = *(int *)(puVar16 + 6);
            uVar19 = (uint)puVar16[1];
            uVar20 = (uint)uVar2;
            do {
              iVar4 = uVar20 - *puVar16;
              if ((((-1 < iVar4) && (iVar4 < *(int *)(puVar16 + 6))) &&
                  (iVar5 = uVar19 - puVar16[1], -1 < iVar5)) &&
                 ((iVar5 < *(int *)(puVar16 + 8) && (*(long *)(puVar16 + 0x10) != 0)))) {
                (*(code *)*local_c0)
                          (&local_c0,
                           *(long *)(puVar16 + 0x10) +
                           (long)(iVar4 + *(int *)(puVar16 + 6) * iVar5) * 0x28);
                uVar13 = *(ulong *)(puVar16 + 0xc);
              }
              uVar17 = uVar17 + 1;
              bVar8 = uVar20 + 1 == iVar3 + (uint)uVar2;
              if (bVar8) {
                uVar19 = uVar19 + 1;
              }
              uVar18 = (uint)uVar2;
              if (!bVar8) {
                uVar18 = uVar20 + 1;
              }
              uVar20 = uVar18;
            } while (uVar17 < uVar13);
          }
        }
        FUN_035a56c0(param_1[2],0);
        puVar9 = (undefined2 *)param_1[2];
        FUN_035ac520(puVar9,puVar9 + 0x2974,puVar9 + 0x2a7c,puVar9,0,0,*puVar9,puVar9[1],0x19,0x15);
        if (*(char *)((long)param_1 + 0x1d4) != '\0') {
          param_4 = (int *)PTR_DAT_04bb3238;
        }
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)(*param_1 + 0x230));
        FUN_02146570(param_1[2],&local_c0,param_4,&local_44);
        lVar14 = param_1[2];
        uVar15 = 1;
        uVar6 = (undefined2)local_44;
        uVar7 = local_44._2_2_;
        lVar12 = param_1[0x30];
        *(undefined1 *)(lVar14 + 0x48) = 1;
        FUN_035a8968(lVar14,(undefined2)local_44,local_44._2_2_);
        FUN_035a81f0(lVar14,uVar6,uVar7,lVar12);
        *(undefined1 *)(lVar14 + 0x48) = 0;
      }
    }
  }
  return uVar15;
}

