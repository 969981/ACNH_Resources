
undefined8 FUN_01c15060(undefined8 param_1,undefined8 param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined *local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 local_ec [31];
  undefined2 local_ae;
  undefined *local_a8;
  undefined2 *local_a0;
  undefined4 local_98;
  undefined2 local_94 [12];
  undefined2 local_7c;
  undefined *local_78;
  undefined2 *local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined1 local_58;
  
  local_7c = 0;
  local_94[0] = 0;
  local_ae = 0;
  local_a0 = local_94;
  local_98 = 0xd;
  local_f0 = 0x20;
  local_f8 = local_ec;
  local_ec[0] = 0;
  local_a8 = PTR_DAT_04bb8388 + 0x10;
  local_68 = 0xd;
  local_58 = 0;
  local_64[0] = 0;
  local_100 = &DAT_04a3a388;
  local_70 = (undefined2 *)local_64;
  local_78 = PTR_DAT_04bb2c50 + 0x10;
  FUN_006e9a70(param_2,&local_78);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  uVar4 = local_98;
  puVar3 = local_a0;
  (**(code **)(local_78 + 0x18))(&local_78);
  FUN_038d4cb0(puVar3,uVar4,local_70,0xffffffff);
  *local_f8 = 0;
  puVar3 = local_f8;
  (**(code **)(local_100 + 0x18))(&local_100);
  lVar6 = 0;
  do {
    if (local_f8[lVar6] == 0) goto LAB_01c151ac;
    if (local_f8[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c151ac;
    }
    if (local_f8[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01c151ac;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01c151ac:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  lVar6 = 0;
  psVar7 = (short *)((long)param_3 + 2);
  do {
    if (psVar7[-1] == 0) goto LAB_01c151fc;
    if (*psVar7 == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c151fc;
    }
    if (psVar7[1] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01c151fc;
    }
    lVar6 = lVar6 + 3;
    psVar7 = psVar7 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01c151fc:
  uVar2 = (uint)lVar6;
  if ((int)(local_f0 - uVar1) <= (int)(uint)lVar6) {
    uVar2 = local_f0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(puVar3 + uVar1,param_3,(ulong)uVar2 << 1);
    puVar3[(int)(uVar2 + uVar1)] = 0;
  }
  (**(code **)(local_100 + 0x18))(&local_100);
  uVar8 = 0;
  do {
    if (local_f8[uVar8] == 0) goto LAB_01c1528c;
    if (local_f8[uVar8 + 1] == 0) {
      uVar8 = uVar8 + 1;
      goto LAB_01c1528c;
    }
    if (local_f8[uVar8 + 2] == 0) {
      uVar8 = uVar8 + 2;
      goto LAB_01c1528c;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  uVar8 = 0;
LAB_01c1528c:
  if ((int)uVar8 < local_f0 + -1) {
    *(undefined4 *)
     ((long)local_f8 + (-(uVar8 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar8 & 0xffffffff) << 1)) =
         0x2011;
  }
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar3 = local_f8;
  lVar6 = 0;
  psVar7 = local_a0 + 1;
  do {
    local_70 = local_a0;
    if (psVar7[-1] == 0) {
LAB_01c152fc:
      if ((int)lVar6 < 0) {
        local_70 = *(undefined2 **)(PTR_PTR_04bb8620 + 8);
      }
      break;
    }
    if (*psVar7 == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c152fc;
    }
    if (psVar7[1] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01c152fc;
    }
    lVar6 = lVar6 + 3;
    psVar7 = psVar7 + 3;
  } while (lVar6 != 0x80001);
  local_78 = PTR_DAT_04bb8610 + 0x10;
  (**(code **)(local_100 + 0x18))(&local_100);
  lVar6 = 0;
  do {
    if (local_f8[lVar6] == 0) goto LAB_01c1537c;
    if (local_f8[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c1537c;
    }
    if (local_f8[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01c1537c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01c1537c:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 4;
  if ((int)(local_f0 - uVar1) < 5) {
    uVar2 = local_f0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_78 + 0x18))(&local_78);
    memcpy(puVar3 + uVar1,local_70,(ulong)uVar2 << 1);
    puVar3[uVar2 + uVar1] = 0;
  }
  (**(code **)(local_100 + 0x18))(&local_100);
  uVar8 = 0;
  do {
    if (local_f8[uVar8] == 0) goto LAB_01c1542c;
    if (local_f8[uVar8 + 1] == 0) {
      uVar8 = uVar8 + 1;
      goto LAB_01c1542c;
    }
    if (local_f8[uVar8 + 2] == 0) {
      uVar8 = uVar8 + 2;
      goto LAB_01c1542c;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  uVar8 = 0;
LAB_01c1542c:
  if ((int)uVar8 < local_f0 + -1) {
    *(undefined4 *)
     ((long)local_f8 + (-(uVar8 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar8 & 0xffffffff) << 1)) =
         0x2011;
  }
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar3 = local_f8;
  lVar6 = 0;
  do {
    if (local_a0[lVar6] == 0) {
LAB_01c15490:
      iVar5 = (int)lVar6;
joined_r0x01c15494:
      if (3 < iVar5) {
        puVar9 = local_a0 + 4;
        goto LAB_01c154b8;
      }
      break;
    }
    if (local_a0[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c15490;
    }
    if (local_a0[lVar6 + 2] == 0) {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01c15494;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  puVar9 = (undefined2 *)PTR_DAT_04c4b998;
LAB_01c154b8:
  (**(code **)(local_100 + 0x18))(&local_100);
  lVar6 = 0;
  do {
    if (local_f8[lVar6] == 0) goto LAB_01c1550c;
    if (local_f8[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c1550c;
    }
    if (local_f8[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01c1550c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01c1550c:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 4;
  if ((int)(local_f0 - uVar1) < 5) {
    uVar2 = local_f0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(puVar3 + uVar1,puVar9,(ulong)uVar2 << 1);
    puVar3[uVar2 + uVar1] = 0;
  }
  (**(code **)(local_100 + 0x18))(&local_100);
  uVar8 = 0;
  do {
    if (local_f8[uVar8] == 0) goto LAB_01c155a0;
    if (local_f8[uVar8 + 1] == 0) {
      uVar8 = uVar8 + 1;
      goto LAB_01c155a0;
    }
    if (local_f8[uVar8 + 2] == 0) {
      uVar8 = uVar8 + 2;
      goto LAB_01c155a0;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  uVar8 = 0;
LAB_01c155a0:
  if ((int)uVar8 < local_f0 + -1) {
    *(undefined4 *)
     ((long)local_f8 + (-(uVar8 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar8 & 0xffffffff) << 1)) =
         0x2011;
  }
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar3 = local_f8;
  lVar6 = 0;
  do {
    if (local_a0[lVar6] == 0) {
LAB_01c15600:
      iVar5 = (int)lVar6;
joined_r0x01c15604:
      if (7 < iVar5) {
        puVar9 = local_a0 + 8;
        goto LAB_01c15628;
      }
      break;
    }
    if (local_a0[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c15600;
    }
    if (local_a0[lVar6 + 2] == 0) {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01c15604;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  puVar9 = (undefined2 *)PTR_DAT_04c4b998;
LAB_01c15628:
  (**(code **)(local_100 + 0x18))(&local_100);
  lVar6 = 0;
  do {
    if (local_f8[lVar6] == 0) goto LAB_01c1567c;
    if (local_f8[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01c1567c;
    }
    if (local_f8[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01c1567c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01c1567c:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 4;
  if ((int)(local_f0 - uVar1) < 5) {
    uVar2 = local_f0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(puVar3 + uVar1,puVar9,(ulong)uVar2 << 1);
    puVar3[uVar2 + uVar1] = 0;
  }
  FUN_006f5580(param_1,&local_100);
  return 1;
}

