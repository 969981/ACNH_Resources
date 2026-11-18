
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032d86f0(long *param_1,long param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  undefined *puVar10;
  int iVar11;
  undefined **local_20e8;
  long lStack_20e0;
  undefined8 local_20c8;
  undefined8 uStack_20c0;
  undefined8 local_20b8;
  undefined8 uStack_20b0;
  undefined *local_20a8;
  char *local_20a0;
  undefined4 local_2098;
  undefined2 local_2094 [4095];
  undefined2 local_96;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bc9198;
  puVar1 = PTR_DAT_04bc6338;
  puVar10 = PTR_PTR_04bb2238;
  plVar4 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar4 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  uStack_78 = *(undefined8 *)(param_2 + 8);
  local_90 = PTR_DAT_04bc8e68 + 0x10;
  uStack_88 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_80 = local_90;
  (**(code **)(*plVar4 + 0x18))(&local_20a8,plVar4,&local_80,&local_90);
  local_2094[0] = 0;
  local_70 = PTR_DAT_04bb8610 + 0x10;
  uStack_68 = local_20a0;
  local_20a0 = (char *)local_2094;
  local_2098 = 0x1000;
  local_96 = 0;
  local_20a8 = &DAT_04b1bae0;
  plVar8 = *(long **)(*(long *)puVar1 + 0x88);
  plVar4 = *(long **)puVar2;
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))();
  local_20c8 = *param_4;
  uStack_20c0 = param_4[1];
  local_20b8 = param_4[2];
  uStack_20b0 = param_4[3];
  uVar3 = (**(code **)(*plVar4 + 0x78))(plVar4,&local_20a8,&local_70,param_3,&local_20c8);
  (**(code **)(*(long *)*param_1 + 0xf0))
            ((long *)*param_1,*(undefined8 *)(*(long *)puVar1 + 0x68),uVar3,uVar3);
  (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&DAT_04169358,0);
  plVar4 = (long *)*param_1;
  (**(code **)(local_20a8 + 0x18))(&local_20a8);
  (**(code **)(*plVar4 + 0x110))(plVar4,local_20a0,0,uVar3);
  pcVar9 = *(char **)(*param_1 + 0xe0);
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  local_20a0 = PTR_DAT_04bb2120;
  if (pcVar9 != (char *)0x0) {
    local_20a0 = pcVar9;
  }
  if ((local_20a0 == "$") || (*local_20a0 == '$')) {
    puVar10 = *(undefined **)(*param_1 + 0xd8);
    local_20a8 = PTR_DAT_04bc8e78 + 0x10;
    local_20a0 = PTR_DAT_04bb2da0;
    if (puVar10 != (undefined *)0x0) {
      local_20a0 = puVar10;
    }
    FUN_032d70a8(param_1,&local_20a8);
    lVar5 = FUN_032cbf00(*(undefined8 *)(*param_1 + 0x18));
    if (lVar5 != 0) {
      lStack_20e0 = *param_1;
      local_20e8 = &PTR_LAB_04b1bb80;
      plVar4 = *(long **)(lVar5 + 0xf0);
      if ((plVar4 != (long *)0x0) &&
         ((**(code **)(*plVar4 + 8))(plVar4), &local_20e8 == (undefined ***)0x0)) {
        *(undefined8 *)(lVar5 + 0xf0) = 0;
        return;
      }
      uVar6 = (*(code *)local_20e8[3])(&local_20e8,lVar5 + 0xf8);
      *(undefined8 *)(lVar5 + 0xf0) = uVar6;
      if (&local_20e8 != (undefined ***)0x0) {
        (*(code *)local_20e8[1])();
      }
    }
  }
  else if ((local_20a0 == "+") || (*local_20a0 == '+')) {
    lVar5 = 0;
    do {
      if (local_20a0[lVar5] == '\0') {
LAB_032d89c8:
        iVar11 = (int)lVar5;
joined_r0x032d89cc:
        if (0 < iVar11) {
          local_20a0 = local_20a0 + 1;
          goto LAB_032d89e8;
        }
        break;
      }
      if (local_20a0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_032d89c8;
      }
      if (local_20a0[lVar5 + 2] == '\0') {
        iVar11 = (int)lVar5 + 2;
        goto joined_r0x032d89cc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    local_20a0 = *(char **)(puVar10 + 8);
LAB_032d89e8:
    local_20a8 = PTR_DAT_04bb2020 + 0x10;
    uVar7 = FUN_038d1960(&local_70,&local_20a8,10);
    if ((uVar7 & 1) == 0) {
      uVar7 = 0;
      local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
    }
    else {
      uVar7 = (ulong)local_70 & 0xff;
    }
    FUN_032d720c(param_1,uVar7,(int)uVar7 != 0);
  }
  return;
}

