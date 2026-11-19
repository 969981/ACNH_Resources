
bool FUN_03850a90(long param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar6 <= param_4) {
    param_4 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    lVar5 = *(long *)(param_1 + 0x78);
  }
  if (((int)param_4 < 0) || (*(int *)(lVar5 + 0x18) <= (int)param_4)) {
    local_25 = 0;
    local_128 = 0x100;
    puStack_130 = local_124;
    local_124[0] = 0;
    local_138 = PTR_DAT_04bb21f8 + 0x10;
    lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_138,"%s.as",lVar5 + *(int *)(lVar5 + 0x24) + (long)*(int *)(lVar5 + 8));
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + (ulong)param_4 * 0x10) + 0x98);
    if ((lVar5 != 0) &&
       ((*(uint *)(lVar5 + (long)((int)param_2 >> 5) * 4 + 0x40) >> (ulong)(param_2 & 0x1f) & 1) !=
        0)) {
      uVar6 = *(uint *)(lVar5 + 0xa0);
      if ((0 < (int)uVar6) && (lVar8 = *(long *)(lVar5 + 0x28), lVar8 != 0)) {
        if (param_3 == (undefined8 *)0x0) {
          uVar10 = 0;
          do {
            uVar1 = uVar10;
            if (*(uint *)(lVar5 + 0x20) <= uVar10) {
              uVar1 = 0;
            }
            bVar3 = *(uint *)(*(long *)(lVar8 + (ulong)uVar1 * 0x28) + 4) == param_2;
            bVar4 = uVar6 - 1 != uVar10;
            uVar10 = uVar10 + 1;
          } while (!bVar3 && bVar4);
          return bVar3;
        }
        uVar10 = 0;
        while( true ) {
          uVar1 = uVar10;
          if (*(uint *)(lVar5 + 0x20) <= uVar10) {
            uVar1 = 0;
          }
          puVar7 = (undefined8 *)(lVar8 + (ulong)uVar1 * 0x28);
          piVar11 = (int *)*puVar7;
          if (piVar11[1] == param_2) break;
          uVar10 = uVar10 + 1;
          if (uVar6 == uVar10) {
            return false;
          }
        }
        iVar2 = *piVar11;
        if (iVar2 == -1) {
          if ((int)*(uint *)(DAT_05b05178 + 0x108) < 1) {
            puVar9 = &DAT_0407ebb1;
          }
          else {
            uVar10 = 0;
            puVar9 = &DAT_0407ebb1;
            do {
              uVar1 = uVar10;
              if (*(uint *)(DAT_05b05178 + 0xf8) <= uVar10) {
                uVar1 = 0;
              }
              if (*(uint *)(*(long *)(DAT_05b05178 + 0x100) + (ulong)uVar1 * 0x10 + 8) == param_2) {
                puVar9 = *(undefined8 **)(*(long *)(DAT_05b05178 + 0x100) + (ulong)uVar1 * 0x10);
                break;
              }
              uVar10 = uVar10 + 1;
            } while (*(uint *)(DAT_05b05178 + 0x108) != uVar10);
          }
        }
        else {
          lVar8 = *(long *)(*(long *)(lVar8 + (ulong)uVar1 * 0x28 + 0x10) + 8);
          puVar9 = (undefined8 *)(lVar8 + iVar2 + (long)*(int *)(lVar8 + 0x24));
        }
        *param_3 = puVar9;
        *(uint *)(param_3 + 1) = uVar6;
        *(uint *)((long)param_3 + 0xc) = param_2;
        param_3[2] = lVar5;
        param_3[3] = puVar7;
        return true;
      }
    }
  }
  return false;
}

