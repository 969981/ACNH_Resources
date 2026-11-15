
/* WARNING: Removing unreachable block (ram,0x02303cf8) */

uint FUN_02303ae4(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint local_b0 [2];
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined2 local_80;
  uint local_7e;
  undefined1 local_7a;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined1 local_60;
  byte local_5f;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_36;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bbc1a0;
  puVar4 = PTR_DAT_04bb2010;
  if (*(int *)(param_1 + 8) == 0x1c) {
    local_36 = 0;
    local_44 = 0xffffffff;
    local_34 = 0;
    local_40 = 0xffff;
    lVar8 = *(long *)PTR_DAT_04bb39b0;
    pbVar7 = PTR_DAT_04bb32e0;
    if (lVar8 == 0) {
LAB_02303b88:
      if (*pbVar7 < 8) goto LAB_02303bf4;
LAB_02303b94:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02303bec:
        pbVar7 = PTR_DAT_04bb5038;
        goto LAB_02303bf4;
      }
      lVar8 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar8 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar8 + 0x471);
        }
      }
      local_5f = *pbVar7;
      if (7 < local_5f) goto LAB_02303bec;
    }
    else {
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02303b88;
        }
        goto LAB_02303b94;
      }
LAB_02303bf4:
      local_5f = *pbVar7;
      if (7 < local_5f) {
        local_5f = 0xff;
      }
    }
    local_88 = 0;
    local_60 = 8;
    if (7 < local_5f) {
      local_5f = 0xff;
    }
    local_a8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_a0 = PTR_DAT_04bb2010 + 0x10;
    local_98 = 0;
    local_78 = 0xffffffffffffffff;
    local_80 = 0xff00;
    local_6c = 0x41200000;
    local_64 = 0xff00;
    local_7e = 0;
    local_7a = 0;
    local_70 = 0;
    lVar8 = *(long *)PTR_DAT_04bb5008;
    local_b0[0] = (uint)*(ushort *)PTR_DAT_04bb6298;
    if (lVar8 != 0) {
      uVar6 = *(uint *)(lVar8 + 0x2318);
      local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar6);
      plVar2 = (long *)(lVar8 + 0x22e0) + uVar6;
      if (6 < uVar6) {
        plVar2 = (long *)(lVar8 + 0x22e0);
      }
      lVar8 = 0;
      puStack_90 = puStack_a0;
      if ((long *)*plVar2 != (long *)0x0) {
        lVar8 = (**(code **)(*(long *)*plVar2 + 0x38))();
      }
      if ((*(byte *)(lVar8 + 8) >> 1 & 1) == 0) {
        lVar8 = lVar8 + 0x18;
      }
      else {
        lVar8 = lVar8 + 0x350;
      }
      local_d8 = puVar5 + 0x10;
      puStack_d0 = puVar4 + 0x10;
      local_c8 = *(undefined4 *)(lVar8 + 0x10);
      uStack_c4 = *(undefined4 *)(lVar8 + 0x14);
      local_b8 = *(undefined4 *)(lVar8 + 0x20);
      uStack_b4 = *(undefined4 *)(lVar8 + 0x24);
      local_c0 = puStack_d0;
      local_98._0_4_ = local_c8;
      local_98._4_4_ = uStack_c4;
      local_88._0_4_ = local_b8;
      local_88._4_4_ = uStack_b4;
      FUN_0092ec40(&local_a8,&local_d8);
      local_80 = CONCAT11(0x1a,(undefined1)local_80);
      local_64 = CONCAT11(0x1b,(undefined1)local_64);
      *(undefined4 *)(param_1 + 0x30) = (undefined4)local_98;
      *(undefined4 *)(param_1 + 0x34) = local_98._4_4_;
      local_7e = local_7e | 0x1000000;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_88;
      *(undefined4 *)(param_1 + 0x44) = local_88._4_4_;
      uVar6 = FUN_02302e80(param_1,local_b0,&local_60);
      goto LAB_02303d70;
    }
  }
  uVar6 = 0;
LAB_02303d70:
  return uVar6 & 1;
}

