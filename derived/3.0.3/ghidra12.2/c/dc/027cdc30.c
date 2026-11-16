
/* WARNING: Removing unreachable block (ram,0x027cdcdc) */

void FUN_027cdc30(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  char cVar16;
  undefined *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  uint *puVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  undefined2 *puVar28;
  ulong *puVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  undefined4 *puVar33;
  undefined8 *puVar34;
  int iVar35;
  uint uVar36;
  char cVar37;
  uint *puVar38;
  int *piVar39;
  undefined2 uVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  undefined4 *puVar48;
  uint uVar49;
  undefined1 uVar50;
  long *plVar51;
  long lVar52;
  uint local_a2c;
  uint local_9fc;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  long local_8e0 [6];
  long local_8b0 [3];
  uint local_898;
  long local_880 [12];
  long local_820 [165];
  undefined1 auStack_2f8 [152];
  undefined *local_260;
  undefined *local_258;
  undefined4 local_250;
  undefined local_24c [31];
  undefined1 local_22d;
  undefined *local_228;
  undefined *local_220;
  undefined4 local_218;
  undefined local_214 [7];
  undefined1 local_20d;
  undefined8 local_208;
  char *local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined *local_1ec;
  char *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  undefined1 local_f5;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  uint local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  iVar41 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  do {
    puVar48 = puVar1 + (long)iVar41 * 3;
    local_9d0 = 0xfffe;
    FUN_0277d4ac(&local_9d0);
    iVar41 = iVar41 + 1;
    puVar48[2] = 0xffff;
    *puVar48 = (undefined4)local_9d0;
    puVar48[1] = local_9d0._4_4_;
  } while (iVar41 != 0x24);
  uVar19 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x1cc) = uVar19;
  memset((void *)(param_1 + 0x1d4),0,0x1108);
  FUN_027c9340((void *)(param_1 + 0x1d4));
  local_9d0 = local_9d0 & 0xffffffff00000000;
  lVar21 = FUN_0265c3e0((long)*(char *)(param_1 + 0x1c4));
  if (lVar21 == 0) {
    return;
  }
  lVar31 = *(long *)(lVar21 + 0x28);
  if (lVar31 == 0) {
    uVar22 = 0;
  }
  else {
    if (*(undefined8 **)(lVar31 + 0x10) == (undefined8 *)0x0) {
      uVar22 = 0;
      plVar23 = *(long **)(lVar31 + 0x20);
    }
    else {
      uVar22 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
      uVar22 = uVar22 & 0xffffffff;
      if (*(long *)(lVar21 + 0x28) == 0) goto LAB_027cdd5c;
      plVar23 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20);
    }
    if (plVar23 != (long *)0x0) {
      local_9d0 = *(ulong *)(lVar21 + 8);
      uStack_9c8 = *(undefined8 *)(lVar21 + 0x10);
      local_9c0 = 0x13230;
      (**(code **)(*plVar23 + 0x20))(plVar23,&local_9d0);
    }
  }
LAB_027cdd5c:
  pbVar27 = (byte *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
  FUN_020fd7d8(pbVar27);
  local_20d = 0;
  local_218 = 8;
  local_220 = local_214;
  local_214[0] = 0;
  local_228 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_228,"-----");
  if ((ulong)*pbVar27 < 0x23) {
    FUN_038d1270(&local_228,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar27 * 8 + 0xb0),
                 pbVar27[1]);
  }
  local_22d = 0;
  local_250 = 0x20;
  local_258 = local_24c;
  local_24c[0] = 0;
  local_260 = PTR_DAT_04bb2028 + 0x10;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar23 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar23 != (long *)0x0)) {
    local_9d0 = *(ulong *)(lVar21 + 8);
    uStack_9c8 = *(undefined8 *)(lVar21 + 0x10);
    local_9c0 = 0x13230;
    (**(code **)(*plVar23 + 0x20))(plVar23,&local_9d0);
  }
  uVar18 = FUN_021fdf60(&local_228,&local_260,*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
  if ((int)uVar18 < 0) {
    bVar15 = false;
LAB_027cde74:
    uVar18 = 3;
  }
  else {
    if (2 < uVar18) {
      bVar15 = true;
      goto LAB_027cde74;
    }
    local_9d0 = CONCAT44(local_9d0._4_4_,uVar18);
    bVar15 = false;
  }
  (**(code **)(local_260 + 0x18))(&local_260);
  FUN_0074fda4(auStack_2f8,"Param/NpcRoom/%s.byml",local_258);
  uVar24 = FUN_03eba3a0(auStack_2f8);
  plVar23 = (long *)PTR_DAT_04bb3968;
  if (((uVar24 & 1) == 0) ||
     (plVar51 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar51 == (long *)0x0))
  goto LAB_027cf394;
  lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar32 = *(long *)(lVar31 + 0xa8);
  *(long **)(lVar31 + 0xa8) = plVar51;
  pcVar2 = PTR_DAT_04bb2020 + 0x10;
  local_200 = "NpcRoom";
  local_208 = pcVar2;
  (**(code **)(local_260 + 0x18))(&local_260);
  local_e0 = local_258;
  local_e8 = pcVar2;
  FUN_00b62c50(&local_9d0,&local_208,&local_e8,0);
  local_200 = (char *)((long)&local_1f8 + 4);
  local_f5 = 0;
  local_1f8 = (uint *)CONCAT35(local_1f8._5_3_,0x100);
  local_208 = PTR_DAT_04bb21f8 + 0x10;
  uVar24 = (**(code **)(local_9d0 + 0xf0))(&local_9d0,&local_208,1);
  if ((uVar24 & 1) != 0) {
    FUN_03c27e60(&local_9d0,&local_208,plVar51);
  }
  puVar17 = PTR_DAT_04bc00c8;
  if (bVar15) {
    uVar47 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(local_228 + 0x18))(&local_228);
    uVar19 = FUN_006bd550(local_220,0);
    local_208 = (char *)CONCAT44(local_208._4_4_,uVar19);
    puVar25 = (uint *)FUN_0079e770(uVar47,&local_208);
    puVar3 = PTR_DAT_04bb40b8;
    puVar17 = PTR_DAT_04bb40b0;
    if ((puVar25 != (uint *)0x0) && (uVar18 = *puVar25, uVar18 != 0)) {
      cVar37 = *PTR_DAT_04bb40b0;
      do {
        if (cVar37 == '\0') {
          cVar37 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar17 = 1;
          *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
          uVar18 = *puVar25;
        }
        else {
          uVar20 = *(uint *)(puVar3 + 0x7c);
          if (-1 < (int)uVar20) {
            if ((undefined1 *)((ulong)uVar20 + (long)puVar25) == (undefined1 *)0x0) break;
            uVar50 = *(undefined1 *)((ulong)uVar20 + (long)puVar25);
            goto LAB_027cec30;
          }
          if (uVar20 != 0xffffffff) break;
        }
        puVar38 = (uint *)(ulong)uVar18;
        uVar50 = 0;
        if ((puVar38 == (uint *)0x0) || (puVar25 == puVar38)) goto LAB_027cec30;
        lVar31 = 0xc;
        if (*(char *)((long)puVar25 + (10 - (long)puVar38)) != '\0') {
          lVar31 = 0x1c;
        }
        lVar31 = (long)puVar25 + (lVar31 - (long)puVar38);
        if (lVar31 == 0) break;
        uVar24 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar38));
        *(undefined4 *)(puVar3 + 0x7c) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar39 = (int *)(lVar31 + 4);
        while (piVar39[-1] != 0x566f1d31) {
          piVar39 = piVar39 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_027cec2c;
        }
        uVar50 = 0;
        iVar41 = 0;
        if (*piVar39 != -1) {
          iVar41 = *piVar39;
        }
        *(int *)(puVar3 + 0x7c) = iVar41;
        uVar18 = *puVar25;
        if (uVar18 == 0) goto LAB_027cec30;
      } while( true );
    }
