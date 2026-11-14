
void FUN_01b333b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined *local_a0;
  undefined *puStack_98;
  undefined **local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar6 = PTR_DAT_04bb2718;
  if ((param_5 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    local_70 = 0;
    local_80 = (long)&local_78 + 4;
    local_68 = 0;
    local_90 = &PTR_LAB_04a37c00;
    local_88 = 0x400000064;
    local_78 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_s_Package_04bb8ad8 + 0x135;
    uVar13 = 1;
    do {
      local_a0 = puVar1;
      puStack_98 = puVar2;
      FUN_006d8678(&local_d8,"1%02d_%02d",param_2,uVar13);
      FUN_03d53db0(*(undefined8 *)(*(long *)puVar6 + 0x408),&local_a0);
      puVar8 = (undefined8 *)FUN_03d53db0(*(undefined8 *)(*(long *)puVar6 + 0x408),&local_a0);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)(local_d8 + 0x18))(&local_d8);
        iVar7 = FUN_038f40b0(*puVar8,CONCAT44(uStack_cc,local_d0));
        if (-1 < iVar7) {
          uVar5 = 1 << (ulong)(uVar13 & 0x1f);
          uVar4 = *(uint *)(local_80 + (ulong)(uVar13 >> 5) * 4);
          if ((uVar4 & uVar5) == 0) {
            *(uint *)(local_80 + (ulong)(uVar13 >> 5) * 4) = uVar4 | uVar5;
            local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 100);
    uVar13 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar4 = uVar13 ^ DAT_05582b7c;
    uVar13 = uVar13 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar13;
    if ((int)(uint)local_88 < 1) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar5 = (uVar13 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = 0;
      uVar4 = uVar5 ^ uVar5 * 0x800;
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
      uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
      uVar11 = (local_78 & 0xffffffff) * (ulong)(uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5) >> 0x20
      ;
      do {
        if ((*(uint *)(local_80 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
          if ((int)uVar11 == 0) goto LAB_01b335c8;
          uVar11 = (ulong)((int)uVar11 - 1);
        }
        uVar13 = uVar13 + 1;
      } while ((uint)local_88 != uVar13);
      uVar13 = 0xffffffff;
    }
  }
LAB_01b335c8:
  FUN_01b46be0(&local_d8);
  local_a2 = 0;
  local_d8 = PTR_DAT_04bc05a8 + 0x10;
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar7 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == 0x56) goto LAB_01b3362c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
  }
  uVar11 = 0;
LAB_01b3362c:
  local_b0 = (undefined1)param_2;
  uStack_cc = *param_3;
  local_b8 = (undefined4)uVar11;
  uStack_b4 = 0xf;
  local_ac = *param_4;
  uStack_a8 = param_4[1];
  local_a4 = 0;
  local_a2 = (undefined1)uVar13;
  local_d0 = param_1;
  lVar9 = (**(code **)(local_d8 + 0x20))(&local_d8,*(undefined8 *)PTR_DAT_04bc0580);
  if (lVar9 != 0) {
    plVar10 = *(long **)PTR_DAT_04bb4fa8;
    lVar12 = *plVar10;
    plVar3 = (long *)(*(int *)((long)plVar10 + 0x14) + lVar9);
    *plVar10 = (long)plVar3;
    *plVar3 = lVar12;
    plVar3[1] = (long)plVar10;
    if (lVar12 != 0) {
      *(long **)(lVar12 + 8) = plVar3;
    }
    *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  }
  return;
}

