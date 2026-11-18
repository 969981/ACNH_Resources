
/* WARNING: Removing unreachable block (ram,0x032ee1f8) */
/* WARNING: Removing unreachable block (ram,0x032ee124) */
/* WARNING: Removing unreachable block (ram,0x032ee144) */
/* WARNING: Removing unreachable block (ram,0x032ee214) */

void FUN_032ee0b0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined2 *puStack_d8;
  undefined *local_d0;
  undefined2 *local_c8;
  undefined4 local_c0;
  undefined2 local_bc [60];
  undefined1 local_44 [4];
  
  FUN_032eda90(param_1,param_2,1);
  if (*(int *)(param_1 + 4) < 1) {
                    /* WARNING: Could not recover jumptable at 0x032ee184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3,param_2);
    return;
  }
  local_bc[0] = 0;
  local_c8 = local_bc;
  local_c0 = 0x38;
  local_d0 = &DAT_04b1c4d0;
  local_bc[0x37] = 0;
  plVar10 = *(long **)PTR_DAT_04bc96a8;
  uVar2 = (ulong)local_e0._4_4_;
  local_e0 = (undefined *)(uVar2 << 0x20);
  if (*plVar10 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    local_e0 = (undefined *)(uVar2 << 0x20);
    puVar8 = (undefined8 *)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,0x70,8);
  }
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar3 = PTR_DAT_04bc96d0;
  *puVar8 = 0;
  puVar8[1] = 0;
  FUN_032f9248(*(undefined8 *)puVar3,plVar10 + 2,0,0,puVar8,0x70);
  lVar9 = 0;
  do {
    uVar7 = FUN_038cd950(*(undefined2 *)((long)puVar8 + lVar9));
    lVar1 = lVar9 + 2;
    *(undefined2 *)((long)local_bc + lVar9) = uVar7;
    lVar9 = lVar1;
  } while (lVar1 != 0x70);
  if (*plVar10 != 0) {
    local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
    (**(code **)(*(long *)*plVar10 + 0x38))((long *)*plVar10,puVar8);
  }
  uVar6 = local_c0;
  puVar4 = local_c8;
  puVar3 = PTR_DAT_04bb8610;
  local_44[0] = 0;
  local_f0 = PTR_DAT_04bb8610 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_041691e0;
  puStack_e8 = &DAT_0416943e;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee2c0;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee2c0;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee2c0;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee2c0:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_041695aa;
  puStack_e8 = &DAT_041691e6;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee36c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee36c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee36c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee36c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_0416983a;
  puStack_e8 = &DAT_0416915c;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee41c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee41c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee41c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee41c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_041697bc;
  puStack_e8 = &DAT_04169442;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee4cc;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee4cc;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee4cc;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee4cc:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_04169160;
  puStack_e8 = &DAT_041691ea;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee57c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee57c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee57c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee57c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_04169b3e;
  puStack_e8 = &DAT_041692d2;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee62c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee62c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee62c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee62c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_04169540;
  puStack_e8 = &DAT_04169886;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee6dc;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee6dc;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee6dc;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee6dc:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_041694e8;
  puStack_e8 = &DAT_04169962;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee78c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee78c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee78c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee78c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_041696f0;
  puStack_e8 = &DAT_041695b0;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee83c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee83c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee83c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee83c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_041696f6;
  puStack_e8 = &DAT_04169b88;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee8ec;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee8ec;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee8ec;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee8ec:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  uVar6 = local_c0;
  puVar4 = local_c8;
  local_f0 = puVar3 + 0x10;
  puStack_d8 = (undefined2 *)&DAT_04169390;
  puStack_e8 = &DAT_0416988a;
  local_44[0] = 0;
  local_e0 = local_f0;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    if (local_c8[lVar9] == 0) goto LAB_032ee99c;
    if (local_c8[lVar9 + 1] == 0) {
      lVar9 = lVar9 + 1;
      goto LAB_032ee99c;
    }
    if (local_c8[lVar9 + 2] == 0) {
      lVar9 = lVar9 + 2;
      goto LAB_032ee99c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_032ee99c:
  FUN_038d0b80(puVar4,0,uVar6,puVar5,lVar9,&local_e0,&local_f0,local_44);
  (**(code **)(local_d0 + 0x18))(&local_d0);
  local_e0 = puVar3 + 0x10;
  puStack_d8 = local_c8;
  (**(code **)(*param_3 + 0x10))(param_3,&local_e0);
  return;
}

