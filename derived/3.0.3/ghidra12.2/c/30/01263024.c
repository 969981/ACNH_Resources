
undefined8 FUN_01263024(ushort *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  uVar3 = (uint)*param_1 - (uint)*(ushort *)(lVar5 + 0xd90);
  if ((*(uint *)(lVar5 + 0xd70) <= uVar3) ||
     (puVar7 = *(uint **)(*(long *)(lVar5 + 0xd78) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0))
  {
    return 0;
  }
  uVar3 = *puVar7;
  if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_01263078:
    local_24 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_24 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a40) &&
             (uVar2 = *(ushort *)(DAT_05161a48 + (long)(int)uVar1 * 2), local_24 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_0126307c;
        }
      }
      goto LAB_01263078;
    }
  }
LAB_0126307c:
  uVar4 = FUN_012658d0(&local_24);
  *(undefined2 *)(param_2 + 0x14) = uVar4;
  uVar3 = *puVar7;
  if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_0126309c:
    local_28 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_28 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051619e0) &&
             (uVar2 = *(ushort *)(DAT_051619e8 + (long)(int)uVar1 * 2), local_28 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012630a0;
        }
      }
      goto LAB_0126309c;
    }
  }
LAB_012630a0:
  uVar4 = FUN_012658d0(&local_28);
  *(undefined2 *)(param_2 + 0x16) = uVar4;
  uVar3 = *puVar7;
  if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_012630c0:
    local_2c = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_2c = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051619f0) &&
             (uVar2 = *(ushort *)(DAT_051619f8 + (long)(int)uVar1 * 2), local_2c = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012630c4;
        }
      }
      goto LAB_012630c0;
    }
  }
LAB_012630c4:
  uVar4 = FUN_012658d0(&local_2c);
  *(undefined2 *)(param_2 + 0x18) = uVar4;
  uVar3 = *puVar7;
  if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_012630e4:
    local_30 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_30 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a00) &&
             (uVar2 = *(ushort *)(DAT_05161a08 + (long)(int)uVar1 * 2), local_30 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012630e8;
        }
      }
      goto LAB_012630e4;
    }
  }
LAB_012630e8:
  uVar4 = FUN_012658d0(&local_30);
  *(undefined2 *)(param_2 + 0x1a) = uVar4;
  uVar3 = *puVar7;
  if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_01263108:
    local_34 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_34 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a10) &&
             (uVar2 = *(ushort *)(DAT_05161a18 + (long)(int)uVar1 * 2), local_34 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_0126310c;
        }
      }
      goto LAB_01263108;
    }
  }
LAB_0126310c:
  uVar4 = FUN_012658d0(&local_34);
  *(undefined2 *)(param_2 + 0x1c) = uVar4;
  local_38 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_38 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a20) &&
             (uVar2 = *(ushort *)(DAT_05161a28 + (long)(int)uVar1 * 2), local_38 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012631a8;
        }
      }
      local_38 = 0;
    }
  }
LAB_012631a8:
  uVar4 = FUN_012658d0(&local_38);
  *(undefined2 *)(param_2 + 0x1e) = uVar4;
  local_3c = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_3c = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a30) &&
             (uVar2 = *(ushort *)(DAT_05161a38 + (long)(int)uVar1 * 2), local_3c = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263244;
        }
      }
      local_3c = 0;
    }
  }
LAB_01263244:
  uVar4 = FUN_012658d0(&local_3c);
  *(undefined2 *)(param_2 + 0x20) = uVar4;
  local_40 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_40 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161ae0) &&
             (uVar2 = *(ushort *)(DAT_05161ae8 + (long)(int)uVar1 * 2), local_40 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012632e0;
        }
      }
      local_40 = 0;
    }
  }
LAB_012632e0:
  uVar4 = FUN_012658d0(&local_40);
  *(undefined2 *)(param_2 + 0x26) = uVar4;
  local_44 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_44 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161af0) &&
             (uVar2 = *(ushort *)(DAT_05161af8 + (long)(int)uVar1 * 2), local_44 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_0126337c;
        }
      }
      local_44 = 0;
    }
  }
LAB_0126337c:
  uVar4 = FUN_012658d0(&local_44);
  *(undefined2 *)(param_2 + 0x38) = uVar4;
  local_48 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_48 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161b00) &&
             (uVar2 = *(ushort *)(DAT_05161b08 + (long)(int)uVar1 * 2), local_48 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263418;
        }
      }
      local_48 = 0;
    }
  }
LAB_01263418:
  uVar4 = FUN_012658d0(&local_48);
  *(undefined2 *)(param_2 + 0x4a) = uVar4;
  local_4c = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_4c = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161b10) &&
             (uVar2 = *(ushort *)(DAT_05161b18 + (long)(int)uVar1 * 2), local_4c = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012634b4;
        }
      }
      local_4c = 0;
    }
  }
