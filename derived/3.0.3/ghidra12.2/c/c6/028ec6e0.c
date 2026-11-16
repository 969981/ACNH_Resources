
undefined8 FUN_028ec6e0(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined **local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    puVar4 = (undefined2 *)(param_1 + (long)iVar2 * 0x1178);
    if (*param_2 == (uint)*(byte *)(puVar4 + 1)) {
      local_70 = 8;
      local_65 = 0;
      local_6c[0] = 0;
      local_80 = &PTR_LAB_04908da0;
      puStack_78 = local_6c;
      FUN_0376b510(&local_80,*puVar4);
      iVar1 = FUN_0376dea0(&local_80,0);
      if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || (iVar1 == 5)) {
        FUN_028eb350(param_1,*puVar4,0xffff,0);
        uVar3 = 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x26);
  return uVar3;
}

