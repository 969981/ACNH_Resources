
void FUN_0233fd14(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)(param_2 + 0xbe08);
  if (*(char *)(lVar6 + 0x1d5) != '\0') {
    puVar5 = (undefined4 *)(lVar6 + 0xcc);
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(puVar5);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_0233fdb0;
    }
    iVar4 = FUN_0277d6c4(puVar5);
    if (iVar4 == 0xfffd) {
      puVar5 = (undefined4 *)&DAT_05586008;
      goto LAB_0233fdb0;
    }
  }
  puVar5 = (undefined4 *)(lVar6 + 0xd4);
LAB_0233fdb0:
  uVar1 = puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  return;
}

