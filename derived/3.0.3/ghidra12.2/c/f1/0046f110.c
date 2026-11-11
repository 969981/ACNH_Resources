
undefined4 FUN_0046f110(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98 [16];
  long local_58;
  long local_48;
  
  local_48 = *(long *)(*param_2 + (long)(int)param_2[1] * 8 + -8);
  lVar3 = FUN_0046e5d0(param_3,&local_48);
  lVar6 = local_48;
  if ((lVar3 == 0) ||
     ((int)(*(uint *)(lVar3 + 4) | ((int)lVar3 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000)
      < 0)) {
    uVar4 = FUN_00428440(local_48);
    lVar3 = local_48;
    if ((lVar6 != 0) && ((uVar4 & 0x1f) == 8)) {
      uVar4 = FUN_00428440(local_48);
      if ((uVar4 & 0x1f) != 8) {
        lVar3 = 0;
      }
      puVar5 = (undefined8 *)FUN_00426e90(lVar3,1);
      lVar6 = local_48;
      if ((puVar5 == (undefined8 *)0x0) || ((int)((ulong)*puVar5 >> 8) < 1)) goto LAB_0046f228;
      uVar4 = FUN_00428440(local_48);
      if ((uVar4 & 0x1f) != 8) {
        lVar6 = 0;
      }
      local_58 = FUN_00426d90(lVar6);
      if ((local_58 == 0) ||
         ((lVar6 = FUN_0046e5d0(param_3,&local_58), lVar6 != 0 &&
          (-1 < (int)(*(uint *)(lVar6 + 4) |
                     ((int)lVar6 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000)))))
      goto LAB_0046f22c;
      uVar8 = *(uint *)(param_2 + 1);
      if (0 < (int)uVar8) {
        lVar6 = 0;
        do {
          if (*(long *)(*param_2 + lVar6 * 8) == local_58) {
            if (-1 < (int)lVar6) {
              lVar6 = *(long *)(*param_1 + 0x28);
              if ((lVar6 == 0) || (*(byte *)(lVar6 + 0x50) < *(byte *)(*param_1 + 0x30)))
              goto LAB_0046f708;
              FUN_00444bc0(local_98);
              lVar6 = FUN_004446b0(local_98,"Found loop in subtype \'{}\' of array type \'{}\'",
                                   &DAT_04861bc0,&local_58,&local_48);
              *(char **)(lVar6 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar6 + 0x30) = 0x395;
              uVar9 = 0xa62e68e0;
              goto LAB_0046f6fc;
            }
            break;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)uVar8);
      }
      if (uVar8 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607c0,param_2,8);
        uVar8 = *(uint *)(param_2 + 1);
      }
      *(long *)(*param_2 + (long)(int)uVar8 * 8) = local_58;
      *(uint *)(param_2 + 1) = uVar8 + 1;
      iVar2 = FUN_0046f110(param_1,param_2,param_3);
      if (-1 < iVar2) goto LAB_0046f22c;
      local_98[0] = 0x80040200;
      if (*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) goto LAB_0046f608;
      FUN_00444bc0(local_98,*(long *)(*param_1 + 0x28),2);
      lVar6 = FUN_004446b0(local_98,"Array type \'{}\' has subtype \'{}\'",&DAT_04861bc0,&local_48,
                           &local_58);
      uVar10 = 0x39a;
LAB_0046f8c8:
      *(char **)(lVar6 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x30) = uVar10;
      FUN_00444c00(local_98);
      local_98[0] = 0x80040200;
      goto LAB_0046f608;
    }
LAB_0046f228:
    local_58 = 0;
LAB_0046f22c:
    auVar12 = FUN_00428010(local_48);
    puVar1 = PTR_DAT_048607c0;
    plVar7 = auVar12._0_8_;
    if (plVar7 != auVar12._8_8_) {
      do {
        local_58 = *plVar7;
        local_a0 = *(long *)(local_58 + 8);
        lVar6 = FUN_0046e5d0(param_3,&local_a0);
        if ((lVar6 == 0) ||
           ((int)(*(uint *)(lVar6 + 4) |
                 ((int)lVar6 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000) < 0)) {
          uVar8 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar8) {
            lVar6 = 0;
            do {
              if (*(long *)(*param_2 + lVar6 * 8) == local_a0) {
                if (-1 < (int)lVar6) {
                  lVar6 = *(long *)(*param_1 + 0x28);
                  if ((lVar6 == 0) || (*(byte *)(lVar6 + 0x50) < *(byte *)(*param_1 + 0x30)))
                  goto LAB_0046f708;
                  FUN_00444bc0(local_98);
                  local_a8 = FUN_00427b40(&local_58);
                  lVar6 = FUN_004446b0(local_98,
                                       "Found loop in type \'{}\' with field \'{}\' of type \'{}\'."
                                       ,&DAT_04864a90,&local_48,&local_a8,&local_a0);
                  *(char **)(lVar6 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x30) = 0x3ab;
                  uVar9 = 0xa62e68e1;
                  goto LAB_0046f6fc;
                }
                break;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < (int)uVar8);
          }
          if (uVar8 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar1,param_2,8);
            uVar8 = *(uint *)(param_2 + 1);
          }
          *(long *)(*param_2 + (long)(int)uVar8 * 8) = local_a0;
          *(uint *)(param_2 + 1) = uVar8 + 1;
          iVar2 = FUN_0046f110(param_1,param_2,param_3);
          if (iVar2 < 0) {
            local_98[0] = 0x80040200;
            if (*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) goto LAB_0046f608;
            FUN_00444bc0(local_98,*(long *)(*param_1 + 0x28),2);
            local_a8 = FUN_00427b40(&local_58);
            lVar6 = FUN_004446b0(local_98,"Type \'{}\' has field \'{}\' of type \'{}\'",
                                 &DAT_04864a90,&local_48,&local_a8,&local_a0);
            uVar10 = 0x3b0;
            goto LAB_0046f8c8;
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != auVar12._8_8_);
    }
    if ((*(byte *)(local_48 + 1) >> 6 & 1) != 0) {
      plVar7 = (long *)FUN_00426db0(local_48,0x4000);
      puVar1 = PTR_DAT_048607c0;
      if (((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) &&
         (lVar6 = *plVar7, lVar6 != 0)) {
        plVar11 = plVar7 + 1;
        do {
          local_58 = *plVar11;
          lVar3 = FUN_0046e5d0(param_3,&local_58);
          if ((lVar3 == 0) ||
             ((int)(*(uint *)(lVar3 + 4) |
                   ((int)lVar3 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000) < 0)) {
            uVar8 = *(uint *)(param_2 + 1);
            if (0 < (int)uVar8) {
              lVar3 = 0;
              do {
                if (*(long *)(*param_2 + lVar3 * 8) == local_58) {
                  if (-1 < (int)lVar3) {
                    lVar6 = *(long *)(*param_1 + 0x28);
                    if ((lVar6 == 0) || (*(byte *)(lVar6 + 0x50) < *(byte *)(*param_1 + 0x30)))
                    goto LAB_0046f708;
                    FUN_00444bc0(local_98);
                    lVar6 = FUN_004446b0(local_98,
                                         "Found loop in type \'{}\' with interface type \'{}\'.",
                                         &DAT_04861bc0,&local_48,&local_58);
                    *(char **)(lVar6 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar6 + 0x30) = 0x3c1;
                    uVar9 = 0xa62e68e2;
                    goto LAB_0046f6fc;
                  }
                  break;
                }
                lVar3 = lVar3 + 1;
              } while (lVar3 < (int)uVar8);
            }
            if (uVar8 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
              FUN_00426990(puVar1,param_2,8);
              uVar8 = *(uint *)(param_2 + 1);
            }
            *(long *)(*param_2 + (long)(int)uVar8 * 8) = local_58;
            *(uint *)(param_2 + 1) = uVar8 + 1;
            iVar2 = FUN_0046f110(param_1,param_2,param_3);
            if (iVar2 < 0) {
              local_98[0] = 0x80040200;
              if (*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) goto LAB_0046f608;
              FUN_00444bc0(local_98,*(long *)(*param_1 + 0x28),2);
              lVar6 = FUN_004446b0(local_98,"Type \'{}\' has interface \'{}\'",&DAT_04861bc0,
                                   &local_48,&local_58);
              uVar10 = 0x3c6;
              goto LAB_0046f8c8;
            }
          }
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar7 + lVar6 * 2 + 1);
      }
    }
    local_58 = *(long *)(local_48 + 8);
    if ((local_58 != 0) &&
       ((lVar6 = FUN_0046e5d0(param_3,&local_58), lVar6 == 0 ||
        ((int)(*(uint *)(lVar6 + 4) |
              ((int)lVar6 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000) < 0)))) {
      uVar8 = *(uint *)(param_2 + 1);
      if (0 < (int)uVar8) {
        lVar6 = 0;
        do {
          if (*(long *)(*param_2 + lVar6 * 8) == local_58) {
            if (-1 < (int)lVar6) {
              lVar6 = *(long *)(*param_1 + 0x28);
              if ((lVar6 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar6 + 0x50))) {
                FUN_00444bc0(local_98);
                lVar6 = FUN_004446b0(local_98,"Found loop in type \'{}\' with parent type \'{}\'.",
                                     &DAT_04861bc0,&local_48,&local_58);
                *(char **)(lVar6 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar6 + 0x30) = 0x3d3;
                uVar9 = 0xa62e68e3;
LAB_0046f6fc:
                *(undefined4 *)(lVar6 + 0xc) = uVar9;
                FUN_00444c00(local_98);
              }
LAB_0046f708:
              local_98[0] = 0;
              FUN_0046e670(local_98);
              goto LAB_0046f608;
            }
            break;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)uVar8);
      }
      if (uVar8 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607c0,param_2,8);
        uVar8 = *(uint *)(param_2 + 1);
      }
      *(long *)(*param_2 + (long)(int)uVar8 * 8) = local_58;
      *(uint *)(param_2 + 1) = uVar8 + 1;
      iVar2 = FUN_0046f110(param_1,param_2,param_3);
      if (iVar2 < 0) {
        local_98[0] = 0x80040200;
        if (*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) goto LAB_0046f608;
        FUN_00444bc0(local_98,*(long *)(*param_1 + 0x28),2);
        lVar6 = FUN_004446b0(local_98,"Type \'{}\' has parent \'{}\'",&DAT_04861bc0,&local_48,
                             &local_58);
        uVar10 = 0x3d8;
        goto LAB_0046f8c8;
      }
    }
    FUN_0044bef0(param_3,&local_48);
  }
  local_98[0] = 0;
LAB_0046f608:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return local_98[0];
}

