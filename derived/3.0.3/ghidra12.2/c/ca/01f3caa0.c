
void FUN_01f3caa0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  undefined1 local_acc [4];
  undefined *local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined *local_aa8;
  undefined *puStack_aa0;
  undefined8 local_a98;
  undefined *puStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined4 local_a78;
  undefined1 local_a74;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined1 local_a60;
  undefined4 local_a5c;
  undefined8 local_a58;
  char *local_a50;
  undefined8 *******local_a48;
  undefined8 *******pppppppuStack_a40;
  undefined8 *******local_a38 [7];
  undefined4 local_a00;
  undefined4 uStack_9fc;
  undefined4 local_9f4;
  undefined2 local_9f0;
  undefined4 local_9ec;
  undefined8 *******local_9c8 [11];
  undefined4 local_96c;
  undefined8 *******local_958 [14];
  undefined8 *******local_8e8 [14];
  undefined8 *******local_878 [14];
  undefined8 *******local_808 [14];
  undefined8 *******local_798 [14];
  undefined8 *******local_728 [14];
  undefined8 *******local_6b8 [14];
  undefined8 *******local_648 [14];
  undefined8 *******local_5d8 [14];
  undefined8 *******local_568 [14];
  undefined8 *******local_4f8 [14];
  undefined8 *******local_488 [14];
  undefined8 ******local_418 [14];
  undefined8 *****local_3a8 [14];
  undefined8 ****local_338 [14];
  undefined8 ***local_2c8 [14];
  undefined8 **local_258 [14];
  undefined8 *local_1e8 [14];
  undefined8 local_178 [14];
  char local_108 [168];
  
  uVar7 = (**(code **)(*(long *)param_1[1] + 0x180))();
  if ((uVar7 & 1) == 0) {
    return;
  }
  plVar9 = param_1 + 0x194e;
  uVar13 = *(uint *)((long)param_1 + 0xaf3c);
  *(uint *)((long)param_1 + 0xaf3c) = uVar13 & 0xffffdbbf;
  local_a58 = (undefined *)CONCAT44(local_a58._4_4_,0xc);
  if (((uVar13 & 0xffffdbbf) >> 0xc & 1) != 0) {
    local_a58 = (undefined *)((ulong)local_a58._4_4_ << 0x20);
    *(uint *)((long)param_1 + 0xaf3c) = uVar13 & 0xffffcbbf;
    if (((uVar13 & 1) != 0) && ((int)param_1[0x1cb6] != 4)) {
      FUN_02192850(param_1 + 0x15e8,0,0);
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x3a0))(param_1);
  iVar6 = (int)param_1[0x1cb6];
  if (iVar6 < 1) goto LAB_01f3d178;
  uVar13 = local_a58._4_4_;
  if ((int)param_1[0x1cb6] < 4) {
    local_a58 = (undefined *)((ulong)local_a58._4_4_ << 0x20);
    if ((*(uint *)((long)param_1 + 0xaf3c) & 1) == 0) {
      plVar3 = param_1 + 0x15ea;
      FUN_01f3c598(param_1,1,0,iVar6 == 2);
      uVar13 = *(uint *)((long)param_1 + 0xaf3c);
      if (((uVar13 >> 0xf & 1) != 0) || (*(int *)(lVar8 + 0x84) == 8)) {
        if (0 < (int)*plVar3) {
          lVar8 = 0;
          puVar1 = PTR_DAT_04bbc1a0 + 0x10;
          do {
            plVar16 = *(long **)(param_1[0x15eb] + lVar8 * 8);
            lVar8 = lVar8 + 1;
            plVar16[0xf] = (long)puVar1;
            *plVar16 = param_1[0x15ec];
            param_1[0x15ec] = (long)plVar16;
          } while (lVar8 < (int)*plVar3);
        }
        *(int *)plVar3 = 0;
        if (0 < (int)*plVar9) {
          lVar8 = 0;
          puVar1 = PTR_DAT_04bbc1a0 + 0x10;
          do {
            plVar16 = *(long **)(param_1[0x194f] + lVar8 * 8);
            lVar8 = lVar8 + 1;
            plVar16[0xf] = (long)puVar1;
            *plVar16 = param_1[0x1950];
            param_1[0x1950] = (long)plVar16;
          } while (lVar8 < (int)*plVar9);
        }
        *(int *)plVar9 = 0;
        uVar13 = *(uint *)((long)param_1 + 0xaf3c);
        param_1[0x1cb2] = 0;
        param_1[0x1cb3] = 0;
        param_1[0x1cb4] = 0;
      }
      local_a58._0_4_ = 0;
      if ((*(byte *)((long)param_1 + 0x7d69) < 8) && ((int)param_1[0x1cf3] != 1)) {
        FUN_01e26938(&local_a58);
        local_ac8 = (undefined *)CONCAT44(local_ac8._4_4_,2);
        FUN_01e26d20(&local_a58,&local_ac8);
        local_a00 = *(undefined4 *)((long)param_1 + 0xe79c);
        uStack_9fc = (undefined4)param_1[0x1cf4];
        uVar10 = (**(code **)(*param_1 + 0x3a0))(param_1);
        FUN_020664bc(uVar10,&local_a58);
        (**(code **)(*param_1 + 0x368))(param_1,&local_a58,0,0,0);
        lVar8 = param_1[0x1cf3];
        *(undefined4 *)(param_1 + 0x1cf3) = 1;
        puVar1 = PTR_DAT_04bb37e0;
        *(undefined2 *)((long)param_1 + 0xe79c) = *(undefined2 *)PTR_DAT_04bb37e0;
        *(undefined *)((long)param_1 + 0xe79e) = puVar1[2];
        *(undefined *)((long)param_1 + 0xe79f) = puVar1[3];
        *(undefined4 *)(param_1 + 0x1cf4) = *(undefined4 *)(puVar1 + 4);
        if ((int)lVar8 == 1) {
          uVar13 = *(uint *)((long)param_1 + 0xaf3c);
          goto LAB_01f3ced0;
        }
LAB_01f3cf14:
        lVar8 = (**(code **)(*param_1 + 0x3a0))(param_1);
        iVar6 = (**(code **)(*param_1 + 1000))(param_1);
        local_ac8 = (undefined *)CONCAT44(local_ac8._4_4_,iVar6);
        if ((iVar6 == 0) || (iVar6 == *(int *)(lVar8 + 0xe4))) {
          if ((int)param_1[0x1cb6] == 3) {
            (**(code **)(*param_1 + 0x358))(&local_a58,param_1);
            FUN_020664bc(lVar8,&local_a58);
            lVar8 = (**(code **)(*param_1 + 0x3a0))(param_1);
            lVar14 = *param_1;
            uVar10 = 0;
LAB_01f3d130:
            puVar11 = (undefined8 *)(lVar8 + 0xe8);
            pcVar15 = *(code **)(lVar14 + 0x368);
            uVar12 = 1;
            goto LAB_01f3d13c;
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            if (*(int *)(lVar8 + 0x14c) != 3) {
              iVar6 = *(int *)(lVar8 + 0xf0);
              (**(code **)(*param_1 + 0x358))(&local_a58,param_1);
              if (iVar6 == (int)local_a50) goto LAB_01f3cfac;
            }
            (**(code **)(*param_1 + 0x358))(&local_a58,param_1);
            FUN_020664bc(lVar8,&local_a58);
            lVar14 = *param_1;
            uVar10 = 1;
            goto LAB_01f3d130;
          }
LAB_01f3cfac:
          if ((int)*plVar3 < 1) {
            if (*(int *)(lVar8 + 0xe4) != 0) {
              FUN_01e26938(&local_a58);
              local_9ec = *(undefined4 *)(lVar8 + 0xe4);
              goto LAB_01f3d0a0;
            }
            puVar11 = (undefined8 *)(lVar8 + 0xe8);
            FUN_020664bc(lVar8,puVar11);
            lVar8 = *param_1;
            goto LAB_01f3d0bc;
          }
          uVar10 = 0;
          local_a58._0_4_ = 2;
          uVar13 = *(uint *)((long)param_1 + 0xaf3c);
          if (((uVar13 >> 2 & 1) == 0) && (*(char *)(lVar8 + 0x420) == '\0')) {
            FUN_01e63f1c(&local_a58);
            local_96c = 0x1e;
            local_9f0 = 0x101;
            uVar10 = 1;
            local_a58._0_4_ = 1;
            local_9f4 = 2;
            plVar16 = (long *)((long)param_1 + 0xe59c);
            if ((int)*plVar9 < 1) {
              plVar9 = plVar3;
              plVar16 = param_1 + 0x1cb3;
            }
            FUN_02192440(plVar9,(int)*plVar16,&local_a58);
            uVar13 = *(uint *)((long)param_1 + 0xaf3c);
          }
          local_a58._0_4_ = 4;
          if ((uVar13 >> 4 & 1) != 0) {
            *(uint *)((long)param_1 + 0xaf3c) = uVar13 & 0xffffffef;
            local_a58._0_4_ = 2;
            FUN_01f3d644(param_1,&local_a58,uVar10);
          }
          FUN_02192850(param_1 + 0x15e8,1,0);
        }
        else {
          FUN_01e26938(&local_a58);
          local_9ec = local_ac8._0_4_;
LAB_01f3d0a0:
          FUN_020664bc(lVar8,&local_a58);
          lVar8 = *param_1;
          puVar11 = &local_a58;
LAB_01f3d0bc:
          pcVar15 = *(code **)(lVar8 + 0x368);
          uVar10 = 1;
          uVar12 = 0;
LAB_01f3d13c:
          (*pcVar15)(param_1,puVar11,uVar10,0,uVar12);
        }
      }
      else {
        if ((uVar13 & 1) != 0) goto LAB_01f3cf14;
LAB_01f3ced0:
        if ((uVar13 >> 4 & 1) != 0) {
          local_a58._0_4_ = 1;
          *(uint *)((long)param_1 + 0xaf3c) = uVar13 & 0xffffffef;
          FUN_01f3d644(param_1,&local_a58,0xffffffff);
        }
      }
      local_a58 = (undefined *)CONCAT44(local_a58._4_4_,0xf);
      *(uint *)((long)param_1 + 0xaf3c) = *(uint *)((long)param_1 + 0xaf3c) & 0xffff7ffb;
    }
  }
  else {
    if (iVar6 != 4) goto LAB_01f3d178;
    local_a58 = (undefined *)((ulong)local_a58._4_4_ << 0x20);
    if ((*(uint *)((long)param_1 + 0xaf3c) & 1) != 0) {
      local_a58 = (undefined *)CONCAT44(uVar13,2);
      *(uint *)((long)param_1 + 0xaf3c) = *(uint *)((long)param_1 + 0xaf3c) & 0xfffffffa;
      (**(code **)(*param_1 + 0x3a0))(param_1);
      FUN_020667c4();
      FUN_02194700(param_1 + 0x15e8);
      puVar11 = *(undefined8 **)(param_1[1] + 0x60);
      if (puVar11 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar11 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar11 = &DAT_05240280;
        }
      }
      local_a58 = PTR_DAT_04bb2020 + 0x10;
      local_a50 = "NpcActivityAIEnable";
      if (((puVar11[0x227] != 0) && (lVar8 = *(long *)(puVar11[0x227] + 0x78), lVar8 != 0)) &&
         (plVar9 = *(long **)(lVar8 + 0x48), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x38))(plVar9,&local_a58,0);
      }
      *(undefined1 *)(param_1 + 0xadd) = 0;
      *(byte *)((long)param_1 + 0xaa44) = *(byte *)((long)param_1 + 0xaa44) & 0xbf;
      uVar4 = DAT_053e0cf8;
      *(undefined4 *)((long)param_1 + 0xaa34) = DAT_053e0cf4;
      uVar12 = DAT_053e0cec;
      uVar10 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0x1547) = uVar4;
      uVar4 = DAT_053e0cfc;
      *(undefined8 *)((long)param_1 + 0xaa24) = uVar10;
      *(undefined8 *)((long)param_1 + 0xaa2c) = uVar12;
      *(undefined4 *)((long)param_1 + 0xaa3c) = uVar4;
      *(undefined4 *)(param_1 + 0x1548) = DAT_053e0d00;
    }
  }
  *(undefined4 *)(param_1 + 0x1cb6) = 0;
