
bool FUN_0264cdf0(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  if (0 < *param_1) {
    lVar8 = 0;
    puVar9 = *(undefined8 **)(param_1 + 4);
    do {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar8 * 8);
      lVar8 = lVar8 + 1;
      *puVar10 = puVar9;
      *(undefined8 **)(param_1 + 4) = puVar10;
      puVar9 = puVar10;
    } while (lVar8 < *param_1);
  }
  *param_1 = 0;
  puVar1 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar1;
  if (lVar8 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      local_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
            local_48 = lVar8;
          }
        }
      }
      iVar4 = FUN_01ad7260(&local_58);
      bVar2 = iVar4 != 0;
      if (iVar4 == 0) {
        return false;
      }
      iVar4 = FUN_01ad7260(&local_58);
      if (iVar4 < 1) {
        return bVar2;
      }
      iVar5 = FUN_01ad7260(&local_58);
      if ((iVar5 != 0) && (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)) {
        *puVar7 = *puVar7 & 0xfff8;
      }
      if (*param_1 < param_1[1]) {
        puVar9 = *(undefined8 **)(param_1 + 4);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 4) = *puVar9;
        }
        *(undefined2 *)puVar9 = (undefined2)local_50;
        *(undefined1 *)((long)puVar9 + 2) = local_50._2_1_;
        *(undefined1 *)((long)puVar9 + 3) = local_50._3_1_;
        *(undefined4 *)((long)puVar9 + 4) = local_4c;
        if (*param_1 < param_1[1]) {
          *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
          *param_1 = *param_1 + 1;
        }
      }
      if (iVar4 == 1) {
        return bVar2;
      }
      iVar5 = 1;
      do {
        iVar6 = FUN_01ad7260(&local_58);
        if (((iVar6 != 0) && (iVar6 = FUN_01ad7260(&local_58), iVar5 < iVar6)) &&
           (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)) {
          *puVar7 = *puVar7 & 0xfff8 | (ushort)iVar5 & 7;
        }
        if (*param_1 < param_1[1]) {
          puVar9 = *(undefined8 **)(param_1 + 4);
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar9;
          }
          *(undefined2 *)puVar9 = (undefined2)local_50;
          *(undefined1 *)((long)puVar9 + 2) = local_50._2_1_;
          *(undefined1 *)((long)puVar9 + 3) = local_50._3_1_;
          *(undefined4 *)((long)puVar9 + 4) = local_4c;
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
            *param_1 = *param_1 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
      return bVar2;
    }
  }
  return false;
}

