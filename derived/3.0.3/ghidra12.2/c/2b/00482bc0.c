
void FUN_00482bc0(undefined2 *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    lVar4 = FUN_0043c4e0(DAT_04c6f050);
    lVar6 = DAT_04c6f058;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    puVar3 = (undefined4 *)FUN_00422030(*(undefined8 *)(lVar6 + 0x58),4,0x270);
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  lVar6 = 0;
  *puVar3 = param_2;
  do {
    puVar1 = (uint *)(*(long *)(param_1 + 4) + lVar6 * 4);
    uVar2 = *puVar1;
    iVar5 = (int)lVar6;
    lVar6 = lVar6 + 1;
    puVar1[1] = iVar5 + (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  } while (lVar6 != 0x26f);
  *param_1 = 0;
  return;
}

