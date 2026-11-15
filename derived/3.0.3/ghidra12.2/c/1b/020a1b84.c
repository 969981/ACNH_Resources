
void FUN_020a1b84(byte *param_1,undefined1 *param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  ushort uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  byte *pbVar19;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined4 *puStack_80;
  uint local_64;
  byte local_60 [4];
  undefined4 local_5c;
  byte local_58;
  byte local_54 [4];
  
  puVar5 = DAT_053dda88;
  puVar4 = PTR_DAT_04bb6298;
  puVar3 = PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  local_58 = 0;
  local_5c = 0;
  uVar11 = *param_1 & 0xf;
  uVar13 = *(ushort *)PTR_DAT_04bb6298;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020a1c48;
LAB_020a1cb4:
    uVar15 = (uint)*pbVar12;
    if (7 < uVar15) {
      uVar15 = 0xff;
    }
    local_60[0] = (byte)uVar15;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar12 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8)))) goto LAB_020a1cb4;
LAB_020a1c48:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020a1cac:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_020a1cb4;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar16 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar18 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar18 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar18 & 8) != 0) {
        pbVar12 = (byte *)(lVar16 + 0x471);
      }
    }
    local_60[0] = *pbVar12;
    uVar15 = (uint)local_60[0];
    if (7 < local_60[0]) goto LAB_020a1cac;
  }
  if (uVar11 - 1 < 2) {
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar14 + 0x473);
    pbVar12 = PTR_DAT_04bc1220;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar18 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar18 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar18 & 8) != 0) {
        pbVar12 = (byte *)(lVar14 + 0x473);
      }
    }
    if ((DAT_053dda88 == (undefined4 *)0x0) &&
       (*pbVar12 == (byte)(param_1[3] >> 6 | (param_1[4] & 3) << 2))) {
      return;
    }
    local_8c[0] = *param_2;
    FUN_020a0a44(DAT_053dda88,param_1,local_8c,uVar11 == 1);
    return;
  }
  if (uVar11 - 3 < 2) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar18 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar18 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar18 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if (uVar15 < 8) {
        puVar18 = puVar18 + (ulong)uVar15 * 2;
      }
    }
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x17);
    if ((*puVar18 >> 0x17 & 1) != 0) {
      FUN_0255c138(local_60,0);
    }
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    lVar14 = *(long *)PTR_DAT_04bb3968;
    if (uVar11 == 3) {
      bVar9 = param_1[2];
      if (lVar14 != 0) {
        puStack_80 = &local_5c;
        local_64 = (ushort)(CONCAT11(bVar9,param_1[1]) >> 4) & 0xff;
        local_88 = &PTR_LAB_04a71e30;
        uVar8 = FUN_020b5220(lVar14,&local_64,&local_88);
        if ((uVar8 & 1) != 0) goto LAB_020a1ee8;
        bVar9 = param_1[2];
      }
      FUN_01e3d740(((ulong)bVar9 << 0x20 | (ulong)param_1[1] << 0x18) >> 0x1c & 0xff);
    }
    else if (lVar14 != 0) {
      puStack_80 = &local_5c;
      local_64 = *(ushort *)(param_1 + 1) >> 4 & 0xff;
      local_88 = &PTR_LAB_04a71e58;
      FUN_020b5220(lVar14,&local_64,&local_88);
    }
LAB_020a1ee8:
    *puVar5 = 0;
    *(undefined *)(puVar5 + 1) = *PTR_DAT_04bb5018;
    *(undefined8 *)(puVar5 + 2) = 0xffffffff;
    return;
  }
  if ((*param_1 & 0xf) != 0) {
    return;
  }
  uVar1 = (ushort)(param_1[2] >> 4) | (param_1[3] & 0x3f) << 4;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfc00;
  }
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020a1f18;
LAB_020a1f84:
    local_54[0] = *pbVar12;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar12 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8)))) goto LAB_020a1f84;
LAB_020a1f18:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020a1f7c:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_020a1f84;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar14 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar18 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar18 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar18 & 8) != 0) {
        pbVar12 = (byte *)(lVar14 + 0x471);
      }
    }
    local_54[0] = *pbVar12;
    if (7 < local_54[0]) goto LAB_020a1f7c;
  }
  uVar8 = FUN_00a738a0(local_54,0);
  if ((uVar8 & 1) != 0) goto switchD_020a20dc_default;
  switch(*param_1 >> 4) {
  case 0:
    break;
  case 1:
    if ((*(int *)(*(long *)PTR_DAT_04bb27c0 + 0x5e8) != 2) || (*(ushort *)puVar4 != uVar1))
    goto switchD_020a20dc_default;
    break;
  case 2:
    uVar8 = FUN_020a11c0();
    if ((uVar8 & 1) == 0) goto switchD_020a20dc_default;
    break;
  case 3:
    lVar14 = *(long *)puVar3;
    if (lVar14 == 0) {
LAB_020a22f0:
      if (*pbVar19 < 8) goto LAB_020a2368;
LAB_020a22fc:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020a2360:
        pbVar19 = PTR_DAT_04bb5038;
        goto LAB_020a2368;
      }
      lVar14 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar14 + 0x473);
      pbVar12 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar18 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar18 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar18 & 8) != 0) {
          pbVar12 = (byte *)(lVar14 + 0x471);
        }
      }
      bVar9 = *pbVar12;
      bVar6 = 7 < bVar9;
      if (bVar6) {
        bVar9 = 0xff;
      }
      local_64 = CONCAT31(local_64._1_3_,bVar9);
      if (bVar6) goto LAB_020a2360;
    }
    else {
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar14 + 0x158);
      }
      if (7 < *pbVar19) {
        if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_020a22f0;
        }
        goto LAB_020a22fc;
      }