LAB_027cec2c:
    uVar50 = 0;
LAB_027cec30:
    local_208 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_208);
    local_1f8 = (uint *)0x0;
    pcVar2 = PTR_DAT_04bb2010 + 0x10;
    local_1ec = (undefined *)0xfffe;
    local_200 = pcVar2;
    FUN_0277d4ac(&local_1ec);
    local_1d8 = 0;
    local_1d0 = (undefined *)0xfffe;
    local_1e0 = pcVar2;
    FUN_0277d4ac(&local_1d0);
    local_1c0 = 0;
    local_1c8 = pcVar2;
    uVar19 = FUN_020fd7d8(pbVar27);
    local_e8 = (char *)(CONCAT44(local_e8._4_4_,uVar19) & 0xffffffff000000ff);
    FUN_0268bf20(&local_208,&local_9d0,uVar50,&local_e8);
    puVar17 = PTR_DAT_04bb43c0;
    lVar31 = *(long *)PTR_DAT_04bb43c0;
    uVar18 = FUN_0277d6c4(&local_1ec);
    if (*(long *)puVar17 == 0) {
LAB_027cede8:
      lVar31 = 0;
    }
    else {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((*(uint *)(lVar31 + 0x1d8) <= uVar18) ||
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) goto LAB_027cede8;
      FUN_0268b680(&local_b8,pbVar27);
      local_d8 = (undefined8 *)0x0;
      local_e8 = PTR_DAT_04bc0510 + 0x10;
      lVar31 = *(long *)puVar17;
      local_e0 = local_1ec;
      uVar18 = FUN_0277d6c4(&local_e0);
      if (*(long *)puVar17 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(&local_1ec);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
             (puVar34 = *(undefined8 **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8),
             puVar34 != (undefined8 *)0x0)) {
            local_d8 = puVar34;
          }
        }
      }
      uVar19 = FUN_01ae98d0(&local_e8);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar19);
      local_70 = 0;
      lVar31 = 1;
      *(undefined4 *)(param_1 + 0x14) = (undefined4)local_b8;
      *(undefined4 *)(param_1 + 0x18) = local_b8._4_4_;
      *(char *)(param_1 + 0x1c) = (char)local_1d8;
      *(char *)(param_1 + 0x1d) = (char)((ulong)local_1d8 >> 0x20);
      *(char *)(param_1 + 0x1e) = (char)uVar19;
      *(undefined1 *)(param_1 + 0x1f) = 0;
    }
    uVar49 = (uint)lVar31;
    FUN_0268baa8(&local_70,pbVar27);
    FUN_0268bbf4(&local_78,pbVar27);
    lVar43 = *(long *)puVar17;
    uVar20 = FUN_0277d6c4(&local_208);
    lVar46 = *(long *)puVar17;
    uVar18 = uVar49;
    if (lVar46 != 0) {
      lVar43 = *(long *)(lVar43 + 0x57e58);
      uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
      if ((uVar20 < *(uint *)(lVar43 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
        local_80 = 0;
        local_90 = PTR_DAT_04bc0510 + 0x10;
        local_88 = (undefined4)local_208;
        uStack_84 = local_208._4_4_;
        uVar18 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar17 != 0) {
          lVar43 = *(long *)(lVar46 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar43 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            lVar43 = *(long *)PTR_DAT_04bc0428;
            uVar18 = FUN_0277d6c4(&local_208);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
            if ((uVar18 < *(uint *)(lVar43 + 0x1d8)) &&
               (lVar43 = *(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar18 * 8), lVar43 != 0))
            {
              local_80 = lVar43;
            }
          }
        }
        puVar48 = puVar1 + lVar31 * 3;
        uVar19 = FUN_01ae98d0(&local_90);
        local_e8 = (char *)CONCAT44(local_e8._4_4_,uVar19);
        *puVar48 = (undefined4)local_208;
        puVar48[1] = local_208._4_4_;
        *(char *)(puVar48 + 2) = (char)local_1f8;
        *(char *)((long)puVar48 + 9) = (char)((ulong)local_1f8 >> 0x20);
        local_b8 = PTR_DAT_04bbc1a0;
        *(char *)((long)puVar48 + 10) = (char)uVar19;
        local_b8 = local_b8 + 0x10;
        *(undefined1 *)((long)puVar48 + 0xb) = 0;
        uVar18 = uVar49 + 1;
        local_a8 = 0;
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_98 = 0;
        local_a0 = local_b0;
        FUN_01afb480(&local_90,&local_b8);
        local_c4 = 0;
        local_c8 = 6;
        local_d8 = &local_c4;
        local_e8 = PTR_DAT_04bc2560 + 0x10;
        local_d0 = 0x600000000;
        local_e0 = (undefined *)0x200000024;
        if ((-1 < (int)local_98) && (-1 < local_98)) {
          iVar41 = 0;
          do {
            if (-1 < local_98) {
              iVar35 = 0;
              do {
                uVar12 = iVar41 + local_d0._4_4_ * iVar35;
                uVar11 = 1 << (ulong)(uVar12 & 0x1e);
                uVar20 = *(uint *)((long)local_d8 + (long)((int)uVar12 >> 5) * 4);
                if ((uVar11 & uVar20) == 0) {
                  *(uint *)((long)local_d8 + ((long)((ulong)uVar12 << 0x20) >> 0x25) * 4) =
                       uVar11 | uVar20;
                  local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 + 1);
                }
                iVar35 = iVar35 + 2;
              } while (iVar35 <= local_98._4_4_);
            }
            iVar41 = iVar41 + 2;
          } while (iVar41 <= (int)local_98);
        }
        uVar20 = nn::os::GetSystemTick();
        if (0 < (int)(uint)local_e0) {
          uVar11 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 1;
          uVar20 = 0;
          uVar12 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
          uVar13 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
          uVar14 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
          uVar11 = uVar11 ^ uVar11 * 0x800;
          uVar11 = uVar11 >> 8 ^ uVar14 >> 0x13 ^ uVar11 ^ uVar14;
          uVar24 = (local_d0 & 0xffffffff) * (ulong)uVar11 >> 0x20;
          do {
            if ((*(uint *)((long)local_d8 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1)
                != 0) {
              if ((int)uVar24 == 0) {
                uVar12 = uVar12 ^ uVar12 * 0x800;
                puVar48 = puVar1 + (ulong)uVar18 * 3;
                uVar18 = uVar49 | 2;
                uVar8 = uVar12 ^ uVar11;
                cVar37 = '\0';
                if (local_d0._4_4_ != 0) {
                  cVar37 = (char)((int)uVar20 / local_d0._4_4_);
                }
                uVar11 = uVar12 >> 8 ^ uVar11 >> 0x13 ^ uVar8;
                local_ec = uVar8 >> 0x1e;
                local_f0 = 1;
                *puVar48 = local_70;
                puVar48[1] = uStack_6c;
                cVar16 = (char)((ulong)local_1f8 >> 0x20);
                *(char *)((long)puVar48 + 9) = cVar16 + cVar37;
                *(char *)(puVar48 + 2) =
                     ((char)local_1f8 - cVar37 * (char)(local_d0 >> 0x20)) + (char)uVar20;
                *(byte *)((long)puVar48 + 10) = (byte)(uVar8 >> 0x1e);
                *(undefined1 *)((long)puVar48 + 0xb) = 1;
                uVar8 = 1 << (ulong)(uVar20 & 0x1f);
                uVar12 = *(uint *)((long)local_d8 + (long)((int)uVar20 >> 5) * 4);
                uVar36 = (uint)local_d0;
                if ((uVar12 & uVar8) != 0) {
                  *(uint *)((long)local_d8 + ((long)((ulong)uVar20 << 0x20) >> 0x25) * 4) =
                       uVar12 & (uVar8 ^ 0xffffffff);
                  uVar36 = (uint)local_d0 - 1;
                  local_d0 = CONCAT44(local_d0._4_4_,uVar36);
                }
                if (0 < (int)(uint)local_e0) {
                  uVar13 = uVar13 ^ uVar13 * 0x800;
                  uVar20 = 0;
                  uVar11 = uVar13 >> 8 ^ uVar11 >> 0x13 ^ uVar13 ^ uVar11;
                  uVar24 = (ulong)uVar36 * (ulong)uVar11 >> 0x20;
                  goto LAB_027cf198;
                }
                break;
              }
              uVar24 = (ulong)((int)uVar24 - 1);
            }
            uVar20 = uVar20 + 1;
          } while ((uint)local_e0 != uVar20);
        }
        goto LAB_027cf208;
      }
    }
    goto LAB_027cf210;
  }
  if (uVar18 == 3) {
    if (0 < (int)local_898) {
      uVar24 = 0;
      uVar18 = 0;
      puVar3 = PTR_DAT_04bc0510 + 0x10;
      do {
        lVar46 = *(long *)(local_8b0[0] + uVar24 * 8);
        puVar29 = (ulong *)(**(code **)(*(long *)(lVar46 + 0x60) + 0xf0))();
        uVar44 = *puVar29;
        local_e8 = (char *)(uVar44 & 0xffff);
        FUN_0277d4ac(&local_e8);
        puVar6 = PTR_DAT_04bb43c0;
        local_e8._0_4_ =
             CONCAT13((char)(uVar44 >> 0x18),CONCAT12((char)(uVar44 >> 0x10),(undefined2)local_e8));
        local_e8 = (char *)CONCAT44((int)(uVar44 >> 0x20),(undefined4)local_e8);
        lVar31 = *(long *)PTR_DAT_04bb43c0;
        uVar20 = FUN_0277d6c4(&local_e8);
        lVar43 = *(long *)puVar6;
        if (lVar43 != 0) {
          lVar31 = *(long *)(lVar31 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar31 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            local_1f8 = (uint *)0x0;
            local_200 = local_e8;
            local_208 = puVar3;
            uVar20 = FUN_0277d6c4(&local_200);
            if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_027ce2d4:
              uVar20 = 0xbc;
            }
            else {
              lVar31 = *(long *)(lVar43 + 0x57e58);
              uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
              if ((*(uint *)(lVar31 + 0x1d8) <= uVar20) ||
                 (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar20 * 8) == 0))
              goto LAB_027ce2d4;
              lVar31 = *(long *)PTR_DAT_04bc0428;
              uVar20 = FUN_0277d6c4(&local_e8);
              uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
              if ((*(uint *)(lVar31 + 0x1d8) <= uVar20) ||
                 (puVar25 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar20 * 8),
                 puVar25 == (uint *)0x0)) goto LAB_027ce2d4;
              uVar20 = 0;
              uVar49 = *puVar25;
              local_1f8 = puVar25;
              if ((uVar49 != 0) && (puVar25 != (uint *)(ulong)uVar49)) {
                puVar38 = (uint *)((long)puVar25 - (long)(ulong)uVar49);
                uVar20 = 0;
                if (*puVar38 != 0) {
                  uVar20 = puVar38[1];
                  if ((uVar20 != 0) && ((ulong)(ushort)puVar38[2] != 0)) {
                    lVar31 = 0xc;
                    if (*(char *)((long)puVar38 + 10) != '\0') {
                      lVar31 = 0x1c;
                    }
                    lVar31 = (long)puVar38 + lVar31 + (ulong)(ushort)puVar38[2] * 8;
                    if (lVar31 != 0) {
                      uVar49 = 0;
                      if ((ulong)uVar20 != 0) {
                        uVar49 = (uint)((ulong)((long)puVar25 - lVar31) / (ulong)uVar20);
                      }
                      if (*puVar38 <= uVar49) {
                        uVar49 = 0xffffffff;
                      }
                      if ((uVar49 < *(uint *)puVar17) &&
                         (uVar20 = (uint)*(ushort *)(*(long *)(puVar17 + 8) + (long)(int)uVar49 * 2)
                         , uVar20 < 0xbd)) goto LAB_027ce2d8;
                    }
                  }
                  uVar20 = 0;
                }
              }
            }
LAB_027ce2d8:
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar20);
            if (uVar20 != 0xb6) {
              puVar26 = (undefined1 *)(**(code **)(*(long *)(lVar46 + 0x98) + 0xf0))();
              uVar50 = *puVar26;
              puVar26 = (undefined1 *)(**(code **)(*(long *)(lVar46 + 200) + 0xf0))();
              uVar9 = *puVar26;
              puVar48 = puVar1 + (ulong)uVar18 * 3;
              if (0x23 < uVar18) {
                puVar48 = puVar1;
              }
              uVar19 = FUN_01ae98d0(&local_208);
              local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar19);
              pbVar27 = (byte *)(**(code **)(*(long *)(lVar46 + 0xf8) + 0xf0))
                                          ((long *)(lVar46 + 0xf8));
              bVar10 = *pbVar27;
              *(undefined1 *)((long)puVar48 + 9) = uVar9;
              local_90 = (undefined *)CONCAT44(local_90._4_4_,(uint)bVar10);
              *puVar48 = (undefined4)local_e8;
              puVar48[1] = local_e8._4_4_;
              *(undefined1 *)(puVar48 + 2) = uVar50;
              *(char *)((long)puVar48 + 10) = (char)local_b8;
              *(byte *)((long)puVar48 + 0xb) = bVar10;
              uVar18 = uVar18 + 1;
            }
          }
        }
        uVar24 = uVar24 + 1;
      } while (local_898 != uVar24);
    }
  }
  else {
    if ((*(long *)(lVar21 + 0x28) != 0) &&
       (plVar23 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar23 != (long *)0x0)) {
      local_208 = *(char **)(lVar21 + 8);
      local_200 = *(char **)(lVar21 + 0x10);
      local_1f8 = (uint *)0x13230;
      (**(code **)(*plVar23 + 0x20))(plVar23,&local_208);
    }
    lVar31 = *(long *)PTR_DAT_04bb46b0;
    if (lVar31 != 0) {
      lVar46 = *(long *)(lVar21 + 8);
      lVar43 = *(long *)(lVar21 + 0x10);
      puVar34 = *(undefined8 **)(lVar31 + 0x10);
      if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
        lVar31 = (**(code **)(*(long *)*puVar34 + 0x38))();
        if (lVar31 != 0) {
          lVar31 = lVar31 + 0x70;
LAB_027ce428:
          if ((*(long **)(&LAB_00205730 + lVar31) == (long *)0x0) ||
             (puVar34 = (undefined8 *)**(long **)(&LAB_00205730 + lVar31),
             puVar34 == (undefined8 *)0x0)) {
            local_a2c = 0;
          }
          else {
            local_a2c = (**(code **)*puVar34)();
          }
          puVar17 = PTR_DAT_04bc00c8;
          local_1f0 = 0;
          local_1f8 = (uint *)0x0;
          local_200 = (char *)0x0;
          local_208 = (undefined *)0x0;
          local_e8 = (char *)CONCAT44(local_e8._4_4_,uVar18);
          lVar7 = *(long *)(&LAB_00205718 + lVar31) + *(long *)(&LAB_00205710 + lVar31) +
                  (ulong)uVar18 * 0x3c;
          if (2 < uVar18) {
            lVar7 = *(long *)(&LAB_00205718 + lVar31) + *(long *)(&LAB_00205710 + lVar31);
          }
          if (0 < (int)local_898) {
            lVar43 = lVar43 + lVar46;
            local_9fc = 0;
            uVar24 = 0;
            puVar48 = (undefined4 *)(lVar7 + 0x24);
            puVar4 = (undefined4 *)(lVar7 + 0x2c);
            puVar5 = (undefined4 *)(lVar7 + 0x34);
            lVar46 = lVar43 + 0x13156;
            pcVar2 = PTR_DAT_04bc0510 + 0x10;
            do {
              lVar52 = *(long *)(local_8b0[0] + uVar24 * 8);
              puVar29 = (ulong *)(**(code **)(*(long *)(lVar52 + 0x60) + 0xf0))();
              uVar44 = *puVar29;
              local_90 = (undefined *)(uVar44 & 0xffff);
              FUN_0277d4ac(&local_90);
              puVar3 = PTR_DAT_04bb43c0;
              local_90._0_4_ =
                   CONCAT13((char)(uVar44 >> 0x18),
                            CONCAT12((char)(uVar44 >> 0x10),(undefined2)local_90));
              local_90 = (undefined *)CONCAT44((int)(uVar44 >> 0x20),(undefined4)local_90);
              lVar45 = *(long *)PTR_DAT_04bb43c0;
              uVar18 = FUN_0277d6c4(&local_90);
              lVar42 = *(long *)puVar3;
              if (lVar42 != 0) {
                lVar45 = *(long *)(lVar45 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar45 + 0x1f8);
                if ((uVar18 < *(uint *)(lVar45 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar45 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                  local_d8 = (undefined8 *)0x0;
                  local_e0 = local_90;
                  local_e8 = pcVar2;
                  uVar18 = FUN_0277d6c4(&local_e0);
                  if (*(long *)PTR_DAT_04bb43c0 != 0) {
                    lVar42 = *(long *)(lVar42 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar42 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      lVar42 = *(long *)PTR_DAT_04bc0428;
                      uVar18 = FUN_0277d6c4(&local_90);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                      if ((uVar18 < *(uint *)(lVar42 + 0x1d8)) &&
                         (puVar34 = *(undefined8 **)
                                     (*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8),
                         puVar34 != (undefined8 *)0x0)) {
                        local_d8 = puVar34;
                      }
                    }
                  }
                  local_70 = FUN_01ae98d0(&local_e8);
                  local_b8 = (undefined *)0x10c5;
                  FUN_0277d4ac(&local_b8);
                  uVar44 = FUN_0277d7b4(&local_90,&local_b8);
                  puVar3 = PTR_DAT_04bb43c0;
                  if ((uVar44 & 1) == 0) {
                    uVar44 = FUN_0277d7b4(puVar48,&local_90);
                    puVar33 = puVar48;
                    if ((((uVar44 & 1) != 0) ||
                        (uVar44 = FUN_0277d7b4(puVar4,&local_90), puVar33 = puVar4,
                        (uVar44 & 1) != 0)) ||
                       (uVar44 = FUN_0277d7b4(puVar5,&local_90), puVar33 = puVar5, (uVar44 & 1) != 0
                       )) {
                      uVar19 = *puVar33;
                      uVar30 = puVar33[1];
                      goto LAB_027ce9f4;
                    }
                  }
                  else {
                    local_b0 = *(undefined **)(lVar7 + 0x24);
                    local_a8 = 0;
                    puVar6 = PTR_DAT_04bc0510 + 0x10;
                    lVar42 = *(long *)PTR_DAT_04bb43c0;
                    local_b8 = puVar6;
                    uVar18 = FUN_0277d6c4(&local_b0);
                    if (*(long *)puVar3 == 0) {
LAB_027ce790:
                      puVar3 = PTR_DAT_04bb43c0;
                      local_a8 = 0;
                      local_b0 = *(undefined **)(lVar7 + 0x2c);
                      lVar42 = *(long *)PTR_DAT_04bb43c0;
                      local_b8 = puVar6;
                      uVar18 = FUN_0277d6c4(&local_b0);
                      if (*(long *)puVar3 != 0) {
                        lVar42 = *(long *)(lVar42 + 0x57e58);
                        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                        if ((uVar18 < *(uint *)(lVar42 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                          lVar42 = *(long *)PTR_DAT_04bc0428;
                          uVar18 = FUN_0277d6c4(puVar4);
                          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                          if ((uVar18 < *(uint *)(lVar42 + 0x1d8)) &&
                             (((puVar25 = *(uint **)(*(long *)(lVar42 + 0x1e0) +
                                                    (long)(int)uVar18 * 8), puVar25 != (uint *)0x0
                               && (uVar18 = *puVar25, uVar18 != 0)) &&
                              (puVar25 != (uint *)(ulong)uVar18)))) {
                            puVar38 = (uint *)((long)puVar25 - (long)(ulong)uVar18);
                            if (((*puVar38 != 0) && (uVar18 = puVar38[1], uVar18 != 0)) &&
                               ((ulong)(ushort)puVar38[2] != 0)) {
                              lVar42 = 0xc;
                              if (*(char *)((long)puVar38 + 10) != '\0') {
                                lVar42 = 0x1c;
                              }
                              lVar42 = (long)puVar38 + lVar42 + (ulong)(ushort)puVar38[2] * 8;
                              if (lVar42 != 0) {
                                uVar20 = 0;
                                if ((ulong)uVar18 != 0) {
                                  uVar20 = (uint)((ulong)((long)puVar25 - lVar42) / (ulong)uVar18);
                                }
                                if (*puVar38 <= uVar20) {
                                  uVar20 = 0xffffffff;
                                }
                                if ((uVar20 < *(uint *)puVar17) &&
                                   (puVar33 = puVar4,
                                   *(short *)(*(long *)(puVar17 + 8) + (long)(int)uVar20 * 2) ==
                                   0x77)) goto LAB_027ce9ac;
                              }
                            }
                          }
                        }
                      }
                      local_b0 = *(undefined **)(lVar7 + 0x34);
                      lVar42 = *(long *)puVar3;
                      local_a8 = 0;
                      local_b8 = PTR_DAT_04bc0510 + 0x10;
                      uVar18 = FUN_0277d6c4(&local_b0);
                      if (*(long *)puVar3 != 0) {
                        lVar42 = *(long *)(lVar42 + 0x57e58);
                        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                        if ((uVar18 < *(uint *)(lVar42 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                          lVar42 = *(long *)PTR_DAT_04bc0428;
                          uVar18 = FUN_0277d6c4(puVar5);
                          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                          if ((uVar18 < *(uint *)(lVar42 + 0x1d8)) &&
                             (((puVar25 = *(uint **)(*(long *)(lVar42 + 0x1e0) +
                                                    (long)(int)uVar18 * 8), puVar25 != (uint *)0x0
                               && (uVar18 = *puVar25, uVar18 != 0)) &&
                              (puVar25 != (uint *)(ulong)uVar18)))) {
                            puVar38 = (uint *)((long)puVar25 - (long)(ulong)uVar18);
                            if (((*puVar38 != 0) && (uVar18 = puVar38[1], uVar18 != 0)) &&
                               ((ulong)(ushort)puVar38[2] != 0)) {
                              lVar42 = 0xc;
                              if (*(char *)((long)puVar38 + 10) != '\0') {
                                lVar42 = 0x1c;
                              }
                              lVar42 = (long)puVar38 + lVar42 + (ulong)(ushort)puVar38[2] * 8;
                              if (lVar42 != 0) {
                                uVar20 = 0;
                                if ((ulong)uVar18 != 0) {
                                  uVar20 = (uint)((ulong)((long)puVar25 - lVar42) / (ulong)uVar18);
                                }
                                if (*puVar38 <= uVar20) {
                                  uVar20 = 0xffffffff;
                                }
                                if ((uVar20 < *(uint *)puVar17) &&
                                   (puVar33 = puVar5,
                                   *(short *)(*(long *)(puVar17 + 8) + (long)(int)uVar20 * 2) ==
                                   0x77)) goto LAB_027ce9ac;
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      lVar42 = *(long *)(lVar42 + 0x57e58);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                      if ((*(uint *)(lVar42 + 0x1d8) <= uVar18) ||
                         (*(long *)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                      goto LAB_027ce790;
                      lVar42 = *(long *)PTR_DAT_04bc0428;
                      uVar18 = FUN_0277d6c4(puVar48);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                      if (((*(uint *)(lVar42 + 0x1d8) <= uVar18) ||
                          ((puVar25 = *(uint **)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8),
                           puVar25 == (uint *)0x0 || (uVar18 = *puVar25, uVar18 == 0)))) ||
                         (puVar25 == (uint *)(ulong)uVar18)) goto LAB_027ce790;
                      puVar38 = (uint *)((long)puVar25 - (long)(ulong)uVar18);
                      if (((*puVar38 == 0) || (uVar18 = puVar38[1], uVar18 == 0)) ||
                         ((ulong)(ushort)puVar38[2] == 0)) goto LAB_027ce790;
                      lVar42 = 0xc;
                      if (*(char *)((long)puVar38 + 10) != '\0') {
                        lVar42 = 0x1c;
                      }
                      lVar42 = (long)puVar38 + lVar42 + (ulong)(ushort)puVar38[2] * 8;
                      if (lVar42 == 0) goto LAB_027ce790;
                      uVar20 = 0;
                      if ((ulong)uVar18 != 0) {
                        uVar20 = (uint)((ulong)((long)puVar25 - lVar42) / (ulong)uVar18);
                      }
                      if (*puVar38 <= uVar20) {
                        uVar20 = 0xffffffff;
                      }
                      if ((*(uint *)puVar17 <= uVar20) ||
                         (puVar33 = puVar48,
                         *(short *)(*(long *)(puVar17 + 8) + (long)(int)uVar20 * 2) != 0x77))
                      goto LAB_027ce790;
LAB_027ce9ac:
                      uVar19 = *puVar33;
                      uVar30 = puVar33[1];
LAB_027ce9f4:
                      local_90 = (undefined *)CONCAT44(uVar30,uVar19);
                    }
                  }
                  puVar3 = PTR_DAT_04bb43c0;
                  local_a8 = 0;
                  local_b0 = local_90;
                  local_b8 = PTR_DAT_04bc0510 + 0x10;
                  lVar42 = *(long *)PTR_DAT_04bb43c0;
                  uVar18 = FUN_0277d6c4(&local_b0);
                  if (*(long *)puVar3 == 0) {
LAB_027ceb1c:
                    local_78 = 0xbc;
                  }
                  else {
                    lVar42 = *(long *)(lVar42 + 0x57e58);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                    if ((*(uint *)(lVar42 + 0x1d8) <= uVar18) ||
                       (*(long *)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                    goto LAB_027ceb1c;
                    lVar42 = *(long *)PTR_DAT_04bc0428;
                    uVar18 = FUN_0277d6c4(&local_90);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                    if ((*(uint *)(lVar42 + 0x1d8) <= uVar18) ||
                       (puVar25 = *(uint **)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar18 * 8),
                       puVar25 == (uint *)0x0)) goto LAB_027ceb1c;
                    uVar18 = *puVar25;
                    local_78 = 0;
                    if ((uVar18 != 0) && (puVar25 != (uint *)(ulong)uVar18)) {
                      puVar38 = (uint *)((long)puVar25 - (long)(ulong)uVar18);
                      local_78 = 0;
                      if (*puVar38 != 0) {
                        uVar18 = puVar38[1];
                        if ((uVar18 != 0) && ((ulong)(ushort)puVar38[2] != 0)) {
                          lVar42 = 0xc;
                          if (*(char *)((long)puVar38 + 10) != '\0') {
                            lVar42 = 0x1c;
                          }
                          lVar42 = (long)puVar38 + lVar42 + (ulong)(ushort)puVar38[2] * 8;
                          if (lVar42 != 0) {
                            uVar20 = 0;
                            if ((ulong)uVar18 != 0) {
                              uVar20 = (uint)((ulong)((long)puVar25 - lVar42) / (ulong)uVar18);
                            }
                            if (*puVar38 <= uVar20) {
                              uVar20 = 0xffffffff;
                            }
                            if ((uVar20 < *(uint *)puVar17) &&
                               (local_78 = (uint)*(ushort *)
                                                  (*(long *)(puVar17 + 8) + (long)(int)uVar20 * 2),
                               local_78 < 0xbd)) goto LAB_027ceb20;
                          }
                        }
                        local_78 = 0;
                      }
                    }
                  }
LAB_027ceb20:
                  if (local_78 != 0xb6) {
                    puVar26 = (undefined1 *)(**(code **)(*(long *)(lVar52 + 0x98) + 0xf0))();
                    uVar50 = *puVar26;
                    puVar26 = (undefined1 *)(**(code **)(*(long *)(lVar52 + 200) + 0xf0))();
                    uVar9 = *puVar26;
                    puVar33 = puVar1 + (ulong)local_9fc * 3;
                    if (0x23 < local_9fc) {
                      puVar33 = puVar1;
                    }
                    pbVar27 = (byte *)(**(code **)(*(long *)(lVar52 + 0xf8) + 0xf0))
                                                ((long *)(lVar52 + 0xf8));
                    bVar10 = *pbVar27;
                    *(undefined1 *)(puVar33 + 2) = uVar50;
                    *(undefined1 *)((long)puVar33 + 9) = uVar9;
                    local_78 = (uint)bVar10;
                    *puVar33 = (undefined4)local_90;
                    puVar33[1] = local_90._4_4_;
                    *(char *)((long)puVar33 + 10) = (char)local_70;
                    *(byte *)((long)puVar33 + 0xb) = bVar10;
                    FUN_0268f390(lVar43,&local_90,&local_208,7,0,1,0);
                    if ((uint)uVar24 < 0x24) {
                      *(byte *)(lVar46 + (uVar24 >> 3)) =
                           *(byte *)(lVar46 + (uVar24 >> 3)) |
                           (byte)(1 << (ulong)((uint)uVar24 & 7));
                    }
                    local_9fc = local_9fc + 1;
                  }
                }
              }
              uVar24 = uVar24 + 1;
            } while (local_898 != uVar24);
          }
          if ((((local_a2c & 1) != 0) && (*(long *)(&LAB_00205730 + lVar31) != 0)) &&
             (puVar34 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar31) + 8),
             puVar34 != (undefined8 *)0x0)) {
            (**(code **)*puVar34)();
          }
        }
      }
      else if (((puVar34 != (undefined8 *)0x0) && ((long *)puVar34[0x26] != (long *)0x0)) &&
              (lVar31 = (**(code **)(*(long *)puVar34[0x26] + 0x38))(), lVar31 != 0))
      goto LAB_027ce428;
    }
  }
  goto LAB_027cf33c;
LAB_027cf198:
  do {
    if ((*(uint *)((long)local_d8 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
      if ((int)uVar24 == 0) {
        uVar11 = uVar14 ^ uVar14 * 0x800 ^ uVar11;
        local_ec = uVar11 >> 0x1e;
        cVar37 = '\0';
        if (local_d0._4_4_ != 0) {
          cVar37 = (char)((int)uVar20 / local_d0._4_4_);
        }
        local_f0 = 1;
        puVar25 = puVar1 + (ulong)uVar18 * 3;
        uVar18 = uVar49 + 3;
        *puVar25 = local_78;
        puVar25[1] = uStack_74;
        *(char *)(puVar25 + 2) =
             ((char)local_1f8 - cVar37 * (char)(local_d0 >> 0x20)) + (char)uVar20;
        *(char *)((long)puVar25 + 9) = cVar16 + cVar37;
        *(byte *)((long)puVar25 + 10) = (byte)(uVar11 >> 0x1e);
        *(undefined1 *)((long)puVar25 + 0xb) = 1;
        break;
      }
      uVar24 = (ulong)((int)uVar24 - 1);
    }
    uVar20 = uVar20 + 1;
  } while ((uint)local_e0 != uVar20);
LAB_027cf208:
  lVar46 = *(long *)puVar17;
LAB_027cf210:
  uVar20 = FUN_0277d6c4(&local_1d0);
  lVar31 = *(long *)puVar17;
  if (lVar31 != 0) {
    lVar43 = *(long *)(lVar46 + 0x57e58);
    uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
    if ((uVar20 < *(uint *)(lVar43 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
      local_d8 = (undefined8 *)0x0;
      local_e8 = PTR_DAT_04bc0510 + 0x10;
      local_e0 = local_1d0;
      uVar20 = FUN_0277d6c4(&local_e0);
      if (*(long *)puVar17 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar20 = FUN_0277d6c4(&local_1d0);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar31 + 0x1d8)) &&
             (puVar34 = *(undefined8 **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar20 * 8),
             puVar34 != (undefined8 *)0x0)) {
            local_d8 = puVar34;
          }
        }
      }
      puVar48 = puVar1 + (ulong)uVar18 * 3;
      if (0x23 < uVar18) {
        puVar48 = puVar1;
      }
      uVar19 = FUN_01ae98d0(&local_e8);
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar19);
      local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
      *puVar48 = (undefined4)local_1d0;
      puVar48[1] = local_1d0._4_4_;
      *(char *)(puVar48 + 2) = (char)local_1c0;
      *(char *)((long)puVar48 + 9) = (char)((ulong)local_1c0 >> 0x20);
      *(char *)((long)puVar48 + 10) = (char)uVar19;
      *(undefined1 *)((long)puVar48 + 0xb) = 0;
    }
  }
LAB_027cf33c:
  (**(code **)(local_9d0 + 0x20))(&local_9d0);
  (**(code **)(*plVar51 + 0x58))();
  FUN_00b634e0(&local_9d0);
  plVar23 = (long *)PTR_DAT_04bb3968;
  if (lVar32 != 1) {
    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar31 + 0xa8) = lVar32;
  }
LAB_027cf394:
  (**(code **)(local_228 + 0x18))(&local_228);
  FUN_038d1270(auStack_2f8,"Param/NpcHouse/%s.byml",local_220);
  uVar24 = FUN_03eba3a0(auStack_2f8);
  puVar6 = PTR_DAT_04bc4628;
  puVar3 = PTR_DAT_04bc4620;
  puVar17 = PTR_DAT_04bb3350;
  if (((uVar24 & 1) == 0) || (plVar23 = *(long **)(*plVar23 + 0x17598), plVar23 == (long *)0x0)) {
    lVar31 = *(long *)PTR_DAT_04bb5008;
    lVar32 = 1 - (ulong)*(ushort *)(lVar31 + 0x7f0);
    if (((uint)lVar32 < *(uint *)(lVar31 + 2000)) &&
       (puVar25 = *(uint **)(*(long *)(lVar31 + 0x7d8) + lVar32 * 8), puVar25 != (uint *)0x0)) {
      uVar18 = *puVar25;
      if (uVar18 != 0) {
        cVar37 = *PTR_DAT_04bc4620;
        do {
          if (cVar37 == '\0') {
            cVar37 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar18 = *puVar25;
          }
          else {
            uVar20 = *(uint *)(puVar6 + 0x10);
            if (-1 < (int)uVar20) {
              if ((undefined2 *)((ulong)uVar20 + (long)puVar25) != (undefined2 *)0x0) {
                uVar40 = *(undefined2 *)((ulong)uVar20 + (long)puVar25);
                goto LAB_027cf71c;
              }
              break;
            }
            if (uVar20 != 0xffffffff) break;
          }
          puVar38 = (uint *)(ulong)uVar18;
          uVar40 = 0;
          if ((puVar38 == (uint *)0x0) || (uVar40 = 0, puVar25 == puVar38)) goto LAB_027cf71c;
          lVar31 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar38)) != '\0') {
            lVar31 = 0x1c;
          }
          lVar31 = (long)puVar25 + (lVar31 - (long)puVar38);
          uVar40 = 0;
          if (lVar31 == 0) goto LAB_027cf71c;
          uVar24 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar38));
          *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
          if (uVar24 == 0) break;
          piVar39 = (int *)(lVar31 + 4);
          while (piVar39[-1] != -0x278d8283) {
            piVar39 = piVar39 + 2;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) goto LAB_027cf718;
          }
          iVar41 = 0;
          if (*piVar39 != -1) {
            iVar41 = *piVar39;
          }
          *(int *)(puVar6 + 0x10) = iVar41;
          uVar18 = *puVar25;
          if (uVar18 == 0) break;
        } while( true );
      }
LAB_027cf718:
      uVar40 = 0;
LAB_027cf71c:
      *(undefined2 *)(param_1 + 0xe) = uVar40;
      uVar18 = *puVar25;
      if (uVar18 != 0) {
        cVar37 = *puVar3;
        do {
          if (cVar37 == '\0') {
            cVar37 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar18 = *puVar25;
          }
          else {
            uVar20 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar20) {
              if ((undefined2 *)((ulong)uVar20 + (long)puVar25) != (undefined2 *)0x0) {
                uVar40 = *(undefined2 *)((ulong)uVar20 + (long)puVar25);
                goto LAB_027cf7fc;
              }
              break;
            }
            if (uVar20 != 0xffffffff) break;
          }
          puVar38 = (uint *)(ulong)uVar18;
          uVar40 = 0;
          if ((puVar38 == (uint *)0x0) || (uVar40 = 0, puVar25 == puVar38)) goto LAB_027cf7fc;
          lVar31 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar38)) != '\0') {
            lVar31 = 0x1c;
          }
          lVar31 = (long)puVar25 + (lVar31 - (long)puVar38);
          uVar40 = 0;
          if (lVar31 == 0) goto LAB_027cf7fc;
          uVar24 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar38));
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          if (uVar24 == 0) break;
          piVar39 = (int *)(lVar31 + 4);
          while (piVar39[-1] != 0x966fbe3) {
            piVar39 = piVar39 + 2;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) goto LAB_027cf7f8;
          }
          iVar41 = 0;
          if (*piVar39 != -1) {
            iVar41 = *piVar39;
          }
          *(int *)(puVar6 + 0xc) = iVar41;
          uVar18 = *puVar25;
          if (uVar18 == 0) break;
        } while( true );
      }
