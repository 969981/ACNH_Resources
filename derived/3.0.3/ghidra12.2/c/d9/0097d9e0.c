
undefined8 FUN_0097d9e0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *pcVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_d0;
  uint local_c8;
  uint local_c4;
  undefined *local_c0;
  undefined *puStack_b8;
  uint local_b0;
  uint uStack_ac;
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  uint local_94 [12];
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  
  puVar5 = PTR_DAT_04bb27c8;
  puVar4 = PTR_DAT_04bb2010;
  local_c0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_b8 = PTR_DAT_04bb2010 + 0x10;
  fVar19 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar17 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar18 = fVar17 + 2.5;
  fVar20 = fVar19 + 2.5;
  fVar21 = fVar17 + 10.0 + -2.5;
  fVar17 = fVar19 + 10.0 + -2.5;
  local_a0 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  local_9c = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  uVar2 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  uVar3 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  local_b0 = local_a0;
  if ((int)uVar2 <= (int)local_a0) {
    local_b0 = uVar2;
  }
  if ((int)local_a0 <= (int)uVar2) {
    local_a0 = uVar2;
  }
  uStack_ac = local_9c;
  if ((int)uVar3 <= (int)local_9c) {
    uStack_ac = uVar3;
  }
  if ((int)local_9c <= (int)uVar3) {
    local_9c = uVar3;
  }
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
LAB_0097dd20:
    uVar14 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
    uVar14 = 0;
    if (lVar12 != 0) {
      local_a8 = puStack_b8;
      uVar13 = FUN_00971f80(lVar12,&local_c0,0);
      uVar2 = local_b0;
      puVar7 = PTR_DAT_04bb5d18;
      puVar6 = PTR_DAT_04bb46c8;
      uVar14 = 0;
      if ((uVar13 & 1) != 0) {
        local_c8 = local_b0;
        local_c4 = uStack_ac;
        local_d0 = puVar4 + 0x10;
        uVar3 = local_9c + 1;
        if (uVar3 != uStack_ac) {
          uVar16 = uStack_ac;
          do {
            uVar8 = local_c8;
            if (*(long *)puVar5 == 0) goto LAB_0097dd20;
            lVar12 = *(long *)(*(long *)puVar5 + 0x90);
            if (lVar12 == 0) {
              return 0;
            }
            if ((int)local_c8 < 0) {
              return 0;
            }
            if ((-1 < (int)uVar16) &&
               (local_c8 < *(uint *)(lVar12 + 0x38) && uVar16 < *(uint *)(lVar12 + 0x3c))) {
              uVar1 = local_c8 + *(uint *)(lVar12 + 0x38) * uVar16;
              if ((uVar1 < *(uint *)(lVar12 + 0x68) && *(long *)(lVar12 + 0x70) != 0) &&
                 (local_94[0] = 2,
                 (*(uint *)(*(long *)(lVar12 + 0x70) + (long)(int)uVar1 * 4) >> 2 & 1) != 0))
              goto LAB_0097dd20;
            }
            if ((int)uVar16 < 0) {
              return 0;
            }
            if (*(uint *)(lVar12 + 0x38) <= local_c8 || *(uint *)(lVar12 + 0x3c) <= uVar16) {
              return 0;
            }
            FUN_00962530(lVar12,&local_d0,local_94);
            bVar11 = local_61;
            bVar10 = local_62;
            bVar9 = local_63;
            local_94[0] = (uint)local_64;
            lVar12 = FUN_009807cc(*(long *)puVar6 + 8,local_94[0]);
            if (((lVar12 == 0) ||
                (pcVar15 = (char *)FUN_009823a0(lVar12,4,0x472724ed,*(undefined8 *)puVar7),
                pcVar15 == (char *)0x0)) || (*pcVar15 == '\0')) goto LAB_0097dd20;
            local_94[0] = (uint)bVar9;
            lVar12 = FUN_009807cc(*(long *)puVar6 + 8,local_94[0]);
            if (((lVar12 == 0) ||
                (pcVar15 = (char *)FUN_009823a0(lVar12,4,0x472724ed,*(undefined8 *)puVar7),
                pcVar15 == (char *)0x0)) || (*pcVar15 == '\0')) goto LAB_0097dd20;
            local_94[0] = (uint)bVar10;
            lVar12 = FUN_009807cc(*(long *)puVar6 + 8,local_94[0]);
            if (((lVar12 == 0) ||
                (pcVar15 = (char *)FUN_009823a0(lVar12,4,0x472724ed,*(undefined8 *)puVar7),
                pcVar15 == (char *)0x0)) || (*pcVar15 == '\0')) goto LAB_0097dd20;
            local_94[0] = (uint)bVar11;
            lVar12 = FUN_009807cc(*(long *)puVar6 + 8,local_94[0]);
            if (((lVar12 == 0) ||
                (pcVar15 = (char *)FUN_009823a0(lVar12,4,0x472724ed,*(undefined8 *)puVar7),
                pcVar15 == (char *)0x0)) || (*pcVar15 == '\0')) goto LAB_0097dd20;
            if ((int)uVar8 < (int)local_a0) {
              local_c8 = uVar8 + 1;
            }
            else {
              uVar16 = uVar16 + 1;
              local_c8 = local_b0;
              local_c4 = uVar16;
            }
          } while ((uVar2 != local_c8) || (uVar3 != uVar16));
        }
        uVar14 = 1;
      }
    }
  }
  return uVar14;
}

