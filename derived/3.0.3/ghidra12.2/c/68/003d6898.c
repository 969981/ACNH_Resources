
uint FUN_003d6898(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_90 [76];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar2 = FUN_003dd940(param_2,&local_40,0);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x448) = local_40;
    *(undefined4 *)(param_1 + 0x44c) = uStack_3c;
    *(undefined8 *)(param_1 + 0x450) = local_38;
    FUN_003dd874(param_2,auStack_90);
    puVar4 = (undefined4 *)FUN_003dbc54(*(undefined8 *)(param_2 + 0x10));
    *(undefined4 *)(param_1 + 0x198) = *puVar4;
    uVar3 = FUN_003dd848(param_2);
    FUN_003d8e28(param_1 + 0x138,auStack_90,uVar3 & 1);
    bVar1 = FUN_003dd848(param_2);
    *(byte *)(param_1 + 0x460) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      local_44 = 0;
    }
    *(undefined4 *)(param_1 + 0x464) = local_44;
    iVar5 = *(int *)(param_1 + 0x198);
    if (0xf < iVar5) {
      iVar5 = 0x10;
    }
    *(int *)(param_1 + 0x468) = iVar5;
  }
  return uVar2 & 1;
}

