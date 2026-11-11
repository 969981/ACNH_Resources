
void FUN_0044aef0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  puVar1 = PTR_DAT_048607b8;
  iVar6 = *(int *)(param_1 + 0x28);
  if (0 < iVar6) {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar8 = 0;
    lVar9 = -8;
    do {
      if (*(long *)(lVar4 + lVar8 * 8) == param_2) {
        if (-1 < (int)lVar8) {
          local_60 = 0;
          local_58 = -0x8000000000000000;
          local_70 = 0;
          local_68 = -0x8000000000000000;
          local_80 = (undefined8 *)0x0;
          local_78._0_4_ = 0;
          local_78._4_4_ = 0x80000000;
          puVar10 = *(ulong **)(lVar4 + lVar8 * 8);
          if (puVar10 != (ulong *)0x0) {
            uVar11 = puVar10[1];
            do {
              FUN_00426990(puVar1,&local_80,8);
              do {
                local_80[(int)(uint)local_78] = uVar11;
                local_78._0_4_ = (uint)local_78 + 1;
                if (((byte)*puVar10 >> 1 & 1) == 0) {
                  uVar11 = puVar10[1];
                  if ((uint)local_68 == (local_68._4_4_ & 0x3fffffff)) {
                    FUN_00426990(puVar1,&local_70,8);
                  }
                  *(ulong *)(local_70 + (long)(int)(uint)local_68 * 8) = uVar11;
                  local_68 = CONCAT44(local_68._4_4_,(uint)local_68 + 1);
                  uVar2 = FUN_0043d190((long *)(param_1 + 0x80),puVar10[1]);
                  if ((int)uVar2 <= *(int *)(param_1 + 0x8c)) {
                    uVar12 = *(undefined8 *)
                              (*(long *)(param_1 + 0x80) + ((long)((ulong)uVar2 << 0x20) >> 0x1c) +
                              8);
                    if ((uint)local_58 == (local_58._4_4_ & 0x3fffffff)) {
                      FUN_00426990(puVar1,&local_60,8);
                    }
                    *(undefined8 *)(local_60 + (long)(int)(uint)local_58 * 8) = uVar12;
                    local_58 = CONCAT44(local_58._4_4_,(uint)local_58 + 1);
                  }
                }
                puVar10 = (ulong *)(*puVar10 & 0xfffffffffffffffc);
                if (puVar10 == (ulong *)0x0) {
                  iVar6 = *(int *)(param_1 + 0x28);
                  lVar4 = *(long *)(param_1 + 0x20);
                  goto LAB_0044b08c;
                }
                uVar11 = puVar10[1];
              } while ((uint)local_78 != (local_78._4_4_ & 0x3fffffff));
            } while( true );
          }
LAB_0044b08c:
          iVar6 = iVar6 + -1;
          *(int *)(param_1 + 0x28) = iVar6;
          if (0 < iVar6 - (int)lVar8) {
            lVar7 = 0;
            puVar5 = (undefined8 *)(lVar4 - lVar9);
            do {
              lVar7 = (lVar7 << 0x20) + 0x800000000 >> 0x20;
              puVar5[-1] = *puVar5;
              puVar5 = puVar5 + 1;
            } while (lVar7 < (iVar6 - lVar8) * 8);
          }
          lStack_a8 = local_60 + (long)(int)(uint)local_58 * 8;
          local_b0 = local_60;
          lStack_98 = local_70 + (long)(int)(uint)local_68 * 8;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = local_70;
          FUN_004490c0(param_1,&local_b0);
          if ((uint)local_78 != 0) {
            lVar8 = (long)(int)(uint)local_78 << 3;
            puVar5 = local_80;
            do {
              puVar3 = (undefined8 *)FUN_00426e90(*puVar5,0x2000);
              if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = 0;
              }
              puVar5 = puVar5 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          FUN_0044a730(param_1);
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          FUN_004490c0(param_1,&local_e0);
          uVar2 = local_78._4_4_;
          puVar1 = PTR_DAT_048607b8;
          local_78 = (ulong)local_78._4_4_ << 0x20;
          if ((-1 < (int)uVar2) && (local_80 != (undefined8 *)0x0)) {
            FUN_00421f90(PTR_DAT_048607b8,local_80,8,uVar2 & 0x3fffffff);
          }
          lVar8 = local_68;
          uVar2 = local_68._4_4_;
          local_68 = (ulong)local_68._4_4_ << 0x20;
          if ((-1 < lVar8) && (local_70 != 0)) {
            FUN_00421f90(puVar1,local_70,8,uVar2 & 0x3fffffff);
          }
          lVar8 = local_58;
          uVar2 = local_58._4_4_;
          local_58 = (ulong)local_58._4_4_ << 0x20;
          if ((-1 < lVar8) && (local_60 != 0)) {
            FUN_00421f90(puVar1,local_60,8,uVar2 & 0x3fffffff);
          }
        }
        break;
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar8 < iVar6);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}

