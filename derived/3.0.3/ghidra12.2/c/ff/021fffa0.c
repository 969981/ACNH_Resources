
/* WARNING: Removing unreachable block (ram,0x02200344) */
/* WARNING: Removing unreachable block (ram,0x02200074) */
/* WARNING: Removing unreachable block (ram,0x022001dc) */
/* WARNING: Removing unreachable block (ram,0x022004ac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x022001e0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_021fffa0(float param_1,byte *param_2,ushort *param_3,undefined8 param_4,long param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float local_98 [2];
  float local_90;
  float local_8c [2];
  float local_84;
  undefined *local_80;
  uint local_78;
  uint local_74;
  undefined *local_70;
  uint local_68;
  uint local_64;
  undefined *local_60;
  uint local_58;
  uint local_54;
  undefined *local_50;
  uint local_48;
  uint local_44;
  
  iVar2 = *(int *)(param_5 + 0x10);
  iVar4 = *(int *)(param_5 + 0x14);
  iVar3 = *(int *)(param_5 + 0x20);
  iVar5 = *(int *)(param_5 + 0x24);
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_70 = local_80;
  local_60 = local_80;
  local_50 = local_80;
  iVar9 = iVar3 + iVar2;
  if (iVar9 < 0 != SCARRY4(iVar3,iVar2)) {
    iVar9 = iVar9 + 1;
  }
  iVar1 = iVar5 + iVar4;
  if (iVar1 < 0 != SCARRY4(iVar5,iVar4)) {
    iVar1 = iVar1 + 1;
  }
  local_78 = (iVar9 >> 1) + 1;
  local_64 = (iVar1 >> 1) + 1;
  local_74 = (uint)((float)(iVar5 + 2) + param_1);
  local_68 = (int)((float)(iVar3 + 2) + param_1);
  local_58 = local_78;
  local_54 = (int)((float)(iVar4 + -1) - param_1);
  local_48 = (int)((float)(iVar2 + -1) - param_1);
  local_44 = local_64;
  uVar6 = *param_3;
  uVar10 = (uint)uVar6;
  uVar11 = ((uint)uVar6 + (uint)param_3[6]) - 1;
  if ((((((uint)uVar6 < (local_78 & 0xffff) || (uint)uVar6 == (local_78 & 0xffff)) &&
        ((local_78 & 0xffff) <= (uVar11 & 0xffff))) &&
       (uVar7 = param_3[1], (uint)uVar7 <= (local_74 & 0xffff))) &&
      (((local_74 & 0xffff) <= (((uint)uVar7 + (uint)param_3[8]) - 1 & 0xffff) &&
       (uVar8 = (local_78 - uVar6) + *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (local_74 - uVar7)
       , (*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar8 >> 5) * 4) >>
          (ulong)(uVar8 & 0x1f) & 1) != 0)))) &&
     (((((param_6 & 1) == 0 ||
        (((int)local_78 < *(int *)(DAT_053e0208 + 0x2e18) ||
         (*(int *)(DAT_053e0208 + 0x2e28) < (int)local_78)))) ||
       ((int)local_74 < *(int *)(DAT_053e0208 + 0x2e1c))) ||
      (*(int *)(DAT_053e0208 + 0x2e2c) < (int)local_74)))) {
    local_8c[0] = ((float)iVar2 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5;
    local_84 = ((float)iVar4 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5;
    local_98[0] = (float)(int)local_78 * 5.0 + 2.5;
    local_90 = (float)(int)local_74 * 5.0 + 2.5;
    iVar9 = FUN_01318f40(local_8c,local_98);
    if (iVar9 == 0) {
      *param_2 = *param_2 | 1;
    }
    uVar10 = (uint)*param_3;
    uVar11 = ((uint)*param_3 + (uint)param_3[6]) - 1;
  }
  if ((uVar10 <= (local_68 & 0xffff)) && ((local_68 & 0xffff) <= (uVar11 & 0xffff))) {
    uVar6 = param_3[1];
    if ((((uint)uVar6 <= (local_64 & 0xffff)) &&
        (((local_64 & 0xffff) <= (((uint)uVar6 + (uint)param_3[8]) - 1 & 0xffff) &&
         (uVar8 = (local_68 - uVar10) +
                  *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (local_64 - uVar6),
         (*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar8 >> 5) * 4) >>
          (ulong)(uVar8 & 0x1f) & 1) != 0)))) &&
       ((((param_6 & 1) == 0 ||
         ((((int)local_68 < *(int *)(DAT_053e0208 + 0x2e18) ||
           (*(int *)(DAT_053e0208 + 0x2e28) < (int)local_68)) ||
          ((int)local_64 < *(int *)(DAT_053e0208 + 0x2e1c))))) ||
        (*(int *)(DAT_053e0208 + 0x2e2c) < (int)local_64)))) {
      local_84 = ((float)*(int *)(param_5 + 0x14) * 5.0 +
                 (float)*(int *)(param_5 + 0x24) * 5.0 + 5.0) * 0.5;
      local_8c[0] = ((float)*(int *)(param_5 + 0x10) * 5.0 +
                    (float)*(int *)(param_5 + 0x20) * 5.0 + 5.0) * 0.5;
      local_98[0] = (float)(int)local_68 * 5.0 + 2.5;
      local_90 = (float)(int)local_64 * 5.0 + 2.5;
      iVar9 = FUN_01318f40(local_8c,local_98);
      if (iVar9 == 0) {
        *param_2 = *param_2 | 2;
      }
      uVar10 = (uint)*param_3;
      uVar11 = ((uint)*param_3 + (uint)param_3[6]) - 1;
    }
  }
  if ((uVar10 <= (local_58 & 0xffff)) && ((local_58 & 0xffff) <= (uVar11 & 0xffff))) {
    uVar6 = param_3[1];
    if ((((uint)uVar6 <= (local_54 & 0xffff)) &&
        (((local_54 & 0xffff) <= (((uint)uVar6 + (uint)param_3[8]) - 1 & 0xffff) &&
         (uVar8 = (local_58 - uVar10) +
                  *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (local_54 - uVar6),
         (*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar8 >> 5) * 4) >>
          (ulong)(uVar8 & 0x1f) & 1) != 0)))) &&
       (((param_6 & 1) == 0 ||
        (((((int)local_58 < *(int *)(DAT_053e0208 + 0x2e18) ||
           (*(int *)(DAT_053e0208 + 0x2e28) < (int)local_58)) ||
          ((int)local_54 < *(int *)(DAT_053e0208 + 0x2e1c))) ||
         (*(int *)(DAT_053e0208 + 0x2e2c) < (int)local_54)))))) {
      local_84 = ((float)*(int *)(param_5 + 0x14) * 5.0 +
                 (float)*(int *)(param_5 + 0x24) * 5.0 + 5.0) * 0.5;
      local_8c[0] = ((float)*(int *)(param_5 + 0x10) * 5.0 +
                    (float)*(int *)(param_5 + 0x20) * 5.0 + 5.0) * 0.5;
      local_98[0] = (float)(int)local_58 * 5.0 + 2.5;
      local_90 = (float)(int)local_54 * 5.0 + 2.5;
      iVar9 = FUN_01318f40(local_8c,local_98);
      if (iVar9 == 0) {
        *param_2 = *param_2 | 4;
      }
      uVar10 = (uint)*param_3;
      uVar11 = ((uint)*param_3 + (uint)param_3[6]) - 1;
    }
  }
  if ((uVar10 <= (local_48 & 0xffff)) && ((local_48 & 0xffff) <= (uVar11 & 0xffff))) {
    uVar6 = param_3[1];
    if ((((uint)uVar6 <= (local_44 & 0xffff)) &&
        (((local_44 & 0xffff) <= (((uint)uVar6 + (uint)param_3[8]) - 1 & 0xffff) &&
         (uVar11 = (local_48 - uVar10) +
                   *(int *)(*(long *)(param_3 + 0x20) + 0x1c) * (local_44 - uVar6),
         (*(uint *)(*(long *)(*(long *)(param_3 + 0x20) + 0x10) + (long)((int)uVar11 >> 5) * 4) >>
          (ulong)(uVar11 & 0x1f) & 1) != 0)))) &&
       ((((param_6 & 1) == 0 ||
         ((((int)local_48 < *(int *)(DAT_053e0208 + 0x2e18) ||
           (*(int *)(DAT_053e0208 + 0x2e28) < (int)local_48)) ||
          ((int)local_44 < *(int *)(DAT_053e0208 + 0x2e1c))))) ||
        (*(int *)(DAT_053e0208 + 0x2e2c) < (int)local_44)))) {
      local_84 = ((float)*(int *)(param_5 + 0x14) * 5.0 +
                 (float)*(int *)(param_5 + 0x24) * 5.0 + 5.0) * 0.5;
      local_8c[0] = ((float)*(int *)(param_5 + 0x10) * 5.0 +
                    (float)*(int *)(param_5 + 0x20) * 5.0 + 5.0) * 0.5;
      local_98[0] = (float)(int)local_48 * 5.0 + 2.5;
      local_90 = (float)(int)local_44 * 5.0 + 2.5;
      iVar9 = FUN_01318f40(local_8c,local_98);
      if (iVar9 == 0) {
        *param_2 = *param_2 | 8;
      }
    }
  }
  uVar11 = (uint)*param_2 - (*param_2 >> 1 & 0x55555555);
  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
  uVar11 = uVar11 + (uVar11 >> 8);
  return (uVar11 + (uVar11 >> 0x10) & 0x3f) != 0;
}

