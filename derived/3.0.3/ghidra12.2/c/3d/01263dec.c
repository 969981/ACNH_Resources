
undefined8 FUN_01263dec(undefined8 param_1,undefined2 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_14;
  
  puVar2 = PTR_DAT_04bb27a8;
  lVar8 = *(long *)PTR_DAT_04bb27a8;
  uVar6 = (uint)(ushort)param_2[0x10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
    uVar6 = 0;
    if (puVar9 != (uint *)0x0) {
      uVar6 = *puVar9;
      if (uVar6 != 0 && puVar9 != (uint *)(ulong)uVar6) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
        if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar1 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar6 = (uint)uVar1,
               uVar1 < 0x18)) goto LAB_01263ebc;
          }
        }
      }
      goto LAB_01263eb8;
    }
  }
  else {
LAB_01263eb8:
    uVar6 = 0;
  }
LAB_01263ebc:
  local_40._0_4_ = uVar6;
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x11] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x19] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
    local_40._0_4_ = 0;
    if (puVar9 != (uint *)0x0) {
      uVar6 = *puVar9;
      if (uVar6 != 0 && puVar9 != (uint *)(ulong)uVar6) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
        if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar1 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               local_40._0_4_ = (uint)uVar1, uVar1 < 0x18)) goto LAB_01263f7c;
          }
        }
      }
      goto LAB_01263f78;
    }
  }
  else {
LAB_01263f78:
    local_40._0_4_ = 0;
  }
LAB_01263f7c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x1a] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x22] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
    local_40._0_4_ = 0;
    if (puVar9 != (uint *)0x0) {
      uVar6 = *puVar9;
      if (uVar6 != 0 && puVar9 != (uint *)(ulong)uVar6) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
        if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar1 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               local_40._0_4_ = (uint)uVar1, uVar1 < 0x18)) goto LAB_0126403c;
          }
        }
      }
      goto LAB_01264038;
    }
  }
  else {
LAB_01264038:
    local_40._0_4_ = 0;
  }
LAB_0126403c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x23] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x2b] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264100;
          }
        }
        goto LAB_012640fc;
      }
    }
  }
  else {
LAB_012640fc:
    local_40._0_4_ = 0;
  }
LAB_01264100:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x2c] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x34] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_012641c4;
          }
        }
        goto LAB_012641c0;
      }
    }
  }
  else {
LAB_012641c0:
    local_40._0_4_ = 0;
  }
LAB_012641c4:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x35] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x3d] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264288;
          }
        }
        goto LAB_01264284;
      }
    }
  }
  else {
LAB_01264284:
    local_40._0_4_ = 0;
  }
LAB_01264288:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x3e] = uVar4;
  uVar6 = (uint)(ushort)param_2[10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_0126434c;
          }
        }
        goto LAB_01264348;
      }
    }
  }
  else {
LAB_01264348:
    local_40._0_4_ = 0;
  }
LAB_0126434c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[9] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x13] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264410;
          }
        }
        goto LAB_0126440c;
      }
    }
  }
  else {
LAB_0126440c:
    local_40._0_4_ = 0;
  }
LAB_01264410:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x12] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x1c] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_012644d4;
          }
        }
        goto LAB_012644d0;
      }
    }
  }
  else {
LAB_012644d0:
    local_40._0_4_ = 0;
  }
LAB_012644d4:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x1b] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x25] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264598;
          }
        }
        goto LAB_01264594;
      }
    }
  }
  else {
LAB_01264594:
    local_40._0_4_ = 0;
  }
LAB_01264598:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x24] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x2e] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_0126465c;
          }
        }
        goto LAB_01264658;
      }
    }
  }
  else {
LAB_01264658:
    local_40._0_4_ = 0;
  }
LAB_0126465c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x2d] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x37] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264720;
          }
        }
        goto LAB_0126471c;
      }
    }
  }
  else {
LAB_0126471c:
    local_40._0_4_ = 0;
  }
LAB_01264720:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x36] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x37] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_012647e4;
          }
        }
        goto LAB_012647e0;
      }
    }
  }
  else {
LAB_012647e0:
    local_40._0_4_ = 0;
  }
LAB_012647e4:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x40] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x38] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_012648a8;
          }
        }
        goto LAB_012648a4;
      }
    }
  }
  else {
LAB_012648a4:
    local_40._0_4_ = 0;
  }
LAB_012648a8:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x41] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x39] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_0126496c;
          }
        }
        goto LAB_01264968;
      }
    }
  }
  else {
LAB_01264968:
    local_40._0_4_ = 0;
  }
