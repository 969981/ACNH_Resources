
undefined8
FUN_01d4c680(long param_1,undefined8 param_2,ulong param_3,uint param_4,long *param_5,
            undefined8 *param_6)

{
  long *plVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  void *pvVar13;
  undefined2 *puVar14;
  long local_220;
  int local_218 [76];
  uint local_e8;
  uint local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 local_7c [4];
  undefined2 local_74;
  undefined1 *local_70 [2];
  
  local_90 = PTR_DAT_04bc1148;
  puVar2 = PTR_DAT_04bb4fb8;
  if (*(int *)(param_1 + 0x380) != 3) {
    return 0;
  }
  local_88 = local_7c;
  *(undefined1 *)(param_1 + 0xab9) = 0;
  local_74 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  lVar8 = *(long *)puVar2;
  local_90 = local_90 + 0x10;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_7c[0] = 0;
  local_80 = 5;
  uStack_d4 = (uint)(*(char *)(lVar8 + 0x13d4) != '\0' && *(char *)(lVar8 + 0x13d6) != '\0');
  if (*(char *)(lVar8 + 0x27c4) != '\0' && *(char *)(lVar8 + 0x27c6) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (*(char *)(lVar8 + 0x3bb4) != '\0' && *(char *)(lVar8 + 0x3bb6) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (*(char *)(lVar8 + 0x4fa4) != '\0' && *(char *)(lVar8 + 0x4fa6) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (*(char *)(lVar8 + 0x6394) != '\0' && *(char *)(lVar8 + 0x6396) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (*(char *)(lVar8 + 0x7784) != '\0' && *(char *)(lVar8 + 0x7786) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (*(char *)(lVar8 + 0x8b74) != '\0' && *(char *)(lVar8 + 0x8b76) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (*(char *)(lVar8 + 0x9f64) != '\0' && *(char *)(lVar8 + 0x9f66) != '\0') {
    uStack_d4 = uStack_d4 + 1;
  }
  if (uStack_d4 < 2) {
    uStack_d4 = 1;
  }
  local_d8 = (undefined4)param_2;
  if (*(int *)(param_1 + 0xaa0) == 3) {
    local_e0 = 0;
    uVar6 = FUN_01dbe988(*(undefined8 *)PTR_DAT_04bb27d0,param_2,local_218);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *(bool *)(param_1 + 0xab9) = (ulong)local_e0 == 2;
    if (local_e0 == 2) {
      return 0;
    }
    if (param_5 != (long *)0x0) {
      if (local_e0 == 0xffffffff) goto LAB_01d4cda4;
      local_70[0] = (undefined1 *)&local_220;
      uVar6 = (*(code *)(&PTR_LAB_04a59748)[local_e0])(local_70,local_218);
      pvVar3 = DAT_0536d358;
      if ((uVar6 & 1) != 0) {
        (**(code **)(*param_5 + 0x18))(param_5);
        pvVar13 = (void *)param_5[1];
        if (pvVar3 != pvVar13) {
          (**(code **)(*param_5 + 0x18))(param_5);
          lVar8 = 0;
          do {
            if (*(short *)(param_5[1] + lVar8 * 2) == 0) goto LAB_01d4c9c4;
            lVar9 = param_5[1] + lVar8 * 2;
            if (*(short *)(lVar9 + 2) == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01d4c9c4;
            }
            if (*(short *)(lVar9 + 4) == 0) {
              lVar8 = lVar8 + 2;
              goto LAB_01d4c9c4;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_01d4c9c4:
          uVar5 = (uint)lVar8;
          if (DAT_0536d360 <= (int)(uint)lVar8) {
            uVar5 = DAT_0536d360 - 1;
          }
          uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
          memcpy(pvVar3,pvVar13,uVar6);
          *(undefined2 *)((long)pvVar3 + uVar6) = 0;
        }
        puVar4 = local_88;
        (**(code **)(*param_5 + 0x18))(param_5);
        puVar14 = (undefined2 *)param_5[1];
        if (puVar4 != puVar14) {
          (**(code **)(*param_5 + 0x18))(param_5);
          lVar8 = 0;
          do {
            if (*(short *)(param_5[1] + lVar8 * 2) == 0) goto LAB_01d4ca64;
            lVar9 = param_5[1] + lVar8 * 2;
            if (*(short *)(lVar9 + 2) == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01d4ca64;
            }
            if (*(short *)(lVar9 + 4) == 0) {
              lVar8 = lVar8 + 2;
              goto LAB_01d4ca64;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_01d4ca64:
          uVar5 = (uint)lVar8;
          if (local_80 <= (int)(uint)lVar8) {
            uVar5 = local_80 - 1;
          }
          uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
          memcpy(puVar4,puVar14,uVar6);
          *(undefined2 *)((long)puVar4 + uVar6) = 0;
        }
      }
    }
    local_220 = param_1;
    if (local_e0 == 0xffffffff) {
LAB_01d4cda4:
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_70[0] = (undefined1 *)&local_220;
    uVar6 = (*(code *)(&PTR_LAB_04a59760)[local_e0])(local_70,local_218);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (local_e0 == 0xffffffff) goto LAB_01d4cda4;
    ppuVar11 = &PTR_LAB_04a59778;
    uVar5 = local_e0;
  }
  else {
    local_e8 = 0;
    uVar6 = FUN_01dbe5e4(*(undefined8 *)PTR_DAT_04bb27d0,param_2,local_218);
    if ((uVar6 & 1) == 0) goto LAB_01d4cc08;
    if (local_e8 == 3) {
      *(undefined1 *)(param_1 + 0xab9) = 1;
      return 0;
    }
    *(bool *)(param_1 + 0xab9) = local_e8 == 4;
    if (local_e8 == 4) {
      return 0;
    }
    if (param_5 != (long *)0x0) {
      if (local_e8 == 0xffffffff) goto LAB_01d4cda4;
      local_70[0] = (undefined1 *)&local_220;
      uVar6 = (*(code *)(&PTR_LAB_04a59790)[local_e8])(local_70,local_218);
      pvVar3 = DAT_0536d358;
      if ((uVar6 & 1) != 0) {
        (**(code **)(*param_5 + 0x18))(param_5);
        pvVar13 = (void *)param_5[1];
        if (pvVar3 != pvVar13) {
          (**(code **)(*param_5 + 0x18))(param_5);
          lVar8 = 0;
          do {
            if (*(short *)(param_5[1] + lVar8 * 2) == 0) goto LAB_01d4cb0c;
            lVar9 = param_5[1] + lVar8 * 2;
            if (*(short *)(lVar9 + 2) == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01d4cb0c;
            }
            if (*(short *)(lVar9 + 4) == 0) {
              lVar8 = lVar8 + 2;
              goto LAB_01d4cb0c;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_01d4cb0c:
          uVar5 = (uint)lVar8;
          if (DAT_0536d360 <= (int)(uint)lVar8) {
            uVar5 = DAT_0536d360 - 1;
          }
          uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
          memcpy(pvVar3,pvVar13,uVar6);
          *(undefined2 *)((long)pvVar3 + uVar6) = 0;
        }
        puVar4 = local_88;
        (**(code **)(*param_5 + 0x18))(param_5);
        puVar14 = (undefined2 *)param_5[1];
        if (puVar4 != puVar14) {
          (**(code **)(*param_5 + 0x18))(param_5);
          lVar8 = 0;
          do {
            if (*(short *)(param_5[1] + lVar8 * 2) == 0) goto LAB_01d4cbac;
            lVar9 = param_5[1] + lVar8 * 2;
            if (*(short *)(lVar9 + 2) == 0) {
              lVar8 = lVar8 + 1;
              goto LAB_01d4cbac;
            }
            if (*(short *)(lVar9 + 4) == 0) {
              lVar8 = lVar8 + 2;
              goto LAB_01d4cbac;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_01d4cbac:
          uVar5 = (uint)lVar8;
          if (local_80 <= (int)(uint)lVar8) {
            uVar5 = local_80 - 1;
          }
          uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
          memcpy(puVar4,puVar14,uVar6);
          *(undefined2 *)((long)puVar4 + uVar6) = 0;
        }
      }
    }
    if (local_e8 == 0xffffffff) goto LAB_01d4cda4;
    ppuVar11 = &PTR_LAB_04a597b8;
    uVar5 = local_e8;
  }
  local_70[0] = (undefined1 *)&local_220;
  uVar5 = (*(code *)ppuVar11[uVar5])(local_70,local_218);
  *(uint *)(param_1 + 0xaa8) = uVar5 & 0xff;
LAB_01d4cc08:
  lVar8 = *(long *)PTR_DAT_04bb21d0;
  puVar14 = *(undefined2 **)(lVar8 + 0x228);
  *(undefined8 *)(lVar8 + 0x1e8) = uStack_c8;
  *(undefined8 *)(lVar8 + 0x1f0) = local_c0;
  *(ulong *)(lVar8 + 0x1d8) = CONCAT44(uStack_d4,local_d8);
  *(undefined8 *)(lVar8 + 0x1e0) = local_d0;
  *(undefined8 *)(lVar8 + 0x1f8) = local_b8;
  *(undefined8 *)(lVar8 + 0x200) = local_b0;
  *(undefined8 *)(lVar8 + 0x208) = local_a8;
  *(undefined8 *)(lVar8 + 0x210) = local_a0;
  *(undefined8 *)(lVar8 + 0x218) = local_98;
  (**(code **)(local_90 + 0x18))(&local_90);
  puVar4 = local_88;
  if (puVar14 != local_88) {
    (**(code **)(local_90 + 0x18))(&local_90);
    lVar9 = 0;
    do {
      if (local_88[lVar9] == 0) goto LAB_01d4cccc;
      if (local_88[lVar9 + 1] == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01d4cccc;
      }
      if (local_88[lVar9 + 2] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01d4cccc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01d4cccc:
    uVar5 = (uint)lVar9;
    if (*(int *)(lVar8 + 0x230) <= (int)(uint)lVar9) {
      uVar5 = *(int *)(lVar8 + 0x230) - 1;
    }
    uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
    memcpy(puVar14,puVar4,uVar6);
    *(undefined2 *)((long)puVar14 + uVar6) = 0;
  }
  *(undefined1 *)(lVar8 + 0x1d0) = 1;
  uVar7 = 0xf;
  if ((param_4 & 1) != 0) {
    uVar7 = 0x10;
  }
  plVar1 = (long *)(param_1 + 0x3f0);
  if ((param_3 & 1) == 0) {
    uVar7 = 0xc;
  }
  *(undefined4 *)(param_1 + 0x3e0) = uVar7;
  if (param_6 != (undefined8 *)0x0) {
    *plVar1 = (long)param_6;
    *param_6 = plVar1;
    lVar8 = *plVar1;
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
  }
  local_218[0] = 10;
  FUN_03ebb160(param_1 + 0x378,10);
  if (local_218[0] == *(int *)(param_1 + 0x3e0)) {
    lVar8 = *(long *)(param_1 + 0x3f0);
    if (*(int *)(param_1 + 1000) == 0) {
      if (lVar8 == 0) {
        return 1;
      }
      uVar7 = 0;
      uVar10 = 0;
      uVar12 = 1;
    }
    else {
      if (lVar8 == 0) {
        return 1;
      }
      uVar7 = *(undefined4 *)(param_1 + 1000);
      uVar12 = 0xffffffff;
      uVar10 = *(undefined4 *)(param_1 + 0x3ec);
    }
    *(undefined4 *)(lVar8 + 8) = uVar12;
    *(undefined4 *)(lVar8 + 0xc) = uVar7;
    *(undefined4 *)(lVar8 + 0x10) = uVar10;
    *(undefined4 *)(lVar8 + 0x14) = 0;
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
      *plVar1 = 0;
    }
  }
  return 1;
}

