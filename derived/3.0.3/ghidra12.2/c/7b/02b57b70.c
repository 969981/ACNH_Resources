
undefined1  [16] FUN_02b57b70(uint param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  short sVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined *local_c8;
  undefined1 local_c0;
  int local_bc;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined *local_a0;
  int local_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  
  puVar6 = PTR_DAT_04bb2010;
  if (param_2 == 0) {
    plVar9 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar9 = plVar1 + param_2;
    if (0x38 < param_2) {
      plVar9 = plVar1;
    }
  }
  puVar3 = &DAT_05636dd8;
  if (*plVar9 != 0) {
    puVar3 = (undefined8 *)(*plVar9 + 0x148);
  }
  if (puVar3[1] != 0) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,param_1);
    local_a0 = PTR_DAT_04bc43f8 + 0x10;
    uVar2 = param_1;
    if (0xf < param_1) {
      uVar2 = 0;
    }
    local_98 = (&DAT_05636e58)[(int)uVar2];
    local_c8 = PTR_DAT_04bc4608 + 0x10;
    local_c0 = PTR_DAT_04bbc570[8];
    local_bc = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_b0 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_b8 = PTR_DAT_04bb2010 + 0x10;
    local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_a4 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (local_98 != 0) {
      local_88 = &local_a0;
      local_90 = &PTR_FUN_04a9b150;
      local_80 = &local_c8;
      if (puVar3[1] != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(puVar3[1] + 0x10))();
        iVar8 = (**(code **)(*plVar9 + 0x18))();
        if (0 < iVar8) {
          iVar14 = 0;
          do {
            FUN_01360490(&local_70,puVar3[1],iVar14);
            uVar10 = (*(code *)*local_90)(&local_90,&local_70);
            if ((uVar10 & 1) != 0) break;
            bVar7 = iVar8 + -1 != iVar14;
            iVar14 = iVar14 + 1;
          } while (bVar7);
        }
      }
    }
    if (local_bc != 0) {
      if (param_1 == 3) {
        return ZEXT816(0xc1f00000);
      }
      puStack_68 = puVar6 + 0x10;
      local_60 = 0;
      local_50 = 0;
      local_70 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = puStack_68;
      FUN_02a8f7b0(&local_c8,&local_70);
      lVar13 = *(long *)PTR_DAT_04bb27c8;
      local_88 = (undefined **)
                 CONCAT44(local_88._4_4_,
                          ((float)local_60._4_4_ * 5.0 + (float)local_50._4_4_ * 5.0 + 5.0) * 0.5);
      local_90 = (undefined **)
                 CONCAT44(local_90._4_4_,
                          ((float)(int)local_60 * 5.0 + (float)(int)local_50 * 5.0 + 5.0) * 0.5);
      if (param_2 == 1) {
        if ((lVar13 == 0) || (lVar11 = *(long *)(lVar13 + 0x90), lVar11 == 0)) goto LAB_02b57e34;
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 == -1) {
          uVar12 = 7;
        }
        else {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar12 = 7;
          if ((*puVar4 & 2) != 0) {
            uVar12 = 5;
          }
        }
        local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
      }
      else {
        if (((lVar13 == 0) || (lVar11 = *(long *)(lVar13 + 0xa8), lVar11 == 0)) ||
           (*(char *)(lVar13 + 0x11c8) != '\0')) {
LAB_02b57e34:
          return ZEXT816(0xc3fa0000);
        }
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 == -1) {
          uVar12 = 7;
        }
        else {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar12 = 7;
          if ((*puVar4 & 2) != 0) {
            uVar12 = 5;
          }
        }
        local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
      }
      local_44[0] = 0;
      auVar15 = FUN_00962700(lVar11,&local_90,&local_70,1,local_44);
      return auVar15;
    }
  }
  return ZEXT816(0);
}

