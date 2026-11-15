
uint FUN_022f0f4c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_c0 [4];
  undefined *local_b8;
  undefined *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined2 local_90;
  undefined4 local_8e;
  undefined1 local_8a;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  undefined8 local_70;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  iVar7 = FUN_022f1914(param_2);
  if ((iVar7 == -1) && (iVar7 = FUN_022f23cc(param_2,param_3,2), iVar7 != -1)) {
    *(int *)(param_1 + 0xc) = iVar7;
    local_b8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb6298;
    puStack_b0 = PTR_DAT_04bb2010;
    local_5e = 2;
    uVar1 = (undefined1)iVar7;
    *(undefined1 *)(param_1 + 0x11) = 1;
    local_a8 = *(undefined4 *)(param_3 + 0x10);
    uStack_a4 = *(undefined4 *)(param_3 + 0x14);
    local_98 = *(undefined4 *)(param_3 + 0x20);
    uStack_94 = *(undefined4 *)(param_3 + 0x24);
    local_c0[0] = *(undefined2 *)puVar6;
    local_b8 = local_b8 + 0x10;
    puStack_b0 = puStack_b0 + 0x10;
    local_8e = 0;
    sVar2 = (short)local_a8;
    sVar3 = (short)uStack_a4;
    sVar4 = (short)local_98;
    sVar5 = (short)uStack_94;
    local_90 = 0xff00;
    local_8a = 0;
    local_80 = 0;
    local_7c = 0x41200000;
    local_74 = 0xff00;
    local_a0 = puStack_b0;
    local_88 = param_2;
    local_70 = param_2;
    local_68 = sVar2;
    local_66 = sVar3;
    local_64 = sVar4;
    local_62 = sVar5;
    local_60 = local_c0[0];
    local_5d = uVar1;
    uVar8 = FUN_022f2690(param_1,local_c0,&local_70);
    if ((uVar8 & 1) == 0) {
      FUN_022f2890(param_2);
    }
    else if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
      local_58 = 0;
      DAT_054868c0._0_2_ = sVar2;
      if (sVar4 <= sVar2) {
        DAT_054868c0._0_2_ = sVar4;
      }
      DAT_054868c0._4_2_ = sVar2;
      if (sVar2 <= sVar4) {
        DAT_054868c0._4_2_ = sVar4;
      }
      DAT_054868c0._6_2_ = sVar3;
      if (sVar3 <= sVar5) {
        DAT_054868c0._6_2_ = sVar5;
      }
      DAT_054868c0._2_2_ = sVar3;
      if (sVar5 <= sVar3) {
        DAT_054868c0._2_2_ = sVar5;
      }
      DAT_054868c8 = *(undefined2 *)puVar6;
      local_52 = 0;
      DAT_054868ca._1_1_ = 2;
      local_54 = 0xff00;
      DAT_054868b8 = param_2;
      DAT_054868ca._0_1_ = uVar1;
      if (-1 < DAT_05486890) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_05486890,&local_58,&DAT_054868b8,0x18,0
                    );
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8 & 1;
}

