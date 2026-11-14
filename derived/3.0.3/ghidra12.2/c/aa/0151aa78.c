
uint FUN_0151aa78(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined **local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  int local_28;
  uint local_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_48 = (uint *)0x0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 == 0) {
LAB_0151ac08:
        uVar6 = 0;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0151ac08;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar7 == (uint *)0x0)) goto LAB_0151ac08;
        uVar6 = 0;
        uVar3 = *puVar7;
        local_48 = puVar7;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          uVar6 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar6 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < DAT_05326d48) &&
                   (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar6 < 0x52))
                goto LAB_0151ac0c;
              }
            }
            goto LAB_0151ac08;
          }
        }
      }
LAB_0151ac0c:
      local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar6);
      if (((uVar6 & 0xfffffffe) == 10) && (uVar5 = FUN_01ae5f4c(&local_58), (uVar5 & 1) == 0)) {
        local_68 = *(undefined8 *)(param_2 + 6);
        local_60 = (float)param_2[8];
        iVar1 = param_2[9];
        local_80 = 0;
        puStack_88 = PTR_DAT_04bb2010 + 0x10;
        local_90 = &PTR_FUN_0498d548;
        local_70 = 0;
        local_78 = puStack_88;
        local_28 = iVar1;
        FUN_01afb480(&local_58,&local_90);
        local_80._0_4_ = (int)local_80 + param_2[4];
        local_70._0_4_ = (int)local_70 + param_2[4];
        local_80._4_4_ = local_80._4_4_ + param_2[5];
        local_70._4_4_ = local_70._4_4_ + param_2[5];
        iVar4 = FUN_006f0400((float)local_68 -
                             ((float)(int)local_80 * 5.0 + (float)(int)local_70 * 5.0 + 5.0) * 0.5,
                             local_60 -
                             ((float)local_80._4_4_ * 5.0 + (float)local_70._4_4_ * 5.0 + 5.0) * 0.5
                            );
        local_98 = 0;
        local_a0 = 0;
        iStack_94 = iVar4;
        uVar5 = FUN_015114c0(param_2[10],param_2,&local_90,&local_68,&local_28,&local_a0);
        uVar3 = 0;
        if ((uVar5 & 1) == 0) goto LAB_0151adc8;
        uVar3 = iVar1 + 0x20000000U >> 0x1e;
        local_24 = iVar4 + 0xa0000000U >> 0x1e;
        if (uVar3 == local_24) {
          local_a8 = 0;
          local_b0 = 0;
          FUN_01511978(&local_b0,&local_90,&local_68,&iStack_94,0);
          local_24 = (uint)(long)((float)uVar3 * 90.0 * 11930465.0);
          uVar3 = FUN_0151adf0(param_1,&local_b0,&local_24,&iStack_94,param_2,param_2 + 2,1,
                               PTR_DAT_04bb32e0);
          goto LAB_0151adc8;
        }
      }
    }
  }
  uVar3 = 0;
LAB_0151adc8:
  return uVar3 & 1;
}

