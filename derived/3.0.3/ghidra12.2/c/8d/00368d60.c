
undefined8
FUN_00368d60(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            long param_6,long param_7)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 auStack_200 [32];
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  long *plStack_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  long *plStack_1a0;
  undefined8 local_198;
  undefined1 *puStack_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined2 local_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  long *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  long local_d8;
  long lStack_d0;
  int local_c8;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  int local_b0;
  undefined1 auStack_a8 [72];
  
  param_1[8] = param_5;
  memset(auStack_200,0,0x158);
  if (param_7 == 0) {
    local_188 = 0;
    local_1c0 = &DAT_3f8000003f800000;
  }
  else {
    local_188 = *(undefined8 *)(param_7 + 0x20);
    local_1c0 = *(undefined1 **)(param_7 + 0x28);
  }
  local_f0 = *(undefined1 *)(param_6 + 0xd0);
  local_198 = *(undefined8 *)(param_6 + 0x28);
  puStack_190 = auStack_200;
  local_180 = 0;
  local_17c = 0;
  local_ef = *(undefined2 *)(param_6 + 0xd1);
  local_150 = *(undefined8 *)(param_6 + 0x70);
  uStack_148 = *(undefined8 *)(param_6 + 0x78);
  local_140 = *(undefined8 *)(param_6 + 0x80);
  uStack_138 = *(undefined8 *)(param_6 + 0x88);
  local_170 = *(undefined8 *)(param_6 + 0x50);
  uStack_168 = *(undefined8 *)(param_6 + 0x58);
  local_160 = *(undefined8 *)(param_6 + 0x60);
  uStack_158 = *(undefined8 *)(param_6 + 0x68);
  local_130 = *(undefined4 *)(param_6 + 0x90);
  uStack_12c = *(undefined4 *)(param_6 + 0x94);
  local_110 = *(undefined8 *)(param_6 + 0xb0);
  uStack_108 = *(undefined8 *)(param_6 + 0xb8);
  local_118 = *(undefined1 *)(param_6 + 0xa8);
  local_1b0 = *(long **)(param_6 + 0x10);
  local_1a8 = *(undefined8 *)(param_6 + 0x18);
  local_e8 = *(undefined1 *)(param_6 + 0xd8);
  local_1b8 = 0;
  local_ec = *(undefined4 *)(param_4 + 8);
  local_e4 = *(undefined4 *)(param_6 + 0xdc);
  local_120 = *(long **)(param_6 + 0xa0);
  local_128 = 0;
  lVar7 = local_120[4];
  *(int *)(local_120 + 1) = (int)local_120[1] + 1;
  if (lVar7 != 0) {
    plVar9 = (long *)(*(long *)(lVar7 + 0x20) + (long)*(int *)(lVar7 + 0x28) * 0x68);
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
    *(int *)(local_120 + 3) = (int)local_120[3] + 1;
    lVar7 = local_120[4];
    *(undefined4 *)(plVar9 + 9) = 0;
    *(undefined4 *)(plVar9 + 0xc) = 0;
    plVar9[2] = (long)param_1;
    lVar10 = *plVar9;
    plVar9[5] = param_7;
    plVar9[6] = lVar7;
    plVar8 = (long *)local_120[2];
    *plVar9 = *plVar8;
    *(long **)(lVar10 + 8) = plVar8;
    *(long **)(*plVar8 + 8) = plVar9;
    *plVar8 = lVar10;
    *(long **)(*local_120 + (long)(int)local_120[1] * 8 + -8) = plVar9;
  }
  local_d8 = param_4 + (ulong)*(ushort *)(param_4 + 6);
  local_1d0 = param_5;
  plStack_1c8 = param_1;
  plStack_1a0 = param_1;
  FUN_00368550(auStack_200,param_4);
  if (local_c8 < 0x316e6170) goto LAB_00368fd0;
  do {
    lVar7 = local_d8;
    if (local_c8 < 0x31747063) {
      if (local_c8 < 0x31726373) {
        if (local_c8 == 0x316e6170) goto LAB_00369150;
        if (local_c8 == 0x31707267) {
          lVar10 = param_1[4];
          if (lVar10 == 0) {
            lVar7 = (**(code **)PTR_DAT_04bd0800)(0x10,4,*(undefined8 *)PTR_DAT_04bd0810);
            if (lVar7 != 0) {
              *(long *)lVar7 = lVar7;
              *(long *)(lVar7 + 8) = lVar7;
            }
            param_1[4] = lVar7;
          }
          else if (local_b0 == 1) {
            lVar6 = param_1[3];
            lVar4 = (**(code **)PTR_DAT_04bd0800)(0x38,4,*(undefined8 *)PTR_DAT_04bd0810);
            if (lVar4 != 0) {
              FUN_003673c0(lVar4,lVar7,lVar6);
            }
            FUN_00367700(lVar10,lVar4);
          }
        }
      }
      else {
        if (local_c8 == 0x31726373) goto LAB_00369150;
        if ((local_c8 == 0x31746e63) && (local_1b0 != (long *)0x0)) {
          FUN_00364d08(auStack_a8,local_d8,lStack_d0);
          (**(code **)(*local_1b0 + 0x10))(local_1b0,param_3,param_1,auStack_a8);
        }
      }
    }
    else if (local_c8 < 0x31747874) {
      if (local_c8 == 0x31747063) goto LAB_00369150;
      if (local_c8 == 0x31747270) goto LAB_00369150;
    }
    else {
      if (local_c8 == 0x31747874) goto LAB_00369150;
      if (local_c8 == 0x3174796c) {
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(local_d8 + 0xc);
        uVar11 = *(undefined4 *)(local_d8 + 0x10);
        param_1[6] = local_d8 + 0x1c;
        param_1[7] = lStack_d0;
        *(undefined4 *)((long)param_1 + 0x2c) = uVar11;
      }
    }
LAB_00369184:
    while( true ) {
      if (local_c0 == 0) {
        if (local_120[4] != 0) {
          iVar2 = (int)local_120[1];
          uVar5 = 0;
          if ((0 < iVar2) && (iVar2 <= *(int *)PTR_DAT_04bd0830)) {
            uVar5 = *(undefined8 *)(*local_120 + (ulong)(iVar2 - 1) * 8);
          }
          FUN_003693f0(param_1,uVar5);
        }
        iVar2 = (int)local_120[1] + -1;
        if ((int)local_120[1] < 1) {
          iVar2 = 0;
        }
        *(int *)(local_120 + 1) = iVar2;
        return 1;
      }
      local_d8 = local_c0;
      local_e0 = local_c4;
      FUN_00368550(auStack_200,param_4);
      if (0x316e616f < local_c8) break;
LAB_00368fd0:
      plVar8 = local_120;
      puVar3 = PTR_DAT_04bd0830;
      if (local_c8 < 0x31696c61) goto LAB_00369040;
      if (local_c8 < 0x316c7463) {
        if (local_c8 == 0x31696c61) goto LAB_00369150;
        if (local_c8 == 0x316c6776) goto LAB_003691b4;
      }
      else if (local_c8 == 0x316c7463) {
LAB_003691b4:
        if (local_120[4] == 0) {
          __s = (void *)local_120[5];
          *local_120 = (long)__s;
          __n = (long)*(int *)puVar3 * 8;
          *(int *)((long)local_120 + 0xc) = *(int *)puVar3;
          pvVar1 = (void *)((long)__s + __n);
          memset(__s,0,__n);
          *(void **)pvVar1 = pvVar1;
          *(void **)((long)pvVar1 + 8) = pvVar1;
          plVar8[2] = (long)pvVar1;
          FUN_0036ae20((long)pvVar1 + 0x10,(long)pvVar1 + 0x40);
          plVar8[4] = (long)pvVar1 + 0x10;
          lVar7 = local_120[4];
          if (lVar7 != 0) {
            plVar9 = (long *)(*(long *)(lVar7 + 0x20) + (long)*(int *)(lVar7 + 0x28) * 0x68);
            *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
            *(int *)(local_120 + 3) = (int)local_120[3] + 1;
            lVar7 = local_120[4];
            *(undefined4 *)(plVar9 + 9) = 0;
            *(undefined4 *)(plVar9 + 0xc) = 0;
            plVar9[2] = (long)param_1;
            lVar10 = *plVar9;
            plVar9[5] = param_7;
            plVar9[6] = lVar7;
            plVar8 = (long *)local_120[2];
            *plVar9 = *plVar8;
            *(long **)(lVar10 + 8) = plVar8;
            *(long **)(*plVar8 + 8) = plVar9;
            *plVar8 = lVar10;
            *(long **)(*local_120 + (long)(int)local_120[1] * 8 + -8) = plVar9;
          }
        }
        if (local_c8 == 0x316c7463) {
          *(undefined8 *)(*(long *)(*local_120 + (ulong)((int)local_120[1] - 1) * 8) + 0x18) =
               local_1e0;
        }
        if (local_c8 == 0x316c6776) {
          *(undefined8 *)(*(long *)(*local_120 + (ulong)((int)local_120[1] - 1) * 8) + 0x20) =
               local_1d8;
        }
      }
      else if (local_c8 == 0x316d7473) {
        FUN_00368950(param_1,auStack_200,param_3,param_7);
      }
    }
  } while( true );
LAB_00369040:
  if (((local_c8 == 0x31636970) || (local_c8 == 0x31646e62)) || (local_c8 == 0x31646e77)) {
LAB_00369150:
    local_100 = lStack_d0;
    lVar7 = (**(code **)(*param_1 + 0x78))
                      (param_1,param_2,param_3,local_d8,param_7,&local_1c0,auStack_200);
    if (lVar7 != 0) {
      local_b8 = lVar7;
    }
  }
  goto LAB_00369184;
}

