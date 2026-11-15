
/* WARNING: Removing unreachable block (ram,0x021e73d8) */
/* WARNING: Removing unreachable block (ram,0x021e73c8) */
/* WARNING: Removing unreachable block (ram,0x021e7434) */

undefined8 FUN_021e7360(undefined2 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar7 = FUN_0118be74();
  if (iVar7 != 0x7e3d1e46) {
    uVar9 = FUN_0118ad90(param_2,iVar7);
    puVar6 = PTR_DAT_04bb43c0;
    puVar5 = PTR_DAT_04bb37e0;
    if ((uVar9 & 1) != 0) {
      lVar11 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      iVar13 = *(int *)(param_2 + 0x14);
      if (iVar7 == iVar13) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x10);
      iVar14 = iVar2;
      do {
        lVar10 = *(long *)(lVar11 + 0xd0);
        puVar12 = (undefined2 *)puVar5;
        if (lVar10 != 0) {
          lVar1 = lVar10 + 0x130 + (ulong)*(uint *)(lVar10 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar10 + 0x198)) {
            lVar1 = lVar10 + 0x130;
          }
          iVar3 = *(int *)(lVar1 + 0x28);
          if (iVar3 <= iVar14 && iVar14 <= *(int *)(lVar1 + 8) + iVar3 + -1) {
            iVar4 = *(int *)(lVar1 + 0x2c);
            if ((iVar4 <= iVar13 && iVar13 <= *(int *)(lVar1 + 0xc) + iVar4 + -1) &&
               (uVar8 = (iVar13 - iVar4) + (iVar14 - iVar3) * *(int *)(lVar1 + 0xc),
               uVar8 < *(uint *)(lVar1 + 0x10))) {
              puVar12 = (undefined2 *)(*(long *)(lVar1 + 0x18) + (long)(int)uVar8 * 8);
            }
          }
        }
        lVar10 = *(long *)puVar6;
        uVar8 = FUN_0277d6c4(puVar12);
        if (*(long *)puVar6 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            *param_1 = *puVar12;
            *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar12 + 1);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar12 + 3);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar12 + 2);
            return 1;
          }
        }
        if (iVar14 < *(int *)(param_2 + 0x20)) {
          iVar14 = iVar14 + 1;
        }
        else {
          iVar14 = *(int *)(param_2 + 0x10);
          iVar13 = iVar13 + 1;
        }
      } while ((iVar2 != iVar14) || (iVar7 != iVar13));
    }
  }
  return 0;
}

