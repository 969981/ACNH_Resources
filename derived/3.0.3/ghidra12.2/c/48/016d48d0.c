
void FUN_016d48d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_c8 [4];
  int local_c4;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [7];
  undefined1 local_8d;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined2 local_68;
  undefined4 local_66;
  undefined1 local_62;
  
  if (DAT_05574040 != 0) {
    puVar2 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar2 + 0x38))();
      if (lVar1 == 0) {
        return;
      }
      lVar1 = lVar1 + 0x70;
    }
    else {
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar2[0x26] == (long *)0x0) {
        return;
      }
      lVar1 = (**(code **)(*(long *)puVar2[0x26] + 0x38))();
      if (lVar1 == 0) {
        return;
      }
    }
    iVar3 = 0;
    iVar4 = 0;
    do {
      local_c0[0] = 0;
      local_bc = 0xffffffff;
      local_98 = 8;
      local_8d = 0;
      local_94[0] = 0;
      local_78 = 8;
      local_6d = 0;
      local_74[0] = 0;
      local_68 = 0;
      local_66 = 0x101;
      local_62 = 0;
      local_c8[0] = 0;
      local_a8 = &PTR_LAB_04908da0;
      local_88 = &PTR_LAB_04908da0;
      local_c4 = iVar4;
      puStack_a0 = local_94;
      puStack_80 = local_74;
      FUN_016d4af0(local_c0,local_c8,&LAB_002057b0 + (long)iVar3 * 0xc40 + lVar1);
      (**(code **)*param_1)(param_1,local_c0);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar4 != 8);
    iVar3 = 0;
    iVar4 = 0;
    do {
      local_c0[0] = 0;
      local_c8[0] = 1;
      local_bc = 0xffffffff;
      local_98 = 8;
      local_8d = 0;
      local_94[0] = 0;
      local_78 = 8;
      local_6d = 0;
      local_74[0] = 0;
      local_68 = 0;
      local_66 = 0x101;
      local_62 = 0;
      local_a8 = &PTR_LAB_04908da0;
      local_88 = &PTR_LAB_04908da0;
      local_c4 = iVar4;
      puStack_a0 = local_94;
      puStack_80 = local_74;
      FUN_016d4af0(local_c0,local_c8,lVar1 + 0x20b9e8 + (long)iVar3 * 0xc40);
      (**(code **)*param_1)(param_1,local_c0);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar4 != 8);
  }
  return;
}

