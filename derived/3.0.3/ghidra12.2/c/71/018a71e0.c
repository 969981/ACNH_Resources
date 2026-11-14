
void FUN_018a71e0(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined *local_138;
  undefined8 uStack_130;
  float local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  uint local_24;
  
  puVar4 = PTR_DAT_04bbbb88;
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) || *(char *)(param_1 + 0x888) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x894) != 2) {
    return;
  }
  if (*PTR_DAT_04bbbb88 == '\0') goto LAB_018a788c;
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x8c0) == '\0')) {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
LAB_018a7348:
      lVar8 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
    }
    else {
      local_118 = CONCAT44(local_118._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_018a7348;
      lVar8 = FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
    }
    iVar7 = *(byte *)(lVar8 + 2) - 1;
    uVar6 = *(uint *)(lVar8 + 4);
    if ((uVar6 & 0xfc) == 4) {
      fVar11 = 1.4013e-45;
    }
    else {
      uVar1 = uVar6 & 0xff;
      if ((uVar6 & 0xf8) == 8) {
        fVar11 = 2.8026e-45;
      }
      else if (uVar1 == 0x10) {
        fVar11 = 4.2039e-45;
      }
      else if (uVar1 - 0x11 < 2) {
        fVar11 = 5.60519e-45;
      }
      else {
        fVar11 = 7.00649e-45;
        if (3 < uVar1 - 0x13) {
          fVar11 = 0.0;
        }
      }
    }
    if ((iVar7 == *(int *)(param_1 + 0x8b8)) && (fVar11 == *(float *)(param_1 + 0x8bc))) {
      return;
    }
    *(int *)(param_1 + 0x8b8) = iVar7;
    local_124 = fVar11;
  }
  else {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
LAB_018a7310:
      lVar8 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
    }
    else {
      local_118 = CONCAT44(local_118._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_018a7310;
      lVar8 = FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
    }
    uVar6 = *(uint *)(lVar8 + 4);
    *(uint *)(param_1 + 0x8b8) = *(byte *)(lVar8 + 2) - 1;
    if ((uVar6 & 0xfc) == 4) {
      fVar11 = 1.4013e-45;
    }
    else {
      uVar1 = uVar6 & 0xff;
      if ((uVar6 & 0xf8) == 8) {
        fVar11 = 2.8026e-45;
      }
      else if (uVar1 == 0x10) {
        fVar11 = 4.2039e-45;
      }
      else if (uVar1 - 0x11 < 2) {
        fVar11 = 5.60519e-45;
      }
      else {
        fVar11 = 7.00649e-45;
        if (3 < uVar1 - 0x13) {
          fVar11 = 0.0;
        }
      }
    }
  }
  *(float *)(param_1 + 0x8bc) = fVar11;
  if (*puVar4 == '\0') goto LAB_018a788c;
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  puVar4 = PTR_DAT_04bb47e0;
  local_108 = 0;
  local_d8 = 0x80;
  local_50 = 7;
  local_55 = 0;
  local_104 = 0x3f800000;
  puStack_e0 = local_d4;
  local_d4[0] = 0;
  local_fc = 0x17;
  lVar8 = *(long *)PTR_DAT_04bb47e0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_48 = 0;
  local_4c = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0x7d00000000;
  local_110 = 0;
  local_24 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < local_24) {
    local_24 = 0;
  }
  if (*(char *)(lVar8 + 0x660) == '\0') {
    *(undefined4 *)(param_1 + 0x8c4) = 0;
  }
  else if (*(int *)(param_1 + 0x8c4) == 0) {
    local_138 = (undefined *)0x26b;
    FUN_0277d4ac(&local_138);
    lVar9 = FUN_01950d30(lVar8,&local_24);
    if (lVar9 != 0) {
      uVar6 = FUN_0277d6c4(&local_138);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar9 != 0) {
          uVar6 = *(int *)(param_1 + 0x8bc) + *(int *)(param_1 + 0x8b8) * 6;
          plVar3 = (long *)(lVar8 + 0x170) + (ulong)uVar6 * 2;
          if (0x47 < uVar6) {
            plVar3 = (long *)(lVar8 + 0x170);
          }
          pcVar12 = (code *)*plVar3;
          if ((plVar3[1] & 1U) != 0) {
            pcVar12 = *(code **)(pcVar12 + *(long *)(lVar9 + (plVar3[1] >> 1)));
          }
          sVar5 = (*pcVar12)();
          if (((sVar5 != 0) &&
              (uVar10 = FUN_01955984(*(undefined8 *)puVar4,0x26b), (uVar10 & 1) != 0)) &&
             (uVar10 = FUN_018a16b4(0x26b), (uVar10 & 1) != 0)) {
            lVar8 = *(long *)puVar4;
            if (NAN(*(float *)(lVar8 + 0x664))) {
              local_138 = (undefined *)CONCAT44(local_138._4_4_,0x26b);
              uVar10 = FUN_018d2d0c(*(undefined4 *)(param_1 + 0x8c4),&local_138,&local_118);
              puVar2 = PTR_DAT_04bb4008;
              if ((uVar10 & 1) != 0) {
                uVar13 = FUN_01a12580(*(undefined8 *)PTR_DAT_04bb4008,0x26b);
                local_104 = CONCAT44(local_104._4_4_,uVar13);
                local_f8 = CONCAT44(local_f8._4_4_,0x26b);
                uStack_130 = FUN_01a113c0(*(undefined8 *)puVar2,0x26b);
                local_138 = PTR_DAT_04bb2020 + 0x10;
                FUN_00709380(&local_118,&local_138);
                iVar7 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,
                                     *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),1);
                puVar2 = PTR_DAT_04bb3238;
                *(int *)(param_1 + 0x8c4) = iVar7;
                if (iVar7 != *(int *)puVar2) {
                  lVar9 = *(long *)puVar4;
                  lVar8 = *(long *)puVar4;
                  *(undefined8 *)(lVar9 + 0x664) = local_110;
                  *(undefined4 *)(lVar9 + 0x66c) = local_108;
                  goto LAB_018a7690;
                }
LAB_018a765c:
                *(undefined1 *)(param_1 + 0x8c0) = 1;
                lVar8 = *(long *)puVar4;
                goto LAB_018a7690;
              }
LAB_018a7864:
              *(undefined1 *)(param_1 + 0x8c0) = 1;
            }
            else {
              uStack_120 = *(undefined4 *)(lVar8 + 0x668);
              local_11c = *(undefined4 *)(lVar8 + 0x66c);
              local_124 = *(float *)(lVar8 + 0x664);
              uVar10 = FUN_018d2af4(&local_124,0x26b);
              puVar2 = PTR_DAT_04bb4008;
              if ((uVar10 & 1) == 0) {
                lVar8 = *(long *)puVar4;
                *(undefined8 *)(lVar8 + 0x664) = 0x7fc000007fc00000;
                *(undefined4 *)(lVar8 + 0x66c) = 0x7fc00000;
                goto LAB_018a7864;
              }
              uVar13 = FUN_01a12580(*(undefined8 *)PTR_DAT_04bb4008,0x26b);
              local_f8 = CONCAT44(local_f8._4_4_,0x26b);
              local_110 = CONCAT44(uStack_120,local_124);
              local_108 = local_11c;
              local_104 = CONCAT44(local_104._4_4_,uVar13);
              uStack_130 = FUN_01a113c0(*(undefined8 *)puVar2,0x26b);
              local_138 = PTR_DAT_04bb2020 + 0x10;
              FUN_00709380(&local_118,&local_138);
              iVar7 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,
                                   *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),1);
              puVar2 = PTR_DAT_04bb3238;
              *(int *)(param_1 + 0x8c4) = iVar7;
              if (iVar7 == *(int *)puVar2) goto LAB_018a765c;
            }
            lVar8 = *(long *)puVar4;
            goto LAB_018a7690;
          }
        }
      }
    }
    lVar8 = *(long *)puVar4;
    *(undefined8 *)(lVar8 + 0x664) = 0x7fc000007fc00000;
    *(undefined4 *)(lVar8 + 0x66c) = 0x7fc00000;
  }
