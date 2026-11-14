
undefined8 FUN_0186d298(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  local_58 = (int)((float)(int)*(float *)(param_1 + 0x328) / 5.0) -
             (uint)(*(float *)(param_1 + 0x328) < 0.0);
  iStack_54 = (int)((float)(int)*(float *)(param_1 + 0x330) / 5.0) -
              (uint)(*(float *)(param_1 + 0x330) < 0.0);
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar8 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar14 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  puVar10 = (undefined2 *)FUN_01a5190c(&local_78,0,&local_60,0);
  puVar7 = PTR_DAT_04bb43c0;
  uVar5 = *puVar10;
  uVar3 = *(undefined1 *)(puVar10 + 1);
  uVar4 = *(undefined1 *)((long)puVar10 + 3);
  uVar2 = *(undefined4 *)(puVar10 + 2);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_38 = uVar5;
  local_36 = uVar3;
  local_35 = uVar4;
  local_34 = uVar2;
  uVar9 = FUN_0277d6c4(&local_38);
  lVar11 = *(long *)puVar7;
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_80 = 0;
      local_88 = uVar5;
      local_86 = uVar3;
      local_85 = uVar4;
      local_84 = uVar2;
      uVar9 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar7 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_38);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
             (((puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8),
               puVar12 != (uint *)0x0 && (uVar9 = *puVar12, uVar9 != 0)) &&
              (puVar12 != (uint *)(ulong)uVar9)))) {
            puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
            if (((*puVar13 != 0) && (uVar9 = puVar13[1], uVar9 != 0)) &&
               ((ulong)(ushort)puVar13[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar9);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                    (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                    uVar6 < 0xbd)) && ((uVar6 == 0x5a || (uVar6 == 99)))) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

