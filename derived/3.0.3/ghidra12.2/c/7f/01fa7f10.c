
undefined8 FUN_01fa7f10(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined2 *puVar13;
  long lVar14;
  undefined8 local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  uint *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_04bb43c0;
  bVar8 = (param_3 & 1) == 0;
  lVar4 = 0x1948;
  if (bVar8) {
    lVar4 = 0x1950;
  }
  puVar5 = (undefined8 *)(param_2[2] + (long)*(int *)(param_2 + 1) * 8);
  if (bVar8) {
    puVar5 = (undefined8 *)(param_2[0x196] + (long)*(int *)(param_2 + 0x195) * 8);
  }
  puVar11 = *(undefined8 **)((long)param_2 + lVar4);
  if (puVar11 != puVar5) {
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      if (*(uint *)*puVar11 < *(uint *)*param_2) {
        puVar13 = *(undefined2 **)
                   (*(long *)((uint *)*param_2 + 2) + (long)(int)*(uint *)*puVar11 * 8);
      }
      else {
        puVar13 = (undefined2 *)0x0;
      }
      local_68 = 0;
      *(undefined8 **)((long)param_2 + lVar4) = puVar11 + 1;
      lVar14 = *(long *)puVar7;
      local_78 = 0;
      local_98 = *puVar13;
      local_96 = *(undefined1 *)(puVar13 + 1);
      local_95 = *(undefined1 *)((long)puVar13 + 3);
      local_94 = *(undefined4 *)(puVar13 + 2);
      local_90 = (uint *)0x0;
      local_a0 = puVar3;
      local_88 = puVar1;
      puStack_80 = puVar2;
      local_70 = puVar2;
      uVar9 = FUN_0277d6c4(&local_98);
      if (*(long *)puVar7 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(puVar13);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
             (puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 != (uint *)0x0)) {
            local_90 = puVar12;
          }
        }
      }
      FUN_01afb480(&local_a0,&local_88);
      local_78 = CONCAT44(local_78._4_4_ + *(int *)(puVar13 + 10),
                          (int)local_78 + *(int *)(puVar13 + 8));
      local_68 = CONCAT44(local_68._4_4_ + *(int *)(puVar13 + 10),
                          (int)local_68 + *(int *)(puVar13 + 8));
      if (local_90 == (uint *)0x0) {
LAB_01fa8170:
        uStack_a4 = 0;
      }
      else {
        uVar9 = *local_90;
        uStack_a4 = 0;
        if ((uVar9 != 0) && (local_90 != (uint *)(ulong)uVar9)) {
          puVar12 = (uint *)((long)local_90 - (long)(ulong)uVar9);
          uStack_a4 = 0;
          if (*puVar12 != 0) {
            uVar9 = puVar12[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar14 != 0) {
                uVar6 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar6 = (uint)((ulong)((long)local_90 - lVar14) / (ulong)uVar9);
                }
                if (*puVar12 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < *(uint *)PTR_DAT_04bc0110) &&
                   (uStack_a4 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar6 * 2),
                   uStack_a4 < 9)) goto LAB_01fa8174;
              }
            }
            goto LAB_01fa8170;
          }
        }
      }
LAB_01fa8174:
      local_a8 = 0;
      local_b0 = 0;
      uVar10 = (**(code **)(*param_1 + 0x570))(param_1,&local_b0,puVar13,&uStack_a4,&local_88);
      if ((uVar10 & 1) != 0) {
        FUN_01fa81ec(param_1,puVar13,&local_88,&local_b0);
        return 1;
      }
      puVar11 = *(undefined8 **)((long)param_2 + lVar4);
    } while (puVar11 != puVar5);
  }
  return 0;
}

