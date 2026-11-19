
bool FUN_03850890(long param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
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
    if ((((lVar5 != 0) &&
         ((*(uint *)(lVar5 + (long)((int)param_2 >> 5) * 4 + 0x30) >> (ulong)(param_2 & 0x1f) & 1)
          != 0)) && (uVar6 = *(uint *)(lVar5 + 0x9c), uVar6 != 0)) &&
       (lVar7 = *(long *)(lVar5 + 0x18), lVar7 != 0)) {
      uVar9 = 0;
      if (param_3 == (undefined8 *)0x0) {
        do {
          uVar1 = uVar9;
          if (*(uint *)(lVar5 + 0x10) <= uVar9) {
            uVar1 = 0;
          }
          bVar3 = *(uint *)(*(long *)(lVar7 + (ulong)uVar1 * 0x20) + 4) == param_2;
          bVar4 = uVar6 - 1 != uVar9;
          uVar9 = uVar9 + 1;
        } while (!bVar3 && bVar4);
        return bVar3;
      }
      while( true ) {
        uVar1 = uVar9;
        if (*(uint *)(lVar5 + 0x10) <= uVar9) {
          uVar1 = 0;
        }
        piVar11 = *(int **)(lVar7 + (ulong)uVar1 * 0x20);
        if (piVar11[1] == param_2) break;
        uVar9 = uVar9 + 1;
        if (uVar6 == uVar9) {
          return false;
        }
      }
      iVar2 = *piVar11;
      lVar7 = lVar7 + (ulong)uVar1 * 0x20;
      if (iVar2 == -1) {
        if ((int)*(uint *)(DAT_05b05178 + 0x120) < 1) {
          puVar8 = &DAT_0407ebb1;
        }
        else {
          uVar9 = 0;
          puVar8 = &DAT_0407ebb1;
          do {
            uVar1 = uVar9;
            if (*(uint *)(DAT_05b05178 + 0x110) <= uVar9) {
              uVar1 = 0;
            }
            if (*(uint *)(*(long *)(DAT_05b05178 + 0x118) + (ulong)uVar1 * 0x10 + 8) == param_2) {
              puVar8 = *(undefined8 **)(*(long *)(DAT_05b05178 + 0x118) + (ulong)uVar1 * 0x10);
              break;
            }
            uVar9 = uVar9 + 1;
          } while (*(uint *)(DAT_05b05178 + 0x120) != uVar9);
        }
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        puVar8 = (undefined8 *)(lVar10 + iVar2 + (long)*(int *)(lVar10 + 0x24));
      }
      *param_3 = puVar8;
      *(uint *)(param_3 + 1) = uVar6;
      *(uint *)((long)param_3 + 0xc) = param_2;
      param_3[2] = lVar5;
      param_3[3] = lVar7;
      return true;
    }
  }
  return false;
}

