
/* WARNING: Removing unreachable block (ram,0x01681de0) */
/* WARNING: Removing unreachable block (ram,0x01681df0) */

void FUN_01681c18(long param_1,long param_2,long param_3,int param_4,ulong param_5,int param_6,
                 int *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [16];
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  if ((param_5 & 1) != 0) goto LAB_01681c54;
  if (0xb < param_6) {
    return;
  }
  if (*param_7 < param_6) {
    *param_7 = param_6;
  }
  puVar1 = PTR_DAT_04bb2010;
  local_78 = *(uint *)(param_3 + 8);
  if ((local_78 - *(int *)(param_2 + 8)) - 5 < 0xfffffff7) {
    return;
  }
  uStack_74 = *(uint *)(param_3 + 0xc);
  if ((uStack_74 - *(int *)(param_2 + 0xc)) - 5 < 0xfffffff7) {
    return;
  }
  fVar14 = (float)(int)local_78 * 0.5;
  fVar15 = (float)(int)uStack_74 * 0.5;
  uVar11 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar11 = (uint)(fVar14 < 0.0);
  }
  uVar13 = 0;
  if (fVar15 != (float)(int)fVar15) {
    uVar13 = (uint)(fVar15 < 0.0);
  }
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
    iVar7 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
    iVar7 = 0;
    if (lVar9 != 0) {
      uVar12 = ((int)fVar14 - uVar11) - *(int *)(lVar9 + 0x28);
      uVar4 = *(uint *)(lVar9 + 0x18);
      uVar5 = ((int)fVar15 - uVar13) - *(int *)(lVar9 + 0x2c);
      if ((uVar12 < uVar4 && uVar5 <= *(uint *)(lVar9 + 0x1c)) &&
          (uVar4 <= uVar12 || *(uint *)(lVar9 + 0x1c) != uVar5)) {
        uVar12 = uVar12 + uVar4 * uVar5;
LAB_01681e74:
        if (*(uint *)(lVar9 + 0x30) <= uVar12) {
          uVar12 = 0;
        }
        puVar10 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar12 * 0x68);
      }
      else {
        if (*(char *)(lVar9 + 0x88) != '\0') {
          uVar12 = ((int)fVar14 - uVar11) - *(int *)(lVar9 + 0x98);
          uVar13 = ((int)fVar15 - uVar13) - *(int *)(lVar9 + 0x9c);
          uVar11 = *(uint *)(lVar9 + 0xa0);
          if ((uVar12 < uVar11 && uVar13 <= *(uint *)(lVar9 + 0xa4)) &&
              (uVar11 <= uVar12 || *(uint *)(lVar9 + 0xa4) != uVar13)) {
            uVar12 = uVar12 + uVar11 * uVar13 + *(int *)(lVar9 + 0x8c);
            goto LAB_01681e74;
          }
        }
        puVar10 = &DAT_051a50f0;
      }
      iVar7 = (int)*(char *)(puVar10 + 2);
    }
  }
  if (iVar7 != param_4) {
    return;
  }
  local_68 = local_78 + 1;
  iStack_64 = uStack_74 + 1;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  if ((((DAT_05233970 <= (int)local_78) && ((int)local_78 <= DAT_05233980)) &&
      (DAT_05233974 <= (int)uStack_74)) &&
     ((((int)uStack_74 <= DAT_05233984 &&
       (uVar11 = (uStack_74 & 0x1fffffe) * 0x80 + ((int)local_78 >> 1), uVar11 >> 0xf == 0)) &&
      ((*(uint *)(param_1 + (ulong)(uVar11 >> 5) * 4 + 0x290d8) >> (ulong)(local_78 >> 1 & 0x1f) & 1
       ) != 0)))) {
    return;
  }
  lVar9 = param_1 + 0x10020;
  local_70 = local_80;
  uVar8 = FUN_01695790(lVar9,&local_88,1);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar3 = param_1 + 0xc018;
  uVar8 = FUN_01695698(lVar3,param_3,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar8 = FUN_01695698(param_1 + 0x8010,param_3,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (param_6 == 1) {
    local_90 = *(undefined4 *)(param_3 + 8);
    puVar2 = puVar1 + 0x10;
    iStack_8c = *(int *)(param_3 + 0xc) + 2;
    local_98 = puVar2;
    uVar8 = FUN_01695698(lVar3,&local_98,0);
    bVar6 = false;
    if ((uVar8 & 1) != 0) {
      FUN_0137d59c(auStack_a8,&local_98);
      iVar7 = FUN_01317cc0(auStack_a8,1);
      bVar6 = iVar7 == param_4;
    }
    iStack_8c = *(undefined4 *)(param_3 + 0xc);
    local_90 = *(int *)(param_3 + 8) + 2;
    local_98 = puVar2;
    uVar8 = FUN_01695698(lVar3,&local_98,0);
    if ((uVar8 & 1) != 0) {
      FUN_0137d59c(auStack_a8,&local_98);
      iVar7 = FUN_01317cc0(auStack_a8,1);
      if (iVar7 == param_4) {
        bVar6 = bVar6 + 1;
      }
    }
    local_90 = *(undefined4 *)(param_3 + 8);
    puVar1 = puVar1 + 0x10;
    iStack_8c = *(int *)(param_3 + 0xc) + -2;
    local_98 = puVar1;
    uVar8 = FUN_01695698(lVar3,&local_98,0);
    if ((uVar8 & 1) != 0) {
      FUN_0137d59c(auStack_a8,&local_98);
      iVar7 = FUN_01317cc0(auStack_a8,1);
      if (iVar7 == param_4) {
        bVar6 = bVar6 + 1;
      }
    }
    iStack_8c = *(undefined4 *)(param_3 + 0xc);
    local_90 = *(int *)(param_3 + 8) + -2;
    local_98 = puVar1;
    uVar8 = FUN_01695698(lVar3,&local_98,0);
    if ((uVar8 & 1) != 0) {
      FUN_0137d59c(auStack_a8,&local_98);
      iVar7 = FUN_01317cc0(auStack_a8,1);
      if (iVar7 == param_4) {
        bVar6 = bVar6 + 1;
      }
    }
    if (bVar6 < 2) {
      lVar9 = param_1 + 0x8010;
    }
  }
  FUN_01695708(lVar9,param_3);
LAB_01681c54:
  param_6 = param_6 + 1;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_80 = (undefined *)CONCAT44(*(int *)(param_3 + 0xc) + 2,*(undefined4 *)(param_3 + 8));
  local_88 = puVar1;
  FUN_01681c18(param_1,param_2,&local_88,param_4,0,param_6,param_7);
  local_80 = (undefined *)CONCAT44(*(undefined4 *)(param_3 + 0xc),*(int *)(param_3 + 8) + 2);
  local_88 = puVar1;
  FUN_01681c18(param_1,param_2,&local_88,param_4,0,param_6,param_7);
  local_80 = (undefined *)CONCAT44(*(int *)(param_3 + 0xc) + -2,*(undefined4 *)(param_3 + 8));
  local_88 = puVar1;
  FUN_01681c18(param_1,param_2,&local_88,param_4,0,param_6,param_7);
  local_80 = (undefined *)CONCAT44(*(undefined4 *)(param_3 + 0xc),*(int *)(param_3 + 8) + -2);
  local_88 = puVar1;
  FUN_01681c18(param_1,param_2,&local_88,param_4,0,param_6,param_7);
  return;
}

