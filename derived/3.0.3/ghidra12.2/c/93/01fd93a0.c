
undefined8 FUN_01fd93a0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  uint *local_78;
  undefined8 local_6c;
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb43c0;
  if (param_2 == 0) {
    return 0;
  }
  uVar11 = *param_1;
  lVar14 = (long)param_2 << 3;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  do {
    if (*(uint *)*param_3 < *(uint *)param_1[2]) {
      puVar12 = *(undefined2 **)
                 (*(long *)((uint *)param_1[2] + 2) + (long)(int)*(uint *)*param_3 * 8);
    }
    else {
      puVar12 = (undefined2 *)0x0;
    }
    local_6c = 0;
    local_64 = 0;
    lVar13 = *(long *)puVar6;
    local_80 = *puVar12;
    local_7e = *(undefined1 *)(puVar12 + 1);
    local_7d = *(undefined1 *)((long)puVar12 + 3);
    local_7c = *(undefined4 *)(puVar12 + 2);
    local_78 = (uint *)0x0;
    local_88 = puVar1;
    uVar7 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar6 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(puVar12);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar7 < *(uint *)(lVar13 + 0x1d8)) {
          puVar9 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8);
          if (puVar9 != (uint *)0x0) {
            local_78 = puVar9;
          }
        }
      }
    }
    local_a0 = 0;
    local_90 = 0;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_98 = puVar3;
    FUN_01afb480(&local_88,&local_b0);
    local_a0 = CONCAT44(local_a0._4_4_ + *(int *)(puVar12 + 10),
                        (int)local_a0 + *(int *)(puVar12 + 8));
    local_90 = CONCAT44(local_90._4_4_ + *(int *)(puVar12 + 10),
                        (int)local_90 + *(int *)(puVar12 + 8));
    if (local_78 == (uint *)0x0) {
LAB_01fd95d0:
      local_b4 = 0;
    }
    else {
      uVar7 = *local_78;
      local_b4 = 0;
      if ((uVar7 != 0) && (local_78 != (uint *)(ulong)uVar7)) {
        puVar9 = (uint *)((long)local_78 - (long)(ulong)uVar7);
        local_b4 = 0;
        if (*puVar9 != 0) {
          uVar7 = puVar9[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar9 + lVar13 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar7 != 0) {
                uVar4 = (uint)((ulong)((long)local_78 - lVar13) / (ulong)uVar7);
              }
              if (*puVar9 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0110) &&
                 (local_b4 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar4 * 2),
                 local_b4 < 9)) goto LAB_01fd95d4;
            }
          }
          goto LAB_01fd95d0;
        }
      }
    }
LAB_01fd95d4:
    puVar10 = (uint *)param_1[1];
    puVar9 = (uint *)((long)puVar10 - (ulong)*puVar10);
    if ((((*puVar10 == 0) || (puVar9 == (uint *)0x0)) || (*puVar9 == 0)) ||
       ((uVar7 = puVar9[1], uVar7 == 0 || ((ulong)(ushort)puVar9[2] == 0)))) {
LAB_01fd9690:
      local_b8 = 0;
      puVar9 = &local_b8;
      if (local_b4 != 0) {
        puVar9 = &local_b4;
      }
    }
    else {
      lVar13 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar9 + lVar13 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar13 == 0) goto LAB_01fd9690;
      uVar4 = 0;
      if ((ulong)uVar7 != 0) {
        uVar4 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar7);
      }
      if (*puVar9 <= uVar4) {
        uVar4 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc23d8 <= uVar4) goto LAB_01fd9690;
      uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc23d8 + 8) + (long)(int)uVar4 * 2);
      local_b8 = (uint)uVar5;
      if (8 < local_b8) goto LAB_01fd9690;
      if (local_b4 == 0) {
LAB_01fd9684:
        puVar9 = &local_b8;
      }
      else {
        if (uVar5 == 0) goto LAB_01fd9730;
        if (local_b4 == local_b8) goto LAB_01fd9684;
        if (local_b4 == 1) {
          if (local_b8 - 5 < 2) goto LAB_01fd9684;
        }
        else if (((local_b8 != 1) || (1 < local_b4 - 5)) && ((local_b4 == 7 && (local_b8 != 2))))
        goto LAB_01fd9684;
LAB_01fd9730:
        puVar9 = &local_b4;
      }
    }
    local_bc = *puVar9;
    uVar8 = FUN_01fd65c0(uVar11,&local_6c,puVar12,&local_bc,&local_b0);
    if ((uVar8 & 1) != 0) {
      FUN_01fa81ec(uVar11,puVar12,&local_b0,&local_6c);
      return 1;
    }
    param_3 = param_3 + 1;
    lVar14 = lVar14 + -8;
    if (lVar14 == 0) {
      return 0;
    }
  } while( true );
}

