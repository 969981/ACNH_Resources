
undefined1 FUN_016d7a94(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  long lVar14;
  long lVar15;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  uint *local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  puVar6 = PTR_DAT_04bb43c0;
  lVar14 = puVar12[0x290];
  if (*(char *)(lVar14 + 0x1d5) == '\0') {
LAB_016d7b50:
    puVar13 = (undefined2 *)(lVar14 + 0xd4);
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    puVar13 = (undefined2 *)(lVar14 + 0xcc);
    uVar7 = FUN_0277d6c4(puVar13);
    if (*(long *)puVar6 == 0) {
LAB_016d7b30:
      iVar8 = FUN_0277d6c4(puVar13);
      if (iVar8 != 0xfffd) goto LAB_016d7b50;
      puVar13 = (undefined2 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_016d7b30;
    }
  }
  uVar5 = *puVar13;
  uVar3 = *(undefined1 *)(puVar13 + 1);
  uVar4 = *(undefined1 *)((long)puVar13 + 3);
  uVar2 = *(undefined4 *)(puVar13 + 2);
  lVar15 = *(long *)puVar6;
  local_58 = uVar5;
  local_56 = uVar3;
  local_55 = uVar4;
  local_54 = uVar2;
  uVar7 = FUN_0277d6c4(&local_58);
  lVar14 = *(long *)puVar6;
  if (lVar14 == 0) {
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar7) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 0;
  }
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_60 = (uint *)0x0;
  local_68 = uVar5;
  local_66 = uVar3;
  local_65 = uVar4;
  local_64 = uVar2;
  uVar7 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar6 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar10 != (uint *)0x0)) {
        uVar9 = 0;
        uVar7 = *puVar10;
        local_60 = puVar10;
        if ((uVar7 != 0) && (puVar10 != (uint *)(ulong)uVar7)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
          uVar9 = 0;
          if (*puVar11 != 0) {
            uVar7 = puVar11[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar14 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar7);
                }
                if (*puVar11 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar9 < 0xbd)) goto LAB_016d7d00;
              }
            }
            uVar9 = 0;
          }
        }
        goto LAB_016d7d00;
      }
    }
  }
  uVar9 = 0xbc;
LAB_016d7d00:
  if (uVar9 == 0x3b) {
    return 0;
  }
  iVar8 = FUN_01ad78cc(&local_70);
  if (iVar8 == 0x51) {
    return 1;
  }
  iVar8 = FUN_01ad78cc(&local_70);
  if (iVar8 == 0x26) {
    return 1;
  }
  iVar8 = FUN_01ad78cc(&local_70);
  if (iVar8 == 100) {
    return 1;
  }
  return 0;
}

