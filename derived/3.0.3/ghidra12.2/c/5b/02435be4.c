
/* WARNING: Removing unreachable block (ram,0x02435d7c) */

void FUN_02435be4(long param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 uVar18;
  int iVar19;
  float fVar20;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined1 local_75;
  float local_6c [3];
  ulong local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  puVar8 = PTR_DAT_04bb43c0;
  local_38 = *(ulong *)(param_1 + 0x1900);
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_38);
  lVar15 = *(long *)puVar8;
  if (lVar15 == 0) {
LAB_02435d28:
    bVar6 = false;
    puVar16 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02435d28;
    local_b8 = 0;
    local_c8 = PTR_DAT_04bc0510 + 0x10;
    local_c0 = local_38;
    uVar9 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar8 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_38);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar9 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar15 != 0) {
            local_b8 = lVar15;
          }
        }
      }
    }
    uVar10 = FUN_01ad9780(&local_c8);
    if ((uVar10 & 1) == 0) goto LAB_02435d28;
    bVar6 = true;
    puVar16 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar19 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar19 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  uVar9 = 0;
  if (puVar16[0x227] != 0) {
    uVar9 = *(uint *)(puVar16 + 0x2d3) >> 1 & 1;
  }
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar9);
  uVar10 = FUN_0073da08(puVar16,uVar9);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar15 + 0x278) * 999.99994);
    iVar19 = (int)(*(float *)(lVar15 + 0x27c) * 4.0);
    if (0x7ffe < iVar19) {
      iVar19 = 0x7fff;
    }
    if (iVar19 < -0x7fff) {
      iVar19 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar19;
    fVar20 = *(float *)(lVar15 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar20 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  iVar19 = *(int *)(param_1 + 0x1c04);
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar18 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar16 + 0x2ec) = uVar18;
    *(undefined1 *)((long)puVar16 + 0x2e5) = 1;
  }
  if (iVar19 != 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_052461c0), iVar14 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar16 = &DAT_05240280;
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    FUN_0170c5d8(puVar16,1,*(undefined4 *)(param_1 + 0x230));
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar4 = *(ushort *)(param_1 + 0x18ef);
    lVar15 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x13b0) + 0xf0))(lVar15 + 0x13b0);
    fVar20 = *pfVar11;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_6c[0] = 1.4013e-44;
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02435fa8;
    }
    iVar19 = (uint)uVar4 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar15 = (**(code **)(*plVar3 + 0x148))();
    iVar14 = iVar19 - *(int *)(lVar15 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar19 = -0x15555560;
      iVar14 = (int)(fVar20 * (float)iVar14);
      if (iVar14 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar19 = 0x5b05b0;
      }
      iVar2 = iVar14;
      if (iVar5 <= iVar14) {
        iVar2 = iVar5;
      }
      if (iVar19 <= iVar14) {
        iVar19 = iVar2;
      }
      iVar19 = iVar19 + *(int *)(lVar15 + 4);
    }
    *(int *)(lVar15 + 4) = iVar19;
