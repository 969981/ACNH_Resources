
undefined8 FUN_02846f00(long *param_1,byte *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint3 uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  void *__s;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  char cVar19;
  ushort uVar20;
  uint *puVar21;
  int *piVar22;
  undefined8 uVar23;
  uint local_110;
  undefined4 local_fc;
  undefined4 uStack_f8;
  char local_f4 [4];
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  byte local_dc [4];
  undefined **local_d8 [4];
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [7];
  undefined1 local_9d;
  undefined2 local_94;
  undefined1 local_92;
  undefined8 local_90;
  undefined ***local_88;
  undefined1 auStack_70 [16];
  
  if ((param_3 & 1) == 0) {
    FUN_02846ba0();
  }
  else {
    FUN_02846910();
  }
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 == 0) {
LAB_02846f9c:
    lVar16 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar17 + 0x38))();
      lVar16 = 0;
      if (lVar12 != 0) {
        lVar16 = lVar12 + 0x70;
      }
    }
    else {
      if (puVar17 == (undefined8 *)0x0) goto LAB_02846f9c;
      lVar16 = 0;
      if ((long *)puVar17[0x26] != (long *)0x0) {
        lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar16 + 0x1c2980) == (long *)0x0) ||
     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x1c2980), puVar17 == (undefined8 *)0x0)) {
    local_110 = 0;
  }
  else {
    local_110 = (**(code **)*puVar17)();
  }
  lVar12 = *(long *)(lVar16 + 0x1c2960);
  lVar18 = *(long *)(lVar16 + 0x1c2968);
  uVar13 = FUN_027c5f10();
  if ((uVar13 & 1) == 0) {
    local_90 = (undefined **)CONCAT53(local_90._3_5_,0x80023);
    uVar20 = *(ushort *)(lVar18 + lVar12);
    if ((byte)(uVar20 >> 8) < 0x23) {
      FUN_020fd218(&local_90,uVar20 >> 8,uVar20 & 0xff);
    }
  }
  else {
    local_90 = (undefined **)(ulong)*(uint3 *)PTR_DAT_04bb9cf0;
  }
  uVar13 = (ulong)local_90;
  puVar5 = PTR_DAT_04bb43c0;
  local_92 = local_90._2_1_;
  local_94 = (undefined2)local_90;
  uVar6 = (uint3)local_90;
  local_88 = local_d8;
  local_d8[0] = (undefined **)CONCAT44(local_d8[0]._4_4_,1);
  local_90 = &PTR_FUN_049ff588;
  uVar11 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(&local_b8,param_1,uVar11);
    lVar12 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar2 = 1 << (ulong)(uVar11 & 0x1f);
    if ((*(uint *)(lVar12 + (ulong)(uVar11 >> 5) * 4) & uVar2) != 0) {
      lVar12 = *(long *)puVar5;
      uVar9 = FUN_0277d6c4(&local_b8);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (uVar14 = (*(code *)*local_90)(&local_90,&local_b8), (uVar14 & 1) == 0))
        goto LAB_02847094;
      }
      lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar18 = (ulong)(uVar11 >> 5) * 4;
      *(uint *)(lVar12 + lVar18) = *(uint *)(lVar12 + lVar18) & (uVar2 ^ 0xffffffff);
    }
LAB_02847094:
    uVar11 = uVar11 + 1;
  } while (uVar11 != 15000);
  local_9d = 0;
  local_a8 = 8;
  local_b0 = local_a4;
  local_a4[0] = 0;
  local_b8 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_b8,"-----");
  if ((uVar6 & 0xff) < 0x23) {
    FUN_038d1270(&local_b8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (uVar13 & 0xff) * 8 + 0xb0),
                 uVar6 >> 8 & 0xff);
  }
  uVar23 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_b8 + 0x18))(&local_b8);
  uVar10 = FUN_006bd550(local_b0,0);
  local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar10);
  puVar15 = (uint *)FUN_0079e770(uVar23,&local_90);
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (puVar15 != (uint *)0x0) {
    if (*puVar15 != 0) {
      cVar19 = *PTR_DAT_04bb40b0;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar4 + 0x50);
          if (-1 < (int)uVar11) {
            if ((ushort *)((ulong)uVar11 + (long)puVar15) != (ushort *)0x0) {
              uVar20 = *(ushort *)((ulong)uVar11 + (long)puVar15);
              goto LAB_028472e0;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar21 = (uint *)(ulong)*puVar15;
        uVar20 = 0xfffe;
        if ((*puVar15 == 0) || (puVar15 == puVar21)) goto LAB_028472e0;
        lVar12 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar21)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar15 + (lVar12 - (long)puVar21);
        if (lVar12 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar21));
        *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar22 = (int *)(lVar12 + 4);
        while (piVar22[-1] != -0x78f0e1d7) {
          piVar22 = piVar22 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_028472dc;
        }
        iVar1 = 0;
        if (*piVar22 != -1) {
          iVar1 = *piVar22;
        }
        *(int *)(puVar4 + 0x50) = iVar1;
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_028472dc:
    uVar20 = 0xfffe;
LAB_028472e0:
    local_90 = (undefined **)(ulong)uVar20;
    FUN_0277d4ac(&local_90);
    lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar11 = FUN_0277d6c4(&local_90);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar18 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar12 + lVar18) =
           *(uint *)(lVar12 + lVar18) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar11 = 0;
  local_d8[0] = &PTR_FUN_04a91dd8;
  do {
    (**(code **)(*param_1 + 0x10))(&local_90,param_1,uVar11);
    lVar12 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar2 = 1 << (ulong)(uVar11 & 0x1f);
    if ((*(uint *)(lVar12 + (ulong)(uVar11 >> 5) * 4) & uVar2) != 0) {
      lVar12 = *(long *)puVar5;
      uVar9 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (uVar13 = (*(code *)*local_d8[0])(local_d8,&local_90), (uVar13 & 1) != 0))
        goto LAB_02847380;
      }
      lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar18 = (ulong)(uVar11 >> 5) * 4;
      *(uint *)(lVar12 + lVar18) = *(uint *)(lVar12 + lVar18) & (uVar2 ^ 0xffffffff);
    }
