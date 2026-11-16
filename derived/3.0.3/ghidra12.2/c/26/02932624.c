
/* WARNING: Removing unreachable block (ram,0x02932b6c) */
/* WARNING: Removing unreachable block (ram,0x029329f4) */
/* WARNING: Removing unreachable block (ram,0x02932914) */
/* WARNING: Removing unreachable block (ram,0x02932808) */
/* WARNING: Removing unreachable block (ram,0x029326e4) */
/* WARNING: Removing unreachable block (ram,0x02932674) */
/* WARNING: Removing unreachable block (ram,0x02932768) */
/* WARNING: Removing unreachable block (ram,0x02932890) */
/* WARNING: Removing unreachable block (ram,0x02932984) */
/* WARNING: Removing unreachable block (ram,0x02932af4) */
/* WARNING: Removing unreachable block (ram,0x02932ce0) */

undefined8 FUN_02932624(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint local_38;
  char local_34;
  
  uVar3 = FUN_02911218(param_1 + 3);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_38 = 0x1b;
  (**(code **)(DAT_055cc3c8 + 0x18))(&DAT_055cc3c8);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc3d0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_34 != -0x2e) {
    return 0;
  }
  param_1[6] = local_38;
  local_38 = 0xe;
  (**(code **)(DAT_055cc2f8 + 0x18))(&DAT_055cc2f8);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc300);
  uVar1 = local_38;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_34 == -1) {
    return 0;
  }
  if (local_34 == -0x2f) {
    if ((int)local_38 < 0) {
      return 0;
    }
  }
  else if (local_34 != -0x2d) {
    return 0;
  }
  local_38 = 0x1d;
  (**(code **)(DAT_055cc3e8 + 0x18))(&DAT_055cc3e8);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc3f0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_34 == -1) {
    return 0;
  }
  if (local_34 == -0x2f) {
    if ((int)local_38 < 0) {
      return 0;
    }
  }
  else if (local_34 != -0x2d) {
    return 0;
  }
  *param_1 = local_38;
  param_1[1] = 0;
  param_1[8] = uVar1;
  local_38 = 0x1e;
  (**(code **)(DAT_055cc3f8 + 0x18))(&DAT_055cc3f8);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc400);
  if (((uVar3 & 1) != 0) && (local_34 != -1)) {
    if (local_34 != -0x2d) {
      if (local_34 != -0x2f) goto LAB_02932864;
      local_38 = local_38 & ((int)local_38 >> 0x1f ^ 0xffffffffU);
    }
    param_1[1] = local_38;
  }
LAB_02932864:
  param_1[2] = 0;
  local_38 = 0x24;
  (**(code **)(DAT_055cc458 + 0x18))(&DAT_055cc458);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc460);
  if (((uVar3 & 1) != 0) && (local_34 != -1)) {
    if (local_34 != -0x2d) {
      if (local_34 != -0x2f) goto LAB_029328ec;
      local_38 = local_38 & ((int)local_38 >> 0x1f ^ 0xffffffffU);
    }
    param_1[2] = local_38;
  }