LAB_02435fa8:
    iVar19 = *(int *)(param_1 + 0x18e5);
    iVar14 = *(int *)(param_1 + 0x18eb);
    lVar15 = FUN_0251e98c(1);
    puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar15 + 0x1380) + 0xf0))(lVar15 + 0x1380);
    local_6c[1] = 0.0;
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_c8 = (undefined *)(puVar16[0x4f] & 0xffffffff);
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(puVar16 + 0x50));
    local_6c[0] = (float)iVar19 * 0.001;
    local_6c[2] = (float)iVar14 * 0.001;
    FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,&local_c8,local_6c);
    *(uint *)(puVar16 + 0x4f) = (uint)local_c8;
    *(undefined4 *)(puVar16 + 0x50) = (undefined4)local_c0;
    if ((uVar10 & 1) != 0) {
      local_75 = 0;
      local_c0 = (long)&local_b8 + 4;
      local_b8 = CONCAT35(local_b8._5_3_,0x40);
      local_c8 = PTR_DAT_04bb2bc0 + 0x10;
      uVar10 = FUN_01714cd0(&local_c8,&local_38);
      if ((uVar10 & 1) == 0) {
        FUN_023164ec(param_1,6);
      }
      else {
        puVar16 = *(undefined8 **)(param_1 + 0x60);
        if (puVar16 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar19 = __cxa_guard_acquire(&DAT_052461c0);
            puVar16 = &DAT_05240280;
            if (iVar19 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar16 = &DAT_05240280;
          }
        }
        FUN_017081d0(puVar16,&local_c8,6,0,0);
      }
    }
    return;
  }
  pcVar1 = (char *)(param_1 + 0x17ac);
  uVar9 = local_c8._4_4_;
  if (bVar6) {
    if (*pcVar1 == '\0') {
      uVar7 = (ulong)local_c8._4_4_;
      local_c8 = (undefined *)(uVar7 << 0x20);
      if ((*(uint *)(param_1 + 0xed0) & 1) != 0) {
        puVar16 = *(undefined8 **)(param_1 + 0x60);
        if (puVar16 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar19 = __cxa_guard_acquire(&DAT_052461c0);
            puVar16 = &DAT_05240280;
            if (iVar19 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar16 = &DAT_05240280;
          }
        }
        uVar10 = FUN_0073d6e0(puVar16,0);
        if ((uVar10 & 1) != 0) {
          return;
        }
        goto LAB_024362b8;
      }
      local_c8 = (undefined *)(uVar7 << 0x20);
      if ((*(uint *)(param_1 + 0xec8) & 1) != 0) {
        if ((uVar10 & 1) == 0) {
          return;
        }
        *(undefined8 *)(param_1 + 0x1988) = 0;
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        local_c8 = (undefined *)CONCAT44(uVar9,0xb0);
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(ulong *)(param_1 + 0x1980) = local_38;
        goto LAB_024363e4;
      }
    }
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar19 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    uVar10 = FUN_0073d6e0(puVar16,0);
    if ((uVar10 & 1) != 0) {
      return;
    }
LAB_02436138:
    uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar10 & 1) == 0) {
      local_c0 = local_c0 & 0xffffffff00000000;
      local_c8 = (undefined *)CONCAT35(local_c8._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_c8);
      return;
    }
    return;
  }
  if ((uVar10 & 1) != 0) {
    if ((*pcVar1 != '\0') ||
       (local_c8 = (undefined *)((ulong)local_c8._4_4_ << 0x20),
       (*(uint *)(param_1 + 0xed0) & 1) == 0)) goto LAB_02436138;
LAB_024362b8:
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(ulong *)(param_1 + 0x1980) = local_38;
    lVar15 = FUN_016debb0(param_1);
    if (*(long *)(lVar15 + 0x1138) == 0) {
      uVar9 = 0;
    }
    else {
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
      uVar9 = *(uint *)(lVar15 + 0x1698) >> 1 & 1;
    }
    lVar15 = FUN_01702960(lVar15,uVar9);
    *(undefined4 *)(param_1 + 0x1989) = *(undefined4 *)(lVar15 + 0x58);
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xaf);
LAB_024363e4:
    if (0x148 < (uint)local_c8) {
      return;
    }
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    goto LAB_0243645c;
  }
  if (iVar19 == 0) {
    return;
  }
  if (*pcVar1 != '\0') {
    return;
  }
  local_c8._0_4_ = 0;
  if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
    return;
  }
  uVar13 = FUN_016debb0(param_1);
  uVar10 = FUN_0073d6e0(uVar13,0);
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(ulong *)(param_1 + 0x1980) = local_38;
  if ((uVar10 & 1) == 0) {
    lVar15 = FUN_016debb0(param_1);
    if (*(long *)(lVar15 + 0x1138) != 0) goto LAB_02436490;
LAB_024364ac:
    uVar9 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1988) = 1;
    lVar15 = FUN_016debb0(param_1);
    if (*(long *)(lVar15 + 0x1138) == 0) goto LAB_024364ac;
LAB_02436490:
    local_c8._0_4_ = 1;
    uVar9 = *(uint *)(lVar15 + 0x1698) >> 1 & 1;
  }
  lVar15 = FUN_01702960(lVar15,uVar9);
  *(undefined4 *)(param_1 + 0x1989) = *(undefined4 *)(lVar15 + 0x58);
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xaf);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
LAB_0243645c:
  lVar15 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar15 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar15,(ulong)local_c8 & 0xffffffff);
  return;
}