LAB_018a7690:
  if (*(char *)(lVar8 + 0x670) != '\0') {
    if (*(int *)(param_1 + 0x8c8) == 0) {
      local_138 = (undefined *)0x26e;
      FUN_0277d4ac(&local_138);
      lVar9 = FUN_01950d30(lVar8,&local_24);
      if (lVar9 != 0) {
        uVar6 = FUN_0277d6c4(&local_138);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
          lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar9 != 0) {
            uVar6 = *(int *)(param_1 + 0x8bc) + *(int *)(param_1 + 0x8b8) * 6;
            plVar3 = (long *)(lVar8 + 0x170) + (ulong)uVar6 * 2;
            if (0x47 < uVar6) {
              plVar3 = (long *)(lVar8 + 0x170);
            }
            pcVar12 = (code *)*plVar3;
            if ((plVar3[1] & 1U) != 0) {
              pcVar12 = *(code **)(pcVar12 + *(long *)(lVar9 + (plVar3[1] >> 1)));
            }
            sVar5 = (*pcVar12)();
            if (((sVar5 != 0) &&
                (uVar10 = FUN_01955984(*(undefined8 *)puVar4,0x26e), (uVar10 & 1) != 0)) &&
               (uVar10 = FUN_018a16b4(0x26e), (uVar10 & 1) != 0)) {
              lVar8 = *(long *)puVar4;
              if (NAN(*(float *)(lVar8 + 0x674))) {
                local_138 = (undefined *)CONCAT44(local_138._4_4_,0x26e);
                uVar10 = FUN_018d2d0c(*(undefined4 *)(param_1 + 0x8c8),&local_138,&local_118);
                puVar2 = PTR_DAT_04bb4008;
                if ((uVar10 & 1) != 0) {
                  uVar13 = FUN_01a12580(*(undefined8 *)PTR_DAT_04bb4008,0x26e);
                  local_104 = CONCAT44(local_104._4_4_,uVar13);
                  local_f8 = CONCAT44(local_f8._4_4_,0x26e);
                  uStack_130 = FUN_01a113c0(*(undefined8 *)puVar2,0x26e);
                  local_138 = PTR_DAT_04bb2020 + 0x10;
                  FUN_00709380(&local_118,&local_138);
                  iVar7 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,
                                       *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),1);
                  puVar2 = PTR_DAT_04bb3238;
                  *(int *)(param_1 + 0x8c8) = iVar7;
                  if (iVar7 != *(int *)puVar2) {
                    lVar8 = *(long *)puVar4;
                    *(undefined8 *)(lVar8 + 0x674) = local_110;
                    *(undefined4 *)(lVar8 + 0x67c) = local_108;
                    return;
                  }
                  goto LAB_018a7820;
                }
              }
              else {
                uStack_120 = *(undefined4 *)(lVar8 + 0x678);
                local_11c = *(undefined4 *)(lVar8 + 0x67c);
                local_124 = *(float *)(lVar8 + 0x674);
                uVar10 = FUN_018d2af4(&local_124,0x26e);
                puVar2 = PTR_DAT_04bb4008;
                if ((uVar10 & 1) != 0) {
                  uVar13 = FUN_01a12580(*(undefined8 *)PTR_DAT_04bb4008,0x26e);
                  local_f8 = CONCAT44(local_f8._4_4_,0x26e);
                  local_110 = CONCAT44(uStack_120,local_124);
                  local_108 = local_11c;
                  local_104 = CONCAT44(local_104._4_4_,uVar13);
                  uStack_130 = FUN_01a113c0(*(undefined8 *)puVar2,0x26e);
                  local_138 = PTR_DAT_04bb2020 + 0x10;
                  FUN_00709380(&local_118,&local_138);
                  iVar7 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,
                                       *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),1);
                  puVar4 = PTR_DAT_04bb3238;
                  *(int *)(param_1 + 0x8c8) = iVar7;
                  if (iVar7 != *(int *)puVar4) {
                    return;
                  }
LAB_018a7820:
                  *(undefined1 *)(param_1 + 0x8c0) = 1;
                  return;
                }
                lVar8 = *(long *)puVar4;
                *(undefined8 *)(lVar8 + 0x674) = 0x7fc000007fc00000;
                *(undefined4 *)(lVar8 + 0x67c) = 0x7fc00000;
              }
LAB_018a788c:
              *(undefined1 *)(param_1 + 0x8c0) = 1;
              return;
            }
          }
        }
      }
      lVar8 = *(long *)puVar4;
      *(undefined8 *)(lVar8 + 0x674) = 0x7fc000007fc00000;
      *(undefined4 *)(lVar8 + 0x67c) = 0x7fc00000;
      return;
    }
    if (!NAN(*(float *)(lVar8 + 0x674))) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  return;
}

