
void FUN_0230f780(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  byte bVar14;
  char cVar15;
  uint *puVar16;
  int *piVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined2 local_c4 [2];
  uint local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined8 local_60;
  float local_58;
  uint local_44;
  
  local_c0 = 0;
  local_bc = 1;
  uStack_64 = *(uint *)(param_1 + 0x1810);
  uStack_84 = 0;
  local_88 = 0xc0500000;
  if ((uStack_64 & 0xfffffffe) != 2) {
    local_88 = 0;
  }
  local_70 = 0;
  uStack_6c = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_68 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c4[0] = *(undefined2 *)PTR_DAT_04bb6298;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  fStack_74 = 0.0;
  if (param_2 != 0) {
    pbVar1 = PTR_DAT_04bb5038 + *(uint *)(param_2 + 0x1c);
    if (7 < *(uint *)(param_2 + 0x1c)) {
      pbVar1 = PTR_DAT_04bb32e0;
    }
    bVar14 = *pbVar1;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_44 = CONCAT31(local_44._1_3_,bVar14);
    uVar8 = (**(code **)(**(long **)(param_1 + 0x60) + 0x100))();
    if ((uVar8 & 1) == 0) {
      puVar9 = (uint *)FUN_02374304(param_1);
      puVar6 = PTR_DAT_04bc2fe8;
      puVar5 = PTR_DAT_04bc2fe0;
      if (*puVar9 != 0) {
        cVar15 = *PTR_DAT_04bc2fe0;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar11 = *(uint *)(puVar6 + 0x68);
            if (-1 < (int)uVar11) {
              if ((char *)((ulong)uVar11 + (long)puVar9) == (char *)0x0) break;
              local_bc = *(char *)((ulong)uVar11 + (long)puVar9) != '\0';
              goto LAB_0230fac8;
            }
            if (uVar11 != 0xffffffff) break;
          }
          puVar16 = (uint *)(ulong)*puVar9;
          local_bc = false;
          if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_0230fac8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar9 + (lVar12 - (long)puVar16);
          if (lVar12 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
          *(undefined4 *)(puVar6 + 0x68) = 0xfffffffe;
          local_bc = false;
          if (uVar8 == 0) goto LAB_0230fac8;
          piVar17 = (int *)(lVar12 + 4);
          while (piVar17[-1] != -0x1e16cb2b) {
            piVar17 = piVar17 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              local_bc = false;
              goto LAB_0230fac8;
            }
          }
          local_bc = false;
          iVar7 = 0;
          if (*piVar17 != -1) {
            iVar7 = *piVar17;
          }
          *(int *)(puVar6 + 0x68) = iVar7;
          if (*puVar9 == 0) goto LAB_0230fac8;
        } while( true );
      }
      local_bc = false;
    }
    else {
      local_bc = true;
    }
LAB_0230fac8:
    local_c0 = FUN_0255a1a8(*(undefined4 *)(param_1 + 0x180));
    puVar5 = PTR_DAT_04bb4718;
    local_60 = CONCAT44(local_60._4_4_,local_c0);
    puVar10 = (undefined8 *)(param_2 + 8);
    local_b8 = *puVar10;
    local_a0 = *puVar10;
    local_90 = *(undefined8 *)(param_2 + 0xc);
    local_a8 = *(undefined8 *)(param_2 + 0xc);
    uStack_7c = 0;
    local_78 = 0;
    fStack_74 = 0.0;
    local_70 = 0;
    uStack_6c = 0;
    local_68 = 0;
    local_80 = *(undefined4 *)(param_2 + 0x18);
    local_98 = CONCAT44(*(undefined4 *)puVar10,*(undefined4 *)(param_2 + 0x10));
    uStack_84 = 0;
    local_b0 = CONCAT44(*(undefined4 *)puVar10,*(undefined4 *)(param_2 + 0x10));
    FUN_0255a688(*(undefined8 *)PTR_DAT_04bb4718,&local_44,local_c4);
    if ((ulong)(byte)local_44 < 8) {
      lVar12 = *(long *)puVar5 + (ulong)(byte)local_44 * 0xc;
      *(undefined4 *)(lVar12 + 0xd88) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(lVar12 + 0xd8c) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(lVar12 + 0xd90) = *(undefined4 *)(param_2 + 0x10);
      return;
    }
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar18 = (float)FUN_016e026c(0,puVar10 + 0x4f,0,0);
  uVar8 = (**(code **)(**(long **)(param_1 + 0x60) + 0x100))();
  if ((uVar8 & 1) == 0) {
    puVar9 = (uint *)FUN_02374304(param_1);
    puVar6 = PTR_DAT_04bc2fe8;
    puVar5 = PTR_DAT_04bc2fe0;
    if (*puVar9 != 0) {
      cVar15 = *PTR_DAT_04bc2fe0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar6 + 0x68);
          if (-1 < (int)uVar11) {
            if ((char *)((ulong)uVar11 + (long)puVar9) == (char *)0x0) break;
            local_bc = *(char *)((ulong)uVar11 + (long)puVar9) != '\0';
            goto LAB_0230fb78;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)*puVar9;
        local_bc = false;
        if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_0230fb78;
        lVar12 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar9 + (lVar12 - (long)puVar16);
        if (lVar12 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar6 + 0x68) = 0xfffffffe;
        local_bc = false;
        if (uVar8 == 0) goto LAB_0230fb78;
        piVar17 = (int *)(lVar12 + 4);
        while (piVar17[-1] != -0x1e16cb2b) {
          piVar17 = piVar17 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            local_bc = false;
            goto LAB_0230fb78;
          }
        }
        local_bc = false;
        iVar7 = 0;
        if (*piVar17 != -1) {
          iVar7 = *piVar17;
        }
        *(int *)(puVar6 + 0x68) = iVar7;
        if (*puVar9 == 0) goto LAB_0230fb78;
      } while( true );
    }
    local_bc = false;
  }
  else {
    local_bc = true;
  }
