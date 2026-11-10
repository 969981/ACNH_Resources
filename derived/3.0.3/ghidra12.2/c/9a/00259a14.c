
bool FUN_00259a14(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined *local_120;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined1 auStack_f0 [32];
  undefined *local_d0;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined1 auStack_a0 [40];
  undefined *local_78;
  undefined4 local_70 [8];
  
  FUN_0024e09c(&local_a8);
  (**(code **)(**(long **)(param_1 + 0x318) + 0x28))(*(long **)(param_1 + 0x318),param_2,&local_a8);
  sVar5 = FUN_0025975c(param_1,auStack_a0);
  uVar3 = (uint)sVar5;
  uVar7 = (**(code **)(**(long **)(param_1 + 0x310) + 0x38))();
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x310) + 0x40))();
    if ((uVar7 & 1) == 0) {
LAB_00259c54:
      bVar4 = false;
      goto joined_r0x00259c54;
    }
    if ((*(int *)(param_1 + 0x420) == 0) && (*(char *)(param_1 + 0x470) == '\0')) {
      FUN_00227258(&local_d0);
      FUN_00227440(&local_78,&local_d0,auStack_a0);
      FUN_0022726c(&local_120,&local_d0);
      local_70[0] = 0;
      local_78 = (undefined1 *)0x40;
      FUN_00220138(auStack_118,&local_78);
      puVar1 = PTR_DAT_04bcba18;
      pcVar8 = *(code **)(param_1 + 0x528);
      if (pcVar8 != (code *)0x0) {
        FUN_0022726c(&local_78,&local_120);
        (*pcVar8)(1,&local_78,*(undefined8 *)(param_1 + 0x530));
        local_78 = puVar1 + 0x10;
        FUN_0021f584(local_70);
      }
      puVar1 = puVar1 + 0x10;
      local_120 = puVar1;
      FUN_0021f584(auStack_118);
      local_d0 = puVar1;
      FUN_0021f584(auStack_c8);
      goto LAB_00259c54;
    }
    if (((int)uVar3 < 0) || (*(int *)(param_1 + 0x420) != 0 && *(char *)(param_1 + 0x470) == '\0'))
    goto LAB_00259c54;
    local_70[0] = 0;
    local_78 = &DAT_00000010;
    FUN_00220138(auStack_a0,&local_78);
    bVar4 = false;
    *(undefined1 *)(param_1 + ((ulong)uVar3 & 0xffff) * 0x40 + 0xe4) = 1;
  }
  else {
    FUN_00227258(&local_d0);
    FUN_00227440(&local_78,&local_d0,auStack_a0);
    FUN_0022726c(&local_f8,&local_d0);
    local_70[0] = 0;
    local_78 = (undefined1 *)0x40;
    FUN_00220138(auStack_f0,&local_78);
    pcVar8 = *(code **)(param_1 + 0x528);
    if (pcVar8 != (code *)0x0) {
      FUN_0022726c(&local_78,&local_f8);
      (*pcVar8)(1,&local_78,*(undefined8 *)(param_1 + 0x530));
      local_78 = PTR_DAT_04bcba18 + 0x10;
      FUN_0021f584(local_70);
    }
    puVar1 = PTR_DAT_04bcba18 + 0x10;
    local_f8 = puVar1;
    FUN_0021f584(auStack_f0);
    uVar6 = FUN_0025975c(param_1,auStack_a0);
    bVar4 = -1 < (short)uVar6;
    if ((uVar6 >> 0xf & 1) == 0) {
      lVar2 = param_1 + ((ulong)(uint)(int)(short)uVar6 & 0xffff) * 0x40;
      FUN_0021fef8(lVar2 + 0xb8);
      *(undefined2 *)(lVar2 + 0xd8) = 0;
      *(undefined2 *)(lVar2 + 0xe4) = 0xff00;
      *(undefined4 *)(lVar2 + 0xe0) = 0;
      local_70[0] = 0;
      local_78 = &SUB_00000020;
      FUN_00220138(auStack_a0,&local_78);
    }
    local_d0 = puVar1;
    FUN_0021f584(auStack_c8);
joined_r0x00259c54:
    if ((int)uVar3 < 0) goto LAB_00259c64;
  }
  FUN_0025f540(*(undefined8 *)(param_1 + 0x410),(ulong)uVar3);
LAB_00259c64:
  local_70[0] = 0;
  local_78 = (undefined *)0x10;
  FUN_00220138(auStack_a0,&local_78);
  local_a8 = PTR_DAT_04bcd580 + 0x10;
  FUN_0021f584(auStack_a0);
  return bVar4;
}

