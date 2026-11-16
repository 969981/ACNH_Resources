
undefined8 FUN_026138cc(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar2 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8);
        if (lVar8 != 0) {
          local_38 = lVar8;
        }
      }
    }
  }
  iVar3 = FUN_01ad7260(&local_48);
  if (iVar3 == 0) {
    iVar3 = FUN_01afcfa0(&local_48);
    if (iVar3 != 0) {
      uVar2 = FUN_01ae3a80(&local_48);
      goto joined_r0x02613a78;
    }
LAB_02613a84:
    uVar7 = 0;
  }
  else {
    iVar3 = FUN_01ad7260(&local_48);
    if ((iVar3 == 0) || (puVar5 = (ushort *)FUN_01afd600(&local_48), puVar5 == (ushort *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar5 & 7;
      uVar4 = FUN_01ad7260(&local_48);
      if (uVar4 <= uVar2) {
        uVar2 = 0;
      }
    }
    if ((DAT_055588d0 == 0) || (uVar6 = FUN_026222e0(DAT_055588d0,&local_40), (uVar6 & 1) == 0)) {
joined_r0x02613a78:
      if (uVar2 == 0) goto LAB_02613a84;
    }
    else {
      if (((*(long *)(DAT_0537d558 + 0x10) == 0) ||
          ((*(uint *)(DAT_0537d558 + 0x80) & 0xfffffffe) != 2)) ||
         (*(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x3e4) == 1)) {
        uVar4 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
        if (1 < uVar4) {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = *(uint *)(DAT_0537fc68 + 0x274);
      }
      if (((uVar2 == 0) || (uVar4 != 0)) && ((uVar2 == 1 || (uVar4 != 1)))) goto LAB_02613a84;
    }
    uVar7 = 1;
  }
  return uVar7;
}

