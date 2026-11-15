
uint FUN_022f1550(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  undefined2 local_110 [4];
  undefined *local_108;
  undefined *puStack_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined2 local_e0;
  undefined4 local_de;
  undefined1 local_da;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined8 local_c0;
  short local_b8;
  short local_b6;
  short local_b4;
  short local_b2;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  undefined1 local_6f;
  
  iVar12 = FUN_022f1914(param_3);
  if (iVar12 == -1) {
    iVar4 = *(int *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    iVar12 = iVar4 + 1;
    iVar1 = iVar5 + 1;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    local_a8 = puVar2;
    puStack_a0 = puVar3;
    local_98 = iVar4;
    iStack_94 = iVar5;
    local_90 = puVar3;
    local_88 = iVar12;
    iStack_84 = iVar1;
    uVar13 = FUN_022f23cc(param_3,&local_a8,1);
    if (uVar13 != 0xffffffff) {
      *(uint *)(param_1 + 0xc) = uVar13;
      puVar11 = PTR_DAT_04bb6298;
      *(undefined1 *)(param_1 + 0x11) = 1;
      local_ae = 1;
      uVar6 = (undefined1)uVar13;
      local_110[0] = *(undefined2 *)puVar11;
      sVar7 = (short)iVar4;
      sVar8 = (short)iVar5;
      sVar9 = (short)iVar12;
      sVar10 = (short)iVar1;
      local_e0 = 0xff00;
      local_de = 0;
      local_da = 0;
      local_d0 = 0;
      local_cc = 0x41200000;
      local_c4 = 0xff00;
      local_108 = puVar2;
      puStack_100 = puVar3;
      local_f8 = iVar4;
      iStack_f4 = iVar5;
      local_f0 = puVar3;
      local_e8 = iVar12;
      iStack_e4 = iVar1;
      local_d8 = param_3;
      local_c0 = param_3;
      local_b8 = sVar7;
      local_b6 = sVar8;
      local_b4 = sVar9;
      local_b2 = sVar10;
      local_b0 = local_110[0];
      local_ad = uVar6;
      uVar14 = FUN_022f2690(param_1,local_110,&local_c0);
      if ((uVar14 & 1) == 0) {
        FUN_022f2890(param_3);
      }
      else if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        puVar16 = &DAT_05486940 + (ulong)uVar13 * 0x20;
        if ((*puVar16 & 1) != 0) {
          local_6f = 0;
          local_70 = *PTR_DAT_04bb32e0;
          if (7 < local_70) {
            local_70 = 0xff;
          }
          local_80 = &PTR_LAB_04a7ef60;
          uStack_78 = 0x11;
          uVar15 = FUN_022f228c(&local_80,uVar13);
          if ((uVar15 & 1) != 0) {
            *puVar16 = *puVar16 & 0xfffe;
          }
        }
      }
      else {
        DAT_054868c0._0_2_ = sVar7;
        if (sVar9 <= sVar7) {
          DAT_054868c0._0_2_ = sVar9;
        }
        DAT_054868c0._4_2_ = sVar7;
        if (sVar7 <= sVar9) {
          DAT_054868c0._4_2_ = sVar9;
        }
        DAT_054868c0._6_2_ = sVar8;
        if (sVar8 <= sVar10) {
          DAT_054868c0._6_2_ = sVar10;
        }
        DAT_054868c0._2_2_ = sVar8;
        if (sVar10 <= sVar8) {
          DAT_054868c0._2_2_ = sVar10;
        }
        DAT_054868c8 = *(undefined2 *)puVar11;
        local_80 = (undefined **)((ulong)local_80._7_1_ << 0x38);
        DAT_054868ca._1_1_ = 1;
        local_80 = (undefined **)CONCAT26(local_80._6_2_,0xff0000000000);
        DAT_054868b8 = param_3;
        DAT_054868ca._0_1_ = uVar6;
        if (-1 < DAT_05486890) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_05486890,&local_80,&DAT_054868b8,0x18
                       ,0);
        }
      }
      goto LAB_022f1590;
    }
  }
  uVar14 = 0;
LAB_022f1590:
  return uVar14 & 1;
}