LAB_0126496c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x42] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x3a] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264a30;
          }
        }
        goto LAB_01264a2c;
      }
    }
  }
  else {
LAB_01264a2c:
    local_40._0_4_ = 0;
  }
LAB_01264a30:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x43] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x3b] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264af4;
          }
        }
        goto LAB_01264af0;
      }
    }
  }
  else {
LAB_01264af0:
    local_40._0_4_ = 0;
  }
LAB_01264af4:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x44] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x3c] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264bb8;
          }
        }
        goto LAB_01264bb4;
      }
    }
  }
  else {
LAB_01264bb4:
    local_40._0_4_ = 0;
  }
LAB_01264bb8:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x45] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x3d] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar1 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               local_40._0_4_ = (uint)uVar1, uVar1 < 0x18)) goto LAB_01264c7c;
          }
        }
        goto LAB_01264c78;
      }
    }
  }
  else {
LAB_01264c78:
    local_40._0_4_ = 0;
  }
LAB_01264c7c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[0x46] = uVar4;
  uVar6 = (uint)(ushort)param_2[10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264d40;
          }
        }
        goto LAB_01264d3c;
      }
    }
  }
  else {
LAB_01264d3c:
    local_40._0_4_ = 0;
  }
LAB_01264d40:
  uVar4 = FUN_01265c90(&local_40);
  param_2[1] = uVar4;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[0xb] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264e04;
          }
        }
        goto LAB_01264e00;
      }
    }
  }
  else {
LAB_01264e00:
    local_40._0_4_ = 0;
  }
LAB_01264e04:
  uVar4 = FUN_01265c90(&local_40);
  param_2[2] = uVar4;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[0xc] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264ec8;
          }
        }
        goto LAB_01264ec4;
      }
    }
  }
  else {
LAB_01264ec4:
    local_40._0_4_ = 0;
  }
LAB_01264ec8:
  uVar4 = FUN_01265c90(&local_40);
  param_2[3] = uVar4;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[0xd] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01264f8c;
          }
        }
        goto LAB_01264f88;
      }
    }
  }
  else {
LAB_01264f88:
    local_40._0_4_ = 0;
  }
LAB_01264f8c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[4] = uVar4;
  uVar6 = (uint)(ushort)param_2[0xe] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01265050;
          }
        }
        goto LAB_0126504c;
      }
    }
  }
  else {
LAB_0126504c:
    local_40._0_4_ = 0;
  }
LAB_01265050:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[5] = uVar4;
  uVar6 = (uint)(ushort)param_2[0xf] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_01265114;
          }
        }
        goto LAB_01265110;
      }
    }
  }
  else {
LAB_01265110:
    local_40._0_4_ = 0;
  }
LAB_01265114:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[6] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (local_40._0_4_ = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               (uint)local_40 < 0x18)) goto LAB_012651d8;
          }
        }
        goto LAB_012651d4;
      }
    }
  }
  else {
LAB_012651d4:
    local_40._0_4_ = 0;
  }
LAB_012651d8:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[7] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x11] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    local_40._0_4_ = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      local_40._0_4_ = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar1 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2),
               local_40._0_4_ = (uint)uVar1, uVar1 < 0x18)) goto LAB_0126529c;
          }
        }
        goto LAB_01265298;
      }
    }
  }
  else {
LAB_01265298:
    local_40._0_4_ = 0;
  }
LAB_0126529c:
  uVar4 = FUN_01265c90(&local_40);
  lVar8 = *(long *)puVar2;
  param_2[8] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    uVar7 = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar1 = *(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar7 = (uint)uVar1,
               uVar1 < 0x18)) goto LAB_01265360;
          }
        }
        goto LAB_0126535c;
      }
    }
  }
  else {
LAB_0126535c:
    uVar7 = 0;
  }
LAB_01265360:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar7);
  uVar4 = FUN_01265c90(&local_40);
  param_2[8] = uVar4;
  puVar3 = PTR_DAT_04bbc398;
  local_40 = PTR_DAT_04bbc398 + 0x10;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[0x10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
  }
  else {
    local_38 = 0;
  }
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 2;
    }
    else {
      local_14 = 1;
    }
  }
  else {
    local_14 = 0;
  }
  uVar4 = FUN_01265c90(&local_14);
  param_2[7] = uVar4;
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 8;
    }
    else {
      local_14 = 7;
    }
  }
  else {
    local_14 = 6;
  }
  uVar4 = FUN_01265c90(&local_14);
  lVar8 = *(long *)puVar2;
  param_2[0x11] = uVar4;
  uVar6 = (uint)(ushort)param_2[10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    uVar7 = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar7 = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar7 < 0x18))
            goto LAB_012654dc;
          }
        }
        goto LAB_012654d8;
      }
    }
  }
  else {
LAB_012654d8:
    uVar7 = 0;
  }
