
/* WARNING: Removing unreachable block (ram,0x024359d4) */

void FUN_024355f4(long param_1)

{
  uint **ppuVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint ***pppuVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  uint **local_d0;
  char *pcStack_c8;
  uint **local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined7 local_a4;
  undefined4 uStack_9d;
  undefined1 local_99;
  undefined1 local_6d;
  int local_68;
  uint **local_60;
  char *pcStack_58;
  uint *local_50;
  uint local_44;
  
  local_50 = (uint *)0xfffe;
  FUN_0277d4ac(&local_50);
  puVar5 = PTR_DAT_04bb43c0;
  local_50 = *(uint **)(param_1 + 0x1900);
  cVar3 = *(char *)(param_1 + 0x1908);
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_50);
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
LAB_024357f0:
    if ((cVar3 != '\0') && (*(int *)(param_1 + 0x178) == 0)) {
      iVar8 = *(int *)(param_1 + 0x178);
      goto joined_r0x02435800;
    }
    local_6d = 0;
    local_b0 = 0x40;
    local_b8 = &uStack_ac;
    uStack_ac = uStack_ac & 0xffffff00;
    local_c0 = (uint **)(PTR_DAT_04bb2bc0 + 0x10);
    FUN_01714adc(&local_c0,&local_50,0);
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar11 = &DAT_05240280;
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    pppuVar10 = &local_c0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_024357f0;
    local_b0 = 0;
    uStack_ac = 0;
    local_c0 = (uint **)(PTR_DAT_04bc0510 + 0x10);
    local_b8 = local_50;
    uVar7 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar5 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_50);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8), lVar13 != 0)) {
          local_b0 = (undefined4)lVar13;
          uStack_ac = (uint)((ulong)lVar13 >> 0x20);
        }
      }
    }
    iVar8 = FUN_01ad78cc(&local_c0);
    local_60 = (uint **)CONCAT44(local_60._4_4_,iVar8);
    if (iVar8 != 0x55) goto LAB_024357f0;
    local_b0 = 0x40;
    local_b8 = &uStack_ac;
    uStack_ac = s_CommonMaracasSoundR_040ff9ca._0_4_;
    uStack_a8 = s_CommonMaracasSoundR_040ff9ca._4_4_;
    local_6d = 0;
    local_a4 = s_CommonMaracasSoundR_040ff9ca._8_7_;
    uStack_9d = CONCAT31(0x52646e,s_CommonMaracasSoundR_040ff9ca[0xf]);
    local_99 = 0;
    ppuVar1 = (uint **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_58 = "CommonMaracasSoundR";
    local_c0 = (uint **)(PTR_DAT_04bb2bc0 + 0x10);
    local_60 = ppuVar1;
    local_68 = FUN_006bd550("CommonMaracasSoundR",0);
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    pcStack_c8 = "CommonMaracasSoundL";
    local_d0 = ppuVar1;
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) != 0) {
        puVar11 = &DAT_05240280;
        goto LAB_024357c4;
      }
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
      lVar13 = DAT_052413b8;
      if (DAT_052413b8 != 0) goto LAB_024357cc;
LAB_02435b38:
      local_44 = 0;
      puVar11 = &DAT_04c931a0;
    }
    else {
LAB_024357c4:
      lVar13 = puVar11[0x227];
      if (puVar11[0x227] == 0) goto LAB_02435b38;
LAB_024357cc:
      local_44 = *(uint *)(puVar11 + 0x2d3) >> 1 & 1;
      uVar7 = 0;
      if (*(long *)(lVar13 + 0x78) != 0) {
        uVar7 = *(uint *)(*(long *)(lVar13 + 0x78) + 0x18);
      }
      uVar2 = local_44;
      if (uVar7 <= local_44) {
        uVar2 = 0;
      }
      if (*(uint *)(lVar13 + 0x80) <= uVar2) {
        uVar2 = 0;
      }
      puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x88) + (long)(int)uVar2 * 0xe8 + 0x60);
    }
    iVar6 = local_68;
    iVar8 = *(int *)(puVar11 + 0xb);
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar11 = &DAT_05240280;
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    pppuVar10 = &local_d0;
    if (iVar8 != iVar6) {
      pppuVar10 = &local_60;
    }
  }
  FUN_017081d0(puVar11,pppuVar10,6,0,0);
  iVar8 = *(int *)(param_1 + 0x178);
joined_r0x02435800:
  if (iVar8 == 0) {
    bVar12 = *(byte *)(param_1 + 0x1ee8);
    local_60 = &local_50;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    uVar4 = (ulong)local_b8 >> 8;
    local_b8 = (uint *)CONCAT71((int7)uVar4,bVar12);
    local_b8 = (uint *)CONCAT44(0xffffffff,(undefined4)local_b8);
    local_c0 = (uint **)(PTR_DAT_04bc31f8 + 0x10);
    FUN_02587bb0(&local_c0,&local_60);
    puVar11 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  FUN_0170c5d8(puVar11,0,*(undefined4 *)(param_1 + 0x230));
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar13 + 0x278) * 999.99994);
    iVar8 = (int)(*(float *)(lVar13 + 0x27c) * 4.0);
    if (0x7ffe < iVar8) {
      iVar8 = 0x7fff;
    }
    if (iVar8 < -0x7fff) {
      iVar8 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar8;
    fVar15 = *(float *)(lVar13 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar15 * 999.99994);
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar16 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar11 + 0x2ec) = uVar16;
    *(undefined1 *)((long)puVar11 + 0x2e5) = 1;
  }
  return;
}

