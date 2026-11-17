
void FUN_030d58a0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 ***pppuVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float local_1c4;
  float fStack_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined8 ****local_198 [2];
  undefined8 ****local_188 [2];
  undefined8 ****local_178 [2];
  undefined8 ****local_168 [2];
  undefined8 ****local_158 [2];
  undefined8 ****local_148 [2];
  undefined8 ***local_138 [2];
  undefined8 **local_128 [2];
  undefined8 *local_118 [2];
  undefined8 local_108 [2];
  undefined1 local_f8 [80];
  undefined8 local_a8;
  undefined4 local_a0;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x210) + 0x340);
  *(long *)(param_4 + 0x218) = lVar5;
  puVar1 = PTR_DAT_04bc0cb8;
  if (lVar5 != 0) {
    plVar13 = *(long **)(lVar5 + 0x1d0);
    uVar17 = FUN_030d6208(param_4,param_5,param_7);
    local_a8 = (undefined **)CONCAT44(param_2,uVar17);
    local_1b0._0_4_ = 8;
    local_1b8 = puVar1 + 0x10;
    local_a0 = param_3;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_1b8);
    (**(code **)(plVar13[3] + 0x98))(plVar13[1],&local_a8);
    plVar13 = *(long **)(*(long *)(param_4 + 0x218) + 0x1d0);
    local_1b0._0_4_ = 10;
    local_1b8 = puVar1 + 0x10;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_1b8);
    (**(code **)(plVar13[3] + 0xb8))(plVar13[1],PTR_DAT_04bbdc38);
    plVar13 = *(long **)(*(long *)(*(long *)(param_4 + 0x218) + 0x230) +
                        (ulong)(2 < *(uint *)(*(long *)(param_4 + 0x218) + 0x228)) * 0x10);
    if (plVar13 != (long *)0x0) {
      local_1b8 = PTR_DAT_04bc4f00 + 0x10;
      local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,0x14);
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_1b8);
      (**(code **)(plVar13[3] + 0x158))(0x40000000,plVar13[1]);
    }
  }
  local_1a0 = local_198;
  local_198[0] = local_188;
  local_108[0] = 0;
  local_178[0] = local_168;
  local_188[0] = local_178;
  local_158[0] = local_148;
  local_138[0] = local_128;
  local_128[0] = local_118;
  local_168[0] = local_158;
  local_118[0] = local_108;
  local_148[0] = local_138;
  local_1b8._4_4_ = 0;
  local_1b0 = (undefined1 *)0x0;
  if (local_f8 == (undefined1 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 10;
    local_1b8._4_4_ = 10;
    local_1b0 = local_f8;
  }
  if ((uint *)&local_1b8 != (uint *)(param_5 + 8)) {
    uVar2 = *(uint *)(param_5 + 8);
    local_1b8 = (undefined *)((ulong)local_1b8._4_4_ << 0x20);
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = uVar2;
    }
    if ((0 < (int)uVar10) && (local_f8 != (undefined1 *)0x0)) {
      lVar5 = 0;
      uVar6 = 0;
      local_1a8 = local_1a0;
      do {
        ppppuVar3 = local_1a8;
        if ((int)uVar6 < (int)local_1b8._4_4_) {
          puVar7 = *(undefined8 **)(*(long *)(param_5 + 0x10) + lVar5);
          if (local_1a8 != (undefined8 ****)0x0) {
            local_1a8 = (undefined8 ****)*local_1a8;
          }
          pppuVar11 = (undefined8 ***)*puVar7;
          *(undefined4 *)(ppppuVar3 + 1) = *(undefined4 *)(puVar7 + 1);
          *ppppuVar3 = pppuVar11;
          uVar6 = (ulong)local_1b8 & 0xffffffff;
          if ((int)(uint)local_1b8 < (int)local_1b8._4_4_) {
            *(undefined8 *****)(local_1b0 + (long)(int)(uint)local_1b8 * 8) = ppppuVar3;
            uVar6 = (ulong)((uint)local_1b8 + 1);
            local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,(uint)local_1b8 + 1);
          }
        }
        lVar5 = lVar5 + 8;
      } while ((ulong)uVar10 * 8 != lVar5);
      if (0 < (int)uVar6) {
        plVar13 = (long *)(param_4 + 0x270);
        uVar12 = 0;
        plVar14 = plVar13;
        do {
          if (uVar12 < (uVar6 & 0xffffffff)) {
            lVar5 = *(long *)(local_1b0 + uVar12 * 8);
            if (0x15 < uVar12) goto LAB_030d5b60;
LAB_030d5ba0:
            plVar15 = plVar14;
            if (9 < uVar12) {
              plVar15 = plVar13;
            }
            lVar8 = *(long *)(*(long *)(param_4 + 0x210) + uVar12 * 8 + 0x2a0);
            *plVar15 = lVar8;
            if (lVar8 != 0) {
              plVar16 = *(long **)(lVar8 + 0x1d0);
              local_1c4 = (float)FUN_030d6208(param_4,lVar5,param_7);
              local_a0 = 8;
              local_a8 = &PTR_LAB_04a3ee98;
              fStack_1c0 = (float)param_2;
              local_1bc = param_3;
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_a8);
              (**(code **)(plVar16[3] + 0x98))(plVar16[1],&local_1c4);
              local_a8 = &PTR_LAB_04a3ee98;
              plVar16 = *(long **)(*plVar15 + 0x1d0);
              local_a0 = 10;
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_a8);
              (**(code **)(plVar16[3] + 0xb8))(plVar16[1],PTR_DAT_04bbdc38);
              uVar10 = *(uint *)(*plVar15 + 0x228);
              lVar8 = *(long *)(*plVar15 + 0x230);
              plVar16 = *(long **)(lVar8 + (ulong)(2 < uVar10) * 0x10);
              if (plVar16 != (long *)0x0) {
                param_2 = 0x4b360b61;
                iVar4 = (int)(long)((float)*(int *)(lVar5 + 8) * 45.0 * 11930465.0);
                if (iVar4 == -0x80000000) {
                  uVar17 = 0x3f800000;
                }
                else if (iVar4 == 0) {
                  uVar17 = 0;
                }
                else if (iVar4 == 0x40000000) {
                  uVar17 = 0x40000000;
                }
                else {
                  uVar17 = 0x40400000;
                  if (iVar4 != -0x40000000) {
                    uVar17 = 0;
                  }
                }
                local_a8 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
                local_a0 = 0x14;
                (**(code **)(*plVar16 + 0x18))(plVar16,&local_a8);
                (**(code **)(plVar16[3] + 0x158))(uVar17,plVar16[1]);
                uVar10 = *(uint *)(*plVar15 + 0x228);
                lVar8 = *(long *)(*plVar15 + 0x230);
              }
              lVar5 = 0x18;
              if (uVar10 < 4) {
                lVar5 = 0;
              }
              plVar15 = *(long **)(lVar8 + lVar5);
              if (plVar15 != (long *)0x0) {
                local_a8 = &PTR_LAB_04aa7fe0;
                local_a0 = 0x14;
                (**(code **)(*plVar15 + 0x18))(plVar15,&local_a8);
                (**(code **)(plVar15[3] + 0x158))(0x3f800000,plVar15[1]);
              }
            }
          }
          else {
            lVar5 = 0;
            if (uVar12 < 0x16) goto LAB_030d5ba0;
LAB_030d5b60:
            *plVar13 = 0;
          }
          uVar6 = (ulong)(int)(uint)local_1b8;
          uVar12 = uVar12 + 1;
          plVar14 = plVar14 + 1;
        } while ((long)uVar12 < (long)uVar6);
      }
    }
  }
  local_108[0] = 0;
  local_1a0 = local_198;
  local_198[0] = local_188;
  local_178[0] = local_168;
  local_188[0] = local_178;
  local_158[0] = local_148;
  local_138[0] = local_128;
  local_168[0] = local_158;
  local_128[0] = local_118;
  local_118[0] = local_108;
  local_148[0] = local_138;
  local_1b8 = (undefined *)0x0;
  local_1b0 = (undefined1 *)0x0;
  if (local_f8 == (undefined1 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 10;
    local_1b8 = (undefined *)0xa00000000;
    local_1b0 = local_f8;
  }
  local_1a8 = local_1a0;
  if ((uint *)&local_1b8 != (uint *)(param_5 + 0x118)) {
    uVar2 = *(uint *)(param_5 + 0x118);
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = uVar2;
    }
    if ((0 < (int)uVar10) && (local_f8 != (undefined1 *)0x0)) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        ppppuVar3 = local_1a8;
        if ((int)uVar6 < (int)local_1b8._4_4_) {
          plVar13 = *(long **)(*(long *)(param_5 + 0x120) + lVar5);
          if (local_1a8 != (undefined8 ****)0x0) {
            local_1a8 = (undefined8 ****)*local_1a8;
          }
          pppuVar11 = (undefined8 ***)plVar13[1];
          *ppppuVar3 = (undefined8 ***)*plVar13;
          ppppuVar3[1] = pppuVar11;
          uVar6 = (ulong)local_1b8 & 0xffffffff;
          if ((int)(uint)local_1b8 < (int)local_1b8._4_4_) {
            *(undefined8 *****)(local_1b0 + (long)(int)(uint)local_1b8 * 8) = ppppuVar3;
            uVar6 = (ulong)((uint)local_1b8 + 1);
            local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,(uint)local_1b8 + 1);
          }
        }
        lVar5 = lVar5 + 8;
      } while ((ulong)uVar10 * 8 != lVar5);
      if (0 < (int)uVar6) {
        plVar13 = (long *)(param_4 + 0x220);
        uVar12 = 0;
        plVar14 = plVar13;
        do {
          if (uVar12 < (uVar6 & 0xffffffff)) {
            lVar5 = *(long *)(local_1b0 + uVar12 * 8);
          }
          else {
            lVar5 = 0;
          }
          if (uVar12 + 10 < 0x16) {
            plVar15 = plVar14;
            if (9 < uVar12) {
              plVar15 = plVar13;
            }
            lVar8 = *(long *)(*(long *)(param_4 + 0x210) + uVar12 * 8 + 0x2f0);
            *plVar15 = lVar8;
            if (lVar8 != 0) {
              plVar16 = *(long **)(lVar8 + 0x1d0);
              local_1c4 = (float)FUN_030d6208(param_4,lVar5,param_7);
              local_a8 = &PTR_LAB_04a3ee98;
              local_a0 = 8;
              fStack_1c0 = (float)param_2;
              local_1bc = param_3;
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_a8);
              (**(code **)(plVar16[3] + 0x98))(plVar16[1],&local_1c4);
              local_a8 = &PTR_LAB_04a3ee98;
              plVar16 = *(long **)(*plVar15 + 0x1d0);
              local_a0 = 10;
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_a8);
              (**(code **)(plVar16[3] + 0xb8))(plVar16[1],PTR_DAT_04bbdc38);
              uVar10 = *(uint *)(*plVar15 + 0x228);
              lVar8 = *(long *)(*plVar15 + 0x230);
              plVar16 = *(long **)(lVar8 + (ulong)(2 < uVar10) * 0x10);
              if (plVar16 != (long *)0x0) {
                uVar10 = *(uint *)(lVar5 + 0xc);
                param_2 = 0x4b360b61;
                if (((long)((float)*(int *)(lVar5 + 8) * 45.0 * 11930465.0) & 0x7fffffffU) == 0) {
                  uVar17 = 0;
                  if (uVar10 - 1 < 5) {
                    puVar9 = (undefined4 *)(&DAT_04183d44 + (long)(int)(uVar10 - 1) * 4);
                    goto LAB_030d6050;
                  }
                }
                else {
                  uVar17 = 0;
                  if (uVar10 < 6) {
                    puVar9 = (undefined4 *)(&DAT_04183d58 + (long)(int)uVar10 * 4);
LAB_030d6050:
                    uVar17 = *puVar9;
                  }
                }
                local_a8 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
                local_a0 = 0x14;
                (**(code **)(*plVar16 + 0x18))(plVar16,&local_a8);
                (**(code **)(plVar16[3] + 0x158))(uVar17,plVar16[1]);
                uVar10 = *(uint *)(*plVar15 + 0x228);
                lVar8 = *(long *)(*plVar15 + 0x230);
              }
              lVar5 = 0x18;
              if (uVar10 < 4) {
                lVar5 = 0;
              }
              plVar15 = *(long **)(lVar8 + lVar5);
              if (plVar15 != (long *)0x0) {
                local_a8 = &PTR_LAB_04aa7fe0;
                local_a0 = 0x14;
                (**(code **)(*plVar15 + 0x18))(plVar15,&local_a8);
                (**(code **)(plVar15[3] + 0x158))(0x3f800000,plVar15[1]);
              }
            }
          }
          else {
            *plVar13 = 0;
          }
          uVar6 = (ulong)(int)(uint)local_1b8;
          uVar12 = uVar12 + 1;
          plVar14 = plVar14 + 1;
        } while ((long)uVar12 < (long)uVar6);
      }
    }
  }
  lVar5 = *(long *)(*(long *)(param_4 + 0x210) + 0x348);
  *(long *)(param_4 + 0x2c0) = lVar5;
  if (lVar5 != 0) {
    local_1b0 = (undefined1 *)0x0;
    FUN_00924d20(&local_1b8,param_7,*param_6);
    uVar19 = 0x40a00000;
    plVar13 = *(long **)(*(long *)(param_4 + 0x2c0) + 0x1d0);
    fVar18 = (float)local_1b0._4_4_ * 5.0;
    local_1c4 = (float)(int)local_1b0 * 5.0;
    fStack_1c0 = fVar18;
    uVar17 = FUN_030d6208(param_4,&local_1c4,param_7);
    local_a8 = (undefined **)CONCAT44(fVar18,uVar17);
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_1b0._0_4_ = 8;
    local_1b8 = puVar1;
    local_a0 = uVar19;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_1b8);
    (**(code **)(plVar13[3] + 0x98))(plVar13[1],&local_a8);
    plVar13 = *(long **)(*(long *)(param_4 + 0x2c0) + 0x1d0);
    local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,10);
    local_1b8 = puVar1;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_1b8);
    (**(code **)(plVar13[3] + 0xb8))(plVar13[1],PTR_DAT_04bbdc38);
  }
  return;
}

