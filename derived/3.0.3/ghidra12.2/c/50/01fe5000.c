
undefined8 FUN_01fe5000(undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint local_a4;
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
  
  puVar5 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_80 = PTR_DAT_04bb2010 + 0x10;
  uVar9 = *param_1;
  local_68 = 0;
  if (*param_2 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 2);
    lVar12 = (long)*param_2 << 3;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_70 = puStack_80;
    do {
      if (*(uint *)*puVar11 < *(uint *)param_1[3]) {
        puVar10 = *(undefined2 **)
                   (*(long *)((uint *)param_1[3] + 2) + (long)(int)*(uint *)*puVar11 * 8);
      }
      else {
        puVar10 = (undefined2 *)0x0;
      }
      lVar13 = *(long *)puVar5;
      local_98 = *puVar10;
      local_96 = *(undefined1 *)(puVar10 + 1);
      local_95 = *(undefined1 *)((long)puVar10 + 3);
      local_94 = *(undefined4 *)(puVar10 + 2);
      local_90 = (uint *)0x0;
      local_a0 = puVar1;
      uVar6 = FUN_0277d6c4(&local_98);
      if (*(long *)puVar5 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(puVar10);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
             (puVar8 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar8 != (uint *)0x0)) {
            local_90 = puVar8;
          }
        }
      }
      FUN_01afb480(&local_a0,&local_88);
      local_78 = CONCAT44(local_78._4_4_ + *(int *)(puVar10 + 10),
                          (int)local_78 + *(int *)(puVar10 + 8));
      local_68 = CONCAT44(local_68._4_4_ + *(int *)(puVar10 + 10),
                          (int)local_68 + *(int *)(puVar10 + 8));
      iVar3 = *(int *)param_1[4];
      if (iVar3 == 0x10) {
LAB_01fe51bc:
        uVar7 = FUN_01fd595c(&local_88,puVar10);
        if ((uVar7 & 1) != 0) goto LAB_01fe51e4;
      }
      else {
        if (iVar3 == 0x2b) {
          uVar7 = FUN_01fab6d0(uVar9,puVar10,&local_88);
          if ((uVar7 & 1) != 0) goto LAB_01fe5084;
        }
        else if (iVar3 == 0x16) goto LAB_01fe51bc;
LAB_01fe51e4:
        FUN_01facbc0(uVar9,puVar10);
        if (((local_90 == (uint *)0x0) || (uVar6 = *local_90, uVar6 == 0)) ||
           (local_90 == (uint *)(ulong)uVar6)) {
LAB_01fe52c4:
          puVar8 = (uint *)param_1[5];
          local_a4 = 0;
        }
        else {
          puVar8 = (uint *)((long)local_90 - (long)(ulong)uVar6);
          if (((*puVar8 == 0) || (uVar6 = puVar8[1], uVar6 == 0)) || ((ulong)(ushort)puVar8[2] == 0)
             ) goto LAB_01fe52c4;
          lVar13 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar13 == 0) goto LAB_01fe52c4;
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)local_90 - lVar13) / (ulong)uVar6);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0110 <= uVar2) ||
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar2 * 2),
             local_a4 = (uint)uVar4, 8 < uVar4)) goto LAB_01fe52c4;
          puVar8 = (uint *)param_1[5];
          if (local_a4 != 0) {
            if (*puVar8 == 0) goto LAB_01fe532c;
            uVar6 = *puVar8;
            if (local_a4 != uVar6) {
              if (local_a4 == 1) {
                if (1 < uVar6 - 5) {
LAB_01fe532c:
                  puVar8 = &local_a4;
                }
              }
              else if ((((uVar6 == 1) && (local_a4 - 5 < 2)) || (local_a4 != 7)) || (*puVar8 == 2))
              goto LAB_01fe532c;
            }
          }
        }
        uVar7 = FUN_01fbcee8(uVar9,param_1[1],puVar10,&local_88,*puVar8);
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)param_1[2] = *(undefined4 *)(puVar10 + 0xe);
          return 1;
        }
      }
LAB_01fe5084:
      puVar11 = puVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  return 0;
}

