
undefined8 FUN_01a1b330(undefined4 param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined *local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined **local_b8;
  undefined **local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_04bb27c8;
  puVar3 = PTR_DAT_04bb2010;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = param_2;
  uStack_bc = param_3;
  if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar7 != 0)) {
    FUN_00963acc(lVar7,&local_c8);
  }
  uVar8 = FUN_01a1a2a0(param_1,param_2,param_3,param_4);
  puVar6 = PTR_DAT_04bb5d10;
  puVar5 = PTR_DAT_04bb46c8;
  if ((uVar8 & 1) == 0) {
LAB_01a1b5a0:
    uVar10 = 0;
  }
  else {
    local_b8 = &puStack_90;
    local_b0 = &local_80;
    local_a8 = puVar3 + 0x10;
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    iVar2 = local_c0 - ((local_c0 & 0x80000001) == 1);
    local_9c = uStack_bc - ((uStack_bc & 0x80000001) == 1);
    local_78 = iVar2 + 1;
    iStack_74 = local_9c + 1;
    iVar1 = local_9c + 2;
    local_a0 = iVar2;
    puStack_90 = local_a8;
    local_88 = iVar2;
    iStack_84 = local_9c;
    local_80 = local_a8;
    do {
      local_58 = 0;
      local_68 = 0;
      local_6c = 0;
      FUN_00948e68(*(long *)puVar4 + 0x28,&local_a8,&local_58,(long)&local_68 + 4,&local_68,
                   &local_6c);
      local_54 = local_58;
      lVar7 = FUN_009807cc(*(long *)puVar5 + 8,local_58);
      if (((lVar7 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar7,0xd,0x58da05ed,*(undefined8 *)puVar6),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) goto LAB_01a1b5a0;
      local_54 = local_68._4_4_;
      lVar7 = FUN_009807cc(*(long *)puVar5 + 8,local_68._4_4_);
      if (((lVar7 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar7,0xd,0x58da05ed,*(undefined8 *)puVar6),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) goto LAB_01a1b5a0;
      local_54 = (undefined4)local_68;
      lVar7 = FUN_009807cc(*(long *)puVar5 + 8,local_68 & 0xffffffff);
      if (((lVar7 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar7,0xd,0x58da05ed,*(undefined8 *)puVar6),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) goto LAB_01a1b5a0;
      local_54 = local_6c;
      lVar7 = FUN_009807cc(*(long *)puVar5 + 8,local_6c);
      if (((lVar7 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar7,0xd,0x58da05ed,*(undefined8 *)puVar6),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) goto LAB_01a1b5a0;
      if (local_a0 < *(int *)(local_b0 + 1)) {
        local_a0 = local_a0 + 1;
      }
      else {
        local_9c = local_9c + 1;
        local_a0 = *(int *)(local_b8 + 1);
      }
    } while ((iVar2 != local_a0) || (iVar1 != local_9c));
    uVar10 = 1;
  }
  return uVar10;
}

