
undefined8 FUN_004c6bf0(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong *local_310;
  ulong *puStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8 [14];
  ulong local_258;
  long local_1c0;
  undefined8 uStack_1b8;
  char *local_98;
  ulong local_90 [3];
  long local_78;
  undefined8 local_70;
  
  if ((*(uint *)(param_1 + 0xd) & 0xfffffffe) == 2) {
    uVar10 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 2;
    puVar11 = PTR_DAT_048607b8;
    iVar2 = (int)param_1[7];
    if (0 < iVar2) {
      lVar12 = 0;
      do {
        puVar13 = *(undefined8 **)(param_1[6] + lVar12 * 8);
        if (puVar13 != (undefined8 *)0x0) {
          iVar2 = FUN_004c6bf0(puVar13,param_2,param_3 & 1);
          if (iVar2 < 0) {
            return 0x80040200;
          }
          uVar10 = *puVar13;
          uVar4 = FUN_00428440(uVar10);
          if ((uVar4 & 0x1f) != 7) {
            uVar10 = 0;
          }
          if (*(int *)(puVar13 + 0xd) != 2) {
            uVar9 = *(uint *)(puVar13 + 9);
            if (uVar9 == (*(uint *)((long)puVar13 + 0x4c) & 0x3fffffff)) {
              FUN_00426990(puVar11,puVar13 + 8,8);
              uVar9 = *(uint *)(puVar13 + 9);
            }
            *(long **)(puVar13[8] + (long)(int)uVar9 * 8) = param_1;
            *(uint *)(puVar13 + 9) = uVar9 + 1;
          }
          if ((param_3 & 1) != 0) {
            FUN_00427c30(&local_310,uVar10,0);
            iVar2 = 0;
LAB_004c6d10:
            if (local_310 + 1 < puStack_308) {
              local_310 = local_310 + 1;
              uVar4 = FUN_004290b0();
            }
            else {
              uVar4 = FUN_00427c40(&local_310);
              if ((uVar4 & 1) == 0) goto LAB_004c6ed8;
              uVar4 = FUN_004290b0(local_310);
            }
            if ((uVar4 & 0x30) != 0) {
              local_90[0] = *local_310;
              uVar4 = FUN_004290b0(local_90);
              if ((uVar4 & 1) == 0) {
                puVar5 = (ulong *)(**(code **)(*(long *)param_1[3] + 0x10))
                                            ((long *)param_1[3],0x18,0);
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = 0;
                iVar1 = (int)param_1[5];
                uVar9 = iVar1 - iVar2;
                if (iVar1 < (int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff)) {
                  puVar13 = (undefined8 *)(param_1[4] + (long)iVar2 * 8);
                }
                else {
                  lVar14 = FUN_00426720(puVar11,iVar1 + 1,8,param_1[4],iVar1,(long)param_1 + 0x2c);
                  param_1[4] = lVar14;
                  puVar13 = (undefined8 *)(lVar14 + (long)iVar2 * 8);
                }
                if (0 < (int)uVar9) {
                  FUN_0043aa30(puVar13 + 1,puVar13,
                               -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3);
                }
                *puVar13 = puVar5;
                *(int *)(param_1 + 5) = iVar1 + 1;
                if ((lVar12 < (long)(int)param_1[7] + -1) &&
                   (pcVar6 = (char *)FUN_00427b40(local_90), *pcVar6 != '#')) {
                  FUN_004225d0(local_2c8,&DAT_04084559);
                  uVar10 = FUN_00427b40(local_90);
                  FUN_00423880(local_2c8,uVar10,0xffffffff);
                  lVar14 = param_1[3];
                  FUN_0043bce0(&local_78,local_2c8[0],0xffffffff);
                  uVar9 = *(uint *)(lVar14 + 0x80);
                  if (uVar9 == (*(uint *)(lVar14 + 0x84) & 0x3fffffff)) {
                    FUN_00426990(puVar11,lVar14 + 0x78,8);
                    uVar9 = *(uint *)(lVar14 + 0x80);
                  }
                  *(long *)(*(long *)(lVar14 + 0x78) + (long)(int)uVar9 * 8) = local_78;
                  local_78 = 0;
                  *(uint *)(lVar14 + 0x80) = uVar9 + 1;
                  FUN_0043be10(&local_78);
                  *puVar5 = *(ulong *)(*(long *)(param_1[3] + 0x78) +
                                       (long)*(int *)(param_1[3] + 0x80) * 8 + -8) &
                            0xfffffffffffffffe;
                  FUN_00422550(local_2c8);
                }
                else {
                  uVar4 = FUN_00427b40(local_90);
                  *puVar5 = uVar4;
                }
                uVar3 = FUN_004290b0(local_90);
                *(undefined4 *)(puVar5 + 1) = uVar3;
                puVar5[2] = local_90[0];
                *(undefined2 *)((long)puVar5 + 0xc) = 0;
                iVar2 = iVar2 + 1;
              }
            }
            goto LAB_004c6d10;
          }
        }
LAB_004c6ed8:
        iVar2 = (int)param_1[7];
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar2);
    }
    if ((*(byte *)(param_1[3] + 0x168) >> 1 & 1) != 0) {
      *(int *)((long)param_1 + 0x14) = iVar2 + -1;
    }
    lVar12 = *param_1;
    uVar4 = FUN_00428440(lVar12);
    if ((uVar4 & 0x1f) != 7) {
      lVar12 = 0;
    }
    local_78 = 0;
    local_70 = 0x8000000000000000;
    FUN_004710d0(local_90);
    puVar11 = PTR_DAT_048607b8;
    if ((int)param_1[5] < 1) {
      uVar4 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        while( true ) {
          puVar13 = *(undefined8 **)(param_1[4] + lVar14 * 8);
          local_98 = (char *)*puVar13;
          if ((local_98 == (char *)0x0) || (*local_98 == '#')) break;
          uVar10 = FUN_00471420(local_90);
          iVar2 = FUN_00471230(local_90,uVar10);
          if (iVar2 != 0) {
            iVar2 = FUN_0043a2d0(local_98);
            pcVar6 = (char *)(**(code **)(*param_2 + 0x10))(param_2,(long)(iVar2 + 2),0);
            *pcVar6 = '#';
            FUN_0043a2b0(pcVar6 + 1,iVar2 + 1,local_98,iVar2 + 1);
            local_98 = pcVar6;
            break;
          }
          FUN_00471240(local_90,local_98,1);
          if (puVar13[2] == 0) goto LAB_004c7098;
LAB_004c6fd0:
          FUN_00451ea0(local_2c8);
          uVar10 = FUN_004272d0(puVar13[2]);
          FUN_00452230(local_2c8,uVar10);
          FUN_00452260(local_2c8,puVar13[2]);
          FUN_00453b70(local_2c8,local_98,*(undefined2 *)((long)puVar13 + 0xc),
                       *(undefined4 *)(puVar13 + 1));
          local_258 = local_258 | 0xc0000;
          uStack_1b8 = 0;
          local_1c0 = lVar12;
          iVar2 = FUN_004535f0(local_2c8,param_2,&local_2d0);
          uVar10 = local_2d0;
          if (iVar2 < 0) {
            if (DAT_04c717f8 != 0) {
              FUN_00444bc0(&local_310,&DAT_04c717a8,1);
              lVar12 = FUN_004446b0(&local_310,"Failed to allocate type from builder",&DAT_0413df78)
              ;
              *(char **)(lVar12 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
              ;
              *(undefined8 *)(lVar12 + 0x30) = 0x1af;
              FUN_00444c00(&local_310);
            }
            FUN_00451fa0(local_2c8);
LAB_004c7230:
            uVar10 = 0x80040200;
            goto LAB_004c7238;
          }
          if ((uint)local_70 == (local_70._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar11,&local_78,8);
          }
          *(undefined8 *)(local_78 + (long)(int)local_70 * 8) = uVar10;
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
          FUN_00451fa0(local_2c8);
          lVar14 = lVar14 + 1;
          if ((int)param_1[5] <= lVar14) goto LAB_004c7118;
        }
        if (puVar13[2] != 0) goto LAB_004c6fd0;
LAB_004c7098:
        if (1 < DAT_04c717f8) {
          FUN_00444bc0(local_2c8,&DAT_04c717a8,2);
          lVar7 = FUN_004446b0(local_2c8,"Dropping field {} as it has a null type",&DAT_048534d0,
                               &local_98);
          *(char **)(lVar7 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x30) = 0x1b9;
          *(undefined4 *)(lVar7 + 0xc) = 0x2dba8010;
          FUN_00444c00(local_2c8);
        }
        if ((*(byte *)(param_1[3] + 0x168) & 1) == 0) goto LAB_004c7230;
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)param_1[5]);
LAB_004c7118:
      uVar4 = local_70 & 0xffffffff;
      lVar14 = local_78;
    }
    uVar10 = FUN_00428650(lVar14,uVar4,0,param_2);
    puVar13 = (undefined8 *)FUN_00426d40(lVar12,0x800000);
    *puVar13 = uVar10;
    puVar11 = PTR_DAT_048607b8;
    if (*(char *)(lVar12 + 1) < '\0') {
      lVar14 = param_1[0xb];
      puVar13 = (undefined8 *)
                (**(code **)(*(long *)PTR_DAT_048607b8 + 0x10))
                          (PTR_DAT_048607b8,(long)(int)lVar14 * 0x10 + 0x10,0);
      *puVar13 = 0;
      puVar13[1] = (long)(int)lVar14;
      param_1[0xc] = (long)puVar13;
      FUN_0043a3b0(puVar13 + 2,param_1[10],(int)param_1[0xb] << 4);
      lVar14 = param_1[0xc];
      plVar8 = (long *)FUN_00426d40(lVar12,0x8000);
      *plVar8 = lVar14;
    }
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0xd) = 3;
LAB_004c7238:
    FUN_00471120(local_90);
    uVar4 = local_70;
    uVar9 = local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < (long)uVar4) && (local_78 != 0)) {
      FUN_00421f90(puVar11,local_78,8,uVar9 & 0x3fffffff);
    }
  }
  return uVar10;
}

