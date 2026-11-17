
/* WARNING: Removing unreachable block (ram,0x02a74c14) */
/* WARNING: Removing unreachable block (ram,0x02a74bd4) */
/* WARNING: Removing unreachable block (ram,0x02a74be4) */
/* WARNING: Removing unreachable block (ram,0x02a74bf0) */
/* WARNING: Removing unreachable block (ram,0x02a74c24) */
/* WARNING: Removing unreachable block (ram,0x02a74c30) */

void FUN_02a74b10(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined **local_78;
  long lStack_70;
  undefined4 local_58 [10];
  
  puVar1 = PTR_DAT_04bb3238;
  uVar8 = 0;
  uVar4 = *(undefined4 *)PTR_DAT_04bb3238;
  do {
    uVar6 = (ulong)uVar8;
    uVar8 = uVar8 + 1;
    puVar10 = (undefined4 *)(param_1 + 0x10 + ((long)(uVar6 << 0x20) >> 0x1d));
    *puVar10 = uVar4;
    puVar10[1] = 0xffffffff;
  } while (uVar8 != 0x36);
  iVar3 = 0;
  do {
    puVar10 = (undefined4 *)(param_1 + 0x1c8 + (long)iVar3 * 0x14);
    iVar3 = iVar3 + 1;
    *puVar10 = uVar4;
    *(undefined2 *)(puVar10 + 1) = 0;
    *(undefined8 *)(puVar10 + 2) = 0;
    puVar10[4] = 0;
  } while (iVar3 != 0x24);
  uVar8 = *(uint *)(param_1 + 0x498);
  if (uVar8 != 0) {
    lVar7 = *(long *)(param_1 + 0x4a0);
    uVar9 = 0;
    do {
      *(undefined4 *)(lVar7 + ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8) = 0;
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
    uVar4 = *(undefined4 *)puVar1;
  }
  *(undefined4 *)(param_1 + 0x4c8) = uVar4;
  *(undefined4 *)(param_1 + 0x4cc) = uVar4;
  local_58[0] = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa0) != 0)) {
    local_58[0] = 0;
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar7 != 0) {
      local_78 = &PTR_FUN_04a9c550;
      lStack_70 = param_1;
      if (*(long *)(lVar7 + 0x150) != 0) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x150) + 0x10))();
        iVar3 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar3) {
          iVar11 = 0;
          do {
            FUN_01360490(local_58,*(undefined8 *)(lVar7 + 0x150),iVar11);
            uVar6 = (*(code *)*local_78)(&local_78,local_58,iVar11);
            if ((uVar6 & 1) == 0) break;
            bVar2 = iVar3 + -1 != iVar11;
            iVar11 = iVar11 + 1;
          } while (bVar2);
        }
      }
      uVar4 = FUN_02ae34dc();
      *(undefined4 *)(param_1 + 0x4c8) = uVar4;
      uVar4 = FUN_02a834d8();
      *(undefined4 *)(param_1 + 0x4cc) = uVar4;
    }
  }
  FUN_02a734b8(param_1 + 0x4a8);
  return;
}