LAB_02847380:
    uVar11 = uVar11 + 1;
  } while (uVar11 != 15000);
  FUN_02845b50(param_1);
  bVar8 = FUN_020fd7d8(&local_94);
  puVar3 = PTR_DAT_04bb4f78;
  local_dc[0] = *param_2;
  bVar7 = true;
  if (7 < local_dc[0]) {
    local_dc[0] = 0xff;
  }
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_dc,1);
  if (lVar12 != 0) {
    if (*(long **)(lVar12 + 0x17bb0) == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      puVar17 = (undefined8 *)**(long **)(lVar12 + 0x17bb0);
      uVar13 = 0;
      if (puVar17 != (undefined8 *)0x0) {
        uVar13 = (**(code **)*puVar17)();
      }
    }
    bVar7 = *(int *)(*(long *)(lVar12 + 0x17b98) + *(long *)(lVar12 + 0x17b90) + 0x34) != 1;
    if ((((uVar13 & 1) != 0) && (*(long *)(lVar12 + 0x17bb0) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar12 + 0x17bb0) + 8), puVar17 != (undefined8 *)0x0))
    {
      (**(code **)*puVar17)();
    }
  }
  FUN_00b92ba0(param_1,bVar8 < 4,bVar7);
  local_e0 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  FUN_00b92a60(param_1,&local_e0);
  if ((param_3 & 1) != 0) {
    puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar9 = puVar15[3];
    uVar11 = *puVar15 ^ *puVar15 << 0xb;
    *puVar15 = puVar15[1];
    puVar15[1] = puVar15[2];
    local_f4[0] = '\0';
    uVar2 = uVar11 ^ uVar9;
    uVar11 = uVar11 >> 8 ^ uVar9 >> 0x13 ^ uVar2;
    puVar15[2] = uVar9;
    puVar15[3] = uVar11;
    local_f0 = (uVar11 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uStack_ec = (local_f0 ^ local_f0 >> 0x1e) * 0x6c078965 + 2;
    local_e8 = (uStack_ec ^ uStack_ec >> 0x1e) * 0x6c078965 + 3;
    iStack_e4 = (local_e8 ^ local_e8 >> 0x1e) * 0x6c078965 + 4;
    if (((*param_2 < 8) && (uVar11 = FUN_02582d8c(param_2,1), uVar11 < 8)) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0' &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0')))) {
      bVar8 = *param_2;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      local_90 = (undefined **)CONCAT71(local_90._1_7_,bVar8);
      lVar12 = FUN_02583354(*(undefined8 *)puVar3,&local_90,1);
      if (lVar12 == 0) goto LAB_02847688;
      lVar18 = lVar12 + 0x194b0;
      if (*(long *)(lVar12 + 0x194b8) == 0) {
        lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      lVar18 = lVar18 + 0x1068;
    }
    else {
LAB_02847688:
      lVar18 = 0;
    }
    local_fc = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_f8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    if (lVar18 == 0) {
LAB_02847728:
      lVar12 = *(long *)puVar5;
      uVar11 = FUN_0277d6c4(&local_fc);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          __s = (void *)(**(code **)(*param_1 + 0x18))(param_1);
          memset(__s,0,0x754);
          FUN_0277dedc(&local_fc);
          lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
          uVar11 = FUN_0277d6c4(&local_fc);
          uVar23 = 0;
          if ((uVar11 >> 3 & 0x1fff) < 0x753) {
            uVar23 = 0;
            lVar18 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
            *(uint *)(lVar12 + lVar18) = *(uint *)(lVar12 + lVar18) | 1 << (ulong)(uVar11 & 0x1f);
          }
          goto LAB_02847640;
        }
      }
    }
    else {
      if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar17 == (undefined8 *)0x0)) {
        uVar11 = 1;
      }
      else {
        uVar11 = (**(code **)*puVar17)();
        uVar11 = uVar11 ^ 1;
      }
      FUN_01a4d290(&local_90,&local_f0,param_1,*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8),0,
                   local_f4,PTR_FUN_04bb67e0,0);
      local_fc = (undefined4)local_90;
      uStack_f8 = local_90._4_4_;
      if ((((uVar11 & 1) == 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
      if (local_f4[0] == '\0') goto LAB_02847728;
    }
    uVar11 = 0;
    local_90 = &PTR_FUN_049ff718;
    local_88 = (undefined ***)CONCAT44(local_88._4_4_,2000);
    do {
      (**(code **)(*param_1 + 0x10))(auStack_70,param_1,uVar11);
      lVar12 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar12 + (ulong)(uVar11 >> 5) * 4) & uVar2) != 0) {
        lVar12 = *(long *)puVar5;
        uVar9 = FUN_0277d6c4(auStack_70);
        if (*(long *)puVar5 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar13 = (*(code *)*local_90)(&local_90,auStack_70), (uVar13 & 1) != 0))
          goto LAB_02847830;
        }
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar18 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar12 + lVar18) = *(uint *)(lVar12 + lVar18) & (uVar2 ^ 0xffffffff);
      }
LAB_02847830:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
  }
  uVar23 = 1;
LAB_02847640:
  if ((((local_110 & 1) != 0) && (*(long *)(lVar16 + 0x1c2980) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x1c2980) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  return uVar23;
}