LAB_029328ec:
  local_38 = 0x21;
  (**(code **)(DAT_055cc428 + 0x18))(&DAT_055cc428);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc430);
  if (((uVar3 & 1) != 0) && (local_34 == -0x2e)) {
    param_1[9] = local_38;
  }
  local_38 = 0x22;
  (**(code **)(DAT_055cc438 + 0x18))(&DAT_055cc438);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc440);
  if (((uVar3 & 1) != 0) && (local_34 == -0x2e)) {
    param_1[10] = local_38;
  }
  local_38 = 0x23;
  (**(code **)(DAT_055cc448 + 0x18))(&DAT_055cc448);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc450);
  uVar1 = local_38;
  if (((uVar3 & 1) != 0) && (local_34 != -1)) {
    if (local_34 == -0x2f) {
      if (-1 < (int)local_38) goto LAB_02932a50;
    }
    else if (local_34 == -0x2d) {
LAB_02932a50:
      if (((DAT_04c9acf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar2 != 0))
      {
        FUN_00773950(&DAT_04c9ace0);
        __cxa_guard_release(&DAT_04c9acf0);
      }
      if (0 < (int)DAT_04c9ace0) {
        uVar3 = 0;
        do {
          if (*(uint *)(DAT_04c9ace8 + uVar3 * 4) == uVar1) goto LAB_02932a98;
          uVar3 = uVar3 + 1;
        } while (DAT_04c9ace0 != uVar3);
      }
      uVar3 = 0;
LAB_02932a98:
      local_38 = (uint)uVar3;
      if (((DAT_04c9acf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c9acf0), iVar2 != 0)) {
        FUN_00773950(&DAT_04c9ace0);
        __cxa_guard_release(&DAT_04c9acf0);
      }
      uVar1 = local_38;
      if (DAT_04c9ace0 <= local_38) {
        uVar1 = 0;
      }
      uVar1 = FUN_0292e540(*(undefined4 *)(DAT_04c9ace8 + (long)(int)uVar1 * 4));
      if (uVar1 < 0x1b) {
        param_1[0xb] = uVar1;
      }
    }
  }
  local_38 = 0x1f;
  (**(code **)(DAT_055cc408 + 0x18))(&DAT_055cc408);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc410);
  if (((uVar3 & 1) == 0) || (local_34 != -0x2f)) {
    local_38 = 0xffffffff;
  }
  param_1[0xc] = local_38;
  local_38 = 0x20;
  (**(code **)(DAT_055cc418 + 0x18))(&DAT_055cc418);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc420);
  if (((uVar3 & 1) != 0) && (local_34 != -1)) {
    if (local_34 == -0x2f) {
      if (-1 < (int)local_38) goto LAB_02932bc8;
    }
    else if (local_34 == -0x2d) {
LAB_02932bc8:
      if ((int)local_38 < -0x186982f1) {
        if ((int)local_38 < -0x41b19d93) {
          if (local_38 == 0x8a86264d) {
            uVar1 = 5;
          }
          else {
            if (local_38 != 0xb6eede09) goto LAB_02932cb8;
            uVar1 = 0;
          }
        }
        else if (local_38 == 0xbe4e626d) {
          uVar1 = 2;
        }
        else {
          if (local_38 != 0xe2fd34ee) goto LAB_02932cb8;
          uVar1 = 6;
        }
      }
      else if ((int)local_38 < -0xd61fb65) {
        if (local_38 == 0xe7967d0f) {
          uVar1 = 7;
        }
        else {
          if (local_38 != 0xeb2d196c) goto LAB_02932cb8;
          uVar1 = 3;
        }
      }
      else if (local_38 == 0xf29e049b) {
        uVar1 = 4;
      }
      else {
        if (local_38 != 0x6f513526) goto LAB_02932cb8;
        uVar1 = 1;
      }
      param_1[0xd] = uVar1;
    }
  }
LAB_02932cb8:
  local_38 = 0x25;
  (**(code **)(DAT_055cc468 + 0x18))(&DAT_055cc468);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,DAT_055cc470);
  if (((uVar3 & 1) != 0) && (local_34 != -1)) {
    if (local_34 == -0x2f) {
      if ((int)local_38 < 0) goto LAB_02932db0;
    }
    else if (local_34 != -0x2d) goto LAB_02932db0;
    uVar1 = 0;
    if ((int)local_38 < -0x23cfb731) {
      if (local_38 == 0x8f31fc94) {
        uVar1 = 2;
      }
      else if (local_38 == 0xa532d8e8) {
        uVar1 = 1;
      }
    }
    else if (local_38 == 0xdc3048cf) {
      uVar1 = 4;
    }
    else if (local_38 == 0x7c0e1e76) {
      uVar1 = 3;
    }
    param_1[0xe] = uVar1;
  }
LAB_02932db0:
  *(undefined1 *)(param_1 + 0xf) = 0;
  return 1;
}

