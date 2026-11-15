
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01ecbe20(long param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  uint uVar16;
  undefined *local_1cb8;
  undefined8 *local_1cb0;
  undefined8 local_1ca8;
  undefined1 *local_1ca0;
  undefined8 *******local_1c98;
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
  undefined1 auStack_158 [248];
  
  *(undefined4 *)(param_1 + 0xaf7c) = 0;
  *(undefined1 *)(param_1 + 0xaf78) = 0;
  puVar6 = PTR_DAT_04bb2720;
  lVar13 = *(long *)PTR_DAT_04bb4828;
  if (lVar13 == 0) {
    return 0;
  }
  local_240[0] = 0;
  local_1c88[0] = local_1ba0;
  local_1ba0[0] = local_1ab8;
  local_1ab8[0] = local_19d0;
  local_1c98 = local_1c88;
  local_18e8[0] = local_1800;
  local_19d0[0] = local_18e8;
  local_1800[0] = local_1718;
  local_1718[0] = local_1630;
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
  local_1ca8 = 0;
  local_1ca0 = (undefined1 *)0x0;
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
  lVar11 = *(long *)PTR_DAT_04bb2720;
  pppppppuStack_1c90 = local_1c98;
  if (lVar11 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar7 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = *(undefined4 *)(puVar14 + 7);
  lVar11 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
  if (lVar11 == 0) {
    pbVar15 = PTR_DAT_04bb9cf0;
  }
  else if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
          (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar14 == (undefined8 *)0x0)) {
    pbVar15 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
  }
  else {
    uVar9 = (**(code **)*puVar14)();
    pbVar15 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar11 + 0x28) != 0) {
        puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8);
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)();
        }
      }
    }
  }
  uVar9 = (ulong)*pbVar15;
  if ((uVar9 < 0x23) && (pbVar15[1] <= (byte)PTR_DAT_04bc27f0[uVar9])) {
    uVar10 = 0;
    if ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & 1 << (ulong)(pbVar15[1] & 0x1f)) != 0) {
      uVar10 = uVar9;
    }
  }
  else {
    uVar10 = 0;
  }
  FUN_01c23f70(lVar13,&local_1ca8,uVar4,uVar10,1,1);
  puVar5 = PTR_DAT_04bb2640;
  if (*(uint *)(param_1 + 0xaf38) < (uint)local_1ca8) {
    lVar11 = *(long *)(local_1ca0 + (long)(int)*(uint *)(param_1 + 0xaf38) * 8);
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      lVar12 = *(long *)puVar6;
      uVar9 = 0;
      piVar1 = (int *)(PTR_DAT_04bbe4b0 + 8);
      do {
        uVar8 = (uint)uVar9;
        if (lVar12 == 0) {
LAB_01ecc190:
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          if (*(long *)(lVar12 + 0x330) != 0) {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)puVar5 + 0x18))
                                (*(long **)puVar5,*(undefined4 *)(lVar12 + 0x338));
            iVar7 = FUN_006bd550(*puVar14,0);
            lVar12 = *(long *)puVar6;
            if ((iVar7 != 0x758f7eaf) || (lVar12 == 0)) goto LAB_01ecc190;
            iVar7 = 0;
            if (*(long *)(lVar12 + 0x330) != 0) {
              iVar7 = *(int *)(*(long *)(lVar12 + 0x330) + 0x244);
            }
          }
        }
        piVar2 = piVar1 + uVar9;
        if (0x32 < uVar8) {
          piVar2 = piVar1;
        }
        if (*piVar2 == iVar7) goto LAB_01ecc1c0;
        uVar16 = 0x33;
        if ((int)uVar8 < 0x33) {
          uVar16 = uVar8 + 1;
        }
        uVar9 = (ulong)uVar16;
      } while (uVar16 != 0x33);
    }
    uVar8 = 0;
LAB_01ecc1c0:
    local_1cb8 = (undefined *)CONCAT44(local_1cb8._4_4_,uVar8);
    switch(uVar8) {
    case 5:
    case 7:
      if (*(char *)(lVar11 + 0xcc) != '\0') {
        uVar9 = FUN_01c29e68(lVar13,param_1 + 0xaf80);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        uVar8 = nn::os::GetSystemTick();
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
        uVar16 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
        uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
        uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965;
        puVar3 = (undefined4 *)(param_1 + 0xaf94);
        if (((uVar8 >> 8 ^ uVar16 + 4 >> 0x13 ^ uVar8 ^ uVar16) & 1) != 0) {
          puVar3 = (undefined4 *)(param_1 + 0xaf90);
        }
        uVar4 = *puVar3;
        local_1cb8 = PTR_DAT_04bb2020 + 0x10;
        *(undefined1 *)(param_1 + 0xaf78) = 1;
        local_1cb0 = &DAT_0407ebb1;
        *(undefined4 *)(param_1 + 0xaf7c) = uVar4;
        FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,uVar4,&local_1cb8,0);
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x43480000;
        return 1;
      }
      iVar7 = FUN_01c28b7c(lVar13,lVar11,lVar11 + 0x10);
      if (iVar7 == 0) {
        return 0;
      }
      local_1cb8 = PTR_DAT_04bb2020 + 0x10;
      local_1cb0 = &DAT_0407ebb1;
      FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,iVar7,&local_1cb8,0);
      goto LAB_01ecc384;
    case 6:
      uVar9 = FUN_01c28e84(lVar13,&local_1cb8,lVar11 + 0x10,1);
      break;
    default:
      goto switchD_01ecc1e8_caseD_8;
    case 0x21:
      uVar9 = FUN_01c29294(lVar13,&local_1cb8,lVar11 + 0x10);
    }
    if ((uVar9 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x18);
      uVar9 = FUN_02085a50(lVar13,3,0);
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(lVar13 + 0x801) = 1;
        lVar11 = lVar13 + 0x10;
        lVar12 = lVar11 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar13 + 0x294)) {
          lVar12 = lVar11;
        }
        *(undefined4 *)(lVar12 + 0x14) = local_1cb0._0_4_;
        *(undefined **)(lVar12 + 0xc) = local_1cb8;
        lVar12 = lVar11 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar13 + 0x294)) {
          lVar12 = lVar11;
        }
        *(undefined1 *)(lVar12 + 0x7e) = 0;
      }
LAB_01ecc384:
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x43480000;
      return 1;
    }
  }
switchD_01ecc1e8_caseD_8:
  return 0;
}

