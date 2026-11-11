
void FUN_0044c4d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 local_b8 [16];
  ulong local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_58;
  
  local_58 = 0;
  lVar8 = *(long *)(param_2 + 8);
  uVar4 = FUN_00428440(lVar8);
  if ((lVar8 != 0) && ((uVar4 & 0x1f) == 4)) {
    lVar8 = FUN_00427270(*(undefined8 *)(param_2 + 8));
    uVar5 = FUN_00427270(*(undefined8 *)(param_2 + 8));
    iVar3 = FUN_0043a660(uVar5,0x3a);
    local_68 = lVar8 + (iVar3 + 1);
    local_80 = (undefined8 *)0x0;
    local_78 = -0x8000000000000000;
    local_70 = lVar8;
    FUN_00429e50(param_3,&local_80,0x7c);
    if ((int)local_78 != 0) {
      puVar1 = local_80 + (long)(int)local_78 * 2;
      puVar10 = local_80;
      do {
        local_90 = *puVar10;
        uStack_88 = puVar10[1];
        auVar11 = FUN_00429810(&local_90);
        local_a0 = auVar11;
        if (local_70 != local_68) {
          uVar4 = FUN_00429c10(local_a0,&local_70);
          if ((uVar4 & 1) != 0) {
            local_a0._0_8_ = local_a0._0_8_ + (long)((int)local_68 - (int)local_70);
          }
        }
        if (0 < *(int *)(param_2 + 0x10)) {
          lVar8 = 0;
          do {
            uVar4 = FUN_0043a700(local_a0._0_8_,local_a0._8_8_ - local_a0._0_8_,
                                 *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar8 * 8));
            if ((uVar4 & 1) != 0) {
              lVar7 = *(long *)(*(long *)(param_2 + 0x20) + lVar8 * 8);
              lVar9 = *(long *)(param_2 + 8);
              if (lVar9 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_00428370(lVar9);
                if ((uVar4 & 1) != 0) {
                  FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
                }
              }
              if (lVar9 == 0) {
LAB_0044c640:
                if ((uVar4 & 1) == 0) goto LAB_0044c6a0;
                lVar9 = 0;
                lVar7 = 0;
                uVar6 = 0;
LAB_0044c654:
                FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
              }
              else {
                uVar6 = FUN_00428440(lVar9);
                if ((uVar6 & 0x1f) != 4) goto LAB_0044c640;
                uVar6 = uVar4;
                if ((uVar4 & 1) != 0) {
                  FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
                  goto LAB_0044c654;
                }
              }
              if (lVar7 != 0) {
                local_b8._0_8_ = 0;
                local_b8._8_8_ = local_b8._8_8_ & 0xffffffffffffff00;
                (**(code **)(*(long *)(uVar6 & 0xfffffffffffffffe) + 0x38))
                          ((long *)(uVar6 & 0xfffffffffffffffe),lVar7,lVar9,local_b8);
                local_58 = local_58 + local_b8._0_8_;
              }
              if ((uVar6 & 1) != 0) {
                FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
              }
            }
LAB_0044c6a0:
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(param_2 + 0x10));
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar1);
    }
    lVar8 = local_78;
    uVar2 = local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < lVar8) && (local_80 != (undefined8 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_80,0x10,uVar2 & 0x3fffffff);
    }
    if (local_58 != 0) {
      local_a8 = 0;
      local_b8 = FUN_00446e00(&local_58,&DAT_04c123e0);
      uVar4 = local_a8;
      if (local_b8._8_8_ == 0) {
        local_a8 = 0;
        uVar6 = local_a8;
      }
      else {
        uVar6 = FUN_00428370(local_b8._8_8_);
        uVar4 = local_a8;
        if ((uVar6 & 1) != 0) {
          FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
          uVar4 = local_a8;
        }
      }
      local_a8 = uVar6;
      if ((uVar4 & 1) != 0) {
        FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00440a70(param_1,local_b8);
      if ((local_a8 & 1) == 0) {
        return;
      }
      FUN_0043dd50(local_a8 & 0xfffffffffffffffe);
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