LAB_012634b4:
  uVar4 = FUN_012658d0(&local_4c);
  *(undefined2 *)(param_2 + 0x5c) = uVar4;
  local_50 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_50 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051619a0) &&
             (uVar2 = *(ushort *)(DAT_051619a8 + (long)(int)uVar1 * 2), local_50 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263550;
        }
      }
      local_50 = 0;
    }
  }
LAB_01263550:
  uVar4 = FUN_012658d0(&local_50);
  *(undefined2 *)(param_2 + 0x32) = uVar4;
  local_54 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_54 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051619b0) &&
             (uVar2 = *(ushort *)(DAT_051619b8 + (long)(int)uVar1 * 2), local_54 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012635ec;
        }
      }
      local_54 = 0;
    }
  }
LAB_012635ec:
  uVar4 = FUN_012658d0(&local_54);
  *(undefined2 *)(param_2 + 0x44) = uVar4;
  local_58 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_58 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051619c0) &&
             (uVar2 = *(ushort *)(DAT_051619c8 + (long)(int)uVar1 * 2), local_58 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263688;
        }
      }
      local_58 = 0;
    }
  }
LAB_01263688:
  uVar4 = FUN_012658d0(&local_58);
  *(undefined2 *)(param_2 + 0x56) = uVar4;
  local_5c = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_5c = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051619d0) &&
             (uVar2 = *(ushort *)(DAT_051619d8 + (long)(int)uVar1 * 2), local_5c = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263724;
        }
      }
      local_5c = 0;
    }
  }
LAB_01263724:
  uVar4 = FUN_012658d0(&local_5c);
  *(undefined2 *)(param_2 + 0x68) = uVar4;
  local_60 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_60 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161ab0) &&
             (uVar2 = *(ushort *)(DAT_05161ab8 + (long)(int)uVar1 * 2), local_60 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012637c0;
        }
      }
      local_60 = 0;
    }
  }
LAB_012637c0:
  uVar4 = FUN_012658d0(&local_60);
  *(undefined2 *)(param_2 + 0x6e) = uVar4;
  local_64 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_64 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a50) &&
             (uVar2 = *(ushort *)(DAT_05161a58 + (long)(int)uVar1 * 2), local_64 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_0126385c;
        }
      }
      local_64 = 0;
    }
  }
LAB_0126385c:
  uVar4 = FUN_012658d0(&local_64);
  *(undefined2 *)(param_2 + 0x70) = uVar4;
  local_68 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_68 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a60) &&
             (uVar2 = *(ushort *)(DAT_05161a68 + (long)(int)uVar1 * 2), local_68 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_012638f8;
        }
      }
      local_68 = 0;
    }
  }
LAB_012638f8:
  uVar4 = FUN_012658d0(&local_68);
  *(undefined2 *)(param_2 + 0x72) = uVar4;
  local_6c = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_6c = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a70) &&
             (uVar2 = *(ushort *)(DAT_05161a78 + (long)(int)uVar1 * 2), local_6c = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263994;
        }
      }
      local_6c = 0;
    }
  }
LAB_01263994:
  uVar4 = FUN_012658d0(&local_6c);
  *(undefined2 *)(param_2 + 0x74) = uVar4;
  local_70 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_70 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a80) &&
             (uVar2 = *(ushort *)(DAT_05161a88 + (long)(int)uVar1 * 2), local_70 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263a30;
        }
      }
      local_70 = 0;
    }
  }
LAB_01263a30:
  uVar4 = FUN_012658d0(&local_70);
  *(undefined2 *)(param_2 + 0x76) = uVar4;
  local_74 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_74 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161a90) &&
             (uVar2 = *(ushort *)(DAT_05161a98 + (long)(int)uVar1 * 2), local_74 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263acc;
        }
      }
      local_74 = 0;
    }
  }
LAB_01263acc:
  uVar4 = FUN_012658d0(&local_74);
  *(undefined2 *)(param_2 + 0x78) = uVar4;
  local_78 = 0;
  uVar3 = *puVar7;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_78 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05161aa0) &&
             (uVar2 = *(ushort *)(DAT_05161aa8 + (long)(int)uVar1 * 2), local_78 = (uint)uVar2,
             uVar2 < 0x20)) goto LAB_01263b68;
        }
      }
      local_78 = 0;
    }
  }
LAB_01263b68:
  uVar4 = FUN_012658d0(&local_78);
  *(undefined2 *)(param_2 + 0x7a) = uVar4;
  return 1;
}

