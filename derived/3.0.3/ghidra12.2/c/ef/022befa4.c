
uint FUN_022befa4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  undefined8 *puVar11;
  float fVar12;
  float local_f8 [2];
  undefined *local_f0;
  undefined *puStack_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_90;
  undefined1 local_8e;
  byte local_8d;
  undefined1 local_8b;
  undefined1 local_86;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  local_60 = 0;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar11 + 7);
  local_58 = FUN_017baf44();
  puVar3 = PTR_DAT_04bb2010;
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb6268 + 0x10;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  FUN_01a5033c(auStack_80,&local_68,0,param_2,&local_78);
  iVar7 = FUN_0277d6c4(auStack_80);
  if (iVar7 == 0xea79) {
    bVar10 = *(byte *)(param_1 + 0x10);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_a4 = CONCAT31(local_a4._1_3_,bVar10);
    local_f8[0] = (float)(int)local_70 * 5.0 + 5.0;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(float)local_70._4_4_ * 5.0 + 5.0);
    lVar9 = FUN_0251b3b0(&local_a4,0);
    if ((lVar9 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar12 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,local_f8,0);
      puVar4 = PTR_DAT_04bb37e0;
      uVar8 = 0;
      fVar12 = fVar12 - *(float *)(lVar9 + 4);
      if ((fVar12 <= 5.0) && (-5.0 <= fVar12)) {
        local_84 = 0;
        local_8d = *(byte *)(param_1 + 0x10);
        local_8b = 0;
        local_a4 = 0;
        local_8e = 0x18;
        puStack_e8 = puVar3 + 0x10;
        local_86 = 0;
        if (7 < local_8d) {
          local_8d = 0xff;
        }
        local_a0 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_90 = *(undefined2 *)PTR_DAT_04bb6298;
        local_98 = (undefined2)local_70;
        local_96 = (undefined2)((ulong)local_70 >> 0x20);
        local_c6 = 0;
        local_c2 = 0;
        local_b8 = 0;
        local_f0 = PTR_DAT_04bbc1a0 + 0x10;
        local_f8[0] = (float)CONCAT22(local_f8[0]._2_2_,local_90);
        local_d0 = (int)local_70 + 1;
        local_e0 = (int)local_70;
        iStack_dc = local_70._4_4_;
        local_c8 = 0xff00;
        local_c0 = 0xffffffffffffffff;
        local_b4 = 0x41200000;
        iStack_cc = local_70._4_4_ + 1;
        local_ac = 0xff01;
        local_d8 = puStack_e8;
        uVar8 = FUN_022ab010(param_1,local_f8,&local_a4);
        if ((uVar8 & 1) != 0) {
          uVar5 = (int)local_70;
          uVar6 = local_70._4_4_;
          puVar11 = (undefined8 *)(param_1 + 0x14);
          *puVar11 = 0xfffe;
          FUN_0277d4ac(puVar11);
          *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
          FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
          uVar1 = *(undefined4 *)puVar4;
          uVar2 = *(undefined4 *)(puVar4 + 4);
          *(undefined4 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x2c) = 0;
          *(undefined8 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x48) = uVar5;
          *(undefined4 *)(param_1 + 0x4c) = uVar6;
          *(undefined4 *)puVar11 = uVar1;
          *(undefined4 *)(param_1 + 0x18) = uVar2;
          *(undefined8 *)(param_1 + 0x50) = 0x1800000000;
        }
      }
      goto LAB_022bf240;
    }
  }
  uVar8 = 0;
LAB_022bf240:
  return uVar8 & 1;
}

