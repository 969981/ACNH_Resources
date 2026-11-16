
void FUN_02845d90(long *param_1,int param_2,undefined4 param_3,byte *param_4,undefined4 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  byte bVar14;
  uint local_ac;
  undefined4 uStack_a8;
  char local_a4 [4];
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  uint *local_78;
  
  local_90 = param_3;
  local_8c = param_2;
  pvVar6 = (void *)(**(code **)(*param_1 + 0x18))();
  memset(pvVar6,0,0x754);
  if (local_8c == 2) {
    FUN_02846ba0(param_1);
    FUN_02845b50(param_1);
    FUN_02845944(param_1,param_3,param_4);
    return;
  }
  if (local_8c == 1) {
    local_ac = local_ac & 0xffffff00;
    FUN_01b02920(&local_ac,0,0);
    local_78 = &local_a0;
    local_a0 = 0;
    local_ac = local_ac & 0xfffffffe;
    local_80 = &PTR_FUN_049ff448;
    FUN_008a1ba0(param_1,&local_80);
    puVar1 = PTR_DAT_04bb43c0;
    local_88[0] = 8;
    local_78 = local_88;
    local_80 = &PTR_FUN_049ff4e8;
    uVar4 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_a0,param_1,uVar4);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar11 = 1 << (ulong)(uVar4 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar4 >> 5) * 4) & uVar11) != 0) {
        lVar8 = *(long *)puVar1;
        uVar5 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_80)(&local_80,&local_a0), (uVar10 & 1) != 0))
          goto LAB_02845f34;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar13 = (ulong)(uVar4 >> 5) * 4;
        *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) & (uVar11 ^ 0xffffffff);
      }
LAB_02845f34:
      uVar4 = uVar4 + 1;
    } while (uVar4 != 15000);
    uVar4 = 0;
    local_78 = &local_ac;
    local_80 = &PTR_FUN_049ff6a0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_a0,param_1,uVar4);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar11 = 1 << (ulong)(uVar4 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar4 >> 5) * 4) & uVar11) != 0) {
        lVar8 = *(long *)puVar1;
        uVar5 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_80)(&local_80,&local_a0), (uVar10 & 1) != 0))
          goto LAB_02846080;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar13 = (ulong)(uVar4 >> 5) * 4;
        *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) & (uVar11 ^ 0xffffffff);
      }
LAB_02846080:
      uVar4 = uVar4 + 1;
    } while (uVar4 != 15000);
    local_a0 = 2;
    local_80 = &PTR_FUN_049ff4e8;
    local_78 = &local_a0;
    FUN_008a1ba0(param_1,&local_80);
    local_a0 = 5;
    local_80 = &PTR_FUN_049ff4e8;
    local_78 = &local_a0;
    FUN_008a1ba0(param_1,&local_80);
    local_a0 = 7;
    local_80 = &PTR_FUN_049ff4e8;
    local_78 = &local_a0;
    FUN_008a1ba0(param_1,&local_80);
    local_a0 = 0x4f;
    local_80 = &PTR_FUN_049ff4e8;
    local_78 = &local_a0;
    FUN_008a1ba0(param_1,&local_80);
    lVar8 = *(long *)PTR_DAT_04bb46b0;
    if (lVar8 != 0) {
      puVar9 = *(undefined8 **)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar8 == 0) goto LAB_0284627c;
        lVar8 = lVar8 + 0x70;
      }
      else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
              (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 == 0))
      goto LAB_0284627c;
      if ((*(long **)(lVar8 + 0x1a0da0) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1a0da0), puVar9 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar9)();
        uVar4 = uVar4 ^ 1;
      }
      uVar11 = *(uint *)(*(long *)(lVar8 + 0x1a0d88) + *(long *)(lVar8 + 0x1a0d80));
      if (2 < uVar11) {
        uVar11 = 0;
      }
      local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar11);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar8 + 0x1a0da0) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x1a0da0) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
      if (1 < (int)uVar11) {
        local_a0 = 0x50;
        local_78 = &local_a0;
        local_80 = &PTR_FUN_049ff4e8;
        FUN_008a1ba0(param_1,&local_80);
      }
    }
LAB_0284627c:
    uVar4 = 0;
    local_80 = &PTR_FUN_049ff740;
    local_78 = (uint *)CONCAT44(local_78._4_4_,2999);
    do {
      (**(code **)(*param_1 + 0x10))(&local_a0,param_1,uVar4);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar11 = 1 << (ulong)(uVar4 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar4 >> 5) * 4) & uVar11) != 0) {
        lVar8 = *(long *)puVar1;
        uVar5 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_80)(&local_80,&local_a0), (uVar10 & 1) != 0))
          goto LAB_028462c4;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar13 = (ulong)(uVar4 >> 5) * 4;
        *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) & (uVar11 ^ 0xffffffff);
      }
LAB_028462c4:
      uVar4 = uVar4 + 1;
    } while (uVar4 != 15000);
    uVar4 = 0;
    local_80 = &PTR_FUN_04a91db0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_a0,param_1,uVar4);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar11 = 1 << (ulong)(uVar4 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar4 >> 5) * 4) & uVar11) != 0) {
        lVar8 = *(long *)puVar1;
        uVar5 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_80)(&local_80,&local_a0), (uVar10 & 1) != 0))
          goto LAB_028463a4;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar13 = (ulong)(uVar4 >> 5) * 4;
        *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) & (uVar11 ^ 0xffffffff);
      }
