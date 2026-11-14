
uint FUN_01b47588(long param_1,void *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  uint *puVar8;
  undefined **ppuVar9;
  byte bVar10;
  long lVar11;
  undefined8 local_138;
  undefined *local_130;
  undefined8 *puStack_128;
  undefined **local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100 [7];
  undefined8 local_c8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_04bb43c0;
  uVar5 = *(uint *)(param_1 + 0x24);
  if (uVar5 == 0x27) {
    local_80 = 0;
    local_90 = PTR_DAT_04bc0510 + 0x10;
    local_88 = *(uint *)(param_1 + 0x2c);
    uStack_84 = *(undefined4 *)(param_1 + 0x30);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar4 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4((uint *)(param_1 + 0x2c));
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
          local_80 = lVar11;
        }
      }
    }
    uVar6 = FUN_01b032d0(&local_90);
    if (((uVar6 & 1) != 0) &&
       ((uVar6 = FUN_01b032d0(&local_90), (uVar6 & 1) == 0 || ((local_88 & 0x3000000) == 0)))) {
      local_c8._0_4_ = 3;
      uVar6 = FUN_01b032d0(&local_90);
      if ((uVar6 & 1) != 0) {
        local_88 = CONCAT13(local_88._3_1_ & 0xfc | (byte)(uint)local_c8 & 3,(undefined3)local_88);
      }
      local_c8._0_4_ = 0xb;
      uVar6 = FUN_01b032d0(&local_90);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_01b032d0(&local_90);
        if (((uVar6 & 1) != 0) && ((local_88 & 0x3000000) != 0)) goto LAB_01b4787c;
LAB_01b4799c:
        bVar10 = local_88._3_1_ & 0xc3;
LAB_01b479a0:
        local_88 = CONCAT13(bVar10,(undefined3)local_88);
      }
LAB_01b479a4:
      uVar6 = FUN_01b032d0(&local_90);
      if (((((uVar6 & 1) != 0) && (uVar6 = FUN_01b032d0(&local_90), (uVar6 & 1) != 0)) &&
          ((local_88 & 0x3000000) != 0)) && (uVar6 = FUN_01b032d0(&local_90), (uVar6 & 1) != 0)) {
        local_88 = local_88 | 0x40000000;
      }
    }
LAB_01b479e0:
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    local_c8._0_4_ = local_88;
    local_c8._4_4_ = uStack_84;
    local_100[0] = (undefined *)FUN_0272eca4(param_1 + 0xc,1);
    memset(param_2,0,0x374);
    *(undefined2 *)((long)param_2 + 0xc0) = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)((long)param_2 + 200) = 0;
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset((void *)((long)param_2 + 0xce),0,0x2a2);
    *(undefined2 *)((long)param_2 + 0x370) = 0xfffe;
    pppuVar7 = &local_120;
    puVar8 = (uint *)&local_c8;
    local_120 = (undefined **)CONCAT44(local_120._4_4_,uVar1);
    ppuVar9 = local_100;
  }
  else {
    if (uVar5 == 0x26) {
      local_80 = 0;
      local_90 = PTR_DAT_04bc0510 + 0x10;
      local_88 = *(uint *)(param_1 + 0x2c);
      uStack_84 = *(undefined4 *)(param_1 + 0x30);
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar4 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4((uint *)(param_1 + 0x2c));
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
            local_80 = lVar11;
          }
        }
      }
      uVar6 = FUN_01b032d0(&local_90);
      if (((uVar6 & 1) != 0) &&
         ((uVar6 = FUN_01b032d0(&local_90), (uVar6 & 1) == 0 || ((local_88 & 0x3000000) == 0)))) {
        local_c8._0_4_ = 3;
        uVar6 = FUN_01b032d0(&local_90);
        if ((uVar6 & 1) != 0) {
          local_88 = CONCAT13(local_88._3_1_ & 0xfc | (byte)(uint)local_c8 & 3,(undefined3)local_88)
          ;
        }
        local_c8._0_4_ = 0;
        uVar6 = FUN_01b032d0(&local_90);
        if ((uVar6 & 1) != 0) {
          uVar6 = FUN_01b032d0(&local_90);
          if (((uVar6 & 1) == 0) || ((local_88 & 0x3000000) == 0)) goto LAB_01b4799c;
LAB_01b4787c:
          bVar10 = (byte)(((uint)local_c8 & 0xf) << 2) | local_88._3_1_ & 0xc3;
          goto LAB_01b479a0;
        }
        goto LAB_01b479a4;
      }
      goto LAB_01b479e0;
    }
    if (uVar5 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      local_110 = 0x48;
      uStack_108 = 1;
      local_120 = &PTR_LAB_04a380e8;
      if (uVar5 < 0x2a) {
        puStack_128 = (undefined8 *)(&PTR_s_Package_04957b70)[uVar5];
      }
      else {
        puStack_128 = &DAT_0407ebb1;
      }
      uVar2 = *(undefined1 *)(param_1 + 0x28);
      local_130 = PTR_DAT_04bb2020 + 0x10;
      lStack_118 = param_1;
      local_138 = FUN_0272eca4(param_1 + 0xc,1);
      local_54 = uVar1;
      FUN_006d8678(&local_90,"0%02d",uVar2);
      FUN_006d8678(&local_c8,"1%02d",uVar2);
      FUN_006d8678(local_100,"2%02d",uVar2);
      uVar5 = FUN_027b1524(param_2,&local_54,param_3,&local_130,&local_90,&local_c8,local_100,
                           &local_138,param_4,0,&local_120);
      *(undefined2 *)((long)param_2 + 0xc0) = *(undefined2 *)(param_1 + 0x2c);
      *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 0x2e);
      *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 0x2f);
      *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x30);
      cVar3 = *(char *)(param_1 + 0x35);
      goto joined_r0x01b47a60;
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    puVar8 = (uint *)(param_1 + 0x2c);
    local_90 = (undefined *)FUN_0272eca4(param_1 + 0xc,1);
    memset(param_2,0,0x374);
    *(undefined2 *)((long)param_2 + 0xc0) = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)((long)param_2 + 200) = 0;
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    memset((void *)((long)param_2 + 0xce),0,0x2a2);
    pppuVar7 = (undefined ***)&local_c8;
    ppuVar9 = &local_90;
    *(undefined2 *)((long)param_2 + 0x370) = 0xfffe;
    local_c8._0_4_ = uVar5;
  }
  uVar5 = 1;
  FUN_027ae180(param_2,pppuVar7,param_3,puVar8,ppuVar9);
  *(undefined1 *)((long)param_2 + 0xcc) = 0;
  cVar3 = *(char *)(param_1 + 0x35);
joined_r0x01b47a60:
  if (cVar3 != '\0') {
    *(undefined1 *)((long)param_2 + 200) = 1;
  }
  return uVar5 & 1;
}

