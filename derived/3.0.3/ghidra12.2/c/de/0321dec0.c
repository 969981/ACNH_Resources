
int FUN_0321dec0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined2 *puVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  undefined **local_70;
  char *pcStack_68;
  
  puVar4 = PTR_DAT_04bb37e0;
  uVar15 = 0;
  iVar14 = 0;
  lVar1 = param_1 + 0x3c;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    puVar5 = PTR_DAT_04bb43c0;
    local_90 = *(undefined2 *)puVar4;
    local_8e = puVar4[2];
    local_8d = puVar4[3];
    local_8c = *(undefined4 *)(puVar4 + 4);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar15);
    lVar16 = lVar1 + (ulong)uVar15 * 0xc;
    if (9 < uVar15) {
      lVar16 = lVar1;
    }
    if (-1 < *(int *)(lVar16 + 4)) {
      lVar16 = lVar1 + (ulong)uVar15 * 0xc;
      if (9 < uVar15) {
        lVar16 = lVar1;
      }
      puVar13 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(lVar16 + 4) * 8);
      local_90 = *puVar13;
      local_8e = *(undefined1 *)(puVar13 + 1);
      local_8d = *(undefined1 *)((long)puVar13 + 3);
      local_8c = *(undefined4 *)(puVar13 + 2);
    }
    uVar9 = local_8c;
    uVar8 = local_8d;
    uVar7 = local_8e;
    uVar6 = local_90;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_90);
    lVar17 = *(long *)puVar5;
    if (lVar17 == 0) {
LAB_0321df30:
      uVar11 = 0;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (*(uint *)(lVar16 + 0x1d8) <= uVar10) goto LAB_0321df30;
      uVar11 = 0;
      if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
        local_78 = 0;
        local_88 = puVar2;
        local_80 = uVar6;
        local_7e = uVar7;
        local_7d = uVar8;
        local_7c = uVar9;
        uVar10 = FUN_0277d6c4(&local_80);
        if (DAT_053274a0 != 0) {
          lVar16 = *(long *)(lVar17 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_90);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
               (lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8), lVar16 != 0))
            {
              local_78 = lVar16;
            }
          }
        }
        if (DAT_04c487d4 == -1) {
          uVar11 = FUN_01aed730(&local_88);
LAB_0321e114:
          local_70 = &PTR_LAB_048f9770;
          pcStack_68 = "RegulationType4";
          uVar12 = FUN_0273f0a0(&local_70);
          if ((uVar12 & 1) != 0) {
            uVar11 = (int)(uVar11 * 0xc) / 10;
          }
        }
        else {
          local_70 = (undefined **)CONCAT44(local_70._4_4_,3);
          puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar3 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar10 = *puVar3;
          uVar11 = FUN_01aed730(&local_88);
          if ((uVar10 >> 3 & 1) == 0) goto LAB_0321e114;
        }
        uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      }
    }
    uVar15 = uVar15 + 1;
    iVar14 = uVar11 + iVar14;
    if (uVar15 == 10) {
      return iVar14;
    }
  } while( true );
}

