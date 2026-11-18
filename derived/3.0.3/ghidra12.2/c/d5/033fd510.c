
bool FUN_033fd510(long *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88 [2];
  undefined8 *local_80 [4];
  
  FUN_033fd270(local_88,param_2,param_3);
  iVar7 = local_88[0];
  if (local_88[0] == 1) {
    bVar8 = false;
  }
  else {
    lVar10 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar15 = 0;
    do {
      if ((*(uint *)(lVar10 + (uVar15 >> 5) * 4) >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0)
      goto LAB_033fd594;
      uVar9 = (uint)uVar15 + 1;
      uVar15 = (ulong)uVar9;
    } while (uVar9 != 15000);
    uVar15 = 0;
LAB_033fd594:
    lVar11 = (**(code **)(*param_1 + 0x20))(param_1);
    puVar6 = PTR_DAT_04bbfe58;
    puVar5 = PTR_DAT_04bb43c0;
    puVar4 = PTR_DAT_04bb37e0;
    iVar14 = 15000;
    do {
      if ((*(uint *)(lVar11 + (ulong)(iVar14 - 1U >> 5) * 4) >> (ulong)(iVar14 - 1U & 0x1f) & 1) !=
          0) break;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    bVar8 = iVar14 != (int)uVar15;
    if ((bVar8) && (iVar7 != 0)) {
      lVar11 = *(long *)PTR_DAT_04bb43c0;
LAB_033fd610:
      puVar2 = (undefined4 *)(puVar6 + uVar15 * 8);
      if (0x752 < (uint)(uVar15 >> 3)) {
        puVar2 = (undefined4 *)puVar6;
      }
      puVar3 = (undefined4 *)puVar4;
      if ((uint)uVar15 < 0x3a99) {
        puVar3 = puVar2;
      }
      local_90 = *puVar3;
      uStack_8c = puVar3[1];
      uVar9 = FUN_0277d6c4(&local_90);
      lVar13 = *(long *)puVar5;
      if (lVar13 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          uVar12 = (*(code *)*local_80[0])(local_80,&local_90);
          if ((uVar12 & 1) != 0) {
            return true;
          }
          lVar13 = *(long *)puVar5;
        }
      }
      do {
        uVar9 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar9;
        if (0x752 < uVar9 >> 3) {
          uVar9 = 0x3a95;
          goto LAB_033fd6b4;
        }
      } while ((*(uint *)(lVar10 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0);
      goto LAB_033fd708;
    }
  }
  return bVar8;
  while( true ) {
    if ((*(uint *)(lVar10 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_033fd704;
    uVar9 = uVar9 - 3;
    if (uVar9 == 0xfffffffd) break;
LAB_033fd6b4:
    uVar1 = uVar9 + 2;
    if (((*(uint *)(lVar10 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar9 + 1,
       (*(uint *)(lVar10 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar9 = uVar1;
LAB_033fd704:
      uVar15 = (ulong)(uVar9 + 1);
      goto LAB_033fd708;
    }
  }
  uVar15 = 0;
LAB_033fd708:
  if (iVar14 == (int)uVar15) {
    return false;
  }
  lVar11 = lVar13;
  if (local_88[0] == 0) {
    return true;
  }
  goto LAB_033fd610;
}

