
/* WARNING: Removing unreachable block (ram,0x02b841e4) */
/* WARNING: Removing unreachable block (ram,0x02b841f4) */

undefined8 FUN_02b84100(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bb5008;
  if (*(int *)(param_1 + 0x550) != 0x1a || *(short *)(param_1 + 0xcbe) == -1) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb5008;
  uVar15 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x11f0);
  if ((*(uint *)(lVar8 + 0x11d0) <= uVar15) ||
     (*(long *)(*(long *)(lVar8 + 0x11d8) + (long)(int)uVar15 * 8) == 0)) {
    return 0;
  }
  uVar15 = (uint)*(ushort *)(param_1 + 0x448) - (uint)*(ushort *)(lVar8 + 0xff0);
  if ((uVar15 < *(uint *)(lVar8 + 0xfd0)) &&
     (lVar8 = *(long *)(*(long *)(lVar8 + 0xfd8) + (long)(int)uVar15 * 8), lVar8 != 0)) {
    puVar7 = (ushort *)FUN_02a7ea90(lVar8,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
    if (puVar7 == (ushort *)0x0) {
      if ((param_2 & 0xffff) == 0) {
        return 0;
      }
    }
    else if ((uint)*puVar7 == (param_2 & 0xffff)) {
      return 0;
    }
  }
  else if ((param_2 & 0xffff) == 0xffff) {
    return 0;
  }
  local_a8 = (undefined **)((ulong)local_a8._4_4_ << 0x20);
  puVar1 = &DAT_05636dd8;
  if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
  }
  if (puVar1[1] == 0) {
    puVar7 = &DAT_0560ab7c;
    uVar11 = DAT_0560ab60;
    uVar12 = (undefined4)DAT_0560ab70;
    uVar14 = DAT_0560ab70._4_4_;
    uVar13 = DAT_0560ab78;
    iVar3 = DAT_0560ab64;
  }
  else {
    FUN_01360490(&local_a8,puVar1[1],*(undefined4 *)(param_1 + 0x174));
    puVar7 = (ushort *)((long)&local_88 + 4);
    uVar11 = (undefined1)local_a0;
    uVar12 = (undefined4)local_90;
    uVar14 = local_90._4_4_;
    uVar13 = (undefined4)local_88;
    iVar3 = local_a0._4_4_;
  }
  uVar4 = *puVar7;
  FUN_02b81fc4(param_1);
  lVar8 = *(long *)puVar5;
  uVar15 = (uint)uVar4;
  if (iVar3 != 0x1a) {
    uVar15 = 0;
  }
  uVar15 = uVar15 - *(ushort *)(lVar8 + 0xff0);
  if ((uVar15 < *(uint *)(lVar8 + 0xfd0)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xfd8) + (long)(int)uVar15 * 8), puVar9 != (uint *)0x0))
  {
    uVar15 = *puVar9;
    uVar6 = 0;
    if ((uVar15 == 0) || (puVar9 == (uint *)(ulong)uVar15)) goto LAB_02b84368;
    puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar15);
    if (((*puVar10 != 0) && (uVar15 = puVar10[1], uVar15 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
    {
      lVar8 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar8 != 0) {
        uVar2 = 0;
        if ((ulong)uVar15 != 0) {
          uVar2 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar15);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05604488) &&
           (uVar6 = *(ushort *)(DAT_05604490 + (long)(int)uVar2 * 2), uVar6 < 6)) goto LAB_02b84368;
      }
    }
  }
  uVar6 = 0;
LAB_02b84368:
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a8 = (undefined **)(PTR_DAT_04bc4570 + 0x10);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_a0 = 0;
  FUN_02a7e130(&local_a8);
  FUN_02a7e3d0(&local_a8,param_2);
  FUN_02a7e750(&local_a8,uVar6);
  uVar6 = FUN_00edf160(&local_a0,1);
  *(ushort *)(param_1 + 0x448) = uVar6;
  local_a0 = CONCAT71(local_a0._1_7_,uVar11);
  local_90 = CONCAT44(uVar14,uVar12);
  local_a8 = &PTR_LAB_04a9ce20;
  local_a0 = CONCAT44(iVar3,(undefined4)local_a0);
  local_98 = &DAT_048f9750;
  if (iVar3 == 0x1a) {
    uVar4 = uVar6;
  }
  local_88 = CONCAT26(local_88._6_2_,CONCAT24(uVar4,uVar13));
  FUN_02b94180(*(undefined4 *)(param_1 + 0x174),param_2);
  FUN_02b81bf0(param_1,&local_a8);
  return 1;
}

