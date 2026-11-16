
void FUN_02803ed0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  void *__s;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_7d0;
  undefined1 auStack_7c8 [1876];
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  local_7d0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7c8,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_74 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
  local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
  local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7d0);
  memset(__s,0,0x754);
  local_60 = &PTR_LAB_049ff678;
  FUN_008a1ba0(&local_7d0,&local_60);
  lVar8 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
  uVar12 = 0;
  do {
    if ((*(uint *)(lVar8 + (uVar12 >> 5) * 4) >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0)
    goto LAB_02803fd0;
    uVar7 = (uint)uVar12 + 1;
    uVar12 = (ulong)uVar7;
  } while (uVar7 != 15000);
  uVar12 = 0;
LAB_02803fd0:
  lVar9 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
  puVar6 = PTR_DAT_04bbfe58;
  puVar5 = PTR_DAT_04bb37e0;
  iVar10 = 15000;
  do {
    if ((*(uint *)(lVar9 + (ulong)(iVar10 - 1U >> 5) * 4) >> (ulong)(iVar10 - 1U & 0x1f) & 1) != 0)
    break;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (iVar10 == (int)uVar12) {
LAB_028040fc:
    puVar5 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(param_1);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = *param_1;
        uStack_54 = param_1[1];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 2);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[2];
        uStack_54 = param_1[3];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 2);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 4);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[4];
        uStack_54 = param_1[5];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 4);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 6);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[6];
        uStack_54 = param_1[7];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 6);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 8);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[8];
        uStack_54 = param_1[9];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 8);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 10);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[10];
        uStack_54 = param_1[0xb];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 10);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0xc);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0xc];
        uStack_54 = param_1[0xd];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0xc);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0xe);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0xe];
        uStack_54 = param_1[0xf];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0xe);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x10);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x10];
        uStack_54 = param_1[0x11];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x10);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x12);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x12];
        uStack_54 = param_1[0x13];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x12);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x14);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x14];
        uStack_54 = param_1[0x15];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x14);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x16);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x16];
        uStack_54 = param_1[0x17];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x16);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x18);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x18];
        uStack_54 = param_1[0x19];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x18);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x1a);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x1a];
        uStack_54 = param_1[0x1b];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x1a);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x1c);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x1c];
        uStack_54 = param_1[0x1d];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x1c);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x1e);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x1e];
        uStack_54 = param_1[0x1f];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x1e);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x20);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x20];
        uStack_54 = param_1[0x21];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x20);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x22);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x22];
        uStack_54 = param_1[0x23];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x22);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x24);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x24];
        uStack_54 = param_1[0x25];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x24);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x26);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x26];
        uStack_54 = param_1[0x27];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x26);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x28);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x28];
        uStack_54 = param_1[0x29];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x28);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x2a);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x2a];
        uStack_54 = param_1[0x2b];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x2a);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x2c);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x2c];
        uStack_54 = param_1[0x2d];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x2c);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x2e);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x2e];
        uStack_54 = param_1[0x2f];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x2e);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x30);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x30];
        uStack_54 = param_1[0x31];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x30);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x32);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x32];
        uStack_54 = param_1[0x33];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x32);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x34);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x34];
        uStack_54 = param_1[0x35];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x34);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x36);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x36];
        uStack_54 = param_1[0x37];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x36);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x38);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x38];
        uStack_54 = param_1[0x39];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x38);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x3a);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x3a];
        uStack_54 = param_1[0x3b];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x3a);
          }
        }
        lVar8 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x3c);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x3c];
        uStack_54 = param_1[0x3d];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x3c);
          }
        }
        lVar9 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(param_1 + 0x3e);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_50 = 0;
        local_58 = param_1[0x3e];
        uStack_54 = param_1[0x3f];
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar7 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0277d6c4(param_1 + 0x3e);
          }
        }
      }
    }
    return;
  }
  uVar11 = 0;
LAB_02804030:
  puVar2 = (undefined4 *)(puVar6 + uVar12 * 8);
  if (0x752 < (uint)(uVar12 >> 3)) {
    puVar2 = (undefined4 *)puVar6;
  }
  puVar3 = (undefined4 *)puVar5;
  if ((uint)uVar12 < 0x3a99) {
    puVar3 = puVar2;
  }
  uVar4 = puVar3[1];
  param_1[uVar11 * 2] = *puVar3;
  (param_1 + uVar11 * 2)[1] = uVar4;
  do {
    uVar7 = (int)uVar12 + 1;
    uVar12 = (ulong)uVar7;
    if (0x752 < uVar7 >> 3) {
      uVar7 = 0x3a95;
      goto LAB_02804090;
    }
  } while ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) == 0);
  goto LAB_028040e8;
  while( true ) {
    if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)
    goto LAB_028040e4;
    uVar7 = uVar7 - 3;
    if (uVar7 == 0xfffffffd) break;
LAB_02804090:
    uVar1 = uVar7 + 2;
    if (((*(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar7 + 1,
       (*(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar7 = uVar1;
LAB_028040e4:
      uVar12 = (ulong)(uVar7 + 1);
      goto LAB_028040e8;
    }
  }
  uVar12 = 0;
LAB_028040e8:
  if ((0x1e < uVar11) || (uVar11 = uVar11 + 1, iVar10 == (int)uVar12)) goto LAB_028040fc;
  goto LAB_02804030;
}