LAB_027cf7f8:
      uVar40 = 0;
LAB_027cf7fc:
      *(undefined2 *)(param_1 + 0x10) = uVar40;
      uVar18 = *puVar25;
      if (uVar18 != 0) {
        cVar37 = *puVar3;
        do {
          if (cVar37 == '\0') {
            cVar37 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar18 = *puVar25;
          }
          else {
            uVar20 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar20) {
              if ((undefined2 *)((ulong)uVar20 + (long)puVar25) != (undefined2 *)0x0) {
                uVar40 = *(undefined2 *)((ulong)uVar20 + (long)puVar25);
                goto LAB_027cf8dc;
              }
              break;
            }
            if (uVar20 != 0xffffffff) break;
          }
          puVar38 = (uint *)(ulong)uVar18;
          uVar40 = 0;
          if ((puVar38 == (uint *)0x0) || (uVar40 = 0, puVar25 == puVar38)) goto LAB_027cf8dc;
          lVar31 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar38)) != '\0') {
            lVar31 = 0x1c;
          }
          lVar31 = (long)puVar25 + (lVar31 - (long)puVar38);
          uVar40 = 0;
          if (lVar31 == 0) goto LAB_027cf8dc;
          uVar24 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar38));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar24 == 0) break;
          piVar39 = (int *)(lVar31 + 4);
          while (piVar39[-1] != -0x37919f2b) {
            piVar39 = piVar39 + 2;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) goto LAB_027cf8d8;
          }
          iVar41 = 0;
          if (*piVar39 != -1) {
            iVar41 = *piVar39;
          }
          *(int *)(puVar6 + 8) = iVar41;
          uVar18 = *puVar25;
          if (uVar18 == 0) break;
        } while( true );
      }
