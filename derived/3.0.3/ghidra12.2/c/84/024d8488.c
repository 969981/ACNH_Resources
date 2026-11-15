
/* WARNING: Removing unreachable block (ram,0x024d859c) */
/* WARNING: Removing unreachable block (ram,0x024d862c) */
/* WARNING: Removing unreachable block (ram,0x024d8a84) */

void FUN_024d8488(long param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  char local_d4 [8];
  undefined2 local_cc;
  undefined1 local_9d;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  uint uStack_6c;
  uint local_68;
  undefined2 local_64;
  byte local_62 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  bool local_28;
  byte local_27;
  undefined2 local_26;
  undefined1 local_24;
  
  cVar2 = *(char *)(param_1 + 0x1900);
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_007ef010(auStack_44,PTR_DAT_04bb3170);
  lVar6 = FUN_0251e98c(1);
  if (cVar2 == '\0') {
    lVar10 = *(long *)(lVar6 + 0x3c0);
    lVar6 = lVar6 + 0x3c0;
  }
  else {
    lVar10 = *(long *)(lVar6 + 0x390);
    lVar6 = lVar6 + 0x390;
  }
  puVar7 = (uint *)(**(code **)(lVar10 + 0xf0))(lVar6);
  if (*puVar7 <= *(uint *)(param_1 + 0x1c04)) {
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    *(undefined1 *)(puVar11 + 0xbe7) = 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  if (puVar11[0x227] == 0) {
    local_7c = (ulong)local_7c._4_4_ << 0x20;
  }
  else {
    local_7c = CONCAT44(local_7c._4_4_,*(uint *)(puVar11 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x13);
    uVar8 = FUN_03850890(puVar11[0x227],0x13,0,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
    if ((uVar8 & 1) != 0) {
      iVar5 = *(int *)(param_1 + 0xcac) + 1;
      *(int *)(param_1 + 0xcac) = iVar5;
      *(int *)(param_1 + 0x21c8) = iVar5;
    }
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  if (puVar11[0x227] == 0) {
    local_7c = (ulong)local_7c._4_4_ << 0x20;
  }
  else {
    local_7c = CONCAT44(local_7c._4_4_,*(uint *)(puVar11 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x2d);
    uVar8 = FUN_03850890(puVar11[0x227],0x2d,0,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
    if ((uVar8 & 1) != 0) {
      local_f0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_f0);
      uStack_d8 = 0;
      local_e8 = (undefined4 *)0x0;
      local_e0 = 0;
      local_dc = 0;
      FUN_007ef010(local_d4,PTR_DAT_04bb3170);
      local_62[0] = *(byte *)(param_1 + 0x1ee8);
      lVar6 = *(long *)(param_1 + 0x68);
      local_68 = 1;
      local_74 = *(undefined4 *)(lVar6 + 0x280);
      if (7 < local_62[0]) {
        local_62[0] = 0xff;
      }
      uStack_6c = (uint)*(byte *)(param_1 + 0x1902);
      local_64 = *(undefined2 *)(param_1 + 0x1904);
      local_7c = *(ulong *)(lVar6 + 0x278);
      local_70 = *(undefined4 *)(lVar6 + 0x2b4);
      if (0x1c < uStack_6c) {
        uStack_6c = 0;
      }
      uVar9 = *(uint *)(param_1 + 0xca8);
      if (uVar9 < 4) {
        local_68 = uVar9;
      }
      if (cVar2 == '\0') {
        if (*(int *)(param_1 + 0x1810) == 7) {
          uVar8 = FUN_0150a560(&local_f0,&local_7c);
        }
        else {
          uVar8 = FUN_01509db4(&local_f0,local_62);
        }
        if (((uVar8 & 1) != 0) && (uVar8 = FUN_0150aebc(&local_f0,local_62), (uVar8 & 1) != 0)) {
          local_26 = 0;
          *(undefined4 *)(param_1 + 0xcb0) = local_e8._0_4_;
          *(undefined4 *)(param_1 + 0xcb8) = local_f0._4_4_;
          *(undefined4 *)(param_1 + 0xcb4) = (undefined4)local_f0;
          local_27 = *pbVar1;
          *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
          if (7 < local_27) {
            local_27 = 0xff;
          }
          local_28 = *(int *)(param_1 + 0x178) == 0;
          local_24 = 1;
          FUN_0230adb0(&local_28);
        }
      }
      else {
        bVar3 = *(int *)(param_1 + 0x1810) != 7;
        if (uVar9 == 0) {
          if (bVar3) {
            uVar8 = FUN_01509db4(&local_f0,local_62);
          }
          else {
            uVar8 = FUN_0150a560(&local_f0,&local_7c);
          }
          if (((uVar8 & 1) != 0) && (uVar8 = FUN_0150aebc(&local_f0,local_62), (uVar8 & 1) != 0)) {
            local_26 = 0;
            *(undefined4 *)(param_1 + 0xcb0) = local_e8._0_4_;
            *(undefined4 *)(param_1 + 0xcb8) = local_f0._4_4_;
            *(undefined4 *)(param_1 + 0xcb4) = (undefined4)local_f0;
            local_27 = *pbVar1;
            *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
            if (7 < local_27) {
              local_27 = 0xff;
            }
            iVar5 = *(int *)(param_1 + 0x178);
            local_24 = 1;
            goto LAB_024d8894;
          }
        }
        else {
          if (bVar3) {
            uVar8 = FUN_01509db4(&local_f0,local_62);
          }
          else {
            uVar8 = FUN_0150a560(&local_f0,&local_7c);
          }
          if (((uVar8 & 1) != 0) && (uVar8 = FUN_0150ac24(&local_f0,&local_7c), (uVar8 & 1) != 0)) {
            local_24 = 0;
            *(undefined4 *)(param_1 + 0xcb0) = local_e8._0_4_;
            local_27 = *pbVar1;
            *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
            if (7 < local_27) {
              local_27 = 0xff;
            }
            iVar5 = *(int *)(param_1 + 0x178);
            bVar3 = *(int *)(param_1 + 0xca8) == 1;
            local_26 = CONCAT11(!bVar3,bVar3);
LAB_024d8894:
            local_28 = iVar5 == 0;
            FUN_0230adb0(&local_28);
            *(int *)(param_1 + 0xca8) = *(int *)(param_1 + 0xca8) + 1;
          }
        }
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x178);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 == 0)) {
      puVar11 = &DAT_05240280;
      goto LAB_024d88cc;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar11 = &DAT_05240280;
    lVar6 = DAT_052413b8;
    uVar8 = (ulong)local_f0;
  }
  else {
LAB_024d88cc:
    lVar6 = puVar11[0x227];
    uVar8 = (ulong)local_f0;
  }
  local_f0._4_4_ = (undefined4)(uVar8 >> 0x20);
  local_f0 = (undefined *)uVar8;
  if (iVar5 != 0) {
    if (lVar6 == 0) {
      uVar8 = FUN_0170a6d0(puVar11,0);
    }
    else {
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
      uVar8 = FUN_0170a6d0(puVar11,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
    }
    if ((uVar8 & 1) == 0) {
      s_PlayerFinishTowel_040bbf97[0] = s_PlayerFinishTowel_040bbf97[0];
      s_PlayerFinishTowel_040bbf97[1] = s_PlayerFinishTowel_040bbf97[1];
      s_PlayerFinishTowel_040bbf97[2] = s_PlayerFinishTowel_040bbf97[2];
      s_PlayerFinishTowel_040bbf97[3] = s_PlayerFinishTowel_040bbf97[3];
      s_PlayerFinishTowel_040bbf97[4] = s_PlayerFinishTowel_040bbf97[4];
      s_PlayerFinishTowel_040bbf97[5] = s_PlayerFinishTowel_040bbf97[5];
      s_PlayerFinishTowel_040bbf97[6] = s_PlayerFinishTowel_040bbf97[6];
      s_PlayerFinishTowel_040bbf97[7] = s_PlayerFinishTowel_040bbf97[7];
      s_PlayerFinishTowel_040bbf97[8] = s_PlayerFinishTowel_040bbf97[8];
      s_PlayerFinishTowel_040bbf97[9] = s_PlayerFinishTowel_040bbf97[9];
      s_PlayerFinishTowel_040bbf97[10] = s_PlayerFinishTowel_040bbf97[10];
      s_PlayerFinishTowel_040bbf97[0xb] = s_PlayerFinishTowel_040bbf97[0xb];
      s_PlayerFinishTowel_040bbf97[0xc] = s_PlayerFinishTowel_040bbf97[0xc];
      s_PlayerFinishTowel_040bbf97[0xd] = s_PlayerFinishTowel_040bbf97[0xd];
      s_PlayerFinishTowel_040bbf97[0xe] = s_PlayerFinishTowel_040bbf97[0xe];
      s_PlayerFinishTowel_040bbf97[0xf] = s_PlayerFinishTowel_040bbf97[0xf];
      return;
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
    return;
  }
  if (cVar2 == '\0') {
    if (lVar6 == 0) {
      uVar8 = FUN_0170a6d0(puVar11,0);
    }
    else {
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
      uVar8 = FUN_0170a6d0(puVar11,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
    }
    if ((uVar8 & 1) == 0) {
      s_PlayerFinishTowel_040bbf97[0] = s_PlayerFinishTowel_040bbf97[0];
      s_PlayerFinishTowel_040bbf97[1] = s_PlayerFinishTowel_040bbf97[1];
      s_PlayerFinishTowel_040bbf97[2] = s_PlayerFinishTowel_040bbf97[2];
      s_PlayerFinishTowel_040bbf97[3] = s_PlayerFinishTowel_040bbf97[3];
      s_PlayerFinishTowel_040bbf97[4] = s_PlayerFinishTowel_040bbf97[4];
      s_PlayerFinishTowel_040bbf97[5] = s_PlayerFinishTowel_040bbf97[5];
      s_PlayerFinishTowel_040bbf97[6] = s_PlayerFinishTowel_040bbf97[6];
      s_PlayerFinishTowel_040bbf97[7] = s_PlayerFinishTowel_040bbf97[7];
      s_PlayerFinishTowel_040bbf97[8] = s_PlayerFinishTowel_040bbf97[8];
      s_PlayerFinishTowel_040bbf97[9] = s_PlayerFinishTowel_040bbf97[9];
      s_PlayerFinishTowel_040bbf97[10] = s_PlayerFinishTowel_040bbf97[10];
      s_PlayerFinishTowel_040bbf97[0xb] = s_PlayerFinishTowel_040bbf97[0xb];
      s_PlayerFinishTowel_040bbf97[0xc] = s_PlayerFinishTowel_040bbf97[0xc];
      s_PlayerFinishTowel_040bbf97[0xd] = s_PlayerFinishTowel_040bbf97[0xd];
      s_PlayerFinishTowel_040bbf97[0xe] = s_PlayerFinishTowel_040bbf97[0xe];
      s_PlayerFinishTowel_040bbf97[0xf] = s_PlayerFinishTowel_040bbf97[0xf];
      return;
    }
LAB_024d8b30:
    uVar8 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
    if ((uVar8 & 1) == 0) {
      local_e8 = (undefined4 *)((ulong)local_e8 & 0xffffffff00000000);
      local_f0 = (undefined *)CONCAT35(local_f0._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_f0);
    }
  }
  else {
    local_7c._4_4_ = (uint)(local_7c >> 0x20);
    if (lVar6 == 0) {
      local_7c = (ulong)local_7c._4_4_ << 0x20;
    }
    else {
      local_7c = CONCAT44(local_7c._4_4_,*(uint *)(puVar11 + 0x2d3) >> 1) & 0xffffffff00000001;
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x11);
      uVar8 = FUN_03850a90(lVar6,0x11,0,*(uint *)(puVar11 + 0x2d3) >> 1 & 1);
      if (((uVar8 & 1) != 0) &&
         ((*(char *)(param_1 + 0x17ac) != '\0' ||
          (local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000),
          (*(uint *)(param_1 + 0xec8) & 1) == 0)))) goto LAB_024d8b30;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    if (puVar11[0x227] == 0) {
      uVar9 = 0;
    }
    else {
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
      uVar9 = *(uint *)(puVar11 + 0x2d3) >> 1 & 1;
    }
    uVar8 = FUN_0170a6d0(puVar11,uVar9);
    if ((uVar8 & 1) != 0) {
      local_e0 = 0x40;
      local_cc = 0x6c;
      local_e8 = &local_dc;
      local_9d = 0;
      local_88 = 0;
      local_f0 = PTR_DAT_04bb2bc0 + 0x10;
      local_dc = s_PlayerFinishTowel_040bbf97._0_4_;
      uStack_d8 = s_PlayerFinishTowel_040bbf97._4_4_;
      lVar6 = *(long *)(param_1 + 0x68);
      local_d4[0] = s_PlayerFinishTowel_040bbf97[8];
      local_d4[1] = s_PlayerFinishTowel_040bbf97[9];
      local_d4[2] = s_PlayerFinishTowel_040bbf97[10];
      local_d4[3] = s_PlayerFinishTowel_040bbf97[0xb];
      local_d4[4] = s_PlayerFinishTowel_040bbf97[0xc];
      local_d4[5] = s_PlayerFinishTowel_040bbf97[0xd];
      local_d4[6] = s_PlayerFinishTowel_040bbf97[0xe];
      local_d4[7] = s_PlayerFinishTowel_040bbf97[0xf];
      local_90 = *(undefined4 *)(lVar6 + 0x280);
      local_98 = *(undefined8 *)(lVar6 + 0x278);
      local_8c = *(undefined4 *)(lVar6 + 0x2b4);
      FUN_024205a0(param_1,&local_f0);
    }
  }
  return;
}