LAB_0230fb78:
  lVar12 = *(long *)(param_1 + 0x70);
  if (lVar12 == 0) {
    local_44 = 0;
LAB_0230fbc8:
    if (local_44 == 0x3b) goto LAB_0230fbe4;
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    puVar10 = &DAT_054e9a58;
    if (puVar13 != (undefined8 *)0x0) {
      puVar10 = puVar13;
    }
    local_58 = *(float *)(puVar10 + 0x50);
    local_60._4_4_ = (float)((ulong)puVar10[0x4f] >> 0x20);
    local_b8._4_4_ = local_60._4_4_;
    local_60 = puVar10[0x4f];
  }
  else {
    local_44 = 0;
    if (*(uint *)(lVar12 + 0x280) < 0x149) {
      local_44 = *(uint *)(lVar12 + 0x280);
    }
    if (local_44 != 0x3a) goto LAB_0230fbc8;
LAB_0230fbe4:
    local_60 = CONCAT44((float)(int)*(short *)(param_1 + 0x1905) * 0.25,
                        (float)*(int *)(param_1 + 0x1901) * 0.001);
    local_58 = (float)*(int *)(param_1 + 0x1907) * 0.001;
    local_b8._4_4_ = (float)FUN_016e026c(0,&local_60,0,0);
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    lVar12 = *(long *)(param_1 + 0x70);
  }
  puVar10 = &DAT_054e9a58;
  if (puVar13 != (undefined8 *)0x0) {
    puVar10 = puVar13;
  }
  local_b8._0_4_ = (undefined4)local_60;
  uVar20 = *(undefined4 *)(puVar10 + 0x4f);
  uVar21 = *(undefined4 *)((long)puVar10 + 0x27c);
  local_a0 = puVar10[0x4f];
  uVar19 = *(undefined4 *)(puVar10 + 0x50);
  local_98 = CONCAT44(local_98._4_4_,uVar19);
  local_c0 = 0;
  if (lVar12 != 0) {
    local_c0 = 0;
    if (*(uint *)(lVar12 + 0x280) < 0x149) {
      local_c0 = *(uint *)(lVar12 + 0x280);
    }
  }
  *(undefined4 *)((long)puVar10 + 0x2f4) = uVar20;
  *(undefined4 *)(puVar10 + 0x5f) = uVar21;
  *(undefined4 *)((long)puVar10 + 0x2fc) = uVar19;
  if (*(char *)((long)puVar10 + 0x2e4) != '\0') {
    uVar20 = *(undefined4 *)(puVar10 + 0x5d);
    *(undefined4 *)((long)puVar10 + 0x2f4) = uVar20;
  }
  if (*(char *)((long)puVar10 + 0x2e5) != '\0') {
    uVar21 = *(undefined4 *)((long)puVar10 + 0x2ec);
    *(undefined4 *)(puVar10 + 0x5f) = uVar21;
  }
  if (*(char *)((long)puVar10 + 0x2e6) != '\0') {
    uVar19 = *(undefined4 *)(puVar10 + 0x5e);
    *(undefined4 *)((long)puVar10 + 0x2fc) = uVar19;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_b0 = CONCAT44(uVar20,local_58);
  local_a8 = CONCAT44(uVar19,uVar21);
  local_60._0_4_ = local_c0;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        goto LAB_0230fd18;
      }
    }
    puVar10 = &DAT_05240280;
  }