LAB_01f3d178:
  local_a58 = (undefined *)((ulong)local_a58 & 0xffffffff00000000);
  if (((*(uint *)((long)param_1 + 0xaf3c) & 1) != 0) &&
     ((*(byte *)((long)param_1 + 0xad5a) >> 1 & 1) == 0)) {
    uVar7 = (**(code **)(*param_1 + 0x350))(param_1);
    if ((uVar7 & 1) != 0) {
      local_a38[0] = local_9c8;
      local_a58 = (undefined *)0x0;
      local_a50 = (char *)0x0;
      local_178[0] = 0;
      local_9c8[0] = local_958;
      local_958[0] = local_8e8;
      local_8e8[0] = local_878;
      local_878[0] = local_808;
      local_808[0] = local_798;
      local_798[0] = local_728;
      *(uint *)((long)param_1 + 0xaf3c) = *(uint *)((long)param_1 + 0xaf3c) | 0x40;
      local_a48 = local_a38;
      local_728[0] = local_6b8;
      local_6b8[0] = local_648;
      local_648[0] = local_5d8;
      local_5d8[0] = local_568;
      local_568[0] = local_4f8;
      local_4f8[0] = local_488;
      local_488[0] = local_418;
      local_418[0] = local_3a8;
      local_3a8[0] = local_338;
      local_338[0] = local_2c8;
      local_2c8[0] = local_258;
      local_258[0] = local_1e8;
      local_1e8[0] = local_178;
      if (local_108 != (char *)0x0) {
        local_a58 = (undefined *)0x1500000000;
        local_a50 = local_108;
      }
      pppppppuStack_a40 = local_a48;
      lVar8 = (**(code **)(*param_1 + 0x398))(param_1);
      puVar1 = PTR_DAT_04bbc1a0;
      if (*(long **)(lVar8 + 0x20) != (long *)(lVar8 + 0x18)) {
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        plVar9 = *(long **)(lVar8 + 0x20);
        do {
          plVar3 = (long *)plVar9[1];
          plVar16 = plVar3;
          if (*plVar9 != 0) {
            *(long **)(*plVar9 + 8) = plVar3;
            plVar16 = (long *)plVar9[1];
          }
          if (plVar16 != (long *)0x0) {
            *plVar16 = *plVar9;
          }
          *plVar9 = 0;
          plVar9[1] = 0;
          *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + -1;
          plVar9[-10] = (long)puVar2;
          plVar9[-0xb] = *(long *)(lVar8 + 0x30);
          *(long **)(lVar8 + 0x30) = plVar9 + -0xb;
          plVar9 = plVar3;
        } while (plVar3 != (long *)(lVar8 + 0x18));
      }
      (**(code **)(*(long *)(lVar8 + 8) + 0x28))();
      FUN_02001d00(lVar8 + 0x38a8);
      FUN_02009f00(lVar8,&local_a58);
      uVar10 = (**(code **)(*param_1 + 0x3a0))(param_1);
      lVar8 = FUN_02065bd0(uVar10,&local_a58,param_1 + 0x1cc5);
      if (lVar8 == 0) {
        if (*(int *)((long)param_1 + 0xe61c) != 3) {
          FUN_01e26fcc(param_1 + 0x1cb7);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1cb8) = *(undefined4 *)(lVar8 + 8);
        *(undefined4 *)((long)param_1 + 0xe5c4) = *(undefined4 *)(lVar8 + 0xc);
        *(undefined4 *)(param_1 + 0x1cb9) = *(undefined4 *)(lVar8 + 0x10);
        *(undefined4 *)((long)param_1 + 0xe5cc) = *(undefined4 *)(lVar8 + 0x14);
        *(undefined4 *)(param_1 + 0x1cba) = *(undefined4 *)(lVar8 + 0x18);
        *(undefined4 *)((long)param_1 + 0xe5d4) = *(undefined4 *)(lVar8 + 0x1c);
        *(undefined4 *)(param_1 + 0x1cbd) = *(undefined4 *)(lVar8 + 0x30);
        *(undefined4 *)((long)param_1 + 0xe5ec) = *(undefined4 *)(lVar8 + 0x34);
        *(undefined4 *)(param_1 + 0x1cbf) = *(undefined4 *)(lVar8 + 0x40);
        *(undefined4 *)((long)param_1 + 0xe5fc) = *(undefined4 *)(lVar8 + 0x44);
        *(undefined4 *)(param_1 + 0x1cc0) = *(undefined4 *)(lVar8 + 0x48);
        uVar10 = *(undefined8 *)(lVar8 + 0x4c);
        *(undefined1 *)((long)param_1 + 0xe60c) = *(undefined1 *)(lVar8 + 0x54);
        *(undefined8 *)((long)param_1 + 0xe604) = uVar10;
        *(undefined2 *)(param_1 + 0x1cc2) = *(undefined2 *)(lVar8 + 0x58);
        *(undefined1 *)((long)param_1 + 0xe612) = *(undefined1 *)(lVar8 + 0x5a);
        *(undefined1 *)((long)param_1 + 0xe613) = *(undefined1 *)(lVar8 + 0x5b);
        *(undefined4 *)((long)param_1 + 0xe614) = *(undefined4 *)(lVar8 + 0x5c);
        *(undefined4 *)(param_1 + 0x1cc3) = *(undefined4 *)(lVar8 + 0x60);
        *(undefined4 *)((long)param_1 + 0xe61c) = *(undefined4 *)(lVar8 + 100);
        *(undefined1 *)(param_1 + 0x1cc4) = *(undefined1 *)(lVar8 + 0x68);
        *(undefined4 *)((long)param_1 + 0xe624) = *(undefined4 *)(lVar8 + 0x6c);
      }
      local_ab8 = 0;
      uStack_ab0 = 0;
      local_aa8 = puVar1 + 0x10;
      local_a74 = 0;
      local_ac8 = PTR_DAT_04bc1558 + 0x10;
      uStack_ac0 = 0;
      puStack_aa0 = PTR_DAT_04bb2010 + 0x10;
      local_a88 = 0;
      uStack_a80 = 0xffffffff00000000;
      local_a78 = 0xffffffff;
      local_a70 = 0xfffe;
      local_a98 = 0;
      puStack_a90 = puStack_aa0;
      FUN_0277d4ac(&local_a70);
      local_a60 = 0;
      local_a5c = 0;
      local_a68 = 0x3bf800000;
      local_acc[0] = 1;
      uVar7 = (**(code **)(*param_1 + 0x360))(param_1,lVar8,&local_ac8,local_acc);
      if ((uVar7 & 1) != 0) {
        lVar8 = (**(code **)(*param_1 + 0x3a0))(param_1);
        iVar6 = *(int *)(lVar8 + 0xdc);
        bVar5 = local_a68._4_4_ == 0;
        uVar10 = (**(code **)(*param_1 + 0x3a0))(param_1);
        FUN_020664bc(uVar10,&local_ac8);
        lVar8 = (**(code **)(*param_1 + 0x3a0))(param_1);
        (**(code **)(*param_1 + 0x368))(param_1,lVar8 + 0x78,local_acc[0],iVar6 == 1,bVar5);
      }
      if (0 < (int)local_a58) {
        lVar8 = 0;
        do {
          (**(code **)**(undefined8 **)(local_a50 + lVar8 * 8))();
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)local_a58);
      }
    }
    FUN_02193780(param_1 + 0x15e8);
  }
  if (((*(ushort *)((long)param_1 + 0xac52) >> 1 & 1) == 0) &&
     (0 < *(int *)((long)param_1 + 0xe62c))) {
    *(int *)((long)param_1 + 0xe62c) = *(int *)((long)param_1 + 0xe62c) + -1;
  }
  *(int *)(param_1 + 0x15e7) = (int)param_1[0x15e7] + 1;
  return;
}

