
bool FUN_02c21da0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined8 local_6b4;
  uint local_6ac;
  byte local_6a4 [4];
  byte local_6a0 [32];
  undefined8 local_680;
  undefined8 uStack_678;
  undefined1 *local_670;
  undefined1 auStack_228 [320];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 *local_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  if (param_2 != (long *)0x0) {
    local_6a4[0] = *(byte *)(param_1 + 8);
    if (7 < local_6a4[0]) {
      local_6a4[0] = 0xff;
    }
    lVar3 = FUN_025830c0(DAT_055021a0,local_6a4,1);
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      lVar1 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
      local_6e0 = *(undefined8 *)(lVar1 + 0xc138);
      uStack_6d8 = *(undefined8 *)(lVar1 + 0xc140);
      local_6d0 = *(undefined8 *)(lVar1 + 0xc148);
      local_6c8 = *(undefined4 *)(lVar1 + 0xc150);
      local_6c4 = *(undefined8 *)(lVar1 + 0xc154);
      local_6bc = *(undefined8 *)(lVar1 + 0xc15c);
      local_6b4 = *(undefined8 *)(lVar1 + 0xc164);
      local_6ac = *(uint *)(lVar1 + 0xc16c);
      if (1 < local_6ac) {
        local_6ac = 0;
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      local_6a0[0] = *(byte *)(param_1 + 8);
      if (7 < local_6a0[0]) {
        local_6a0[0] = 0xff;
      }
      uVar5 = FUN_02669430(local_6a0);
      if ((uVar5 & 1) == 0) {
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_01bdde78(local_6a0);
        local_68 = (undefined8 *)&DAT_040aae7f;
      }
      else {
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_01bdde78(local_6a0);
        local_68 = (undefined8 *)&DAT_040715bc;
      }
      local_e0 = 0;
      local_e8 = 0;
      local_670 = auStack_228;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "Board";
      local_680 = 0;
      uStack_678 = 0;
      local_d8 = &local_d0;
      local_60 = local_70;
      FUN_01bddba0(local_6a0,&local_60,&local_70,&local_6e0);
      local_70 = (undefined *)CONCAT44(local_70._4_4_,0x30);
      local_68 = &local_d0;
      (**(code **)(*param_2 + 0x38))(param_2);
      local_48 = 0;
      uStack_40 = 0;
      local_50 = 0;
      local_38 = 1;
      local_34 = 0;
      local_60 = PTR_DAT_04bc0cd8 + 0x10;
      pcStack_58 = (char *)0x0;
      FUN_02906b00(&local_60,param_2,&local_70);
    }
  }
  return param_2 != (long *)0x0;
}

