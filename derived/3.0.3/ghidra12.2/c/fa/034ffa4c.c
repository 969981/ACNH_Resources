
void FUN_034ffa4c(long param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  int local_1f4;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  char *pcStack_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined *local_1c0;
  char *pcStack_1b8;
  undefined1 uStack_1a9;
  undefined8 local_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c [55];
  undefined1 local_115;
  undefined *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4 [55];
  undefined1 local_bd;
  undefined8 local_b8;
  undefined1 auStack_b0 [6];
  undefined2 local_aa;
  undefined6 uStack_a8;
  undefined2 local_a2;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined1 local_98;
  undefined4 uStack_97;
  undefined4 uStack_93;
  undefined1 uStack_8f;
  undefined2 local_8e;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  piVar1 = (int *)(param_1 + 0x1ce20);
  if (*(char *)(param_1 + 0x1d14c) != '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x220);
  iVar6 = -1;
  if (*(long *)(lVar8 + 0x570) == 0) {
    uVar15 = 0xffffffff;
    lVar11 = *(long *)(lVar8 + 0x578);
    goto joined_r0x034ffafc;
  }
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034ffac8;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_034ffb40_default;
  switch(iVar5) {
  case 0:
    uVar15 = *(uint *)(lVar11 + 0x170);
    goto LAB_034ffb84;
  case 1:
    uVar15 = *(uint *)(lVar11 + 0x180);
    goto LAB_034ffb84;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar15 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_034ffb84;
    }
    break;
  case 3:
    uVar15 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_034ffb84:
    if ((int)uVar15 < 1) break;
LAB_034ffac8:
    iVar5 = FUN_01d778dc(param_1 + 0x1ce30,0);
    if (iVar5 != 0) {
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = -(uint)(iVar5 != 3);
      lVar11 = *(long *)(lVar8 + 0x578);
joined_r0x034ffafc:
      if (lVar11 != 0) goto LAB_034ffb98;
      goto switchD_034ffc0c_default;
    }
    uVar15 = 0;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar15 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_034ffb84;
    }
  }
switchD_034ffb40_default:
  uVar15 = 0xffffffff;
  if (*(long *)(lVar8 + 0x578) == 0) goto switchD_034ffc0c_default;
LAB_034ffb98:
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034ffba8;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_034ffc0c_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_034ffc50;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_034ffc50;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_034ffc50;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_034ffc50:
    if ((int)uVar10 < 2) break;
LAB_034ffba8:
    iVar5 = FUN_01d778dc(param_1 + 0x1ce48,0);
    if (iVar5 != 0) {
      lVar8 = *(long *)(param_1 + 0x220);
      if (iVar5 == 3 && (int)uVar15 < 0) {
        uVar15 = 1;
      }
      break;
    }
    uVar15 = 1;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_034ffc50;
    }
  }
switchD_034ffc0c_default:
  if (*(long *)(lVar8 + 0x580) == 0) goto switchD_034ffcd8_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034ffc70;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_034ffcd8_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_034ffd1c;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_034ffd1c;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_034ffd1c;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_034ffd1c:
    if ((int)uVar10 < 3) break;
LAB_034ffc70:
    iVar5 = FUN_01d778dc(param_1 + 0x1ce60,0);
    if (iVar5 != 0) {
      uVar10 = 2;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    uVar15 = 2;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_034ffd1c;
    }
  }
switchD_034ffcd8_default:
  if (*(long *)(lVar8 + 0x588) == 0) goto switchD_034ffda4_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034ffd3c;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_034ffda4_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_034ffde8;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_034ffde8;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_034ffde8;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_034ffde8:
    if ((int)uVar10 < 4) break;
LAB_034ffd3c:
    iVar5 = FUN_01d778dc(param_1 + 0x1ce78,0);
    if (iVar5 != 0) {
      uVar10 = 3;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    uVar15 = 3;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_034ffde8;
    }
  }
switchD_034ffda4_default:
  if (*(long *)(lVar8 + 0x590) == 0) goto switchD_034ffe70_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034ffe08;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_034ffe70_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_034ffeb4;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_034ffeb4;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_034ffeb4;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_034ffeb4:
    if ((int)uVar10 < 5) break;
LAB_034ffe08:
    iVar5 = FUN_01d778dc(param_1 + 0x1ce90,0);
    if (iVar5 != 0) {
      uVar10 = 4;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    uVar15 = 4;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_034ffeb4;
    }
  }
