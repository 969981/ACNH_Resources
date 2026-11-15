
uint FUN_020135b0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)(param_1 + 0x1480);
  if (*(char *)(lVar5 + 0x1d5) != '\0') {
    puVar4 = (undefined4 *)(lVar5 + 0xcc);
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(puVar4);
    if (*(long *)puVar1 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_02013644;
    }
    iVar3 = FUN_0277d6c4(puVar4);
    if (iVar3 == 0xfffd) {
      puVar4 = (undefined4 *)&DAT_05586008;
      goto LAB_02013644;
    }
  }
  puVar4 = (undefined4 *)(lVar5 + 0xd4);
LAB_02013644:
  local_38 = *puVar4;
  uStack_34 = puVar4[1];
  uVar2 = FUN_017131e0(&local_38);
  return uVar2 & 1;
}

