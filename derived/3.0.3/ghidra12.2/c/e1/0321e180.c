
int FUN_0321e180(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
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
  
  uVar14 = 0;
  iVar13 = 0;
  lVar1 = param_1 + 0x3c;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  pcVar16 = (char *)(param_1 + 0x44);
  do {
    puVar4 = PTR_DAT_04bb43c0;
    if (*pcVar16 == '\0') {
      uVar9 = (uint)uVar14;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar9);
      local_90 = DAT_05586008;
      local_8e = DAT_0558600a;
      local_8d = DAT_0558600b;
      local_8c = DAT_0558600c;
      lVar15 = lVar1 + (uVar14 & 0xffffffff) * 0xc;
      if (9 < uVar9) {
        lVar15 = lVar1;
      }
      if (-1 < *(int *)(lVar15 + 4)) {
        lVar15 = lVar1 + (uVar14 & 0xffffffff) * 0xc;
        if (9 < uVar9) {
          lVar15 = lVar1;
        }
        puVar12 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(lVar15 + 4) * 8);
        local_90 = *puVar12;
        local_8e = *(undefined1 *)(puVar12 + 1);
        local_8d = *(undefined1 *)((long)puVar12 + 3);
        local_8c = *(undefined4 *)(puVar12 + 2);
      }
      uVar8 = local_8c;
      uVar7 = local_8d;
      uVar6 = local_8e;
      uVar5 = local_90;
      lVar15 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_90);
      lVar17 = *(long *)puVar4;
      if (lVar17 == 0) {
LAB_0321e1e4:
        uVar10 = 0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (*(uint *)(lVar15 + 0x1d8) <= uVar9) goto LAB_0321e1e4;
        uVar10 = 0;
        if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
          local_78 = 0;
          local_88 = puVar2;
          local_80 = uVar5;
          local_7e = uVar6;
          local_7d = uVar7;
          local_7c = uVar8;
          uVar9 = FUN_0277d6c4(&local_80);
          if (DAT_053274a0 != 0) {
            lVar15 = *(long *)(lVar17 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_90);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                 (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8), lVar15 != 0)
                 ) {
                local_78 = lVar15;
              }
            }
          }
          if (DAT_04c487d4 == -1) {
            uVar10 = FUN_01aed730(&local_88);
LAB_0321e3dc:
            local_70 = &PTR_LAB_048f9770;
            pcStack_68 = "RegulationType4";
            uVar11 = FUN_0273f0a0(&local_70);
            if ((uVar11 & 1) != 0) {
              uVar10 = (int)(uVar10 * 0xc) / 10;
            }
          }
          else {
            local_70 = (undefined **)CONCAT44(local_70._4_4_,3);
            puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar3 = (uint *)PTR_DAT_04bc39f8;
            }
            uVar9 = *puVar3;
            uVar10 = FUN_01aed730(&local_88);
            if ((uVar9 >> 3 & 1) == 0) goto LAB_0321e3dc;
          }
          uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
        }
      }
      iVar13 = uVar10 + iVar13;
    }
    uVar14 = uVar14 + 1;
    pcVar16 = pcVar16 + 0xc;
    if (uVar14 == 10) {
      return iVar13;
    }
  } while( true );
}

