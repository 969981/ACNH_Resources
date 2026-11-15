
/* WARNING: Type propagation algorithm not settling */

void FUN_01ed13bc(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  float fVar18;
  float fVar19;
  undefined8 local_1ca8;
  undefined1 *local_1ca0;
  undefined8 local_1c98;
  undefined8 *******pppppppuStack_1c90;
  undefined8 *******local_1c88 [29];
  undefined8 *******local_1ba0 [29];
  undefined8 *******local_1ab8 [29];
  undefined8 *******local_19d0 [29];
  undefined8 *******local_18e8 [29];
  undefined8 *******local_1800 [29];
  undefined8 *******local_1718 [29];
  undefined8 *******local_1630 [29];
  undefined8 *******local_1548 [29];
  undefined8 *******local_1460 [29];
  undefined8 *******local_1378 [29];
  undefined8 *******local_1290 [29];
  undefined8 *******local_11a8 [29];
  undefined8 *******local_10c0 [29];
  undefined8 *******local_fd8 [29];
  undefined8 *******local_ef0 [29];
  undefined8 *******local_e08 [29];
  undefined8 *******local_d20 [29];
  undefined8 *******local_c38 [29];
  undefined8 *******local_b50 [29];
  undefined8 *******local_a68 [29];
  undefined8 *******local_980 [29];
  undefined8 *******local_898 [29];
  undefined8 ******local_7b0 [29];
  undefined8 *****local_6c8 [29];
  undefined8 ****local_5e0 [29];
  undefined8 ***local_4f8 [29];
  undefined8 **local_410 [29];
  undefined8 *local_328 [29];
  undefined8 local_240 [29];
  undefined1 auStack_158 [244];
  undefined4 local_64;
  
  puVar7 = PTR_DAT_04bb6298;
  puVar6 = PTR_DAT_04bb2720;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_01ed146c:
    bVar9 = *(byte *)(param_1 + 0xaf69);
joined_r0x01ed1470:
    if (bVar9 != 0) goto LAB_01ed1474;
  }
  else {
    local_1ca8 = CONCAT44(local_1ca8._4_4_,0x13);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) == 0) goto LAB_01ed146c;
    if (*(char *)(param_1 + 0xaf69) == '\0') {
      bVar9 = FUN_01ecbe20(param_1);
      bVar9 = bVar9 & 1;
      *(byte *)(param_1 + 0xaf69) = bVar9;
      goto joined_r0x01ed1470;
    }
LAB_01ed1474:
    lVar16 = *(long *)PTR_DAT_04bb4828;
    if (*(char *)(param_1 + 0xaf78) == '\0') {
      if (lVar16 == 0) goto LAB_01ed1780;
      local_1ca8 = 0;
      local_1ca0 = (undefined1 *)0x0;
      local_1c88[0] = local_1ba0;
      local_1ba0[0] = local_1ab8;
      local_1c98 = local_1c88;
      local_1ab8[0] = local_19d0;
      local_19d0[0] = local_18e8;
      local_18e8[0] = local_1800;
      local_1800[0] = local_1718;
      local_1718[0] = local_1630;
      local_240[0] = 0;
      local_1630[0] = local_1548;
      local_1548[0] = local_1460;
      local_1460[0] = local_1378;
      local_1378[0] = local_1290;
      local_1290[0] = local_11a8;
      local_11a8[0] = local_10c0;
      local_10c0[0] = local_fd8;
      local_fd8[0] = local_ef0;
      local_ef0[0] = local_e08;
      local_e08[0] = local_d20;
      local_d20[0] = local_c38;
      local_c38[0] = local_b50;
      local_b50[0] = local_a68;
      local_a68[0] = local_980;
      local_980[0] = local_898;
      local_898[0] = local_7b0;
      local_7b0[0] = local_6c8;
      local_6c8[0] = local_5e0;
      local_5e0[0] = local_4f8;
      local_4f8[0] = local_410;
      local_410[0] = local_328;
      local_328[0] = local_240;
      if (auStack_158 != (undefined1 *)0x0) {
        local_1ca8 = 0x1e00000000;
        local_1ca0 = auStack_158;
      }
      lVar15 = *(long *)puVar6;
      pppppppuStack_1c90 = local_1c98;
      if (lVar15 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
          iVar11 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar11 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      uVar2 = *(undefined4 *)(puVar12 + 7);
      lVar15 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
      if (lVar15 == 0) {
        pbVar17 = PTR_DAT_04bb9cf0;
      }
      else if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
              (puVar12 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar12 == (undefined8 *)0x0)) {
        pbVar17 = (byte *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8));
      }
      else {
        uVar13 = (**(code **)*puVar12)();
        pbVar17 = (byte *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8));
        if ((uVar13 & 1) != 0) {
          if (*(long *)(lVar15 + 0x28) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8);
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)();
            }
          }
        }
      }
      uVar13 = (ulong)*pbVar17;
      if ((uVar13 < 0x23) && (pbVar17[1] <= (byte)PTR_DAT_04bc27f0[uVar13])) {
        uVar14 = 0;
        if ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) & 1 << (ulong)(pbVar17[1] & 0x1f)) != 0) {
          uVar14 = uVar13;
        }
      }
      else {
        uVar14 = 0;
      }
      FUN_01c23f70(lVar16,&local_1ca8,uVar2,uVar14,1,1);
      if (*(uint *)(param_1 + 0xaf38) < (uint)local_1ca8) {
        uVar13 = FUN_0277d7b4(*(long *)(local_1ca0 + (long)(int)*(uint *)(param_1 + 0xaf38) * 8) +
                              0x10,param_1 + 0xaf3c);
        goto joined_r0x01ed1778;
      }
    }
    else {
      local_1ca8 = 0xfffe;
      FUN_0277d4ac(&local_1ca8);
      local_1ca0 = (undefined1 *)0xfffe;
      FUN_0277d4ac(&local_1ca0);
      local_1c98 = (undefined8 *******)
                   CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,*(undefined4 *)PTR_DAT_04bb3238);
      if (lVar16 != 0) {
        uVar13 = FUN_01c29e68(lVar16,&local_1ca8);
joined_r0x01ed1778:
        if ((uVar13 & 1) != 0) goto LAB_01ed1780;
      }
    }
    *(undefined4 *)(param_1 + 0xaf44) = 0;
  }