LAB_028463a4:
      uVar4 = uVar4 + 1;
      if (uVar4 == 15000) {
        FUN_02845b50(param_1);
        FUN_02845944(param_1,param_3,param_4);
        return;
      }
    } while( true );
  }
  if (local_8c != 0) {
    local_80 = (undefined **)0x508;
    FUN_0277d4ac(&local_80);
    FUN_0277dedc(&local_80);
    lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar4 = FUN_0277d6c4(&local_80);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar13 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) | 1 << (ulong)(uVar4 & 0x1f);
      return;
    }
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = (uint *)0x4097a2e;
  local_80 = (undefined **)puVar1;
  iVar3 = FUN_02746c30(param_3,param_4,&local_80);
  puVar2 = PTR_DAT_04bb39d8;
  if (iVar3 == 0) {
    local_78 = (uint *)0x40962f1;
    local_80 = (undefined **)puVar1;
    uVar4 = FUN_02746c30(param_3,param_4,&local_80);
    if (uVar4 < 0x1e) {
      uVar11 = 1;
    }
    else if (uVar4 < 0x3c) {
      uVar11 = 2;
    }
    else if (uVar4 < 100) {
      uVar11 = 3;
    }
    else if (uVar4 < 0x96) {
      uVar11 = 4;
    }
    else {
      uVar11 = 5;
      if (199 < uVar4) {
        uVar11 = 6;
      }
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar11);
    if (4 < uVar11) {
      if (DAT_055a345c == '\0') {
        puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
        uVar11 = *puVar7 ^ *puVar7 << 0xb;
        uVar5 = puVar7[3];
        *puVar7 = puVar7[1];
        puVar7[1] = puVar7[2];
        uVar11 = uVar11 >> 8 ^ uVar5 >> 0x13 ^ uVar11 ^ uVar5;
        puVar7[2] = uVar5;
        puVar7[3] = uVar11;
      }
      else {
        uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar11 = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar11 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar11;
      }
      if ((uint)((int)((ulong)uVar11 * 100 >> 0x20) * 100) < uVar4 << 2) {
        FUN_021f5c40(&local_80,&local_90);
        if ((short)local_80 != -2) {
          FUN_01a45058(param_1,&local_80);
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 0;
          }
          iVar3 = FUN_00bab1f0(param_1);
          if (iVar3 != 0) {
            return;
          }
        }
      }
    }
  }
  FUN_02846910(param_1);
  FUN_02845b50(param_1);
  FUN_02845944(param_1,param_3,param_4);
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
  uVar5 = puVar7[3];
  uVar4 = *puVar7 ^ *puVar7 << 0xb;
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  local_a4[0] = '\0';
  uVar11 = uVar4 ^ uVar5;
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar11;
  puVar7[2] = uVar5;
  puVar7[3] = uVar4;
  local_a0 = (uVar4 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  uStack_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 2;
  local_98 = (uStack_9c ^ uStack_9c >> 0x1e) * 0x6c078965 + 3;
  iStack_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 4;
  if ((((*param_4 < 8) && (uVar4 = FUN_02582d8c(param_4,1), uVar4 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) {
    bVar14 = *param_4;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_80 = (undefined **)CONCAT71(local_80._1_7_,bVar14);
    lVar8 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
    if (lVar8 == 0) goto LAB_02846698;
    lVar13 = lVar8 + 0x194b0;
    if (*(long *)(lVar8 + 0x194b8) == 0) {
      lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    lVar13 = lVar13 + 0x1068;
  }
  else {
LAB_02846698:
    lVar13 = 0;
  }
  puVar1 = PTR_DAT_04bb43c0;
  local_ac = *(uint *)PTR_DAT_04bb37e0;
  uStack_a8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if (lVar13 == 0) {
LAB_0284673c:
    lVar8 = *(long *)puVar1;
    uVar4 = FUN_0277d6c4(&local_ac);
    if (*(long *)puVar1 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        pvVar6 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
        memset(pvVar6,0,0x754);
        FUN_0277dedc(&local_ac);
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar4 = FUN_0277d6c4(&local_ac);
        if ((uVar4 >> 3 & 0x1fff) < 0x753) {
          lVar13 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
          *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) | 1 << (ulong)(uVar4 & 0x1f);
        }
        if (param_5 == (undefined4 *)0x0) {
          return;
        }
        uVar12 = 1;
        goto LAB_028468ec;
      }
    }
  }
  else {
    if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar9)();
      uVar4 = uVar4 ^ 1;
    }
    FUN_01a4d290(&local_80,&local_a0,param_1,*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),0,
                 local_a4,PTR_FUN_04bb67e0,0);
    local_ac = (uint)local_80;
    uStack_a8 = local_80._4_4_;
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    if (local_a4[0] == '\0') goto LAB_0284673c;
  }
  uVar4 = 0;
  local_78 = (uint *)CONCAT44(local_78._4_4_,2000);
  local_80 = &PTR_FUN_049ff718;
  do {
    (**(code **)(*param_1 + 0x10))(local_88,param_1,uVar4);
    lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar11 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar8 + (ulong)(uVar4 >> 5) * 4) & uVar11) != 0) {
      lVar8 = *(long *)puVar1;
      uVar5 = FUN_0277d6c4(local_88);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_80)(&local_80,local_88), (uVar10 & 1) != 0))
        goto LAB_02846844;
      }
      lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar13 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar8 + lVar13) = *(uint *)(lVar8 + lVar13) & (uVar11 ^ 0xffffffff);
    }
LAB_02846844:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  if (param_5 == (undefined4 *)0x0) {
    return;
  }
  uVar12 = 2;
LAB_028468ec:
  *param_5 = uVar12;
  return;
}

