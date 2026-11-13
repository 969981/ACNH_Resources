
undefined8 FUN_013614c0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined *local_188;
  undefined *puStack_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [127];
  undefined1 local_ed;
  undefined4 local_e8;
  char local_e4;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  
  puVar7 = PTR_DAT_04bbc1a0;
  puVar6 = PTR_DAT_04bb2010;
  local_78 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  puStack_80 = puStack_90;
  FUN_02a8f7b0(param_2,&local_98);
  puVar9 = PTR_DAT_04bc4580;
  puVar8 = PTR_DAT_04bc4578;
  if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) != 0x1a)) ||
     ((*(byte *)(param_2 + 8) & 1) != 0)) {
    if (local_78._4_4_ + 1U != local_88._4_4_) {
      uVar14 = (uint)local_88;
      do {
        if (((uVar14 < 0x120) && (local_88._4_4_ < 0x100)) &&
           (*(int *)(param_1 + 0x30 + (ulong)uVar14 * 0x400 + (ulong)local_88._4_4_ * 4) != -1)) {
          return 1;
        }
        if ((int)uVar14 < (int)local_78) {
          uVar14 = uVar14 + 1;
        }
        else {
          local_88._4_4_ = local_88._4_4_ + 1;
          uVar14 = (uint)local_88;
        }
      } while (((uint)local_88 != uVar14) || (local_78._4_4_ + 1U != local_88._4_4_));
    }
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb5008;
    uVar14 = (uint)*(ushort *)(param_2 + 0x24);
    if (*(int *)(param_2 + 0xc) != 0x1a) {
      uVar14 = 0;
    }
    uVar14 = uVar14 - *(ushort *)(lVar12 + 0xff0);
    if (uVar14 < *(uint *)(lVar12 + 0xfd0)) {
      puVar13 = *(uint **)(*(long *)(lVar12 + 0xfd8) + (long)(int)uVar14 * 8);
    }
    else {
      puVar13 = (uint *)0x0;
    }
    iVar3 = *(int *)(param_2 + 0x20);
    if (puVar13 == (uint *)0x0) {
      local_68 = *(long *)PTR_PTR_04bc45b8;
    }
    else {
      uVar14 = *puVar13;
      if (uVar14 != 0) {
        cVar15 = *PTR_DAT_04bc4578;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            uVar14 = *puVar13;
          }
          else {
            uVar4 = *(uint *)(puVar9 + 0xc);
            if (-1 < (int)uVar4) {
              lVar12 = (ulong)uVar4 + (long)puVar13;
              goto LAB_013616e8;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar14;
          lVar12 = 0;
          if ((puVar5 == (uint *)0x0) || (lVar12 = 0, puVar13 == puVar5)) goto LAB_013616e8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar5)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar1 = (long)puVar13 + (lVar12 - (long)puVar5);
          lVar12 = 0;
          if (lVar1 == 0) goto LAB_013616e8;
          uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar5));
          *(undefined4 *)(puVar9 + 0xc) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar10 = (int *)(lVar1 + 4);
          while (piVar10[-1] != 0x39b5a93d) {
            piVar10 = piVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_013616e4;
          }
          iVar2 = 0;
          if (*piVar10 != -1) {
            iVar2 = *piVar10;
          }
          *(int *)(puVar9 + 0xc) = iVar2;
          uVar14 = *puVar13;
          if (uVar14 == 0) break;
        } while( true );
      }
LAB_013616e4:
      lVar12 = 0;
LAB_013616e8:
      local_68 = *(long *)PTR_PTR_04bc45b0;
      if (lVar12 != 0) {
        local_68 = lVar12;
      }
    }
    local_ed = 0;
    puStack_c8 = puVar7 + 0x10;
    local_170 = 0x80;
    local_178 = local_16c;
    local_16c[0] = 0;
    local_d0 = 0;
    local_e0 = puVar6 + 0x10;
    puStack_180 = PTR_DAT_04bb2d88 + 0x10;
    local_e8 = 0;
    local_e4 = '\0';
    uStack_d8 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    local_188 = PTR_DAT_04bc49b8 + 0x10;
    local_9c = 0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_5c = 0;
    local_58 = 0;
    local_60 = (undefined4)(long)((float)iVar3 * 90.0 * 11930465.0);
    local_c0 = local_e0;
    local_b0 = local_e0;
    FUN_009893c0(&local_188,&local_70);
    uVar14 = (uint)local_88;
    if (local_e4 == '\0') {
      if (local_78._4_4_ + 1U != local_88._4_4_) {
        do {
          if (((uVar14 < 0x120) && (local_88._4_4_ < 0x100)) &&
             (*(int *)(param_1 + 0x30 + (ulong)uVar14 * 0x400 + (ulong)local_88._4_4_ * 4) != -1)) {
            return 1;
          }
          if ((int)uVar14 < (int)local_78) {
            uVar14 = uVar14 + 1;
          }
          else {
            local_88._4_4_ = local_88._4_4_ + 1;
            uVar14 = (uint)local_88;
          }
        } while (((uint)local_88 != uVar14) || (local_78._4_4_ + 1U != local_88._4_4_));
      }
    }
    else {
      uVar4 = local_78._4_4_ + 1;
      if (uVar4 != local_88._4_4_) {
        uVar16 = local_88._4_4_;
        uVar17 = (uint)local_88;
        do {
          local_68 = CONCAT44(uVar16 - local_88._4_4_,uVar17 - (uint)local_88);
          local_70 = puVar6 + 0x10;
          uVar11 = FUN_0098951c(&local_188,&local_70);
          if ((((uVar11 & 1) == 0) && (uVar17 < 0x120)) &&
             ((uVar16 < 0x100 &&
              (*(int *)(param_1 + 0x30 + (ulong)uVar17 * 0x400 + (ulong)uVar16 * 4) != -1)))) {
            return 1;
          }
          if ((int)uVar17 < (int)local_78) {
            uVar17 = uVar17 + 1;
          }
          else {
            uVar16 = uVar16 + 1;
            uVar17 = (uint)local_88;
          }
        } while ((uVar14 != uVar17) || (uVar4 != uVar16));
      }
    }
  }
  return 0;
}

