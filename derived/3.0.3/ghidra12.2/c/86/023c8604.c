
void FUN_023c8604(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  long local_c8;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  
  local_5d = 0;
  local_a0 = 0x40;
  local_9c[0] = 0;
  puStack_a8 = local_9c;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  uVar9 = FUN_02537880(&local_b0);
  if (((uVar9 & 1) != 0) && (local_b4 = FUN_0170aef0(&local_b0,PTR_PTR_04bb2238), local_b4 != 0)) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    puVar6 = PTR_DAT_04bb43c0;
    lVar11 = puVar10[0x290] + ((ulong)*(uint *)(puVar10[0x290] + 0x10) & 1) * 0x20;
    uVar5 = *(undefined2 *)(lVar11 + 0x14);
    uVar3 = *(undefined1 *)(lVar11 + 0x16);
    uVar4 = *(undefined1 *)(lVar11 + 0x17);
    uVar2 = *(undefined4 *)(lVar11 + 0x18);
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    local_bc = uVar5;
    local_ba = uVar3;
    local_b9 = uVar4;
    local_b8 = uVar2;
    uVar7 = FUN_0277d6c4(&local_bc);
    lVar11 = *(long *)puVar6;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (lVar12 = *(long *)(param_1 + 0x298), lVar12 != 0)) {
        local_d8 = PTR_DAT_04bc0510 + 0x10;
        local_c8 = 0;
        local_d0 = uVar5;
        local_ce = uVar3;
        local_cd = uVar4;
        local_cc = uVar2;
        uVar7 = FUN_0277d6c4(&local_d0);
        if (*(long *)puVar6 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_bc);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
               (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0))
            {
              local_c8 = lVar11;
            }
          }
        }
        iVar8 = FUN_01ad78cc(&local_d8);
        puVar1 = (uint *)(lVar12 + 0xc1f4);
        if (local_b4 == iVar8) {
          uVar7 = *puVar1 | 0x400;
        }
        else {
          uVar7 = *puVar1 & 0xfffffbff;
        }
        *puVar1 = uVar7;
        if (local_b4 == iVar8) {
          uVar7 = *puVar1 | 0x800;
        }
        else {
          uVar7 = *puVar1 & 0xfffff7ff;
        }
        *puVar1 = uVar7;
      }
    }
  }
  return;
}

