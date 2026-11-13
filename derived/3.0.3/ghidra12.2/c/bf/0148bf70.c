
int FUN_0148bf70(long param_1,undefined8 *param_2,undefined8 param_3,int *param_4,long param_5,
                long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  int local_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined *puStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 local_cc;
  byte local_cb;
  undefined1 local_ca;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  byte local_93;
  undefined1 local_92;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_78;
  
  FUN_01afbaa4(&local_90,param_3,param_4);
  puVar5 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  iVar10 = *(int *)(param_5 + 8);
  iVar12 = *(int *)(param_5 + 0xc);
  local_b8 = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = (undefined *)0x0;
  local_c0 = puVar1;
  local_b0 = puVar1;
  FUN_01afb7fc(param_6,&local_c8,*param_4);
  local_a0 = 0;
  local_98 = 0;
  local_92 = 0;
  local_94 = 0;
  local_c8 = (undefined *)CONCAT44(uStack_8c,local_90);
  local_b0 = (undefined *)CONCAT44(*(undefined4 *)(param_7 + 0x18),*param_4);
  bVar4 = *PTR_DAT_04bb32e0;
  fVar11 = ((float)iVar10 * 5.0 + 2.5) -
           ((float)(((int)local_a8 - (int)local_b8) + 1) * 0.5 * 5.0 + -2.5);
  fVar13 = ((float)iVar12 * 5.0 + 2.5) -
           ((float)((local_a8._4_4_ - local_b8._4_4_) + 1) * 0.5 * 5.0 + -2.5);
  local_b8 = CONCAT44((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
                      (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0));
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
joined_r0x0148c124:
    if (7 < bVar4) {
LAB_0148c128:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_93 = *pbVar7;
        if (local_93 < 8) goto LAB_0148c198;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar4 = *pbVar7;
        goto joined_r0x0148c124;
      }
      goto LAB_0148c128;
    }
  }
  local_93 = *pbVar7;
  if (7 < local_93) {
    local_93 = 0xff;
  }
LAB_0148c198:
  if (7 < local_93) {
    local_93 = 0xff;
  }
  local_c0 = puVar1;
  local_a8 = puVar1;
  local_78 = FUN_0148e51c(param_2,&local_c8);
  if ((local_78 != 9) &&
     ((((local_100 = FUN_01ae7550(param_6), (local_100 - 5U & 0xfffffffd) == 0 &&
        (*(char *)(param_7 + 0x1c) == '\0')) ||
       (iVar10 = FUN_0277d6c4(param_6 + 8), iVar10 == 0x2b56)) && (*(int *)(param_7 + 0x18) == 0))))
  {
    local_f8 = puVar2 + 0x10;
    local_100 = (int)local_c8;
    uStack_fc = local_c8._4_4_;
    local_f0 = (int)local_b8;
    uStack_ec = local_b8._4_4_;
    local_cc = local_94;
    local_d4 = local_a0._4_4_;
    uStack_d0 = local_98;
    local_d8 = (undefined4)local_a0;
    local_cb = local_93;
    if (7 < local_93) {
      local_cb = 0xff;
    }
    local_ca = local_92;
    _local_e8 = CONCAT44(1,(int)local_b0);
    puStack_e0 = local_f8;
    if (((*(int *)(param_1 + 8) == *(int *)(param_5 + 8)) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_5 + 0xc))) &&
       ((*(char *)(param_1 + 0x10) != '\0' && (uVar6 = FUN_01ae59b0(param_6), (uVar6 & 1) != 0)))) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        local_ca = true;
      }
      else {
        local_ca = *param_4 == *(int *)(*(long *)(param_1 + 0x18) + 0x14);
      }
    }
    local_78 = FUN_0148e51c(param_2,&local_100);
    if (local_78 == 9) {
      local_128 = puVar5 + 0x10;
      puVar2 = puVar2 + 0x10;
      local_118 = 0;
      local_108 = 0;
      local_148 = PTR_DAT_04bbd460 + 0x10;
      local_140 = 0xfffe;
      puStack_120 = puVar2;
      local_110 = puVar2;
      FUN_0277d4ac(&local_140);
      local_140 = *param_2;
      local_130 = *(undefined4 *)(param_2 + 2);
      uStack_12c = *(undefined4 *)((long)param_2 + 0x14);
      local_138 = puVar2;
      FUN_0154f6c8(&local_148,&local_128,*(int *)((long)param_2 + 0x24) - 2U < 4);
      if (local_108._4_4_ + 1U != local_118._4_4_) {
        uVar9 = (uint)local_118;
        do {
          if (((local_118._4_4_ < 0x100) && (uVar9 < 0x120)) &&
             ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar9 + local_118._4_4_ * 0x120 >> 5) * 4 + 8)
               >> (ulong)(uVar9 & 0x1f) & 1) != 0)) {
            return 1;
          }
          if ((int)uVar9 < (int)local_108) {
            uVar9 = uVar9 + 1;
          }
          else {
            local_118._4_4_ = local_118._4_4_ + 1;
            uVar9 = (uint)local_118;
          }
        } while (((uint)local_118 != uVar9) || (local_108._4_4_ + 1U != local_118._4_4_));
      }
    }
  }
  return local_78;
}

