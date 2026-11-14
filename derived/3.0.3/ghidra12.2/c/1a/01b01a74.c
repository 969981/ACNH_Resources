
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b01a74(uint *param_1,uint *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  uint local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = *param_2 & 0xffff;
  FUN_0277d4ac(&local_28);
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_28);
  uVar4 = DAT_0558600c;
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
LAB_01b01bf4:
    *param_1 = _DAT_05586008;
    param_1[1] = uVar4;
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01b01bf4;
  local_48 = 0;
  local_58 = &PTR_FUN_04a36b50;
  puVar9 = &local_50;
  local_50 = local_28;
  uStack_4c = local_24;
  uVar4 = FUN_0277d6c4(puVar9);
  lVar8 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(&local_28);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
        local_48 = lVar8;
      }
    }
  }
  uVar6 = FUN_01aff1fc(&local_58,1);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_01aff1fc(&local_58,2);
    if ((uVar6 & 1) != 0) {
      iVar5 = FUN_01ad7260(&local_58);
      if (iVar5 != 0) {
        uVar1 = *(ushort *)((long)param_2 + 2);
        iVar5 = FUN_01ad7260(&local_58);
        if ((iVar5 != 0) &&
           (((uVar4 = uVar1 & 7, (uVar1 & 7) == 0 ||
             (iVar5 = FUN_01ad7260(&local_58), (int)uVar4 < iVar5)) &&
            (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)))) {
          *puVar7 = *puVar7 & 0xfff8 | (ushort)uVar4;
        }
      }
      goto LAB_01b01cb4;
    }
    uVar6 = FUN_01aff1fc(&local_58,3);
    if ((uVar6 & 1) == 0) {
      puVar9 = &local_28;
      goto LAB_01b01cb4;
    }
  }
  else {
    iVar5 = FUN_01ad7260(&local_58);
    if (iVar5 != 0) {
      uVar1 = *(ushort *)((long)param_2 + 2);
      iVar5 = FUN_01ad7260(&local_58);
      if (((iVar5 != 0) &&
          ((uVar4 = uVar1 & 7, (uVar1 & 7) == 0 ||
           (iVar5 = FUN_01ad7260(&local_58), (int)uVar4 < iVar5)))) &&
         (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)) {
        *puVar7 = *puVar7 & 0xfff8 | (ushort)uVar4;
      }
    }
  }
  iVar5 = FUN_01afcfa0(&local_58);
  if (iVar5 != 0) {
    FUN_01afdcc4(&local_58,*param_2 >> 0x13 & 7);
  }
LAB_01b01cb4:
  uVar4 = puVar9[1];
  *param_1 = *puVar9;
  param_1[1] = uVar4;
  return;
}

