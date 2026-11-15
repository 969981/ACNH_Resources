
/* WARNING: Removing unreachable block (ram,0x0208c460) */
/* WARNING: Removing unreachable block (ram,0x0208c4f4) */
/* WARNING: Removing unreachable block (ram,0x0208c500) */
/* WARNING: Removing unreachable block (ram,0x0208c40c) */
/* WARNING: Removing unreachable block (ram,0x0208c514) */
/* WARNING: Removing unreachable block (ram,0x0208c520) */
/* WARNING: Removing unreachable block (ram,0x0208c4a8) */
/* WARNING: Removing unreachable block (ram,0x0208c504) */
/* WARNING: Removing unreachable block (ram,0x0208c510) */
/* WARNING: Removing unreachable block (ram,0x0208c454) */
/* WARNING: Removing unreachable block (ram,0x0208c45c) */
/* WARNING: Removing unreachable block (ram,0x0208c4f0) */
/* WARNING: Removing unreachable block (ram,0x0208c524) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0208c220(long param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  uint uVar9;
  uint *puVar10;
  undefined **ppuVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  ulong local_e8;
  undefined8 *******local_e0;
  undefined8 *******local_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******local_c8;
  undefined8 *******local_c0;
  undefined8 ******local_b8;
  undefined8 *****local_b0;
  undefined8 ****local_a8;
  undefined8 ***local_a0;
  undefined8 **local_98;
  undefined8 *******local_90;
  undefined8 *******local_88;
  undefined8 *******local_80;
  undefined8 *******local_78;
  undefined8 *******local_70;
  undefined8 *******local_68;
  undefined8 *******local_60;
  undefined4 local_54;
  undefined *local_50;
  char *pcStack_48;
  
  puVar10 = (uint *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*(int *)(param_1 + 0x30) < 1) {
      puVar10 = (uint *)PTR_DAT_04bc2808;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
      iVar4 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar7) {
        iVar4 = *(int *)(param_1 + 0x28);
      }
      puVar10 = (uint *)(*(long *)(param_1 + 0x20) + (long)(iVar7 - iVar4) * 0x10 + 4);
    }
  }
  uVar3 = *puVar10;
  if (uVar3 == 3) {
    return;
  }
  bVar6 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar6 < 5) {
    local_54 = 5;
  }
  else if (bVar6 < 8) {
    local_54 = 0;
  }
  else if (bVar6 < 0xc) {
    local_54 = 1;
  }
  else if (bVar6 < 0x10) {
    local_54 = 2;
  }
  else {
    local_54 = 3;
    if (0x12 < bVar6) {
      local_54 = 4;
    }
  }
  uVar9 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  local_98 = (undefined8 **)0x0;
  local_c0 = &local_b8;
  local_b8 = &local_b0;
  local_b0 = &local_a8;
  uVar1 = 2;
  if ((uVar9 & 0xfffffffd) != 5) {
    uVar1 = 3 < uVar9;
  }
  local_a8 = &local_a0;
  local_a0 = &local_98;
  pppppppuStack_d0 = &local_c8;
  local_e8 = 0;
  local_e0 = (undefined8 *******)0x0;
  local_d8 = pppppppuStack_d0;
  local_c8 = &local_c0;
  if (&local_90 != (undefined8 ********)0x0) {
    local_c8 = (undefined8 *******)((ulong)&local_c0 & 0xffffffff00000000);
    local_d8 = &local_c0;
    if (&local_c0 != (undefined8 ********)0x0) {
      local_d8 = local_c0;
    }
    pppppppuVar14 = local_d8;
    local_c0 = (undefined8 *******)((ulong)local_c0 & 0xffffffff00000000);
    local_88 = &local_c0;
    if (local_d8 != (undefined8 *******)0x0) {
      local_d8 = (undefined8 *******)*local_d8;
    }
    pppppppuVar8 = local_d8;
    local_90 = pppppppuStack_d0;
    *(undefined4 *)pppppppuVar14 = 0;
    local_80 = pppppppuVar14;
    if (local_d8 != (undefined8 *******)0x0) {
      local_d8 = (undefined8 *******)*local_d8;
    }
    pppppppuVar14 = local_d8;
    *(undefined4 *)pppppppuVar8 = 0;
    local_78 = pppppppuVar8;
    if (local_d8 != (undefined8 *******)0x0) {
      local_d8 = (undefined8 *******)*local_d8;
    }
    pppppppuVar8 = local_d8;
    *(undefined4 *)pppppppuVar14 = 0;
    local_70 = pppppppuVar14;
    if (local_d8 != (undefined8 *******)0x0) {
      local_d8 = (undefined8 *******)*local_d8;
    }
    pppppppuVar14 = local_d8;
    *(undefined4 *)pppppppuVar8 = 0;
    local_68 = pppppppuVar8;
    if (local_d8 != (undefined8 *******)0x0) {
      local_d8 = (undefined8 *******)*local_d8;
    }
    *(undefined4 *)pppppppuVar14 = 0;
    local_60 = pppppppuVar14;
    local_e8 = 0x700000007;
    local_e0 = &local_90;
  }
  if (uVar3 < 2) {
    puVar10 = (uint *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0x5c) == '\0') {
      if (*(int *)(param_1 + 0x30) < 1) {
        puVar10 = (uint *)PTR_DAT_04bc2808;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
        iVar4 = 0;
        if (*(int *)(param_1 + 0x28) <= iVar7) {
          iVar4 = *(int *)(param_1 + 0x28);
        }
        puVar10 = (uint *)(*(long *)(param_1 + 0x20) + (long)(iVar7 - iVar4) * 0x10 + 4);
      }
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,*puVar10);
    FUN_02091a70(&local_e8,param_1,&local_50,&local_54,uVar1,param_2 & 1);
    if (0 < (int)local_e8) {
      if ((int)local_e8 == 1) {
        uVar13 = 0;
        fVar18 = 0.0;
      }
      else {
        fVar18 = 0.0;
        uVar13 = 0;
        do {
          pppppppuVar14 = local_e0 + uVar13;
          uVar13 = uVar13 + 2;
          fVar18 = fVar18 + *(float *)*pppppppuVar14 + *(float *)pppppppuVar14[1];
        } while ((local_e8 & 0xfffffffe) != uVar13);
      }
      if ((local_e8 & 1) != 0) {
        fVar18 = fVar18 + *(float *)local_e0[uVar13];
      }
      if (0.0 < fVar18) {
        puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar9 = *puVar10 ^ *puVar10 << 0xb;
        uVar2 = puVar10[3];
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
        puVar10[2] = uVar2;
        puVar10[3] = uVar9;
        if ((int)local_e8 != 0) {
          uVar13 = 0;
          lVar15 = (long)(int)local_e8 << 3;
          fVar17 = 0.0;
          pppppppuVar14 = local_e0;
          do {
            fVar17 = fVar17 + *(float *)*pppppppuVar14;
            if (fVar18 * ((float)(uVar9 >> 9 | 0x3f800000) + -1.0) < fVar17) {
              if (6 < (uint)uVar13) {
                uVar13 = 0;
              }
              local_50 = (undefined *)CONCAT44(local_50._4_4_,(&DAT_041796ac)[uVar13]);
              ppuVar11 = &local_50;
              iVar4 = *(int *)(param_1 + 0x30);
              goto joined_r0x0208c9f4;
            }
            uVar13 = (ulong)((uint)uVar13 + 1);
            pppppppuVar14 = pppppppuVar14 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
    }
    ppuVar11 = (undefined **)&DAT_053d970c;
    iVar4 = *(int *)(param_1 + 0x30);
joined_r0x0208c9f4:
    if ((iVar4 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      iVar7 = iVar4 + *(int *)(param_1 + 0x2c) + -1;
      iVar4 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar7) {
        iVar4 = *(int *)(param_1 + 0x28);
      }
      puVar12 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar7 - iVar4) * 0x10);
      *puVar12 = *(undefined4 *)ppuVar11;
      puVar12[2] = local_54;
      *(undefined1 *)((long)puVar12 + 0xd) = 1;
    }
    if (uVar3 == 2) goto LAB_0208c748;
    if (uVar3 != 1) {
      if (uVar3 != 0) goto LAB_0208c8d8;
      goto LAB_0208c748;
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar7 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
      iVar4 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar7) {
        iVar4 = *(int *)(param_1 + 0x28);
      }
      puVar12 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar7 - iVar4) * 0x10);
      goto LAB_0208c8d0;
    }
    uVar5 = 0;
  }
  else {
    if (uVar3 != 2) goto LAB_0208c8d8;
LAB_0208c748:
    *(undefined4 *)*local_e0 = 0;
    *(undefined4 *)local_e0[1] = 0;
    *(undefined4 *)local_e0[2] = 0;
    *(undefined4 *)local_e0[3] = 0;
    *(undefined4 *)local_e0[4] = 0;
    *(undefined4 *)local_e0[5] = 0;
    *(undefined4 *)local_e0[6] = 0;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    FUN_02091a70(&local_e8,param_1,&local_50,&local_54,uVar1,param_2 & 1);
    if ((int)local_e8 < 1) {
LAB_0208c8c8:
      puVar12 = &DAT_053d970c;
    }
    else {
      if ((int)local_e8 == 1) {
        uVar13 = 0;
        fVar18 = 0.0;
      }
      else {
        fVar18 = 0.0;
        uVar13 = 0;
        do {
          pppppppuVar14 = local_e0 + uVar13;
          uVar13 = uVar13 + 2;
          fVar18 = fVar18 + *(float *)*pppppppuVar14 + *(float *)pppppppuVar14[1];
        } while ((local_e8 & 0xfffffffe) != uVar13);
      }
      if ((local_e8 & 1) != 0) {
        fVar18 = fVar18 + *(float *)local_e0[uVar13];
      }
      if (fVar18 <= 0.0) goto LAB_0208c8c8;
      puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar3 = *puVar10 ^ *puVar10 << 0xb;
      uVar9 = puVar10[3];
      *puVar10 = puVar10[1];
      puVar10[1] = puVar10[2];
      uVar3 = uVar3 >> 8 ^ uVar9 >> 0x13 ^ uVar3 ^ uVar9;
      puVar10[2] = uVar9;
      puVar10[3] = uVar3;
      if ((int)local_e8 == 0) goto LAB_0208c8c8;
      uVar13 = 0;
      lVar15 = (long)(int)local_e8 << 3;
      puVar12 = &DAT_053d970c;
      fVar17 = 0.0;
      pppppppuVar14 = local_e0;
      do {
        fVar17 = fVar17 + *(float *)*pppppppuVar14;
        if (fVar18 * ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) < fVar17) {
          puVar12 = &DAT_041796ac + uVar13;
          if (6 < (uint)uVar13) {
            puVar12 = &DAT_041796ac;
          }
          break;
        }
        uVar13 = (ulong)((uint)uVar13 + 1);
        pppppppuVar14 = pppppppuVar14 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
LAB_0208c8d0:
    uVar5 = *puVar12;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
LAB_0208c8d8:
  FUN_02093bb8(param_1);
  lVar15 = FUN_021c9770(*(undefined4 *)(param_1 + 0xc),1);
  if (lVar15 != 0) {
    lVar16 = *(long *)PTR_DAT_04bb3968;
    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = *puVar10 ^ *puVar10 << 0xb;
    uVar9 = puVar10[3];
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar3 = uVar3 >> 8 ^ uVar9 >> 0x13 ^ uVar3 ^ uVar9;
    puVar10[2] = uVar9;
    puVar10[3] = uVar3;
    puVar10 = (uint *)(**(code **)(*(long *)(lVar16 + 0x2dd8) + 0xf0))(lVar16 + 0x2dd8);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "IsEatCucumber";
    FUN_021c2600(lVar15,&local_50,(uint)((ulong)uVar3 * 100 >> 0x20) < *puVar10);
  }
  return;
}

