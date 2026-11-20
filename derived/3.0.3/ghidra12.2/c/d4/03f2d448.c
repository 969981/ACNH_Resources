
void FUN_03f2d448(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  long lStack_170;
  undefined *local_168;
  char *pcStack_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined **local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_83;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined *local_40;
  undefined *puStack_38;
  
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x28) == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) goto LAB_03f2d5a8;
    }
    else {
      FUN_03f45838(param_1 + 0x18);
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0xe;
        goto LAB_03f2d5a8;
      }
    }
    lVar3 = *(long *)PTR_DAT_04bb49b8;
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      local_1b8 = &local_1a8;
      local_158 = 0;
      puStack_138 = local_12c;
      local_150 = 0;
      uStack_148 = 0;
      local_1a8 = PTR_DAT_04bdf0f0 + 0x10;
      local_168 = PTR_DAT_04bb2020 + 0x10;
      local_130 = 0x80;
      local_ad = 0;
      local_12c[0] = 0;
      local_140 = PTR_DAT_04bb2d88 + 0x10;
      local_a0 = 1;
      local_a8 = &PTR_LAB_04ba8a48;
      local_4c = 0;
      local_54 = 0;
      local_5c = 0;
      local_64 = 0;
      local_6c = 0;
      local_88 = 0x1010100;
      local_74 = 0;
      local_83 = 0x1010101;
      local_7c = 0;
      local_44 = 0;
      local_19e = 3;
      local_84 = 0;
      local_1a0 = 0;
      local_1c0 = 0;
      puStack_38 = PTR_DAT_04bb2120;
      local_198 = *(undefined8 *)(lVar3 + 0x140);
      puStack_90 = PTR_DAT_04bb2120;
      lStack_170 = lVar3 + 0x350;
      local_178 = 0;
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = lVar3 + 0x340;
      pcStack_160 = "Unload";
      lStack_180 = lVar2;
      local_98 = local_168;
      local_40 = local_168;
      FUN_03f45184(*(undefined8 *)(lVar3 + 0x1a0),&local_1c0);
    }
  }
LAB_03f2d5a8:
  FUN_03f45838(param_1 + 0x18);
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
  iVar1 = *(int *)(param_1 + 0x24) + -1;
  if (((*(int *)(param_1 + 0x24) < 1) || (*(int *)(param_1 + 0x24) = iVar1, iVar1 == 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    FUN_03f44508();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03f2d608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4);
  return;
}

