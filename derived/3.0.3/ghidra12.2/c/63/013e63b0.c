
/* WARNING: Removing unreachable block (ram,0x013e661c) */
/* WARNING: Removing unreachable block (ram,0x013e65f4) */

void FUN_013e63b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  float local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  if ((*(byte *)(param_1 + 0x274) & 1) == 0) {
    return;
  }
  if ((((*(int *)(param_1 + 0x290) == 0) && (DAT_05231900 != 0)) &&
      (lVar9 = *(long *)(DAT_05231900 + 0x50), lVar9 != 0)) && (*(long *)(lVar9 + 0x118) != 0)) {
    local_50 = (undefined *)0x0;
    local_48 = 0.0;
    local_58 = 0.0;
    if (*(long *)(lVar9 + 0x118) != 0) {
      FUN_015bca00(*(long *)(lVar9 + 0x118),&local_50,param_1 + 0x284,0,1,1);
      bVar3 = false;
      if (((float)local_50 != 0.0) || (local_50._4_4_ != 0.0)) goto LAB_013e63fc;
    }
    bVar3 = local_48 == 0.0;
  }
  else {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    bVar3 = false;
  }
LAB_013e63fc:
  uVar4 = FUN_013f4170(*(undefined8 *)PTR_DAT_04bb3d80,*(undefined4 *)(param_1 + 0x29c),
                       param_1 + 0x290,bVar3);
  local_58 = (float)(uVar4 & 0xffff);
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  puVar2 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = local_58;
  uStack_44 = local_54;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar7 != (uint *)0x0)) {
        uVar6 = 0;
        uVar5 = *puVar7;
        if ((uVar5 != 0) && (puVar7 != (uint *)(ulong)uVar5)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
          uVar6 = 0;
          if (*puVar8 != 0) {
            uVar5 = puVar8[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
                goto LAB_013e6574;
              }
            }
            uVar6 = 0;
          }
        }
        goto LAB_013e6574;
      }
    }
  }
  uVar6 = 0xbc;
LAB_013e6574:
  if (uVar6 == 0x6a) {
    *(uint *)(param_1 + 0x29c) = uVar4;
    *(byte *)(param_1 + 0x274) = *(byte *)(param_1 + 0x274) & 0xfe;
  }
  return;
}

