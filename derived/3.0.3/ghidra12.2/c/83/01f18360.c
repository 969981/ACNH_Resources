
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01f18360(long param_1)

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
  uint uVar15;
  undefined8 local_1cd0;
  undefined1 *local_1cc8;
  undefined8 *******local_1cc0;
  undefined8 *******pppppppuStack_1cb8;
  undefined8 *******local_1cb0 [29];
  undefined8 *******local_1bc8 [29];
  undefined8 *******local_1ae0 [29];
  undefined8 *******local_19f8 [29];
  undefined8 *******local_1910 [29];
  undefined8 *******local_1828 [29];
  undefined8 *******local_1740 [29];
  undefined8 *******local_1658 [29];
  undefined8 *******local_1570 [29];
  undefined8 *******local_1488 [29];
  undefined8 *******local_13a0 [29];
  undefined8 *******local_12b8 [29];
  undefined8 *******local_11d0 [29];
  undefined8 *******local_10e8 [29];
  undefined8 *******local_1000 [29];
  undefined8 *******local_f18 [29];
  undefined8 *******local_e30 [29];
  undefined8 *******local_d48 [29];
  undefined8 *******local_c60 [29];
  undefined8 *******local_b78 [29];
  undefined8 *******local_a90 [29];
  undefined8 *******local_9a8 [29];
  undefined8 *******local_8c0 [29];
  undefined8 ******local_7d8 [29];
  undefined8 *****local_6f0 [29];
  undefined8 ****local_608 [29];
  undefined8 ***local_520 [29];
  undefined8 **local_438 [29];
  undefined8 *local_350 [29];
  undefined8 local_268 [29];
  undefined1 auStack_180 [240];
  undefined *local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  uint3 local_6c [3];
  
  *(undefined4 *)(param_1 + 0xaf7c) = 0;
  *(undefined1 *)(param_1 + 0xaf78) = 0;
  puVar6 = PTR_DAT_04bb2720;
  lVar13 = *(long *)PTR_DAT_04bb4828;
  if (lVar13 == 0) {
    return 0;
  }
  local_268[0] = 0;
  local_1cb0[0] = local_1bc8;
  local_1bc8[0] = local_1ae0;
  local_1ae0[0] = local_19f8;
  local_1cc0 = local_1cb0;
  local_1910[0] = local_1828;
  local_19f8[0] = local_1910;
  local_1828[0] = local_1740;
  local_1740[0] = local_1658;
  local_1658[0] = local_1570;
  local_1570[0] = local_1488;
  local_1488[0] = local_13a0;
  local_13a0[0] = local_12b8;
  local_12b8[0] = local_11d0;
  local_11d0[0] = local_10e8;
  local_10e8[0] = local_1000;
  local_1000[0] = local_f18;
  local_f18[0] = local_e30;
  local_e30[0] = local_d48;
  local_d48[0] = local_c60;
  local_c60[0] = local_b78;
  local_1cd0 = 0;
  local_1cc8 = (undefined1 *)0x0;
  local_b78[0] = local_a90;
  local_a90[0] = local_9a8;
  local_9a8[0] = local_8c0;
  local_8c0[0] = local_7d8;
  local_7d8[0] = local_6f0;
  local_6f0[0] = local_608;
  local_608[0] = local_520;
  local_520[0] = local_438;
  local_438[0] = local_350;
  local_350[0] = local_268;
  if (auStack_180 != (undefined1 *)0x0) {
    local_1cd0 = 0x1e00000000;
    local_1cc8 = auStack_180;
  }
  lVar11 = *(long *)PTR_DAT_04bb2720;
  pppppppuStack_1cb8 = local_1cc0;
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
  local_75 = 0;
  local_80 = 8;
  uVar4 = *(undefined4 *)(puVar14 + 7);
  local_7c[0] = 0;
  local_88 = (undefined8 *)local_7c;
  local_90 = PTR_DAT_04bb3768 + 0x10;
  uVar9 = FUN_021d62e0(&local_90,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
  if ((uVar9 & 1) == 0) {
    local_6c[0] = *(uint3 *)PTR_DAT_04bb9cf0;
  }
  else {
    local_6c[0] = 0x80023;
    FUN_020fd3a0(local_6c,&local_90);
  }
  if ((local_6c[0] & 0xff) < 0x23) {
    uVar9 = (ulong)(uint)local_6c[0] & 0xff;
    if ((uint)(byte)PTR_DAT_04bc27f0[uVar9] < (local_6c[0] >> 8 & 0xff)) goto LAB_01f18600;
    uVar10 = 0;
    if ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & 1 << (ulong)(local_6c[0] >> 8 & 0x1f)) != 0) {
      uVar10 = uVar9;
    }
  }
  else {
LAB_01f18600:
    uVar10 = 0;
  }
  FUN_01c23f70(lVar13,&local_1cd0,uVar4,uVar10,1,1);
  puVar5 = PTR_DAT_04bb2640;
  if (*(uint *)(param_1 + 0xaf38) < (uint)local_1cd0) {
    lVar11 = *(long *)(local_1cc8 + (long)(int)*(uint *)(param_1 + 0xaf38) * 8);
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      lVar12 = *(long *)puVar6;
      uVar9 = 0;
      piVar1 = (int *)(PTR_DAT_04bbe4b0 + 8);
      do {
        uVar8 = (uint)uVar9;
        if (lVar12 == 0) {
LAB_01f186e0:
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
            if ((iVar7 != 0x758f7eaf) || (lVar12 == 0)) goto LAB_01f186e0;
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
        if (*piVar2 == iVar7) goto LAB_01f18710;
        uVar15 = 0x33;
        if ((int)uVar8 < 0x33) {
          uVar15 = uVar8 + 1;
        }
        uVar9 = (ulong)uVar15;
      } while (uVar15 != 0x33);
    }
    uVar8 = 0;
LAB_01f18710:
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar8);
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
        uVar15 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
        uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
        uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965;
        puVar3 = (undefined4 *)(param_1 + 0xaf94);
        if (((uVar8 >> 8 ^ uVar15 + 4 >> 0x13 ^ uVar8 ^ uVar15) & 1) != 0) {
          puVar3 = (undefined4 *)(param_1 + 0xaf90);
        }
        uVar4 = *puVar3;
        local_90 = PTR_DAT_04bb2020 + 0x10;
        *(undefined1 *)(param_1 + 0xaf78) = 1;
        local_88 = &DAT_0407ebb1;
        *(undefined4 *)(param_1 + 0xaf7c) = uVar4;
        FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,uVar4,&local_90,0);
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x43480000;
        return 1;
      }
      iVar7 = FUN_01c28b7c(lVar13,lVar11,lVar11 + 0x10);
      if (iVar7 == 0) {
        return 0;
      }
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = &DAT_0407ebb1;
      FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,iVar7,&local_90,0);
      goto LAB_01f188d4;
    case 6:
      uVar9 = FUN_01c28e84(lVar13,&local_90,lVar11 + 0x10,1);
      break;
    default:
      goto switchD_01f18738_caseD_8;
    case 0x21:
      uVar9 = FUN_01c29294(lVar13,&local_90,lVar11 + 0x10);
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
        *(undefined4 *)(lVar12 + 0x14) = local_88._0_4_;
        *(undefined **)(lVar12 + 0xc) = local_90;
        lVar12 = lVar11 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar13 + 0x294)) {
          lVar12 = lVar11;
        }
        *(undefined1 *)(lVar12 + 0x7e) = 0;
      }
LAB_01f188d4:
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x43480000;
      return 1;
    }
  }
switchD_01f18738_caseD_8:
  return 0;
}

