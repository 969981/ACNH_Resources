
void FUN_0334f310(long param_1,long *param_2)

{
  size_t __n;
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int iVar5;
  long lVar6;
  undefined2 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long local_758;
  undefined *local_750;
  undefined2 *local_748;
  int local_740;
  undefined2 local_73c [255];
  undefined2 local_53e;
  undefined *local_538;
  long local_530;
  undefined8 local_528;
  undefined1 local_520;
  undefined1 local_515;
  undefined *local_510;
  char *local_508;
  undefined4 local_500;
  undefined1 local_4fc;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined *local_4e0;
  undefined1 *local_4d8;
  undefined4 local_4d0;
  undefined1 local_4cc [63];
  undefined1 local_48d;
  undefined *local_488;
  undefined1 *local_480;
  undefined4 local_478;
  undefined1 local_474 [63];
  undefined1 local_435;
  undefined1 auStack_430 [2];
  undefined8 auStack_42e [63];
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined1 *local_218;
  undefined4 local_210;
  undefined1 local_20c [63];
  undefined1 local_1cd;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [63];
  undefined1 local_175;
  undefined *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  
  puVar3 = PTR_DAT_04bc8e68;
  lVar10 = *(long *)(*(long *)(param_1 + 0x300) + 0xf0);
  local_508 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_508 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_508 != '\0') {
    local_510 = PTR_DAT_04bc8e68 + 0x10;
    lVar10 = FUN_032cb8e0(&local_750,&local_510,lVar10);
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0xe8);
    }
  }
  puVar1 = &local_230;
  if (&local_230 <= auStack_42e) {
    puVar1 = auStack_42e;
  }
  local_750 = *(undefined **)(lVar10 + 0x18);
  __n = (long)puVar1 + (-0xe0 - (long)&local_510);
  local_508 = "T_Text_01";
  local_510 = puVar3 + 0x10;
  lVar6 = FUN_0328b6d0(&local_750,&local_510,0);
  if (lVar6 != 0) {
    local_228 = 0;
    local_230 = 0;
    local_218 = local_20c;
    local_210 = 0x40;
    local_1cd = 0;
    local_20c[0] = 0;
    local_4e0 = PTR_DAT_04bb2bc0 + 0x10;
    local_1c0 = local_1b4;
    local_138 = local_12c;
    local_12c[0] = 0;
    local_1b8 = 0x40;
    local_e0 = local_d4;
    local_d4[0] = 0;
    local_175 = 0;
    local_1b4[0] = 0;
    local_160 = 0;
    local_15c = 0;
    local_158 = 0xffffffff;
    local_150 = 0xffffffff00000000;
    local_148 = 0xffffffff;
    local_130 = 0x40;
    local_ed = 0;
    local_d8 = 0x40;
    local_95 = 0;
    local_170 = PTR_DAT_04bb2e00 + 0x10;
    local_80 = *(int *)PTR_DAT_04bc0b30;
    local_168 = 0;
    local_7c = 0;
    *(int *)PTR_DAT_04bc0b30 = local_80 + 1;
    local_88 = PTR_DAT_04bc0a78 + 0x10;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0x100;
    local_500 = 0x100;
    local_4fc = 0;
    local_4f8 = 0xffffffff;
    local_4f0 = 0xffffffff00000000;
    local_4e8 = 0xffffffff;
    local_4d0 = 0x40;
    local_48d = 0;
    local_4cc[0] = 0;
    local_478 = 0x40;
    local_435 = 0;
    local_4d8 = local_4cc;
    local_474[0] = 0;
    local_480 = local_474;
    local_510 = PTR_DAT_04bc0bb8 + 0x10;
    local_508 = auStack_430;
    local_488 = local_4e0;
    local_220 = local_4e0;
    local_1c8 = local_4e0;
    local_140 = local_4e0;
    local_e8 = local_4e0;
    memset(auStack_430,0,0x200);
    memset(auStack_430,0,__n);
    local_515 = 0;
    local_520 = 0;
    local_528 = 0x3231303000000010;
    local_538 = PTR_DAT_04bb2ab0 + 0x10;
    local_530 = (long)&local_528 + 4;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_748 = (undefined2 *)param_2[1];
    local_750 = PTR_DAT_04bb2020 + 0x10;
    FUN_01bebc30(&local_230,&local_510,&local_750,&local_538,0);
    FUN_01bebe38(&local_230);
    if (local_70._1_1_ != '\0') {
      local_740 = 0x100;
      local_53e = 0;
      local_750 = PTR_DAT_04bb8a50 + 0x10;
      local_73c[0] = 0;
      local_748 = local_73c;
      puVar7 = (undefined2 *)(**(code **)(local_510 + 0x10))(&local_510);
      iVar5 = (**(code **)(local_510 + 0x20))(&local_510);
      puVar4 = local_748;
      if (local_748 != puVar7) {
        uVar9 = (ulong)(iVar5 - 1U);
        if ((int)(iVar5 - 1U) < 0) {
          uVar9 = 0;
          do {
            if (puVar7[uVar9] == 0) goto LAB_0334f638;
            if (puVar7[uVar9 + 1] == 0) {
              uVar8 = (int)uVar9 + 1;
              goto LAB_0334f63c;
            }
            if (puVar7[uVar9 + 2] == 0) {
              uVar8 = (int)uVar9 + 2;
              goto LAB_0334f63c;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar8 = 0;
        }
        else {
LAB_0334f638:
          uVar8 = (uint)uVar9;
        }
LAB_0334f63c:
        if (local_740 <= (int)uVar8) {
          uVar8 = local_740 - 1;
        }
        uVar9 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1;
        memcpy(local_748,puVar7,uVar9);
        *(undefined2 *)((long)puVar4 + uVar9) = 0;
      }
      local_758 = lVar6;
      FUN_032d67f0(&local_758,&local_750);
    }
    FUN_01bebabc(&local_230);
  }
  puVar2 = PTR_DAT_04bc0b30;
  local_750 = *(undefined **)(lVar10 + 0x18);
  local_508 = "T_Text_02";
  local_510 = puVar3 + 0x10;
  lVar10 = FUN_0328b6d0(&local_750,&local_510,0);
  if (lVar10 != 0) {
    local_228 = 0;
    local_230 = 0;
    local_218 = local_20c;
    local_210 = 0x40;
    local_1cd = 0;
    local_20c[0] = 0;
    local_1c0 = local_1b4;
    local_4e0 = PTR_DAT_04bb2bc0 + 0x10;
    local_138 = local_12c;
    local_12c[0] = 0;
    local_e0 = local_d4;
    local_d4[0] = 0;
    local_1b8 = 0x40;
    local_175 = 0;
    local_1b4[0] = 0;
    local_160 = 0;
    local_15c = 0;
    local_158 = 0xffffffff;
    local_150 = 0xffffffff00000000;
    local_148 = 0xffffffff;
    local_130 = 0x40;
    local_ed = 0;
    local_d8 = 0x40;
    local_95 = 0;
    local_170 = PTR_DAT_04bb2e00 + 0x10;
    local_80 = *(int *)puVar2;
    local_168 = 0;
    local_7c = 0;
    *(int *)puVar2 = local_80 + 1;
    local_88 = PTR_DAT_04bc0a78 + 0x10;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0x100;
    local_500 = 0x100;
    local_4fc = 0;
    local_4f8 = 0xffffffff;
    local_4f0 = 0xffffffff00000000;
    local_4e8 = 0xffffffff;
    local_4d0 = 0x40;
    local_48d = 0;
    local_4cc[0] = 0;
    local_478 = 0x40;
    local_435 = 0;
    local_4d8 = local_4cc;
    local_474[0] = 0;
    local_480 = local_474;
    local_510 = PTR_DAT_04bc0bb8 + 0x10;
    local_508 = auStack_430;
    local_488 = local_4e0;
    local_220 = local_4e0;
    local_1c8 = local_4e0;
    local_140 = local_4e0;
    local_e8 = local_4e0;
    memset(auStack_430,0,0x200);
    memset(auStack_430,0,__n);
    local_515 = 0;
    local_520 = 0;
    local_528 = 0x3431303000000010;
    local_538 = PTR_DAT_04bb2ab0 + 0x10;
    local_530 = (long)&local_528 + 4;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_748 = (undefined2 *)param_2[1];
    local_750 = PTR_DAT_04bb2020 + 0x10;
    FUN_01bebc30(&local_230,&local_510,&local_750,&local_538,0);
    FUN_01bebe38(&local_230);
    if (local_70._1_1_ != '\0') {
      local_740 = 0x100;
      local_53e = 0;
      local_750 = PTR_DAT_04bb8a50 + 0x10;
      local_73c[0] = 0;
      local_748 = local_73c;
      puVar7 = (undefined2 *)(**(code **)(local_510 + 0x10))(&local_510);
      iVar5 = (**(code **)(local_510 + 0x20))(&local_510);
      puVar4 = local_748;
      if (local_748 != puVar7) {
        uVar9 = (ulong)(iVar5 - 1U);
        if ((int)(iVar5 - 1U) < 0) {
          uVar9 = 0;
          do {
            if (puVar7[uVar9] == 0) goto LAB_0334f8e0;
            if (puVar7[uVar9 + 1] == 0) {
              uVar9 = uVar9 + 1;
              goto LAB_0334f8e0;
            }
            if (puVar7[uVar9 + 2] == 0) {
              uVar9 = uVar9 + 2;
              goto LAB_0334f8e0;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar9 = 0;
        }
LAB_0334f8e0:
        uVar8 = (uint)uVar9;
        if (local_740 <= (int)(uint)uVar9) {
          uVar8 = local_740 - 1;
        }
        uVar9 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1;
        memcpy(local_748,puVar7,uVar9);
        *(undefined2 *)((long)puVar4 + uVar9) = 0;
      }
      local_758 = lVar10;
      FUN_032d67f0(&local_758,&local_750);
    }
    FUN_01bebabc(&local_230);
  }
  return;
}

