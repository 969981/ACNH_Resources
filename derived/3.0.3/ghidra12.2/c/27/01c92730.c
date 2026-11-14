
void FUN_01c92730(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  undefined *local_140;
  ulong *puStack_138;
  ulong local_130 [2];
  undefined1 *local_120;
  undefined1 local_118;
  ulong local_110;
  ulong local_108;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 local_d8;
  undefined6 uStack_d6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 local_8e;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  plVar9 = (long *)*param_2;
  iVar4 = (int)plVar9[1];
  if (iVar4 == 0x65) {
    uStack_ee = 0;
    uStack_e8 = 0;
    uStack_e6 = 0;
    local_e0 = 0;
    uStack_de = 0;
    local_d8 = 0;
    uStack_d6 = 0;
    uStack_fe = 0;
    uStack_f8 = 0;
    uStack_f6 = 0;
    local_f0 = 0;
    local_108 = 0;
    (**(code **)(plVar9[5] + 0x18))(plVar9 + 5);
    local_60[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_50 = local_60;
    uStack_48 = 0x10;
    local_68 = puVar1;
    FUN_0018b070(&local_68,plVar9[6],0xffffffffffffffff);
    uVar3 = nn::pctl::IsFreeCommunicationAvailable();
    uVar2 = *(uint *)(*param_2 + 0x18);
    local_110 = CONCAT62(local_110._2_6_,
                         CONCAT11((char)(uVar2 >> 4),(char)*(undefined8 *)(*param_2 + 0x10))) &
                0xffffffffffff0fff;
    local_110 = CONCAT53(local_110._3_5_,CONCAT12((char)(uVar2 >> 8),(undefined2)local_110)) &
                0xffffffffff0fffff;
    iVar4 = FUN_0018bed0(&local_68,&local_108,0x38);
    if ((-1 < iVar4) && (*(int *)(param_1 + 0x20) != 0)) {
      iVar4 = 0;
      lVar6 = *(long *)(param_1 + 0x28);
      uVar5 = *(ulong *)*param_2;
      puVar7 = (ulong *)0x0;
      do {
        puVar8 = (ulong *)(lVar6 + (long)iVar4 * 0x50);
        if (puVar8[8] == uVar5) {
          uVar5 = *puVar8;
          if ((((byte)uVar5 & 1) != 0) || ((local_110 & 1) == 0 || ((uVar3 ^ 0xffffffff) & 1) != 0))
          {
            puVar8[2] = CONCAT62(uStack_fe,local_100);
            puVar8[3] = CONCAT62(uStack_f6,uStack_f8);
            *puVar8 = local_110;
            puVar8[1] = local_108;
            puVar8[6] = CONCAT62(uStack_de,local_e0);
            puVar8[7] = CONCAT62(uStack_d6,local_d8);
            puVar8[4] = CONCAT62(uStack_ee,local_f0);
            puVar8[5] = CONCAT62(uStack_e6,uStack_e8);
            lVar6 = lVar6 + (long)iVar4 * 0x50;
            *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) | 1;
            *(undefined2 *)(param_1 + 0xf4) = 0x101;
            *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) | 2;
            goto LAB_01c92af4;
          }
          puVar8[2] = CONCAT62(uStack_fe,local_100);
          puVar8[3] = CONCAT62(uStack_f6,uStack_f8);
          *puVar8 = local_110;
          puVar8[1] = local_108;
          puVar8[6] = CONCAT62(uStack_de,local_e0);
          puVar8[7] = CONCAT62(uStack_d6,local_d8);
          puVar8[4] = CONCAT62(uStack_ee,local_f0);
          puVar8[5] = CONCAT62(uStack_e6,uStack_e8);
          lVar6 = lVar6 + (long)iVar4 * 0x50;
          *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) | 1;
          *(undefined2 *)(param_1 + 0xf4) = 0x101;
          *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) | 2;
          if (((byte)uVar5 >> 6 & 1) != 0) goto LAB_01c92a88;
          goto LAB_01c92af4;
        }
        if (puVar8[8] != 0) {
          puVar8 = (ulong *)0x0;
        }
        if (puVar7 != (ulong *)0x0) {
          puVar8 = puVar7;
        }
        iVar4 = iVar4 + 1;
        puVar7 = puVar8;
      } while (*(int *)(param_1 + 0x20) != iVar4);
      if (puVar8 != (ulong *)0x0) {
        puVar8[2] = CONCAT62(uStack_fe,local_100);
        puVar8[3] = CONCAT62(uStack_f6,uStack_f8);
        *puVar8 = local_110;
        puVar8[1] = local_108;
        puVar8[4] = CONCAT62(uStack_ee,local_f0);
        puVar8[7] = CONCAT62(uStack_d6,local_d8);
        puVar8[8] = uVar5;
        puVar8[5] = CONCAT62(uStack_e6,uStack_e8);
        puVar8[6] = CONCAT62(uStack_de,local_e0);
        *(byte *)(puVar8 + 9) = 1;
        *(undefined2 *)(param_1 + 0xf4) = 0x101;
        *(byte *)(puVar8 + 9) = (byte)puVar8[9] | 2;
        if ((((byte)*puVar8 ^ 0xff) & 0x41) == 0) {
LAB_01c92a88:
          local_130[0] = local_108;
          if (DAT_05373f28 != 0) {
            FUN_01d8452c(DAT_05373f28,local_130);
          }
        }
      }
    }
LAB_01c92af4:
    local_68 = puVar1;
  }
  else {
    if (iVar4 != 0x66) {
      if (iVar4 != 0x6f) {
        return;
      }
      if (*(int *)(param_1 + 0x20) == 0) {
        return;
      }
      iVar4 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 0x28) + (long)iVar4 * 0x50 + 0x40) == *plVar9) {
          *(undefined1 *)(param_1 + 0xe0) = 1;
          *(undefined2 *)(param_1 + 0xf4) = 0x101;
          lVar6 = *(long *)(param_1 + 0x28) + (long)iVar4 * 0x50;
          *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) | 6;
          return;
        }
        iVar4 = iVar4 + 1;
      } while (*(int *)(param_1 + 0x20) != iVar4);
      return;
    }
    uVar5 = nn::pctl::IsFreeCommunicationAvailable();
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *param_2;
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_8e = 0xff;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_de = 0;
    local_d8 = 0;
    uStack_d6 = 0;
    local_f0 = 0;
    uStack_ee = 0;
    uStack_e8 = 0;
    uStack_e6 = 0;
    local_80 = 0;
    uStack_78 = 0;
    plVar9 = (long *)(lVar6 + 0x28);
    local_100 = 0;
    uStack_fe = 0;
    uStack_f8 = 0;
    uStack_f6 = 0;
    local_110 = 0;
    local_108 = 0;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    local_60[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_50 = local_60;
    uStack_48 = 0x10;
    local_68 = puVar1;
    FUN_0018b070(&local_68,*(undefined8 *)(lVar6 + 0x30),0xffffffffffffffff);
    local_88 = *(ulong *)(*param_2 + 0x10);
    iVar4 = FUN_0018bed0(&local_68,&local_110,0x82);
    if (-1 < iVar4) {
      local_140 = PTR_DAT_04bb8610 + 0x10;
      local_130[0] = local_88;
      local_130[1] = 0;
      local_118 = 1;
      puStack_138 = &local_110;
      local_120 = (undefined1 *)&local_140;
      FUN_01d8424c(DAT_05373f28,local_130);
    }
    local_68 = puVar1;
  }
  FUN_0018b1a0(&local_68);
  return;
}

