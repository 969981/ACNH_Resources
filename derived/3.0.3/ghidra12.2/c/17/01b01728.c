
void FUN_01b01728(uint *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_48 = 0;
  local_58 = &PTR_FUN_04a36b50;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uVar4 = FUN_0277d6c4(&local_50);
  lVar10 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar9 != 0) {
          local_48 = lVar9;
        }
      }
    }
  }
  uVar7 = FUN_01aff1fc(&local_58,1);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_01aff1fc(&local_58,2);
    if ((uVar7 & 1) != 0) {
      uVar3 = FUN_0277d6c4(param_2);
      *(undefined2 *)param_1 = uVar3;
      iVar5 = FUN_01ad7260(&local_58);
      if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_58), puVar8 == (ushort *)0x0)) {
        uVar4 = 0;
      }
      else {
        uVar1 = *puVar8;
        uVar6 = FUN_01ad7260(&local_58);
        uVar4 = (uVar1 & 7) << 0x10;
        if (uVar6 <= (uVar1 & 7)) {
          uVar4 = 0;
        }
      }
      uVar4 = *param_1 & 0xfff8ffff | uVar4;
      goto LAB_01b0192c;
    }
    uVar7 = FUN_01aff1fc(&local_58,3);
    uVar3 = FUN_0277d6c4(param_2);
    *(undefined2 *)param_1 = uVar3;
    if ((uVar7 & 1) == 0) {
      return;
    }
  }
  else {
    uVar3 = FUN_0277d6c4(param_2);
    *(undefined2 *)param_1 = uVar3;
    iVar5 = FUN_01ad7260(&local_58);
    if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_58), puVar8 == (ushort *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar1 = *puVar8;
      uVar6 = FUN_01ad7260(&local_58);
      uVar4 = (uVar1 & 7) << 0x10;
      if (uVar6 <= (uVar1 & 7)) {
        uVar4 = 0;
      }
    }
    *param_1 = *param_1 & 0xfff8ffff | uVar4;
  }
  uVar4 = FUN_01ae3a80(&local_58);
  uVar4 = *param_1 & 0xffc00000 | *param_1 & 0x7ffff | (uVar4 & 7) << 0x13;
LAB_01b0192c:
  *param_1 = uVar4;
  return;
}