LAB_027cf8d8:
      uVar40 = 0;
LAB_027cf8dc:
      *(undefined2 *)(param_1 + 0x12) = uVar40;
    }
  }
  else {
    lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar32 = *(long *)(lVar31 + 0xa8);
    *(long **)(lVar31 + 0xa8) = plVar23;
    pcVar2 = PTR_DAT_04bb2020 + 0x10;
    local_200 = "NpcHouse";
    local_208 = pcVar2;
    (**(code **)(local_228 + 0x18))(&local_228);
    local_e0 = local_220;
    local_e8 = pcVar2;
    FUN_0219fd80(&local_9d0,&local_208,&local_e8,0);
    local_200 = (char *)((long)&local_1f8 + 4);
    local_f5 = 0;
    local_1f8 = (uint *)CONCAT35(local_1f8._5_3_,0x100);
    local_208 = PTR_DAT_04bb21f8 + 0x10;
    uVar24 = (**(code **)(local_9d0 + 0xf0))(&local_9d0,&local_208,1);
    if ((uVar24 & 1) != 0) {
      FUN_03c27e60(&local_9d0,&local_208,plVar23);
    }
    puVar28 = (undefined2 *)(**(code **)(local_8e0[0] + 0xf0))(local_8e0);
    *(undefined2 *)(param_1 + 0xe) = *puVar28;
    puVar28 = (undefined2 *)(**(code **)(local_8b0[0] + 0xf0))(local_8b0);
    *(undefined2 *)(param_1 + 0x10) = *puVar28;
    puVar28 = (undefined2 *)(**(code **)(local_880[0] + 0xf0))(local_880);
    *(undefined2 *)(param_1 + 0x12) = *puVar28;
    puVar29 = (ulong *)(**(code **)(local_820[0] + 0xf0))(local_820);
    uVar24 = *puVar29;
    local_208 = (char *)(uVar24 & 0xffff);
    FUN_0277d4ac(&local_208);
    puVar3 = PTR_DAT_04bb43c0;
    local_208._0_4_ =
         CONCAT13((char)(uVar24 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(undefined2)local_208));
    local_208 = (char *)CONCAT44((int)(uVar24 >> 0x20),(undefined4)local_208);
    lVar31 = *(long *)PTR_DAT_04bb43c0;
    uVar18 = FUN_0277d6c4(&local_208);
    if (*(long *)puVar3 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        puVar29 = (ulong *)(**(code **)(local_820[0] + 0xf0))(local_820);
        uVar24 = *puVar29;
        local_e8 = (char *)(uVar24 & 0xffff);
        FUN_0277d4ac(&local_e8);
        *(char *)(param_1 + 0x1ca) = (char)(uVar24 >> 0x10);
        *(char *)(param_1 + 0x1cb) = (char)(uVar24 >> 0x18);
        *(undefined2 *)(param_1 + 0x1c8) = (undefined2)local_e8;
        *(int *)(param_1 + 0x1cc) = (int)(uVar24 >> 0x20);
      }
    }
    (**(code **)(local_9d0 + 0x20))(&local_9d0);
    (**(code **)(*plVar23 + 0x58))(plVar23);
    if (lVar32 != 1) {
      lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar17 + 0x68));
      *(long *)(lVar31 + 0xa8) = lVar32;
    }
  }
  if ((((uVar22 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
     (puVar34 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 0x18), puVar34 != (undefined8 *)0x0)) {
    (**(code **)*puVar34)();
  }
  return;
}

