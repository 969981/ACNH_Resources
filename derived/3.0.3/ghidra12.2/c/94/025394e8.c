
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_025394e8(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  short *psVar6;
  ulong uVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  uint local_38;
  undefined4 local_34;
  
  if (7 < *param_1) {
    return 0;
  }
  uVar4 = FUN_02582d8c(param_1,1);
  puVar2 = PTR_DAT_04bb4fb8;
  if ((((7 < uVar4) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0')) ||
     ((uVar4 = FUN_02582d8c(param_1,1), 7 < uVar4 ||
      (*(char *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')))) {
    return 0;
  }
  lVar10 = *(long *)puVar2 + (ulong)uVar4 * 0x13f0;
  if (*(int *)(lVar10 + 0x13b8) < 2) {
    iVar9 = *(int *)(lVar10 + 0x13b8) + 1;
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 != 2) {
    if (iVar9 == 1) {
      if (*(uint *)(lVar10 + 0x13bc) < 0x28) {
        psVar6 = (short *)FUN_02677ea0(param_1);
      }
      else {
        psVar6 = &DAT_05586008;
      }
      if ((*psVar6 == -2) && (*(short *)(lVar10 + 0x13c0) == -2)) {
        uVar3 = 0;
        goto LAB_02539758;
      }
      if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
        puVar11 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
      else {
        puVar11 = &DAT_04c9a0c8;
      }
      uVar7 = FUN_02535300(param_1,*puVar11,(short *)(lVar10 + 0x13c0),
                           *(undefined4 *)PTR_DAT_04bb4e20);
    }
    else {
      if (iVar9 != 0) {
        return 0;
      }
      if (*(uint *)(lVar10 + 0x13bc) < 0x28) {
        puVar5 = (undefined2 *)FUN_02677ea0(param_1);
      }
      else {
        puVar5 = &DAT_05586008;
      }
      uVar7 = FUN_02538e78(param_1,puVar5,9,1,0);
    }
    uVar3 = 0;
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    goto LAB_02539758;
  }
  iVar1 = *(int *)(lVar10 + 0x13c8);
  if (iVar1 == 0xd) {
    uVar8 = 0xc03;
LAB_02539700:
    local_38 = (uint)uVar8;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
  }
  else {
    if (iVar1 == 0x10) {
      uVar8 = 0x9ef;
      goto LAB_02539700;
    }
    if (iVar1 == 0x19) {
      uVar8 = 0xcaf;
      goto LAB_02539700;
    }
    local_38 = _DAT_05586008;
    local_34 = DAT_0558600c;
  }
  uVar7 = FUN_02538e78(param_1,&local_38,9,1,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar3 = 1;
LAB_02539758:
  FUN_0274bfe8(param_1,&DAT_054f5728,uVar3);
  *(int *)(lVar10 + 0x13b8) = iVar9;
  return 1;
}

