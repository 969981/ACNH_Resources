
undefined8 FUN_0065d690(int param_1,int param_2,byte param_3,long *param_4,int *param_5)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [8];
  
  *(undefined4 *)(param_4 + 1) = 0;
  *param_5 = 0;
  if (param_2 == param_1) {
    uVar10 = *(uint *)(param_4 + 1);
    if (uVar10 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_4,0x20);
      uVar10 = *(uint *)(param_4 + 1);
    }
    puVar13 = (undefined8 *)(*param_4 + (long)(int)uVar10 * 0x20);
    *puVar13 = 0;
    *(int *)(puVar13 + 1) = param_2;
    *(int *)((long)puVar13 + 0xc) = param_2;
    puVar13[2] = 0;
    *(byte *)(puVar13 + 3) = param_3 & 1;
    uVar6 = (undefined4)local_b0;
    *(undefined4 *)((long)puVar13 + 0x1c) = local_b0._3_4_;
    *(undefined4 *)((long)puVar13 + 0x19) = uVar6;
    *(uint *)(param_4 + 1) = uVar10 + 1;
  }
  else {
    iVar8 = param_1;
    puVar3 = PTR_DAT_048607b8;
    if ((DAT_04c7e1e8 & 1) == 0) {
      FUN_0065dc00();
      puVar3 = PTR_DAT_048607b8;
    }
    do {
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      local_a0[0] = 0x7f7fffee00000000;
      lVar9 = FUN_006621b0(iVar8,param_2);
      if (lVar9 == 0) {
        plVar1 = &local_b0;
        lVar9 = (long)local_b0;
      }
      else {
        plVar1 = (long *)(DAT_04c7e3f0 + (long)*(int *)(lVar9 + 4) * 0x20 + 8);
        lVar9 = *plVar1;
      }
      if (lVar9 == 0) {
        return 0x80040200;
      }
      lVar4 = plVar1[1];
      iVar8 = *(int *)((long)plVar1 + 0xc);
      lVar5 = plVar1[2];
      uVar10 = *(uint *)(param_4 + 1);
      if (uVar10 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
        FUN_00426990(puVar3,param_4,0x20);
        uVar10 = *(uint *)(param_4 + 1);
      }
      plVar1 = (long *)(*param_4 + (long)(int)uVar10 * 0x20);
      *plVar1 = lVar9;
      *(int *)(plVar1 + 1) = (int)lVar4;
      *(int *)((long)plVar1 + 0xc) = iVar8;
      *(byte *)(plVar1 + 3) = (byte)lVar5 & 1;
      uVar6 = (undefined4)local_b0;
      *(undefined4 *)((long)plVar1 + 0x1c) = local_b0._3_4_;
      *(undefined4 *)((long)plVar1 + 0x19) = uVar6;
      *(uint *)(param_4 + 1) = uVar10 + 1;
    } while (iVar8 != param_2);
    local_b0 = local_a0;
    local_a8 = 0x8000001000000000;
    uVar6 = FUN_0065b070(param_2);
    if ((uint)local_a8 == (local_a8._4_4_ & 0x3fffffff)) {
      FUN_00426990(puVar3,&local_b0,4);
    }
    uVar10 = (uint)local_a8 + 1;
    *(undefined4 *)((long)local_b0 + (long)(int)(uint)local_a8 * 4) = uVar6;
    uVar2 = *(uint *)(param_4 + 1);
    local_a8._0_4_ = uVar10;
    if (0 < (int)uVar2) {
      uVar11 = (ulong)(int)uVar2;
      lVar9 = *param_4;
      uVar12 = uVar11 - 1;
      if (uVar11 != uVar2) goto LAB_0065d8dc;
LAB_0065d8ac:
      *(undefined4 *)(lVar9 + uVar12 * 0x20 + 0x14) = 0;
      uVar11 = uVar12;
      if (0 < (long)uVar12) {
        do {
          lVar9 = *param_4 + uVar11 * 0x20;
          if (*(char *)(lVar9 + 0x18) == '\0') {
            iVar8 = FUN_0065b070(*(undefined4 *)(*param_4 + uVar11 * 0x20 + 8));
            if ((uint)local_a8 != 0) {
              lVar9 = *param_4;
              uVar10 = 0;
              do {
                if ((*(uint *)(lVar9 + uVar11 * 0x20 + 0x14) != uVar10) &&
                   (*(int *)((long)local_b0 + (long)(int)uVar10 * 4) == iVar8)) {
                  if (-1 < (int)uVar10) goto LAB_0065d984;
                  break;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < (uint)local_a8);
            }
            uVar10 = (uint)local_a8;
            if ((uint)local_a8 == (local_a8._4_4_ & 0x3fffffff)) {
              FUN_00426990(puVar3,&local_b0,4);
              uVar10 = (uint)local_a8;
            }
            local_a8._0_4_ = uVar10 + 1;
            *(int *)((long)local_b0 + (long)(int)uVar10 * 4) = iVar8;
            lVar9 = *param_4;
LAB_0065d984:
            *(uint *)(lVar9 + uVar11 * 0x20 + 0x10) = uVar10;
            if ((long)uVar11 < 1) break;
          }
          else {
            *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar9 + 0x14);
          }
          lVar9 = *param_4;
          uVar12 = uVar11 - 1;
          if (uVar11 == *(uint *)(param_4 + 1)) goto LAB_0065d8ac;
LAB_0065d8dc:
          *(undefined4 *)(lVar9 + uVar12 * 0x20 + 0x14) =
               *(undefined4 *)(lVar9 + uVar11 * 0x20 + 0x10);
          uVar11 = uVar12;
          if ((long)uVar12 < 1) break;
        } while( true );
      }
    }
    if ((param_3 & 1) == 0) {
      *(uint *)(*param_4 + 0x10) = (uint)local_a8;
    }
    else {
      *(undefined4 *)(*param_4 + 0x10) = 0;
      lVar9 = *param_4;
      iVar8 = *(int *)(lVar9 + 0x10);
      if ((iVar8 == *(int *)(lVar9 + 0x14)) && (*(char *)(lVar9 + 0x18) == '\0')) {
        if ((int)param_4[1] == 1) {
          iVar7 = FUN_0065b070(*(undefined4 *)(lVar9 + 8));
          if ((uint)local_a8 != 0) {
            lVar9 = *param_4;
            uVar10 = 0;
            do {
              if ((*(uint *)(lVar9 + 0x10) != uVar10) &&
                 (*(int *)((long)local_b0 + (long)(int)uVar10 * 4) == iVar7)) {
                if (-1 < (int)uVar10) goto LAB_0065da54;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < (uint)local_a8);
          }
          uVar10 = (uint)local_a8;
          if ((uint)local_a8 == (local_a8._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar3,&local_b0,4);
            uVar10 = (uint)local_a8;
          }
          local_a8._0_4_ = uVar10 + 1;
          *(int *)((long)local_b0 + (long)(int)uVar10 * 4) = iVar7;
          lVar9 = *param_4;
LAB_0065da54:
          *(uint *)(lVar9 + 0x10) = uVar10;
          iVar7 = (int)param_4[1];
          if (iVar7 < (int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
            puVar13 = (undefined8 *)*param_4;
          }
          else {
            puVar13 = (undefined8 *)FUN_00426720(puVar3,iVar7 + 1,0x20,*param_4,iVar7);
            *param_4 = (long)puVar13;
          }
          if (0 < iVar7) {
            FUN_0043aa30(puVar13 + 4,puVar13,(long)iVar7 << 5);
          }
          *puVar13 = 0;
          *(int *)(puVar13 + 2) = iVar8;
          *(uint *)((long)puVar13 + 0x14) = uVar10;
          *(undefined1 *)(puVar13 + 3) = 0;
          *(int *)(puVar13 + 1) = param_1;
          *(int *)((long)puVar13 + 0xc) = param_1;
          *(uint *)((long)puVar13 + 0x1c) = CONCAT31(uStack_b4,local_b8._3_1_);
          *(undefined4 *)((long)puVar13 + 0x19) = local_b8;
          *(int *)(param_4 + 1) = iVar7 + 1;
        }
        else {
          *(undefined1 *)(lVar9 + 0x38) = 0;
          iVar8 = FUN_0065b070(*(undefined4 *)(*param_4 + 0x28));
          if ((uint)local_a8 != 0) {
            lVar9 = *param_4;
            uVar10 = 0;
            do {
              if ((*(uint *)(lVar9 + 0x10) != uVar10) &&
                 (*(int *)((long)local_b0 + (long)(int)uVar10 * 4) == iVar8)) {
                if (-1 < (int)uVar10) goto LAB_0065db74;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < (uint)local_a8);
          }
          uVar10 = (uint)local_a8;
          if ((uint)local_a8 == (local_a8._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar3,&local_b0,4);
            uVar10 = (uint)local_a8;
          }
          local_a8._0_4_ = uVar10 + 1;
          *(int *)((long)local_b0 + (long)(int)uVar10 * 4) = iVar8;
          lVar9 = *param_4;
LAB_0065db74:
          *(uint *)(lVar9 + 0x30) = uVar10;
          *(undefined4 *)(*param_4 + 0x14) = *(undefined4 *)(*param_4 + 0x30);
        }
      }
    }
    uVar10 = local_a8._4_4_;
    *param_5 = (uint)local_a8 - 1;
    local_a8 = (ulong)local_a8._4_4_ << 0x20;
    if ((-1 < (int)uVar10) && (local_b0 != (undefined8 *)0x0)) {
      FUN_00421f90(puVar3,local_b0,4,uVar10 & 0x3fffffff);
    }
  }
  return 0;
}

