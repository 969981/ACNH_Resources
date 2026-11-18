
void FUN_032da380(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [15];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [15];
  undefined1 local_9d;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb28c8;
  uStack_90 = *(undefined8 *)(param_2 + 8);
  local_88 = *(undefined8 *)(param_2 + 0x10);
  local_50 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  uStack_74 = *(undefined4 *)(param_2 + 0x18);
  local_78 = 0x20;
  lStack_68 = (ulong)*(uint *)(param_2 + 0x1c) << 0x20;
  local_4c = *(undefined1 *)(param_2 + 0x51);
  local_48 = 0;
  lVar11 = *(long *)PTR_DAT_04bb28c8;
  uStack_80 = local_88;
  if (lVar11 == 0) {
    pcVar10 = *(code **)(*param_1 + 0x40);
    plVar8 = param_1;
  }
  else {
    local_9d = 0;
    local_b0 = 0x10;
    local_d8 = 0x10;
    local_b8 = local_ac;
    puStack_e0 = local_d4;
    local_ac[0] = 0;
    local_c5 = 0;
    local_e8 = PTR_DAT_04bb2ab0 + 0x10;
    local_d4[0] = 0;
    local_c0 = local_e8;
    FUN_038b6c10(&local_e8,&local_98);
    puVar4 = local_b8;
    if (*(char *)(param_2 + 0x52) != '\0') {
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar9 = 0;
      do {
        if (local_b8[lVar9] == '\0') goto LAB_032da4b0;
        if (local_b8[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_032da4b0;
        }
        if (local_b8[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_032da4b0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_032da4b0:
      uVar1 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
      uVar2 = 2;
      if ((int)(local_b0 - uVar1) < 3) {
        uVar2 = local_b0 + ~uVar1;
      }
      if (0 < (int)uVar2) {
        memcpy(puVar4 + uVar1,&DAT_040a58fa,(ulong)uVar2);
        puVar4[(ulong)uVar2 + (ulong)uVar1] = 0;
      }
    }
    puVar6 = (undefined8 *)FUN_038da030(lVar11,&local_98,&local_c0,0);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      uVar7 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb2820);
      if ((uVar7 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
    }
    plVar8 = (long *)param_1[0x21];
    param_1[0x21] = (long)puVar6;
    if ((plVar8 == (long *)0x0) || (*(long *)puVar3 == 0)) goto LAB_032da568;
    pcVar10 = *(code **)(*plVar8 + 0x18);
  }
  (*pcVar10)(plVar8);
LAB_032da568:
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}