LAB_01ed1780:
  lVar16 = *(long *)puVar6;
  iVar11 = 0;
  if (lVar16 != 0) {
    if (*(long *)(lVar16 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar10 = FUN_006bd550(*puVar12,0);
      iVar11 = 0;
      if (iVar10 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar6 != 0) {
          lVar16 = *(long *)(*(long *)puVar6 + 0x330);
          iVar11 = 0;
          if (lVar16 != 0) {
            iVar11 = *(int *)(lVar16 + 0x244);
          }
        }
      }
    }
  }
  puVar8 = PTR_DAT_04bbe4b0;
  if ((*(int *)(PTR_DAT_04bbe4b0 + 0x14) == iVar11) &&
     (lVar16 = *(long *)PTR_DAT_04bb46b0, lVar16 != 0)) {
    puVar12 = *(undefined8 **)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar16 != 0) {
        lVar16 = lVar16 + 0x70;
        goto LAB_01ed1850;
      }
    }
    else if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
            (lVar16 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar16 != 0)) {
LAB_01ed1850:
      if ((*(long **)(lVar16 + 0x1a3d88) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar16 + 0x1a3d88), puVar12 == (undefined8 *)0x0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = (**(code **)*puVar12)();
        uVar13 = uVar13 & 0xffffffff;
      }
      iVar11 = FUN_028b39d0(*(long *)(lVar16 + 0x1a3d70) + *(long *)(lVar16 + 0x1a3d68),
                            param_1 + 0xaf3c);
      if ((((uVar13 & 1) != 0) && (*(long *)(lVar16 + 0x1a3d88) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x1a3d88) + 8), puVar12 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar12)();
      }
      if (iVar11 == 0) {
        lVar16 = *(long *)(param_1 + 0x10);
        if (*(int *)(lVar16 + 0x56c) == 0) {
          local_1ca8 = (ulong)local_1ca8._4_4_ << 0x20;
          local_64 = 0;
          *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x40000000;
          FUN_01e5a930(0x40000000,lVar16,0xc,PTR_DAT_04bb2150,&local_1ca8,&local_64,PTR_DAT_04bc1600
                       ,6);
          *(undefined4 *)(lVar16 + 0x3ac) = 0xf;
          *(undefined8 *)(param_1 + 0xaf54) = 0x3900000039;
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
          lVar16 = *(long *)(param_1 + 8);
          uVar3 = *(uint *)(lVar16 + 0x288);
          *(undefined4 *)(lVar16 + 0x288) = *(undefined4 *)(lVar16 + 0x28c);
          uVar3 = uVar3 ^ uVar3 << 0xb;
          *(undefined4 *)(lVar16 + 0x28c) = *(undefined4 *)(lVar16 + 0x290);
          uVar4 = *(uint *)(lVar16 + 0x294);
          *(uint *)(lVar16 + 0x290) = uVar4;
          uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
          *(uint *)(lVar16 + 0x294) = uVar3;
          *(int *)(param_1 + 0xaf48) = (int)((ulong)uVar3 * 10 >> 0x20) * 0x1e + 600;
        }
        else {
          *(undefined4 *)(lVar16 + 0x56c) = 0;
          local_1ca8 = (ulong)local_1ca8._4_4_ << 0x20;
          local_64 = 0;
          FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_1ca8,
                       &local_64,PTR_DAT_04bc1600,6);
          *(undefined **)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7ef8) =
               PTR_DAT_04bc15d0 + 0x10;
        }
      }
    }
  }
  lVar16 = *(long *)(param_1 + 0x10);
  if (((*(int *)(lVar16 + 0x360) == 4) && (*(int *)(lVar16 + 0x4b8) != 0)) &&
     (*(int *)(lVar16 + 0x378) == 0x23)) {
    local_1ca8 = local_1ca8 & 0xffffffff00000000;
    local_64 = 0;
    FUN_01e5a930(0x40000000,lVar16,0,PTR_DAT_04bb2150,&local_1ca8,&local_64,PTR_DAT_04bc1600,6);
  }
  iVar11 = *(int *)(param_1 + 0xaf44);
  if (((iVar11 != 0) && (*(int *)(param_1 + 0xaf44) = iVar11 + -1, 1 < iVar11)) &&
     (lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x68),
     fVar18 = *(float *)(param_1 + 0xaf6c) - *(float *)(lVar16 + 0x278),
     fVar19 = *(float *)(param_1 + 0xaf74) - *(float *)(lVar16 + 0x280),
     SQRT(fVar19 * fVar19 + fVar18 * fVar18) < 10.0)) {
    return;
  }
  lVar16 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(lVar16 + 0x288);
  *(undefined4 *)(lVar16 + 0x288) = *(undefined4 *)(lVar16 + 0x28c);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  *(undefined4 *)(lVar16 + 0x28c) = *(undefined4 *)(lVar16 + 0x290);
  uVar4 = *(uint *)(lVar16 + 0x294);
  *(uint *)(lVar16 + 0x290) = uVar4;
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  *(uint *)(lVar16 + 0x294) = uVar3;
  if ((uVar3 & 1) == 0) goto LAB_01ed1acc;
  sVar5 = *(short *)puVar7;
  if (sVar5 == -1) {
LAB_01ed1bd0:
    lVar16 = *(long *)puVar6;
    iVar11 = 0;
    if (lVar16 != 0) {
      if (*(long *)(lVar16 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar10 = FUN_006bd550(*puVar12,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar6 != 0) {
            lVar16 = *(long *)(*(long *)puVar6 + 0x330);
            iVar11 = 0;
            if (lVar16 != 0) {
              iVar11 = *(int *)(lVar16 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar8 + 0x14) == iVar11) {
      uVar13 = FUN_01ece750(param_1);
    }
    else {
      lVar16 = *(long *)puVar6;
      iVar11 = 0;
      if (lVar16 != 0) {
        if (*(long *)(lVar16 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
          iVar10 = FUN_006bd550(*puVar12,0);
          iVar11 = 0;
          if (iVar10 == 0x758f7eaf) {
            iVar11 = 0;
            if (*(long *)puVar6 != 0) {
              lVar16 = *(long *)(*(long *)puVar6 + 0x330);
              iVar11 = 0;
              if (lVar16 != 0) {
                iVar11 = *(int *)(lVar16 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar8 + 0x34) != iVar11) goto LAB_01ed1acc;
      uVar13 = FUN_01ecf0c0(param_1);
    }
  }
  else {
    local_1ca8 = CONCAT44(local_1ca8._4_4_,0x13);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) == 0) goto LAB_01ed1bd0;
    uVar13 = FUN_01ece2e0(param_1);
  }
  if ((uVar13 & 1) != 0) {
    *(undefined8 *)(param_1 + 0xaf54) = 0x3800000038;
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
LAB_01ed1acc:
  *(undefined8 *)(param_1 + 0xaf54) = 0x3900000039;
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  lVar16 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(lVar16 + 0x288);
  *(undefined4 *)(lVar16 + 0x288) = *(undefined4 *)(lVar16 + 0x28c);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  *(undefined4 *)(lVar16 + 0x28c) = *(undefined4 *)(lVar16 + 0x290);
  uVar4 = *(uint *)(lVar16 + 0x294);
  *(uint *)(lVar16 + 0x290) = uVar4;
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  *(uint *)(lVar16 + 0x294) = uVar3;
  *(int *)(param_1 + 0xaf48) = (int)((ulong)uVar3 * 10 >> 0x20) * 0x1e + 600;
  return;
}

