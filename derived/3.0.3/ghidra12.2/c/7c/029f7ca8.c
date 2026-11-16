
void FUN_029f7ca8(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined2 local_150;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_68;
  int local_64;
  
  local_150 = 0;
  local_138 = 0xbf800000;
  uStack_130 = 0;
  cVar4 = *(char *)(param_2 + 1);
  local_128 = 0xffffffffffffffff;
  uStack_120 = 0xffffffff00000000;
  local_118 = 0xffffffff00000000;
  uStack_110 = 0xffffffffffffffff;
  uStack_14c = 0xffffffff;
  uStack_148 = 0xffffffff;
  local_144 = 0xffffffff;
  uStack_140 = 0xffffffff;
  local_13c = 0xffffffff;
  local_e8 = 0;
  local_e4 = 0xffffffffffffffff;
  local_dc = 0xffffffffffffffff;
  local_d4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_f8 = 0xffffffff00000000;
  uStack_f0 = 0xffffffff00000000;
  local_108 = 0;
  uStack_100 = 0xffffffff;
  local_d0 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffbf800000;
  local_80 = 0xffffffff;
  FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_150,(long)param_2 + 0xc);
  iVar5 = uStack_130._4_4_;
  iVar6 = (int)local_128;
  uVar7 = local_128._4_4_;
  iVar14 = local_118._4_4_;
  iVar8 = (int)local_108;
  iVar9 = uStack_100._4_4_;
  iVar3 = *(int *)((long)param_1 + 0x14);
  if (iVar3 == 0) {
    if (cVar4 == '\0') goto LAB_029f8290;
    *(undefined4 *)((long)param_1 + 0x14) = 1;
  }
  else {
    if ((cVar4 == '\0') && (iVar3 == 1)) {
      lVar12 = *param_1;
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x20) == (int)param_1[1])) {
        *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x10;
        if ((*(long *)(lVar12 + 0x28) != 0) && (*(long *)(lVar12 + 0x58) != 0)) {
          plVar10 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar12 + 0x28) + 0x30) +
                                                    0x18) + 0x20))();
          plVar10 = (long *)(**(code **)(*plVar10 + 0x38))();
          (**(code **)(*plVar10 + 0x10))();
          (**(code **)(**(long **)(lVar12 + 0x58) + 0x38))(*(long **)(lVar12 + 0x58),0xffffffff);
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      goto LAB_029f8290;
    }
    if (iVar3 != 1) goto LAB_029f8290;
  }
  if (6 < uStack_130._4_4_ - 2U) {
    if (uStack_130._4_4_ != 10) {
      lVar12 = *param_1;
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x20) == (int)param_1[1])) {
        FUN_03be6fe8(lVar12,0xffffffff);
      }
      goto LAB_029f8290;
    }
    iVar14 = 0x7fffffff;
    if ((*(int *)((long)param_1 + 0x1c) == 10) && (*(int *)((long)param_1 + 0x24) == (int)local_128)
       ) {
      iVar14 = local_118._4_4_;
      if ((int)param_1[5] < local_118._4_4_) goto LAB_029f7f14;
    }
    else {
LAB_029f7f14:
      uVar13 = *param_2;
      local_150 = 0x40;
      uStack_14e = 0;
      uVar11 = FUN_029f8b44(param_1,&local_150,local_128 & 0xffffffff,0x40,0x54);
      if ((uVar11 & 1) != 0) {
        FUN_029f8e28(param_1,CONCAT22(uStack_14e,local_150),uVar13,uVar7);
      }
    }
    uVar2 = 0;
    if (iVar9 != 0) {
      uVar2 = (int)param_1[4] + 0x28f5c2c0;
    }
    *(uint *)(param_1 + 4) = uVar2;
    fVar16 = powf(10.0,((float)iVar8 / 682.6667 +
                        ((*(float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10) +
                         *(float *)((long)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10) + 4) *
                         (float)(uVar2 & 0xffffff) * 5.9604645e-08) * (float)iVar9) / 127.0 +
                       (float)*(int *)((long)param_1 + 0x2c)) * 0.025086);
    lVar12 = *param_1;
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x20) == (int)param_1[1])) {
      fVar15 = 0.0;
      if (0.0 <= fVar16) {
        fVar15 = fVar16;
      }
      *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 4;
      *(float *)(lVar12 + 0xa4) = fVar15;
      *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 4;
    }
    goto LAB_029f8290;
  }
  iVar14 = 0x7fffffff;
  if ((*(int *)((long)param_1 + 0x1c) == uStack_130._4_4_) &&
     (*(int *)((long)param_1 + 0x24) == (int)local_128)) {
    iVar14 = local_118._4_4_;
    if ((int)param_1[5] < local_118._4_4_) goto LAB_029f7e78;
  }
  else {
LAB_029f7e78:
    local_64 = uStack_130._4_4_;
    uVar13 = *param_2;
    switch(uStack_130._4_4_) {
    case 2:
      local_68 = 0x38;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x38,0x48);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40947d9;
LAB_029f8184:
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_150 = SUB82(puVar1,0);
        uStack_14e = (undefined2)((ulong)puVar1 >> 0x10);
        uStack_14c = (undefined4)((ulong)puVar1 >> 0x20);
        local_144 = 0;
        FUN_029f8c30(param_1,&local_150,local_68,uVar13,uVar7);
      }
      break;
    case 3:
      local_68 = 0x38;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x38,0x48);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40f0692;
        goto LAB_029f8184;
      }
      break;
    case 4:
      local_68 = 0x38;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x38,0x48);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40cb50f;
        goto LAB_029f8184;
      }
      break;
    case 5:
      local_68 = 0x38;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x38,0x48);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40ac806;
        goto LAB_029f8184;
      }
      break;
    case 6:
      local_68 = 0x38;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x38,0x48);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40b6eff;
        goto LAB_029f8184;
      }
      break;
    case 7:
      local_68 = 0x34;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x34,0x40);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40c1415;
        goto LAB_029f8184;
      }
      break;
    case 8:
      local_68 = 0x34;
      uVar11 = FUN_029f8b44(param_1,&local_68,local_128 & 0xffffffff,0x34,0x40);
      if ((uVar11 & 1) != 0) {
        uStack_148 = 0x40f5da1;
        goto LAB_029f8184;
      }
    }
  }
  uVar2 = 0;
  if (iVar9 != 0) {
    uVar2 = (int)param_1[4] + 0x28f5c2c0;
  }
  *(uint *)(param_1 + 4) = uVar2;
  fVar16 = powf(10.0,((float)iVar8 / 682.6667 +
                      ((*(float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10) +
                       *(float *)((long)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10) + 4) *
                       (float)(uVar2 & 0xffffff) * 5.9604645e-08) * (float)iVar9) / 127.0 +
                     (float)*(int *)((long)param_1 + 0x2c)) * 0.025086);
  lVar12 = *param_1;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x20) == (int)param_1[1])) {
    fVar15 = 0.0;
    if (0.0 <= fVar16) {
      fVar15 = fVar16;
    }
    *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 4;
    *(float *)(lVar12 + 0xa4) = fVar15;
    *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 4;
  }
LAB_029f8290:
  *(int *)((long)param_1 + 0x24) = iVar6;
  *(int *)(param_1 + 5) = iVar14;
  *(int *)((long)param_1 + 0x1c) = iVar5;
  return;
}