LAB_012654dc:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar7);
  uVar4 = FUN_01265c90(&local_40);
  *param_2 = uVar4;
  local_40 = puVar3 + 0x10;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[10] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
  }
  else {
    local_38 = 0;
  }
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 2;
    }
    else {
      local_14 = 1;
    }
  }
  else {
    local_14 = 0;
  }
  uVar4 = FUN_01265c90(&local_14);
  param_2[1] = uVar4;
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 0x14;
    }
    else {
      local_14 = 0x13;
    }
  }
  else {
    local_14 = 0x12;
  }
  uVar4 = FUN_01265c90(&local_14);
  lVar8 = *(long *)puVar2;
  param_2[9] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x3d] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    uVar7 = 0;
    if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05159970) &&
               (uVar7 = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar7 < 0x18))
            goto LAB_01265650;
          }
        }
        goto LAB_0126564c;
      }
    }
  }
  else {
LAB_0126564c:
    uVar7 = 0;
  }
LAB_01265650:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar7);
  uVar4 = FUN_01265c90(&local_40);
  local_40 = puVar3 + 0x10;
  param_2[0x47] = uVar4;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[0x3d] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
  }
  else {
    local_38 = 0;
  }
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 0xe;
    }
    else {
      local_14 = 0xd;
    }
  }
  else {
    local_14 = 0xc;
  }
  uVar4 = FUN_01265c90(&local_14);
  param_2[0x46] = uVar4;
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 8;
    }
    else {
      local_14 = 7;
    }
  }
  else {
    local_14 = 6;
  }
  uVar4 = FUN_01265c90(&local_14);
  lVar8 = *(long *)puVar2;
  param_2[0x3e] = uVar4;
  uVar6 = (uint)(ushort)param_2[0x37] - (uint)*(ushort *)(lVar8 + 0xb90);
  if ((uVar6 < *(uint *)(lVar8 + 0xb70)) &&
     (puVar9 = *(uint **)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8), puVar9 != (uint *)0x0))
  {
    uVar6 = *puVar9;
    uVar7 = 0;
    if ((uVar6 == 0) || (puVar9 == (uint *)(ulong)uVar6)) goto LAB_012657c4;
    puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
    uVar7 = 0;
    if (*puVar10 == 0) goto LAB_012657c4;
    uVar6 = puVar10[1];
    if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
      lVar8 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar8 != 0) {
        uVar7 = 0;
        if ((ulong)uVar6 != 0) {
          uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar6);
        }
        if (*puVar10 <= uVar7) {
          uVar7 = 0xffffffff;
        }
        if ((uVar7 < DAT_05159970) &&
           (uVar7 = (uint)*(ushort *)(DAT_05159978 + (long)(int)uVar7 * 2), uVar7 < 0x18))
        goto LAB_012657c4;
      }
    }
  }
  uVar7 = 0;
LAB_012657c4:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar7);
  uVar4 = FUN_01265c90(&local_40);
  local_40 = puVar3 + 0x10;
  param_2[0x3f] = uVar4;
  lVar8 = *(long *)puVar2;
  uVar6 = (uint)(ushort)param_2[0x37] - (uint)*(ushort *)(lVar8 + 0xb90);
  if (uVar6 < *(uint *)(lVar8 + 0xb70)) {
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0xb78) + (long)(int)uVar6 * 8);
  }
  else {
    local_38 = 0;
  }
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 0xe;
    }
    else {
      local_14 = 0xd;
    }
  }
  else {
    local_14 = 0xc;
  }
  uVar4 = FUN_01265c90(&local_14);
  param_2[0x40] = uVar4;
  uVar5 = FUN_01323d80(&local_40);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_01323ed4(&local_40);
    if ((uVar5 & 1) == 0) {
      local_14 = 0x14;
    }
    else {
      local_14 = 0x13;
    }
  }
  else {
    local_14 = 0x12;
  }
  uVar4 = FUN_01265c90(&local_14);
  param_2[0x36] = uVar4;
  return 1;
}