LAB_0230fd18:
  FUN_016ff8c0(puVar10,1,(long)&local_98 + 4);
  local_90 = CONCAT44(local_90._4_4_,local_b8._4_4_);
  uVar11 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar11 = 0;
    if (uVar3 < 0x149) {
      uVar11 = uVar3;
    }
  }
  local_60 = CONCAT44(local_60._4_4_,uVar11);
  if (((DAT_054f0b68 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_054f0b68,uVar11), iVar7 != 0))
  {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68,uVar11);
  }
  puVar5 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    puVar9 = &DAT_054f0b60;
    pcVar4 = PTR_DAT_04bc2fe0;
    puVar10 = (undefined8 *)PTR_DAT_04bc2fe8;
    uVar11 = DAT_054f0b60;
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb4718 + 0x20;
    puVar9 = (uint *)FUN_0250f090(lVar12,uVar11);
    if (puVar9 == (uint *)0x0) {
      puVar16 = (uint *)FUN_0250f090(lVar12,0);
      puVar9 = &DAT_054f0b60;
      if (puVar16 != (uint *)0x0) {
        puVar9 = puVar16;
      }
    }
    uVar11 = *puVar9;
    pcVar4 = PTR_DAT_04bc2fe0;
    puVar10 = (undefined8 *)PTR_DAT_04bc2fe8;
  }
  PTR_DAT_04bc2fe0 = pcVar4;
  PTR_DAT_04bc2fe8 = (undefined *)puVar10;
  if (uVar11 == 0) {
LAB_0230fea8:
    if (fVar18 <= local_b8._4_4_) {
      fVar18 = local_b8._4_4_;
    }
    local_b8._4_4_ = fVar18;
LAB_0230feb8:
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_70 = (undefined4)*(undefined8 *)(param_1 + 0x1bd4);
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1bd4) >> 0x20);
    uStack_84 = (undefined4)puVar10[0x56];
    local_80 = (undefined4)((ulong)puVar10[0x56] >> 0x20);
    local_78 = *(undefined4 *)((long)puVar10 + 0x2dc);
    uStack_7c = *(undefined4 *)(puVar10 + 0x57);
    fStack_74 = SQRT(*(float *)((long)puVar10 + 0x29c) * *(float *)((long)puVar10 + 0x29c) +
                     *(float *)((long)puVar10 + 0x294) * *(float *)((long)puVar10 + 0x294));
    local_68 = *(undefined4 *)(param_1 + 0x1bdc);
    FUN_0255a688(*(undefined8 *)puVar5,param_1 + 0x1ee8,local_c4);
    return;
  }
  cVar15 = *pcVar4;
  do {
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *puVar10 = 0xffffffffffffffff;
      puVar10[1] = 0xffffffffffffffff;
      *pcVar4 = '\x01';
      puVar10[0x14] = 0xffffffffffffffff;
      puVar10[2] = 0xffffffffffffffff;
      puVar10[3] = 0xffffffffffffffff;
      puVar10[4] = 0xffffffffffffffff;
      puVar10[5] = 0xffffffffffffffff;
      puVar10[6] = 0xffffffffffffffff;
      puVar10[7] = 0xffffffffffffffff;
      puVar10[8] = 0xffffffffffffffff;
      puVar10[9] = 0xffffffffffffffff;
      puVar10[10] = 0xffffffffffffffff;
      puVar10[0xb] = 0xffffffffffffffff;
      puVar10[0xc] = 0xffffffffffffffff;
      puVar10[0xd] = 0xffffffffffffffff;
      puVar10[0xe] = 0xffffffffffffffff;
      puVar10[0xf] = 0xffffffffffffffff;
      puVar10[0x10] = 0xffffffffffffffff;
      puVar10[0x11] = 0xffffffffffffffff;
      puVar10[0x12] = 0xffffffffffffffff;
      puVar10[0x13] = 0xffffffffffffffff;
    }
    else {
      uVar11 = *(uint *)((long)puVar10 + 0x44);
      if (-1 < (int)uVar11) {
        if ((char *)((ulong)uVar11 + (long)puVar9) != (char *)0x0) {
          if (*(char *)((ulong)uVar11 + (long)puVar9) == '\0') goto LAB_0230feb8;
        }
        goto LAB_0230fea8;
      }
      if (uVar11 != 0xffffffff) goto LAB_0230fea8;
    }
    lVar12 = (long)puVar9 - (ulong)*puVar9;
    if (*puVar9 == 0) goto LAB_0230fea8;
    if (lVar12 == 0) goto LAB_0230fea8;
    lVar2 = 0xc;
    if (*(char *)(lVar12 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar12 == 0) goto LAB_0230fea8;
    uVar8 = (ulong)*(ushort *)(lVar12 + 8);
    *(undefined4 *)((long)puVar10 + 0x44) = 0xfffffffe;
    if (uVar8 == 0) goto LAB_0230fea8;
    piVar17 = (int *)(lVar2 + lVar12 + 4);
    while (piVar17[-1] != -0x55ff8f49) {
      piVar17 = piVar17 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_0230fea8;
    }
    iVar7 = 0;
    if (*piVar17 != -1) {
      iVar7 = *piVar17;
    }
    *(int *)((long)puVar10 + 0x44) = iVar7;
    if (*puVar9 == 0) goto LAB_0230fea8;
  } while( true );
}

