
undefined8 FUN_011e6080(long param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *local_138;
  char local_130;
  char local_12f;
  undefined *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  int iStack_104;
  undefined4 local_100;
  int local_fc;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  int local_34;
  
  local_34 = DAT_050dfb2c;
  if (param_4 == 2) {
    local_34 = DAT_050dfb30;
  }
  if (local_34 == 0) {
    local_118._0_4_ = 0;
    local_118._4_4_ = 0x3f800000;
    local_110._0_4_ = 0;
    local_128 = (undefined *)0xffffffff00000000;
    local_120 = (undefined *)0x0;
    local_f0 = local_e4;
    local_e8 = 0x80;
    local_65 = 0;
    local_e4[0] = 0;
    local_f8 = PTR_DAT_04bb2d88 + 0x10;
    local_58 = 0;
    local_5c = 0;
    local_110._4_4_ = 0;
    local_108 = 0;
    iStack_104 = 0;
    local_100 = 0;
    local_60 = 7;
    if (DAT_050dfb2c == 0) {
      local_128 = (undefined *)0x6800000000;
      DAT_050dfb2c = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_128,
                                  *(undefined4 *)(param_1 + 0x230),0);
    }
    if (DAT_050dfb30 == 0) {
      local_110._4_4_ = 1;
      DAT_050dfb30 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_128,
                                  *(undefined4 *)(param_1 + 0x230),0);
    }
    return 0;
  }
  if (((DAT_050dfb34 >> 5 & 1) != 0) && (0 < (int)DAT_05146e1c)) {
    uVar8 = 0;
    puVar9 = &DAT_050df3f0;
    do {
      puVar2 = puVar9;
      if (99 < uVar8) {
        puVar2 = &DAT_050df3f0;
      }
      if (*(int *)(puVar2 + 1) == *(int *)(param_2 + 5) &&
          *(int *)((long)puVar2 + 0xc) == *(int *)((long)param_2 + 0x2c)) {
        *(undefined1 *)((long)param_2 + 0x51) = 1;
        break;
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 2;
    } while (DAT_05146e1c != uVar8);
  }
  local_128 = (undefined *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_138,&local_34,&local_128,0);
  plVar5 = local_138;
  if (local_138 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bbbb48);
    if ((uVar8 & 1) == 0) {
      local_12f = '\0';
    }
  }
  if (local_138 == (long *)0x0) {
    return 0;
  }
  if (local_130 == '\0') {
    return 0;
  }
  if (local_12f == '\0') {
    return 0;
  }
  iVar6 = FUN_011c74a0(local_138,param_2,param_3);
  puVar4 = PTR_DAT_04bb2010;
  if (iVar6 == -1) {
    return 0;
  }
  if (*(int *)(param_2 + 8) == 0x19) {
    local_108 = 0;
    iStack_104 = 0;
    lVar1 = (long)param_2 + 0x14;
    local_120 = PTR_DAT_04bb2010 + 0x10;
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    local_128 = PTR_DAT_04bbc1a0 + 0x10;
    local_110 = local_120;
    FUN_0277f02c(lVar1,&local_128);
    local_118._0_4_ = (int)local_118 + *(int *)(param_2 + 5);
    local_118._4_4_ = local_118._4_4_ + *(int *)((long)param_2 + 0x2c);
    local_108 = local_108 + *(int *)(param_2 + 5);
    iStack_104 = iStack_104 + *(int *)((long)param_2 + 0x2c);
    FUN_011ed7e0(param_1 + 0x1e368,&local_128,1);
    lVar10 = *(long *)PTR_DAT_04bbbc68;
    if ((((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar10 + 0x488) != 0 && (*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar10 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)))))) {
      uVar7 = FUN_0277d6c4(lVar1);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        FUN_0124c030(&local_128,lVar1);
        uVar8 = FUN_0123d890(CONCAT44(local_118._4_4_,(int)local_118),4);
        if ((uVar8 & 1) != 0) {
          uVar7 = *(uint *)(param_2 + 5);
          if ((((uVar7 < 0x120) && (*(uint *)((long)param_2 + 0x2c) < 0x100)) &&
              (uVar3 = uVar7 + *(uint *)((long)param_2 + 0x2c) * 0x120, uVar3 != 0xffffffff)) &&
             (uVar3 >> 0xd < 9)) {
            lVar10 = param_1 + (ulong)(uVar3 >> 5) * 4;
            *(uint *)(lVar10 + 0x22b68) = *(uint *)(lVar10 + 0x22b68) | 1 << (ulong)(uVar7 & 0x1f);
          }
          uVar7 = FUN_011e76a4(param_1,lVar1,param_2 + 4);
          uVar7 = uVar7 ^ 1;
          goto LAB_011e63f8;
        }
      }
    }
  }
  uVar7 = 0;
LAB_011e63f8:
  local_128 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_128);
  local_118 = puVar4 + 0x10;
  local_e8 = *(undefined4 *)((long)param_2 + 0x44);
  local_128 = *(undefined **)((long)param_2 + 0x14);
  local_100 = *(undefined4 *)(param_2 + 1);
  local_110._0_4_ = *(undefined4 *)(param_2 + 5);
  local_110._4_4_ = *(undefined4 *)((long)param_2 + 0x2c);
  local_108 = (int)*param_2;
  iStack_104 = (int)((ulong)*param_2 >> 0x20);
  local_f0 = *(undefined1 **)((long)param_2 + 0x3c);
  local_f8._0_5_ = CONCAT14(*(undefined1 *)(param_2 + 9),*(undefined4 *)(param_2 + 7));
  local_e4[0] = *(undefined1 *)((long)param_2 + 0x4f);
  local_120 = (undefined *)CONCAT44(local_120._4_4_,local_34);
  uVar3 = *(uint *)(param_1 + 0x24f78);
  local_fc = iVar6;
  FUN_011e72b8(param_1,&local_128);
  if ((uVar7 & 1) != 0) {
    lVar1 = param_1 + 0x278;
    if (uVar3 < 1000) {
      lVar1 = param_1 + 0x278 + (ulong)uVar3 * 0x78;
    }
    *(ushort *)(lVar1 + 0x68) = *(ushort *)(lVar1 + 0x68) | 2;
  }
  return 1;
}

