
void FUN_02004690(int *param_1,undefined8 *param_2,int *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  
  puVar6 = PTR_DAT_04bc1558;
  puVar1 = PTR_DAT_04bbc1a0;
  puVar5 = PTR_DAT_04bb2010;
  if (*param_3 != 0) {
    plVar8 = *(long **)(param_3 + 2);
    lVar10 = (long)*param_3 << 3;
    do {
      lVar11 = *plVar8;
      if (*(int *)(lVar11 + 0xc) == *param_1) {
        fVar13 = *(float *)(lVar11 + 0x60);
        bVar7 = false;
        if ((0.0 <= fVar13) && (bVar7 = false, !NAN(*(float *)(param_2 + 9)) && !NAN(fVar13))) {
          bVar7 = *(float *)(param_2 + 9) < fVar13;
        }
        if (!bVar7) {
          return;
        }
        goto LAB_020046f4;
      }
      plVar8 = plVar8 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  lVar11 = 0;
LAB_020046f4:
  local_b0 = 0;
  local_a8 = 0;
  local_6c = 0;
  local_c0 = PTR_DAT_04bc1558 + 0x10;
  local_b8 = 0;
  local_a0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_98 = PTR_DAT_04bb2010 + 0x10;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_74 = 0xffffffff;
  local_70 = 0xffffffff;
  local_68 = 0xfffe;
  puStack_88 = puStack_98;
  FUN_0277d4ac(&local_68);
  local_58 = local_58 & 0xffffff00;
  local_54 = 0;
  local_60 = 0x3bf800000;
  FUN_01e26d20(&local_c0,param_1);
  lVar10 = *(long *)((long)param_2 + 0x3c);
  local_78 = (undefined4)lVar10;
  uStack_74 = (undefined4)((ulong)lVar10 >> 0x20);
  uVar2 = *(undefined4 *)((long)param_2 + 0x44);
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    local_68 = *(undefined8 *)*param_2;
  }
  uVar12 = *(undefined4 *)(param_2 + 9);
  local_60 = CONCAT44(local_60._4_4_,uVar12);
  uVar4 = *(undefined1 *)((long)param_2 + 0x4c);
  fVar14 = *(float *)(param_2 + 6);
  fVar13 = *(float *)((long)param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 7);
  iVar3 = *(int *)(param_2 + 3);
  if (((fVar14 == 0.0) && (fVar13 == 0.0)) && (fVar15 == 0.0)) {
    iVar9 = *(int *)((long)param_2 + 0x1c);
    if ((iVar3 != *(int *)(PTR_DAT_04bb5d40 + 8)) || (iVar9 != *(int *)(PTR_DAT_04bb5d40 + 0xc))) {
      if ((*(int *)(param_2 + 5) != *(int *)(PTR_DAT_04bb5d40 + 8)) ||
         (*(int *)((long)param_2 + 0x2c) != *(int *)(PTR_DAT_04bb5d40 + 0xc))) {
        fVar14 = ((float)iVar3 * 5.0 + (float)*(int *)(param_2 + 5) * 5.0 + 5.0) * 0.5;
        fVar15 = ((float)iVar9 * 5.0 + (float)*(int *)((long)param_2 + 0x2c) * 5.0 + 5.0) * 0.5;
      }
    }
  }
  else {
    iVar9 = *(int *)((long)param_2 + 0x1c);
  }
  local_b0 = CONCAT44(fVar14,(undefined4)local_b0);
  local_a8 = CONCAT44(fVar15,fVar13);
  local_80._0_4_ = (undefined4)param_2[5];
  local_80._4_4_ = (undefined4)((ulong)param_2[5] >> 0x20);
  if (lVar11 == 0) {
    if (*param_3 < param_3[1]) {
      plVar8 = *(long **)(param_3 + 4);
      if (plVar8 != (long *)0x0) {
        *(long *)(param_3 + 4) = *plVar8;
      }
      *plVar8 = (long)(puVar6 + 0x10);
      plVar8[1] = local_b8;
      plVar8[2] = local_b0;
      plVar8[3] = local_a8;
      plVar8[4] = (long)(puVar1 + 0x10);
      puVar1 = PTR_DAT_04bb2e18 + 0x10;
      plVar8[5] = (long)puVar1;
      plVar8[7] = (long)puVar1;
      *(int *)(plVar8 + 6) = iVar3;
      *(int *)((long)plVar8 + 0x34) = iVar9;
      plVar8[5] = (long)(puVar5 + 0x10);
      *(undefined4 *)(plVar8 + 8) = (undefined4)local_80;
      plVar8[7] = (long)(puVar5 + 0x10);
      *(undefined4 *)((long)plVar8 + 0x44) = local_80._4_4_;
      uStack_74._1_3_ = (undefined3)((ulong)lVar10 >> 0x28);
      *(ulong *)((long)plVar8 + 0x4d) = CONCAT17(uVar4,CONCAT43(uVar2,uStack_74._1_3_));
      plVar8[9] = lVar10;
      *(undefined2 *)(plVar8 + 0xb) = (undefined2)local_68;
      *(undefined1 *)((long)plVar8 + 0x5a) = local_68._2_1_;
      *(undefined1 *)((long)plVar8 + 0x5b) = local_68._3_1_;
      *(undefined4 *)((long)plVar8 + 0x5c) = local_68._4_4_;
      plVar8[0xc] = local_60;
      plVar8[0xd] = CONCAT44(local_54,local_58);
      if (*param_3 < param_3[1]) {
        *(long **)(*(long *)(param_3 + 2) + (long)*param_3 * 8) = plVar8;
        *param_3 = *param_3 + 1;
      }
    }
  }
  else {
    *(undefined4 *)(lVar11 + 8) = (undefined4)local_b8;
    *(undefined4 *)(lVar11 + 0xc) = local_b8._4_4_;
    *(undefined4 *)(lVar11 + 0x10) = (undefined4)local_b0;
    *(float *)(lVar11 + 0x14) = fVar14;
    *(float *)(lVar11 + 0x18) = fVar13;
    *(float *)(lVar11 + 0x1c) = fVar15;
    *(int *)(lVar11 + 0x30) = iVar3;
    *(int *)(lVar11 + 0x34) = iVar9;
    *(undefined4 *)(lVar11 + 0x40) = (undefined4)local_80;
    *(undefined4 *)(lVar11 + 0x44) = local_80._4_4_;
    *(undefined4 *)(lVar11 + 0x48) = local_78;
    *(undefined1 *)(lVar11 + 0x54) = uVar4;
    *(ulong *)(lVar11 + 0x4c) = CONCAT44(uVar2,uStack_74);
    *(undefined2 *)(lVar11 + 0x58) = (undefined2)local_68;
    *(undefined1 *)(lVar11 + 0x5a) = local_68._2_1_;
    *(undefined1 *)(lVar11 + 0x5b) = local_68._3_1_;
    *(undefined4 *)(lVar11 + 0x5c) = local_68._4_4_;
    *(undefined4 *)(lVar11 + 0x60) = uVar12;
    *(undefined4 *)(lVar11 + 100) = local_60._4_4_;
    *(undefined1 *)(lVar11 + 0x68) = (undefined1)local_58;
    *(undefined4 *)(lVar11 + 0x6c) = local_54;
  }
  return;
}