LAB_020a2368:
      bVar9 = *pbVar19;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      local_64 = CONCAT31(local_64._1_3_,bVar9);
    }
    uVar8 = FUN_0255b714(&local_64,1);
    if ((uVar8 & 1) != 0) {
      if ((byte)local_64 < 8) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          iVar7 = FUN_02582d8c(&local_64,2);
          if (-1 < iVar7) goto LAB_020a23ec;
          goto LAB_020a2410;
        }
        local_88 = (undefined **)CONCAT71(local_88._1_7_,(byte)local_64);
        uVar8 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_88);
        if ((uVar8 & 1) == 0) goto LAB_020a2410;
LAB_020a23ec:
        if (7 < (ulong)(byte)local_64) goto LAB_020a2410;
        uVar10 = *(ushort *)(PTR_DAT_04bc31b0 + (ulong)(byte)local_64 * 0x30 + 9);
      }
      else {
LAB_020a2410:
        uVar10 = 0xffff;
      }
      if ((uVar10 == uVar1) &&
         ((*(long *)PTR_DAT_04bb7ff8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0))))
      break;
    }
  default:
switchD_020a20dc_default:
    if (puVar5 == (undefined4 *)0x0) {
      local_58 = 0;
      bVar9 = 2;
      goto LAB_020a21ac;
    }
    goto LAB_020a1fac;
  }
  uVar8 = FUN_0255c138(local_60,1);
  if (puVar5 == (undefined4 *)0x0) {
    local_58 = 0;
    bVar9 = 1;
    if ((uVar8 & 1) == 0) {
      bVar9 = 2;
    }
    goto LAB_020a21ac;
  }
  if ((uVar8 & 1) == 0) {
LAB_020a1fac:
    if ((*param_1 & 0xf0) == 0x20) {
      uVar11 = (uint)(*(ushort *)(param_1 + 1) >> 4);
      local_88 = (undefined **)(CONCAT44(local_88._4_4_,uVar11) & 0xffffffff000000ff);
      lVar14 = *(long *)PTR_DAT_04bb4760 + ((ulong)uVar11 & 0xff) * 0x15;
      if (0x6c < (uint)local_88) {
        lVar14 = *(long *)PTR_DAT_04bb4760;
      }
      if (uVar13 == 0xffff) {
LAB_020a208c:
        uVar13 = 0xffff;
      }
      else {
        local_88 = (undefined **)CONCAT44(local_88._4_4_,3);
        puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar13 * 8);
        if (0xff < uVar13) {
          puVar18 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar18 >> 3 & 1) != 0) {
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar13 = 0;
            puVar17 = DAT_055c1b60;
            do {
              if (*(int *)(puVar17 + -1) == 0x6622bd46) goto LAB_020a2090;
              puVar17 = (undefined8 *)puVar17[1];
              uVar13 = uVar13 + 1;
            } while (puVar17 != &DAT_055c1b58);
          }
          goto LAB_020a208c;
        }
      }
LAB_020a2090:
      uVar1 = (ushort)*(byte *)(lVar14 + 4) | (*(byte *)(lVar14 + 5) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfc00;
      }
      if ((uVar1 != uVar13) || ((*(byte *)(lVar14 + 7) >> 1 & 1) != 0)) {
        bVar9 = param_1[3];
        uVar8 = CONCAT44(local_88._4_4_,uVar11);
        bVar2 = param_1[4];
        puVar5[3] = 4;
        *(byte *)(puVar5 + 1) = bVar9 >> 6 | (bVar2 & 3) << 2;
        goto LAB_020a218c;
      }
    }
    bVar9 = 2;
  }
  else {
    uVar13 = *(ushort *)(param_1 + 1);
    *(byte *)(puVar5 + 1) = param_1[3] >> 6 | (param_1[4] & 3) << 2;
    uVar8 = CONCAT44(local_88._4_4_,(uint)(uVar13 >> 4));
    puVar5[3] = 2;
LAB_020a218c:
    local_88 = (undefined **)(uVar8 & 0xffffffff000000ff);
    puVar5[2] = (uint)local_88;
    bVar9 = 1;
  }
  if (puVar5[3] == 4) {
    bVar9 = 1;
  }
  local_58 = local_58 & 0xfc;
LAB_020a21ac:
  uVar8 = (ulong)local_88;
  uVar15 = (uint)(*(ushort *)(param_1 + 1) >> 4);
  local_88._0_4_ = uVar15 & 0xff;
  uVar11 = (uint)local_88 >> 4;
  iVar7 = (uint)local_88 << 4;
  local_88._0_6_ = CONCAT15(*param_2,0x400000000);
  local_88 = (undefined **)
             (CONCAT26((short)(uVar8 >> 0x30),(undefined6)local_88) & 0xff00ffffffffffff);
  local_58 = param_1[4] & 3 | local_58;
  local_5c._2_2_ = (undefined2)uVar11;
  local_5c._0_3_ = CONCAT21(local_5c._2_2_,(byte)*(ushort *)(param_1 + 1) & 0xf | (byte)iVar7) << 8;
  local_5c = CONCAT31((int3)(CONCAT13(param_1[3],(int3)local_5c) >> 8),*param_1 & 0xf0 | bVar9) &
             0xc0ffffff;
  if (-1 < DAT_053d0b30) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0b30,&local_88,&local_5c,5,0);
    uVar15 = (uint)(*(ushort *)(param_1 + 1) >> 4);
  }
  local_64 = uVar15 & 0xff;
  puStack_80 = &local_5c;
  local_88 = &PTR_LAB_04a71e08;
  FUN_020b5220(*(undefined8 *)PTR_DAT_04bb3968,&local_64,&local_88);
  return;
}