switchD_034ffe70_default:
  if (*(long *)(lVar8 + 0x598) == 0) goto switchD_034fff3c_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034ffed4;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_034fff3c_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_034fff78;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_034fff78;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_034fff78;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_034fff78:
    if ((int)uVar10 < 6) break;
LAB_034ffed4:
    iVar5 = FUN_01d778dc(param_1 + 0x1cea8,0);
    uVar10 = 5;
    if (iVar5 != 0) {
      uVar10 = 5;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    goto LAB_03500220;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_034fff78;
    }
  }
switchD_034fff3c_default:
  if (*(long *)(lVar8 + 0x5a0) == 0) goto switchD_03500000_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_034fff98;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_03500000_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_03500044;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_03500044;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_03500044;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03500044:
    if ((int)uVar10 < 7) break;
LAB_034fff98:
    iVar5 = FUN_01d778dc(param_1 + 0x1cec0,0);
    if (iVar5 != 0) {
      uVar10 = 6;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    uVar15 = 6;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_03500044;
    }
  }
switchD_03500000_default:
  if (*(long *)(lVar8 + 0x5a8) == 0) goto switchD_035000cc_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_03500064;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_035000cc_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_03500110;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_03500110;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_03500110;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_03500110:
    if ((int)uVar10 < 8) break;
LAB_03500064:
    iVar5 = FUN_01d778dc(param_1 + 0x1ced8,0);
    if (iVar5 != 0) {
      uVar10 = 7;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    uVar15 = 7;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_03500110;
    }
  }
switchD_035000cc_default:
  if (*(long *)(lVar8 + 0x5b0) == 0) goto switchD_03500198_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_03500130;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto switchD_03500198_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    goto LAB_035001dc;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    goto LAB_035001dc;
  case 2:
    if (*(long *)(lVar11 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1b0);
      goto LAB_035001dc;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_035001dc:
    if ((int)uVar10 < 9) break;
LAB_03500130:
    iVar5 = FUN_01d778dc(param_1 + 0x1cef0,0);
    if (iVar5 != 0) {
      uVar10 = 8;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      lVar8 = *(long *)(param_1 + 0x220);
      uVar15 = uVar10;
      break;
    }
    uVar15 = 8;
    goto switchD_03500264_default;
  case 4:
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x1d8);
      goto LAB_035001dc;
    }
  }
switchD_03500198_default:
  if (*(long *)(lVar8 + 0x5b8) == 0) goto switchD_03500264_default;
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) goto LAB_035001fc;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar8 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x68) == 0)) goto switchD_03500264_default;
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar8 + 0x170);
    goto LAB_035002a0;
  case 1:
    uVar10 = *(uint *)(lVar8 + 0x180);
    goto LAB_035002a0;
  case 2:
    if (*(long *)(lVar8 + 0x1b8) != 0) {
      uVar10 = *(uint *)(lVar8 + 0x1b0);
      goto LAB_035002a0;
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar8 + 0x610) & ((int)*(uint *)(lVar8 + 0x610) >> 0x1f ^ 0xffffffffU);
LAB_035002a0:
    if (9 < (int)uVar10) {
LAB_035001fc:
      iVar5 = FUN_01d778dc(param_1 + 0x1cf08,0);
      uVar10 = 9;
      if (-1 < (int)uVar15 || iVar5 != 3) {
        uVar10 = uVar15;
      }
      uVar15 = uVar10;
      uVar10 = 9;
      if (iVar5 == 0) {
LAB_03500220:
        uVar15 = uVar10;
      }
    }
    break;
  case 4:
    if (*(long *)(lVar8 + 0x1e0) != 0) {
      uVar10 = *(uint *)(lVar8 + 0x1d8);
      goto LAB_035002a0;
    }
  }
