
void FUN_024bb09c(long param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  uint *local_b8;
  undefined8 local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined4 local_96;
  undefined1 local_92;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined2 local_64;
  undefined1 local_62;
  byte local_61;
  undefined1 local_5f;
  undefined1 local_5a;
  undefined4 local_58;
  undefined8 local_38;
  
  FUN_023164ec(param_1,6);
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  local_d8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_d0 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
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
  FUN_016ff8c0(puVar12,8,&local_d8);
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  FUN_02332d7c(param_1,0);
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  local_78 = 0xfffe;
  uStack_74 = 0;
  lVar3 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar2 * 0x740;
  if (7 < *pbVar2) {
    lVar3 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  lVar1 = lVar3 + 0xb0;
  FUN_0277d4ac(&local_78);
  puVar5 = PTR_DAT_04bb43c0;
  local_78 = (uint)*(undefined8 *)(param_1 + 0x1900);
  uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1900) >> 0x20);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_78);
  lVar14 = *(long *)puVar5;
  if (lVar14 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_b8 = (uint *)0x0;
      local_c8 = PTR_DAT_04bc0510 + 0x10;
      local_c0 = (undefined *)CONCAT44(uStack_74,local_78);
      uVar7 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar5 == 0) {
LAB_024bb2e0:
        uVar7 = 0xbc;
      }
      else {
        lVar13 = *(long *)(lVar14 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_024bb2e0;
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_78);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
           (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar10 == (uint *)0x0)) goto LAB_024bb2e0;
        uVar7 = 0;
        uVar4 = *puVar10;
        local_b8 = puVar10;
        if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
          uVar7 = 0;
          if (*puVar11 != 0) {
            uVar7 = puVar11[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar13 != 0) {
                uVar4 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar7);
                }
                if (*puVar11 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar7 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                   uVar7 < 0xbd)) goto LAB_024bb2e8;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_024bb2e8:
      local_38 = CONCAT44(local_38._4_4_,uVar7);
      if (uVar7 == 0x96) {
        FUN_01b152b8(&local_c8);
        local_78 = (uint)local_c0;
        uStack_74 = local_c0._4_4_;
      }
    }
  }
  uVar9 = FUN_022b1ec4(lVar1,&local_78,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x1900);
  lVar14 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_38);
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) goto LAB_024bb5cc;
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_024bb5cc;
  local_e0 = (uint *)0x0;
  local_e8 = (undefined4)local_38;
  uStack_e4 = local_38._4_4_;
  uVar7 = FUN_0277d6c4(&local_e8);
  if (*(long *)puVar5 == 0) {
LAB_024bb4b0:
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x96);
    local_78 = 0xbc;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_024bb4b0;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(&local_38);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
       (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar10 == (uint *)0x0)) goto LAB_024bb4b0;
    local_78 = 0;
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x96);
    uVar7 = *puVar10;
    local_e0 = puVar10;
    if ((uVar7 != 0) && (puVar10 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
      local_78 = 0;
      if (*puVar11 != 0) {
        uVar7 = puVar11[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar4 = 0;
            if ((ulong)uVar7 != 0) {
              uVar4 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_78 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
               , local_78 < 0xbd)) goto LAB_024bb4bc;
          }
        }
        local_78 = 0;
      }
    }
  }
LAB_024bb4bc:
  if (local_78 == (uint)local_c8) {
    local_61 = *pbVar2;
    uVar7 = (uint)local_61;
    bVar6 = 7 < uVar7;
    if (bVar6) {
      uVar7 = 0xffffffff;
    }
    *(uint *)(lVar3 + 0xbc) = uVar7;
    if (bVar6) {
      local_61 = *(byte *)(lVar3 + 0xc0);
    }
    else {
      *(byte *)(lVar3 + 0xc0) = local_61;
    }
    *(undefined1 *)(lVar3 + 0xc1) = 1;
    puVar5 = PTR_DAT_04bb6298;
    local_62 = 2;
    if (7 < local_61) {
      local_61 = 0xff;
    }
    local_58 = 0;
    local_78 = 0;
    local_64 = *(undefined2 *)PTR_DAT_04bb6298;
    local_5a = 0;
    local_c8 = (undefined *)0x30e2;
    FUN_0277d4ac(&local_c8);
    local_5f = 0;
    local_6c = 0xffffffff;
    uStack_74 = SUB84(local_c8,0);
    uStack_70 = (undefined4)((ulong)local_c8 >> 0x20);
    local_b0 = 0;
    local_96 = 0;
    local_92 = 0;
    local_c0 = PTR_DAT_04bbc1a0 + 0x10;
    local_88 = 0;
    local_b8 = (uint *)(PTR_DAT_04bb2010 + 0x10);
    uStack_a0 = 0;
    local_98 = 0xff00;
    local_7c = 0xff00;
    local_90 = 0xffffffffffffffff;
    local_84 = 0x41200000;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,*(undefined2 *)puVar5);
    local_a8 = local_b8;
    FUN_022b1cb0(lVar1,&local_c8,&local_78);
    FUN_01392d64(lVar1);
    FUN_01393458(lVar1);
  }
LAB_024bb5cc:
  uVar9 = FUN_02546f34(pbVar2,*(undefined4 *)(param_1 + 0x230));
  if ((uVar9 & 1) == 0) {
    local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    local_c8 = (undefined *)CONCAT35(local_c8._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_c8);
  }
  return;
}

