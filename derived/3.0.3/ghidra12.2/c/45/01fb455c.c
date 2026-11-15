
void FUN_01fb455c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar14 = DAT_05abbc58;
  if (DAT_05abbc58 != 0) {
    local_78 = 0xfffe;
    FUN_0277d4ac(&local_78);
    local_70 = 0xfffe;
    FUN_0277d4ac(&local_70);
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    local_50 = 0xfffe;
    FUN_0277d4ac(&local_50);
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    local_78 = *param_2;
    local_70 = param_2[1];
    local_68 = param_2[2];
    local_60 = param_2[3];
    local_58 = param_2[4];
    lVar16 = *(long *)(param_1 + 8);
    local_50 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_48 = *(undefined8 *)PTR_DAT_04bb37e0;
    uVar13 = FUN_03722560(lVar14,lVar16 + 0x3e0);
    if (uVar13 != 0xffffffff) {
      if (uVar13 < *(uint *)(lVar14 + 0xe0)) {
        lVar14 = *(long *)(*(long *)(lVar14 + 0xe8) + (long)(int)uVar13 * 8);
      }
      else {
        lVar14 = 0;
      }
      *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(lVar16 + 0x230);
      uVar5 = *(undefined1 *)(lVar14 + 0x92);
      uVar6 = *(undefined1 *)(lVar14 + 0x93);
      uVar1 = *(undefined4 *)(lVar14 + 0x94);
      uVar11 = *(undefined2 *)(lVar14 + 0x88);
      uVar7 = *(undefined1 *)(lVar14 + 0x8a);
      uVar8 = *(undefined1 *)(lVar14 + 0x8b);
      uVar2 = *(undefined4 *)(lVar14 + 0x8c);
      uVar12 = *(undefined2 *)(lVar14 + 0xa0);
      uVar9 = *(undefined1 *)(lVar14 + 0xa2);
      uVar10 = *(undefined1 *)(lVar14 + 0xa3);
      uVar3 = *(undefined4 *)(lVar14 + 0xa4);
      if (*(int *)(lVar14 + 0x3c) == 1) {
        local_70._0_2_ = *(undefined2 *)(lVar14 + 0xa8);
        puVar15 = (undefined4 *)(lVar14 + 0xbc);
        local_70._2_1_ = *(undefined1 *)(lVar14 + 0xaa);
        local_70._3_1_ = *(undefined1 *)(lVar14 + 0xab);
        local_70._4_4_ = *(undefined4 *)(lVar14 + 0xac);
        local_58._0_2_ = *(undefined2 *)(lVar14 + 0xb8);
        local_58._2_1_ = *(undefined1 *)(lVar14 + 0xba);
        local_58._3_1_ = *(undefined1 *)(lVar14 + 0xbb);
      }
      else {
        puVar15 = (undefined4 *)((long)&local_58 + 4);
      }
      uVar4 = *puVar15;
      *(undefined2 *)(param_2 + 3) = *(undefined2 *)(lVar14 + 0x90);
      *(undefined1 *)((long)param_2 + 0x1a) = uVar5;
      *(undefined2 *)param_2 = uVar12;
      *(undefined1 *)((long)param_2 + 2) = uVar9;
      *(undefined1 *)((long)param_2 + 3) = uVar10;
      *(undefined4 *)((long)param_2 + 4) = uVar3;
      *(undefined2 *)(param_2 + 1) = (undefined2)local_70;
      *(undefined1 *)((long)param_2 + 10) = local_70._2_1_;
      *(undefined1 *)((long)param_2 + 0xb) = local_70._3_1_;
      *(undefined4 *)((long)param_2 + 0xc) = local_70._4_4_;
      param_2[5] = local_50;
      *(undefined2 *)(param_2 + 2) = uVar11;
      *(undefined1 *)((long)param_2 + 0x12) = uVar7;
      *(undefined1 *)((long)param_2 + 0x13) = uVar8;
      *(undefined4 *)((long)param_2 + 0x14) = uVar2;
      *(undefined1 *)((long)param_2 + 0x1b) = uVar6;
      *(undefined4 *)((long)param_2 + 0x1c) = uVar1;
      *(undefined2 *)(param_2 + 4) = (undefined2)local_58;
      *(undefined1 *)((long)param_2 + 0x22) = local_58._2_1_;
      *(undefined1 *)((long)param_2 + 0x23) = local_58._3_1_;
      *(undefined4 *)((long)param_2 + 0x24) = uVar4;
      *(undefined4 *)(param_2 + 6) = (undefined4)local_48;
      *(undefined4 *)((long)param_2 + 0x34) = local_48._4_4_;
    }
  }
  return;
}