switchD_03500264_default:
  lVar8 = *(long *)(*(long *)(param_1 + 0x220) + 0x5c0);
  if (lVar8 == 0) {
    return;
  }
  if ((int)uVar15 < 0) {
    return;
  }
  iVar5 = *piVar1;
  if (iVar5 - 3U < 2) {
    uVar10 = 10;
    goto LAB_03500350;
  }
  local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  uVar10 = 0;
  if (lVar11 == 0) goto LAB_03500350;
  if (*(long *)(lVar11 + 0x68) == 0) {
switchD_0350030c_default:
    uVar10 = 0;
    goto LAB_03500350;
  }
  switch(iVar5) {
  case 0:
    uVar10 = *(uint *)(lVar11 + 0x170);
    break;
  case 1:
    uVar10 = *(uint *)(lVar11 + 0x180);
    break;
  case 2:
    lVar12 = *(long *)(lVar11 + 0x1b8);
    uVar10 = *(uint *)(lVar11 + 0x1b0);
    goto LAB_03500348;
  case 3:
    uVar10 = *(uint *)(lVar11 + 0x610) & ((int)*(uint *)(lVar11 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar12 = *(long *)(lVar11 + 0x1e0);
    uVar10 = *(uint *)(lVar11 + 0x1d8);
LAB_03500348:
    if (lVar12 == 0) {
      uVar10 = 0xffffffff;
    }
    break;
  default:
    goto switchD_0350030c_default;
  }
LAB_03500350:
  if ((int)uVar10 <= (int)uVar15) {
    return;
  }
  lVar11 = param_1 + 0x1ce28;
  plVar9 = *(long **)(lVar8 + 0x220);
  lVar12 = *plVar9;
  if (lVar12 != 0) {
    local_188._4_4_ = (uint)((ulong)local_188 >> 0x20) & 0xffffff00;
    local_188 = (undefined1 *)CONCAT44(local_188._4_4_,0xb);
    local_180 = 0xffffffff;
    local_178 = 0xffffffff00000000;
    local_160 = (undefined *)((long)&local_158 + 4);
    local_190 = &local_b8;
    local_170 = CONCAT44(local_170._4_4_,0xffffffff);
    local_115 = 0;
    local_158 = (undefined1 *)CONCAT35(local_158._5_3_,0x40);
    local_168 = PTR_DAT_04bb2bc0 + 0x10;
    local_bd = 0;
    local_100 = (undefined1 *)CONCAT35(local_100._5_3_,0x40);
    local_108 = (undefined *)((long)&local_100 + 4);
    local_198 = PTR_DAT_04bb5128 + 0x10;
    uStack_a8 = 0;
    local_b8 = 0;
    auStack_b0 = (undefined1  [6])0x0;
    local_aa = 0;
    puVar4 = &local_a2;
    if (&local_a2 <= (undefined2 *)((long)&local_b8 + 2U)) {
      puVar4 = (undefined2 *)((long)&local_b8 + 2U);
    }
    local_110 = local_168;
    memset(local_190,0,(long)puVar4 + (-0xe1 - (long)&local_198) & 0xfffffffffffffffcU | 2);
    lVar14 = lVar11 + (ulong)uVar15 * 0x18 + 8;
    uVar7 = FUN_01d77c78(lVar14);
    if ((uVar7 & 1) == 0) {
      iVar6 = 4;
LAB_03500488:
      plVar9 = *(long **)(lVar12 + 0x48);
      if (plVar9[1] != 0) {
        local_1a8 = PTR_DAT_04bc0878 + 0x10;
        uStack_1a0 = 9;
        uStack_19f = 0;
        uStack_19e = 0;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_1a8);
        (**(code **)(plVar9[3] + 0x5e0))(plVar9[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar12);
      }
    }
    else {
      iVar6 = FUN_01d78088(lVar14,&local_198);
      if ((iVar6 != 3) && (iVar6 != 0)) goto LAB_03500488;
      local_1d0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1b8 = "ConstructionPortfolioAdvertising";
      puStack_1c8 = &DAT_040a04a8;
      local_1c0 = local_1d0;
      FUN_03466610(&uStack_1a9,lVar12,&local_198,&local_1c0,&local_1d0);
    }
    plVar9 = *(long **)(lVar8 + 0x220);
  }
  uVar10 = *(uint *)(lVar8 + 0x218);
  lVar12 = plVar9[1 < uVar10];
  if (lVar12 != 0) {
    lVar14 = lVar11 + (ulong)uVar15 * 0x18 + 8;
    uVar7 = FUN_01d77c78(lVar14);
    puVar3 = PTR_DAT_04bb2bc0;
    if ((uVar7 & 1) == 0) {
      iVar6 = 4;
LAB_03500600:
      plVar9 = *(long **)(lVar12 + 0x48);
      if (plVar9[1] != 0) {
        local_198 = PTR_DAT_04bc0878 + 0x10;
        local_190 = (undefined8 *)CONCAT44(local_190._4_4_,9);
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_198);
        (**(code **)(plVar9[3] + 0x5e0))(plVar9[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar12);
      }
    }
    else {
      local_180._4_4_ = (uint)((ulong)local_180 >> 0x20) & 0xffffff00;
      local_178 = 0xffffffff;
      local_180 = CONCAT44(local_180._4_4_,0xb);
      local_170 = 0xffffffff00000000;
      local_158 = local_14c;
      local_168 = (undefined *)CONCAT44(local_168._4_4_,0xffffffff);
      local_188 = auStack_b0;
      local_150 = 0x40;
      local_110._0_4_ = (uint)(uint3)local_110;
      local_14c[0] = 0;
      local_160 = PTR_DAT_04bb2bc0 + 0x10;
      local_f8 = 0x40;
      local_b8._0_4_ = (uint)(uint3)local_b8;
      local_f4[0] = 0;
      local_100 = local_f4;
      uStack_a0 = 0;
      puVar4 = &uStack_9a;
      if (&uStack_9a <= auStack_b0 + 2) {
        puVar4 = (undefined2 *)(auStack_b0 + 2);
      }
      local_190 = (undefined8 *)(PTR_DAT_04bb5128 + 0x10);
      auStack_b0 = (undefined1  [6])0x0;
      local_aa = 0;
      uStack_a8 = 0;
      local_a2 = 0;
      local_108 = local_160;
      memset(local_188,0,(long)puVar4 + (-0xe1 - (long)&local_190) & 0xfffffffffffffffcU | 2);
      local_98 = 0;
      uStack_97 = 0;
      uStack_93 = 0;
      local_8e = *(undefined2 *)PTR_DAT_04bb3170;
      iVar6 = FUN_01d778dc(lVar14,&local_198);
      if (iVar6 == 0) {
        puVar13 = local_198;
      }
      else {
        if (iVar6 != 3) goto LAB_03500600;
        puVar13 = (undefined *)0x0;
      }
      local_188._4_4_ = (uint)((ulong)local_188 >> 0x20) & 0xffffff00;
      local_188 = (undefined1 *)CONCAT44(local_188._4_4_,0x20);
      local_180 = 0xffffffff;
      local_178 = 0xffffffff00000000;
      local_160 = (undefined *)((long)&local_158 + 4);
      local_190 = &local_b8;
      local_170 = CONCAT44(local_170._4_4_,0xffffffff);
      local_168 = puVar3 + 0x10;
      local_108 = (undefined *)((long)&local_100 + 4);
      local_115 = 0;
      local_158 = (undefined1 *)CONCAT35(local_158._5_3_,0x40);
      local_bd = 0;
      local_100 = (undefined1 *)CONCAT35(local_100._5_3_,0x40);
      local_198 = PTR_DAT_04bb4e10 + 0x10;
      local_88 = 0;
      uStack_80 = 0;
      puVar2 = auStack_78;
      if (auStack_78 <= (undefined1 *)((long)&local_b8 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_b8 + 2U);
      }
      local_98 = 0;
      uStack_97 = 0;
      uStack_93 = 0;
      uStack_8f = 0;
      local_8e = 0;
      local_8c = 0;
      uStack_a8 = 0;
      local_a2 = 0;
      uStack_a0 = 0;
      uStack_9a = 0;
      local_b8 = 0;
      auStack_b0 = (undefined1  [6])0x0;
      local_aa = 0;
      local_110 = local_168;
      memset(local_190,0,(size_t)(puVar2 + (-0xe0 - (long)&local_198)));
      if (puVar13 == (undefined *)0x0) {
        FUN_0080e7dc(&local_198);
      }
      else {
        local_1a8._0_4_ = 0;
        puVar3 = (undefined *)0x0;
        if (puVar13 <= DAT_04c88ec8) {
          puVar3 = puVar13;
        }
        uStack_1a0 = SUB81(puVar3,0);
        uStack_19f = (undefined1)((ulong)puVar3 >> 8);
        uStack_19e = (undefined2)((ulong)puVar3 >> 0x10);
        uStack_19c = (undefined4)((ulong)puVar3 >> 0x20);
        FUN_01c15060(&local_198,&local_1a8,&DAT_04169048);
      }
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1d8 = "ConstructionPortfolioAdvertising";
      puStack_1e8 = &DAT_040f3d6d;
      local_1e0 = local_1f0;
      FUN_03466890(&uStack_1a9,lVar12,&local_198,&local_1e0,&local_1f0);
    }
    uVar10 = *(uint *)(lVar8 + 0x218);
    plVar9 = *(long **)(lVar8 + 0x220);
  }
  lVar12 = plVar9[(ulong)(2 < uVar10) * 2];
  if (lVar12 != 0) {
    lVar14 = lVar11 + (ulong)uVar15 * 0x18 + 8;
    uVar7 = FUN_01d77c78(lVar14);
    if ((uVar7 & 1) == 0) {
LAB_035008ec:
      iVar6 = 4;
    }
    else {
      local_180._4_4_ = (uint)((ulong)local_180 >> 0x20) & 0xffffff00;
      local_178 = 0xffffffff;
      local_180 = CONCAT44(local_180._4_4_,0xb);
      local_170 = 0xffffffff00000000;
      local_158 = local_14c;
      local_168 = (undefined *)CONCAT44(local_168._4_4_,0xffffffff);
      local_188 = auStack_b0;
      local_150 = 0x40;
      local_110._0_4_ = (uint)(uint3)local_110;
      local_14c[0] = 0;
      local_160 = PTR_DAT_04bb2bc0 + 0x10;
      local_f8 = 0x40;
      local_b8._0_4_ = (uint)(uint3)local_b8;
      local_f4[0] = 0;
      local_100 = local_f4;
      uStack_a0 = 0;
      puVar4 = &uStack_9a;
      if (&uStack_9a <= auStack_b0 + 2) {
        puVar4 = (undefined2 *)(auStack_b0 + 2);
      }
      local_190 = (undefined8 *)(PTR_DAT_04bb5128 + 0x10);
      auStack_b0 = (undefined1  [6])0x0;
      local_aa = 0;
      uStack_a8 = 0;
      local_a2 = 0;
      local_108 = local_160;
      memset(local_188,0,(long)puVar4 + (-0xe1 - (long)&local_190) & 0xfffffffffffffffcU | 2);
      local_98 = 0;
      uStack_97 = 0;
      uStack_93 = 0;
      local_8e = *(undefined2 *)PTR_DAT_04bb3170;
      iVar6 = FUN_01d778dc(lVar14,&local_198);
      if (iVar6 == 0) {
        uVar10 = local_8c & 0xff;
LAB_0350089c:
        uVar7 = FUN_01d77c78(lVar14);
        if ((uVar7 & 1) == 0) goto LAB_035008ec;
        iVar6 = FUN_01d781d4(lVar14,&local_198);
        if ((iVar6 == 3) || (iVar6 == 0)) {
          FUN_03466b08(&uStack_1a9,lVar12,uVar10,(ulong)local_198 & 0xffffffff);
        }
        if ((iVar6 == 0) || (iVar6 == 3)) goto LAB_0350094c;
      }
      else if (iVar6 == 3) {
        uVar10 = 0;
        goto LAB_0350089c;
      }
    }
    plVar9 = *(long **)(lVar12 + 0x48);
    if (plVar9[1] != 0) {
      local_198 = PTR_DAT_04bc0878 + 0x10;
      local_190 = (undefined8 *)CONCAT44(local_190._4_4_,9);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_198);
      (**(code **)(plVar9[3] + 0x5e0))(plVar9[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar12);
    }
  }
LAB_0350094c:
  puVar3 = PTR_DAT_04bb3170;
  lVar12 = lVar11 + (ulong)uVar15 * 0x18;
  lVar14 = *(long *)(*(long *)(param_1 + 0x220) + 0x5c8);
  if (lVar14 != 0) {
    uStack_1a0 = 0;
    local_1a8._0_4_ = 0;
    local_1a8._4_4_ = 0;
    uStack_19e = *(undefined2 *)PTR_DAT_04bb3170;
    lVar11 = lVar11 + (ulong)uVar15 * 0x18 + 8;
    uVar7 = FUN_01d77c78(lVar11);
    if ((uVar7 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_180._4_4_ = (uint)((ulong)local_180 >> 0x20) & 0xffffff00;
      local_178 = 0xffffffff;
      local_180 = CONCAT44(local_180._4_4_,0xb);
      local_170 = 0xffffffff00000000;
      local_158 = local_14c;
      local_168 = (undefined *)CONCAT44(local_168._4_4_,0xffffffff);
      local_188 = auStack_b0;
      local_150 = 0x40;
      local_110._0_4_ = (uint)(uint3)local_110;
      local_14c[0] = 0;
      local_160 = PTR_DAT_04bb2bc0 + 0x10;
      local_f8 = 0x40;
      local_b8._0_4_ = (uint)(uint3)local_b8;
      local_f4[0] = 0;
      local_100 = local_f4;
      uStack_a0 = 0;
      local_190 = (undefined8 *)(PTR_DAT_04bb5128 + 0x10);
      auStack_b0 = (undefined1  [6])0x0;
      local_aa = 0;
      uStack_a8 = 0;
      local_a2 = 0;
      puVar4 = &uStack_9a;
      if (&uStack_9a <= auStack_b0 + 2) {
        puVar4 = (undefined2 *)(auStack_b0 + 2);
      }
      local_108 = local_160;
      memset(local_188,0,(long)puVar4 + (-0xe1 - (long)&local_190) & 0xfffffffffffffffcU | 2);
      local_8e = *(undefined2 *)puVar3;
      local_98 = 0;
      uStack_97 = 0;
      uStack_93 = 0;
      iVar6 = FUN_01d778dc(lVar11,&local_198);
      if (iVar6 == 0) {
        uStack_1a0 = (undefined1)((uint)uStack_93 >> 0x18);
        local_1a8._0_4_ = CONCAT31((int3)uStack_97,local_98);
        local_1a8._4_1_ = (undefined1)((uint)uStack_97 >> 0x18);
        local_1a8._4_4_ = CONCAT31((int3)uStack_93,local_1a8._4_1_);
        uStack_19e = local_8e;
      }
      else if (iVar6 != 3) goto LAB_03500aa0;
      FUN_0311d5d0(lVar14,&local_1a8);
    }
  }
LAB_03500aa0:
  FUN_03500c38(param_1,1);
  if ((iVar6 == 3) || (iVar6 == 0)) {
    *(undefined1 *)(param_1 + 0x1d14c) = 1;
  }
  local_1a8._0_4_ = 0;
  iVar6 = FUN_034e839c(lVar12,&local_1a8);
  if ((iVar6 == 3) || (iVar6 == 0)) {
    lVar11 = 0x18;
    if (*(uint *)(lVar8 + 0x228) < 4) {
      lVar11 = 0;
    }
    plVar9 = *(long **)(*(long *)(lVar8 + 0x230) + lVar11);
    if (plVar9 != (long *)0x0) {
      fVar16 = (float)(int)local_1a8;
      local_198 = PTR_DAT_04bc4f00 + 0x10;
      local_190 = (undefined8 *)CONCAT44(local_190._4_4_,0x14);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_198);
      (**(code **)(plVar9[3] + 0x158))(fVar16,plVar9[1]);
    }
    if ((((lVar14 != 0) && (lVar11 = *(long *)(lVar14 + 0x1070), *(int *)(lVar11 + 0x18) != 0)) &&
        (*(long *)(lVar11 + 0x10) != 0)) &&
       ((lVar11 = *(long *)(lVar11 + 0x10) - (long)*(int *)(lVar11 + 0x1c), lVar11 != 0 &&
        (plVar9 = *(long **)(lVar11 + 0x218), plVar9 != (long *)0x0)))) {
      fVar16 = (float)(int)local_1a8;
      local_198 = PTR_DAT_04bc4f00 + 0x10;
      local_190 = (undefined8 *)CONCAT44(local_190._4_4_,0x14);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_198);
      (**(code **)(plVar9[3] + 0x158))(fVar16,plVar9[1]);
    }
  }
  local_1f4 = 0;
  iVar6 = FUN_034e84b8(lVar12,&local_1f4);
  if (((iVar6 == 3) || (iVar6 == 0)) &&
     (plVar9 = *(long **)(*(long *)(lVar8 + 0x230) + (ulong)(4 < *(uint *)(lVar8 + 0x228)) * 0x20),
     plVar9 != (long *)0x0)) {
    fVar16 = (float)local_1f4;
    local_198 = PTR_DAT_04bc4f00 + 0x10;
    local_190 = (undefined8 *)CONCAT44(local_190._4_4_,0x14);
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_198);
    (**(code **)(plVar9[3] + 0x158))(fVar16,plVar9[1]);
  }
  return;
}

