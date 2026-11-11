
void FUN_0045f750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 local_fb8 [16];
  ulong local_fa8;
  long local_f78;
  long local_f70;
  ulong local_f68;
  ulong local_f60;
  undefined *local_ec8;
  undefined *puStack_ec0;
  undefined *local_e48;
  undefined *local_e30;
  undefined *local_e00;
  undefined *local_df0;
  undefined8 *local_cf0;
  undefined1 **local_ce8;
  undefined8 local_ce0;
  undefined8 *local_cd8;
  undefined1 *local_cd0;
  undefined8 local_cc8;
  undefined1 auStack_cc0 [3072];
  ulong local_c0;
  long local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  
  local_80 = *param_2;
  local_78 = param_2[1];
  local_70 = param_2[2];
  if ((local_70 & 1) != 0) {
    FUN_0043dd30(local_70 & 0xfffffffffffffffe);
  }
  iVar3 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_3,&local_80);
  if (iVar3 < 0) {
    if (1 < DAT_04c70110) {
      FUN_00444bc0(&local_cd0,&DAT_04c700c0,2);
      local_fb8 = FUN_004273b0(param_2[1]);
      local_f68 = 0;
      local_f60 = 0;
      local_f78 = 0;
      local_f70 = 0;
      (**(code **)(*(long *)(local_70 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_70 & 0xfffffffffffffffe),local_80,local_78,&local_f78);
      lVar6 = local_f70;
      if ((local_f60 & 1) != 0) {
        FUN_0043dd50(local_f60 & 0xfffffffffffffffe);
      }
      if (lVar6 == 0) {
        local_a0 = ZEXT816(0x405ac51);
      }
      else {
        local_f68 = 0;
        local_f60 = 0;
        local_f78 = 0;
        local_f70 = 0;
        (**(code **)(*(long *)(local_70 & 0xfffffffffffffffe) + 0x50))
                  ((long *)(local_70 & 0xfffffffffffffffe),local_80,local_78,&local_f78);
        lVar6 = local_f70;
        if ((local_f60 & 1) != 0) {
          FUN_0043dd50(local_f60 & 0xfffffffffffffffe);
        }
        local_a0 = FUN_004273b0(lVar6);
      }
      local_f68 = 0;
      local_f60 = 0;
      local_f78 = 0;
      local_f70 = 0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f78);
      uVar1 = (undefined4)local_f68;
      if ((local_f60 & 1) != 0) {
        FUN_0043dd50(local_f60 & 0xfffffffffffffffe);
      }
      local_f78 = CONCAT44(local_f78._4_4_,uVar1);
      lVar6 = FUN_004446b0(&local_cd0,
                           "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}"
                           ,PTR_DAT_04bd5970,local_fb8,local_a0,&local_f78);
      *(char **)(lVar6 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x30) = 0x196;
      FUN_00444c00(&local_cd0);
    }
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      if (1 < DAT_04c70110) {
        FUN_00444bc0(&local_cd0,&DAT_04c700c0,2);
        lVar6 = FUN_004446b0(&local_cd0,&DAT_0407ebb1,PTR_DAT_04bd4920);
        *(char **)(lVar6 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        *(undefined8 *)(lVar6 + 0x30) = 0x197;
        FUN_00444c00(&local_cd0);
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
      goto joined_r0x0046017c;
    }
  }
  local_90 = 0;
  local_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  FUN_00429460(&local_cd0,param_3[1]);
  if (local_cd0 < (undefined1 *)0x2) {
LAB_0045f920:
    uVar8 = *param_3;
    lVar6 = param_3[1];
    uVar10 = param_3[2];
    if ((uVar10 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
      uVar12 = 1;
    }
  }
  else {
    uVar4 = FUN_004290b0(&local_cd0);
    if ((uVar4 >> 6 & 1) == 0) goto LAB_0045f920;
    lVar6 = *(long *)(param_3[1] + 8);
    uVar10 = FUN_00428440(lVar6);
    uVar8 = *param_3;
    if ((uVar10 & 0x1f) != 8) {
      lVar6 = 0;
    }
    if (lVar6 == 0) {
      uVar10 = 0;
      uVar12 = 0;
    }
    else {
      uVar10 = FUN_00428370(lVar6);
      uVar12 = uVar10 & 1;
      if ((uVar10 & 1) != 0) {
        FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
      }
    }
  }
  plVar11 = (long *)(uVar10 & 0xfffffffffffffffe);
  iVar3 = (**(code **)(*plVar11 + 0x50))(plVar11,uVar8,lVar6,local_a0);
  if (uVar12 != 0) {
    FUN_0043dd50(plVar11);
  }
  if (iVar3 < 0) {
    if (1 < DAT_04c70110) {
      FUN_00444bc0(&local_cd0,&DAT_04c700c0,2);
      lVar6 = FUN_004446b0(&local_cd0,"Cannot access array value",PTR_DAT_04bd4920);
      *(char **)(lVar6 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x30) = 0x19b;
      FUN_00444c00(&local_cd0);
    }
    *(undefined4 *)(param_1 + 1) = 0x80040200;
  }
  else {
    iVar3 = (int)local_90;
    if ((int)local_90 != 0) {
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      iVar5 = (**(code **)(*(long *)(local_70 & 0xfffffffffffffffe) + 0x50))
                        ((long *)(local_70 & 0xfffffffffffffffe),local_80,local_78,&local_c0);
      if (iVar5 < 0) {
        if (1 < DAT_04c70110) {
          FUN_00444bc0(&local_cd0,&DAT_04c700c0,2);
          lVar6 = FUN_004446b0(&local_cd0,"Cannot access array value",PTR_DAT_04bd4920);
          *(char **)(lVar6 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x30) = 0x1a1;
          FUN_00444c00(&local_cd0);
        }
        *(undefined4 *)(param_1 + 1) = 0x80040200;
      }
      else {
        local_cd0 = auStack_cc0;
        local_cc8 = 0x8000004000000000;
        if (local_a0._0_8_ == local_c0) {
          if (local_a0._8_8_ == local_b8) {
LAB_0045fbe4:
            if ((int)local_90 != (int)local_b0) {
              if (1 < DAT_04c70110) {
                FUN_00444bc0(&local_f78,&DAT_04c700c0,2);
                lVar6 = FUN_004446b0(&local_f78,
                                     "Clone on self with different count is not supported",
                                     PTR_DAT_04bd4920);
                uVar8 = 0x1a9;
                goto LAB_004600b0;
              }
              goto LAB_004600bc;
            }
          }
          else {
            uVar10 = FUN_00428700();
            if ((uVar10 & 1) != 0) goto LAB_0045fbe4;
            if (1 < DAT_04c70110) {
              FUN_00444bc0(&local_f78,&DAT_04c700c0,2);
              lVar6 = FUN_004446b0(&local_f78,
                                   "Clone on self with different subtype is not supported",
                                   PTR_DAT_04bd4920);
              uVar8 = 0x1a7;
              goto LAB_004600b0;
            }
LAB_004600bc:
            *(undefined4 *)(param_1 + 1) = 0x80040200;
          }
          iVar3 = (uint)local_cc8;
        }
        else {
          if (local_c0 < (ulong)(local_a0._0_8_ + (long)local_90._4_4_ * (long)(int)local_90)) {
            if (local_c0 + (long)local_b0._4_4_ * (long)(int)local_b0 <= (ulong)local_a0._0_8_)
            goto LAB_0045fc40;
            if (DAT_04c70110 < 2) goto LAB_004600bc;
            FUN_00444bc0(&local_f78,&DAT_04c700c0,2);
            lVar6 = FUN_004446b0(&local_f78,"Cannot clone on a buffer overlapping with source array"
                                 ,PTR_DAT_04bd4920);
            uVar8 = 0x1af;
LAB_004600b0:
            *(char **)(lVar6 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            *(undefined8 *)(lVar6 + 0x30) = uVar8;
            plVar11 = &local_f78;
LAB_004600b8:
            FUN_00444c00(plVar11);
            goto LAB_004600bc;
          }
LAB_0045fc40:
          uVar4 = FUN_004274f0(param_3[1]);
          if ((uVar4 >> 3 & 1) == 0) {
            if ((param_3[2] & 1) != 0) {
              uVar10 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x28))();
              if ((uVar10 & 1) != 0) goto LAB_0045fc68;
            }
            lVar6 = FUN_00461bf0(param_1 + 0xb,local_b8,local_a0._8_8_);
            if (lVar6 == 0) {
              if (DAT_04c70110 < 2) goto LAB_004600bc;
              FUN_00444bc0(&local_f78,&DAT_04c700c0,2);
              if (local_a0._8_8_ == 0) {
                pcVar7 = "<No name>";
              }
              else {
                pcVar7 = (char *)FUN_00427270();
              }
              local_fb8._0_8_ = pcVar7;
              lVar6 = FUN_004446b0(&local_f78,"Cannot compile array subtype {}",PTR_DAT_04bd4928,
                                   local_fb8);
              uVar8 = 0x1d1;
              goto LAB_004600b0;
            }
            FUN_00466aa0(&local_f78);
            local_ce8 = &local_cd0;
            local_cf0 = param_1 + 7;
            local_ec8 = PTR_FUN_04bd5ac8;
            puStack_ec0 = PTR_LAB_04bd5af0;
            local_e30 = PTR_LAB_04bd5ae8;
            local_e48 = PTR_LAB_04bd5ad0;
            local_df0 = PTR_LAB_04bd5ae0;
            local_e00 = PTR_LAB_04bd5af8;
            local_ce0 = *param_1;
            local_cd8 = param_1;
            iVar3 = FUN_0045d430(&local_f78,lVar6,local_a0._0_8_,local_90._4_4_ * iVar3,local_c0,
                                 local_b0._4_4_ * iVar3,local_90._4_4_,local_b0._4_4_,(int)local_b0)
            ;
            if (-1 < iVar3) {
              FUN_00458880(param_1[6],param_3);
              FUN_00458950(param_1[6],local_a0);
              goto LAB_0045ffd4;
            }
            if (DAT_04c70110 < 2) goto LAB_004600bc;
            FUN_00444bc0(local_fb8,&DAT_04c700c0,2);
            lVar6 = FUN_004446b0(local_fb8,"Cannot copy array",PTR_DAT_04bd4920);
            *(char **)(lVar6 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            *(undefined8 *)(lVar6 + 0x30) = 0x1dd;
            plVar11 = (long *)local_fb8;
            goto LAB_004600b8;
          }
LAB_0045fc68:
          if (0 < (int)local_90) {
            uVar8 = *(undefined8 *)PTR_PTR_04bd4d20;
            iVar3 = 0;
            do {
              local_f78 = local_c0 + (long)local_b0._4_4_ * (long)iVar3;
              local_f70 = local_b8;
              local_f68 = local_a8;
              if ((local_a8 & 1) != 0) {
                FUN_0043dd30(local_a8 & 0xfffffffffffffffe);
              }
              local_fb8._0_8_ = local_a0._0_8_ + (long)local_90._4_4_ * (long)iVar3;
              local_fb8._8_8_ = local_a0._8_8_;
              local_fa8 = local_88;
              if ((local_88 & 1) != 0) {
                FUN_0043dd30(local_88 & 0xfffffffffffffffe);
              }
              uVar4 = FUN_00428440(local_fb8._8_8_);
              uVar4 = uVar4 & 0x1f;
              if (uVar4 == 8) {
LAB_0045fe1c:
                uVar4 = *(uint *)(param_1 + 8);
                if (uVar4 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
                  FUN_00426990(uVar8,param_1 + 7,0x30);
                  uVar4 = *(uint *)(param_1 + 8);
                }
                lVar6 = param_1[7];
                plVar11 = (long *)(lVar6 + (long)(int)uVar4 * 0x30);
                *plVar11 = local_fb8._0_8_;
                plVar11[1] = local_fb8._8_8_;
                plVar11[2] = local_fa8;
                if ((local_fa8 & 1) != 0) {
                  FUN_0043dd30(local_fa8 & 0xfffffffffffffffe);
                }
                lVar6 = lVar6 + (long)(int)uVar4 * 0x30;
                *(long *)(lVar6 + 0x18) = local_f78;
                *(long *)(lVar6 + 0x20) = local_f70;
                *(ulong *)(lVar6 + 0x28) = local_f68;
                if ((local_f68 & 1) != 0) {
                  FUN_0043dd30(local_f68 & 0xfffffffffffffffe);
                }
                *(uint *)(param_1 + 8) = uVar4 + 1;
              }
              else if (uVar4 == 6) {
                if ((uint)local_cc8 == (local_cc8._4_4_ & 0x3fffffff)) {
                  FUN_00426990(uVar8,&local_cd0,0x30);
                }
                puVar2 = local_cd0;
                iVar5 = (int)local_cc8;
                plVar11 = (long *)(local_cd0 + (long)iVar5 * 0x30);
                *plVar11 = 0;
                plVar11[1] = 0;
                plVar11[2] = 0;
                lVar6 = (long)iVar5;
                if ((local_fb8._8_8_ != 0) && (uVar10 = FUN_00428440(), (uVar10 & 0x1f) == 6)) {
                  *plVar11 = local_fb8._0_8_;
                  plVar11[1] = local_fb8._8_8_;
                  if ((local_fa8 & 1) != 0) {
                    FUN_0043dd30(local_fa8 & 0xfffffffffffffffe);
                  }
                  uVar10 = *(ulong *)(puVar2 + lVar6 * 0x30 + 0x10);
                  if ((uVar10 & 1) != 0) {
                    FUN_0043dd50(uVar10 & 0xfffffffffffffffe);
                  }
                  *(ulong *)(puVar2 + lVar6 * 0x30 + 0x10) = local_fa8;
                }
                *(long *)(puVar2 + lVar6 * 0x30 + 0x18) = 0;
                *(undefined8 *)(puVar2 + lVar6 * 0x30 + 0x20) = 0;
                *(undefined8 *)(puVar2 + lVar6 * 0x30 + 0x28) = 0;
                if ((local_f70 != 0) && (uVar10 = FUN_00428440(), (uVar10 & 0x1f) == 6)) {
                  *(long *)(puVar2 + lVar6 * 0x30 + 0x18) = local_f78;
                  *(long *)(puVar2 + lVar6 * 0x30 + 0x20) = local_f70;
                  if ((local_f68 & 1) != 0) {
                    FUN_0043dd30(local_f68 & 0xfffffffffffffffe);
                  }
                  uVar10 = *(ulong *)(puVar2 + lVar6 * 0x30 + 0x28);
                  if ((uVar10 & 1) != 0) {
                    FUN_0043dd50(uVar10 & 0xfffffffffffffffe);
                  }
                  *(ulong *)(puVar2 + lVar6 * 0x30 + 0x28) = local_f68;
                }
                local_cc8 = CONCAT44(local_cc8._4_4_,iVar5 + 1);
              }
              else {
                if (uVar4 == 3) goto LAB_0045fe1c;
                FUN_0045b0e0(param_1,&local_f78,local_fb8);
              }
              if ((local_fa8 & 1) != 0) {
                FUN_0043dd50(local_fa8 & 0xfffffffffffffffe);
              }
              if ((local_f68 & 1) != 0) {
                FUN_0043dd50(local_f68 & 0xfffffffffffffffe);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)local_90);
          }
LAB_0045ffd4:
          FUN_0045c850(param_1,local_cd0,local_cc8 & 0xffffffff);
          iVar3 = (uint)local_cc8;
        }
        if (0 < iVar3) {
          puVar9 = (ulong *)(local_cd0 + (long)iVar3 * 0x30 + -0x20);
          do {
            while ((puVar9[3] & 1) != 0) {
              FUN_0043dd50(puVar9[3] & 0xfffffffffffffffe);
              uVar10 = *puVar9;
              if ((uVar10 & 1) == 0) goto LAB_004600f8;
LAB_00460118:
              FUN_0043dd50(uVar10 & 0xfffffffffffffffe);
              iVar3 = iVar3 + -1;
              puVar9 = puVar9 + -6;
              if (iVar3 == 0) goto LAB_0046012c;
            }
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) goto LAB_00460118;
LAB_004600f8:
            iVar3 = iVar3 + -1;
            puVar9 = puVar9 + -6;
          } while (iVar3 != 0);
        }
LAB_0046012c:
        uVar10 = local_cc8;
        uVar4 = local_cc8._4_4_;
        local_cc8 = (ulong)local_cc8._4_4_ << 0x20;
        if ((-1 < (long)uVar10) && (local_cd0 != (undefined1 *)0x0)) {
          FUN_00421f90(*(undefined8 *)PTR_PTR_04bd4d20,local_cd0,0x30,uVar4 & 0x3fffffff);
        }
      }
      if ((local_a8 & 1) != 0) {
        FUN_0043dd50(local_a8 & 0xfffffffffffffffe);
      }
    }
  }
  if ((local_88 & 1) != 0) {
    FUN_0043dd50(local_88 & 0xfffffffffffffffe);
  }
joined_r0x0046017c:
  if ((local_70 & 1) != 0) {
    FUN_0043dd50(local_70 & 0xfffffffffffffffe);
  }
  return;
}

