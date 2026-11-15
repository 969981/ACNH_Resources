
/* WARNING: Removing unreachable block (ram,0x021e84d4) */
/* WARNING: Removing unreachable block (ram,0x021e84e4) */
/* WARNING: Removing unreachable block (ram,0x021e84f0) */

void FUN_021e8490(int *param_1,float *param_2,ushort *param_3,uint param_4,long param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 *local_b8;
  ushort *puStack_b0;
  long *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  
  if (param_3 != (ushort *)0x0) {
    local_b8 = (undefined8 *)((ulong)local_b8 & 0xffffffff00000000);
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar12 != 0) {
      fVar15 = *param_2;
      fVar16 = param_2[2];
      iVar10 = *(int *)(lVar12 + 0x30);
      iVar11 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar2 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      if ((int)(iVar11 + 0xcU) < iVar10) {
        uVar14 = 0x18;
        if (0xb < iVar11) {
          uVar14 = iVar11 + 0xcU;
        }
        uVar7 = 0;
        if (0xb < iVar11) {
          uVar7 = iVar11 - 0xc;
        }
      }
      else {
        uVar14 = iVar10 - 1;
        uVar7 = iVar10 - 0x19;
      }
      iVar10 = *(int *)(lVar12 + 0x34);
      if ((int)(iVar2 + 10U) < iVar10) {
        uVar9 = 0;
        if (9 < iVar2) {
          uVar9 = iVar2 - 10;
        }
        uVar8 = 0x14;
        if (9 < iVar2) {
          uVar8 = iVar2 + 10U;
        }
      }
      else {
        uVar8 = iVar10 - 1;
        uVar9 = iVar10 - 0x15;
      }
      fVar17 = (float)((int)((float)(int)(fVar15 + 2.5) / 5.0) - (uint)(fVar15 + 2.5 < 0.0) & 0xffff
                      );
      fVar15 = (float)(int)uVar14;
      if (fVar17 <= (float)(int)uVar14) {
        fVar15 = fVar17;
      }
      fVar18 = (float)((int)((float)(int)(fVar16 + 2.5) / 5.0) - (uint)(fVar16 + 2.5 < 0.0) & 0xffff
                      );
      fVar16 = (float)(int)uVar7;
      if ((float)(int)uVar7 <= fVar17) {
        fVar16 = fVar15;
      }
      iVar10 = (int)fVar16;
      fVar15 = (float)(int)uVar8;
      if (fVar18 <= (float)(int)uVar8) {
        fVar15 = fVar18;
      }
      fVar16 = (float)(int)uVar9;
      if ((float)(int)uVar9 <= fVar18) {
        fVar16 = fVar15;
      }
      iVar11 = (int)fVar16;
      if (param_5 != 0) {
        *(int *)(param_5 + 8) = iVar10;
        *(int *)(param_5 + 0xc) = iVar11;
      }
      param_3[2] = (ushort)uVar7;
      param_3[4] = (ushort)uVar14;
      param_3[3] = (ushort)uVar9;
      uVar1 = (ushort)uVar7;
      if ((uVar14 & 0xffff) <= (uVar7 & 0xffff)) {
        uVar1 = (ushort)uVar14;
      }
      param_3[5] = (ushort)uVar8;
      *param_3 = uVar1;
      uVar1 = (ushort)uVar9;
      if ((uVar8 & 0xffff) <= (uVar9 & 0xffff)) {
        uVar1 = (ushort)uVar8;
      }
      param_3[1] = uVar1;
      memset(param_3 + 0x2974,2,0x20d);
      memset(*(void **)(param_3 + 0x2a84),0,(long)*(int *)(param_3 + 0x2a82) << 2);
      param_3[0x2a88] = 0;
      param_3[0x2a89] = 0;
      FUN_035a4230(param_3);
      local_a8 = &local_70;
      puStack_a0 = PTR_DAT_04bbc1a0 + 0x10;
      local_98 = PTR_DAT_04bb2010 + 0x10;
      uStack_90 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_b8 = (undefined8 *)(PTR_DAT_04bc1990 + 0x10);
      lStack_68 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      uVar6 = *(ulong *)(param_3 + 0xc);
      puStack_b0 = param_3;
      local_88 = local_98;
      local_70 = lVar12;
      if (uVar6 != 0) {
        uVar1 = *param_3;
        uVar13 = 0;
        iVar2 = *(int *)(param_3 + 6);
        uVar14 = (uint)param_3[1];
        uVar7 = (uint)uVar1;
        do {
          iVar3 = uVar7 - *param_3;
          if ((((-1 < iVar3) && (iVar3 < *(int *)(param_3 + 6))) &&
              (iVar4 = uVar14 - param_3[1], -1 < iVar4)) &&
             ((iVar4 < *(int *)(param_3 + 8) && (*(long *)(param_3 + 0x10) != 0)))) {
            (*(code *)*local_b8)
                      (&local_b8,
                       *(long *)(param_3 + 0x10) +
                       (long)(iVar3 + *(int *)(param_3 + 6) * iVar4) * 0x28);
            uVar6 = *(ulong *)(param_3 + 0xc);
          }
          uVar13 = uVar13 + 1;
          bVar5 = uVar7 + 1 == iVar2 + (uint)uVar1;
          if (bVar5) {
            uVar14 = uVar14 + 1;
          }
          uVar9 = (uint)uVar1;
          if (!bVar5) {
            uVar9 = uVar7 + 1;
          }
          uVar7 = uVar9;
        } while (uVar13 < uVar6);
      }
      if (*param_1 != 0) {
        FUN_02146570(param_3,param_1,PTR_DAT_04bb3238,0);
      }
      if ((param_4 & 1) != 0) {
        FUN_035a56c0(param_3,0);
        *(undefined1 *)(param_3 + 0x24) = 1;
        FUN_035a8968(param_3,iVar10,iVar11);
        FUN_035a81f0(param_3,iVar10,iVar11,0);
        *(undefined1 *)(param_3 + 0x24) = 0;
      }
    }
  }
  return;
}

