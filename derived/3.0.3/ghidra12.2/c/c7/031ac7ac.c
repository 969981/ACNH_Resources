
void FUN_031ac7ac(long param_1,long *param_2,int param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  
  uVar6 = (**(code **)(*param_2 + 0x40))(param_2);
  if (((uVar6 & 1) != 0) || (uVar6 = (**(code **)(*param_2 + 0x60))(param_2), (uVar6 & 1) != 0)) {
    (**(code **)(*param_2 + 0xb8))(param_2,param_1 + 0x1f8);
  }
  if (param_3 < *(int *)(param_4 + 0x3d4)) {
    iVar5 = *(int *)(param_4 + 0x2e8);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = param_3 / iVar5;
    }
    iVar8 = *(int *)(param_4 + 0x430) - *(int *)(param_4 + 0x438);
    if ((*(byte *)(param_4 + 1000) >> 1 & 1) != 0) {
      uVar2 = *(uint *)(param_4 + 0x434);
      uVar7 = 0;
      if ((int)uVar2 < iVar8) {
        uVar7 = ~uVar2;
      }
      if (iVar8 < 0) {
        uVar7 = uVar2 + 1;
      }
      iVar8 = uVar7 + iVar8;
    }
    uVar7 = (param_3 - iVar3 * iVar5) + (iVar3 - iVar8) * iVar5;
    uVar2 = *(uint *)(param_4 + 0x208);
    bVar4 = (int)uVar7 < 0;
    bVar1 = (int)uVar2 <= (int)uVar7;
    if (bVar4 || bVar1) {
      uVar7 = 0xffffffff;
    }
    if (((((!bVar4 && !bVar1) && uVar2 != uVar7) && ((bVar4 || bVar1) || (int)uVar7 <= (int)uVar2))
        && uVar7 <= uVar2) && (((bVar4 || bVar1) || (int)uVar2 <= (int)uVar7) || uVar2 != uVar7)) {
      puVar9 = *(undefined8 **)(*(long *)(param_4 + 0x210) + (ulong)uVar7 * 8);
      goto LAB_031ac894;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_031ac894:
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4d90);
    if ((uVar6 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
  }
  uVar7 = 0xffffffff;
  if (param_3 < *(int *)(param_4 + 0x3d4)) {
    iVar5 = *(int *)(param_4 + 0x2e8);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = param_3 / iVar5;
    }
    iVar8 = *(int *)(param_4 + 0x430) - *(int *)(param_4 + 0x438);
    if ((*(byte *)(param_4 + 1000) >> 1 & 1) != 0) {
      uVar2 = *(uint *)(param_4 + 0x434);
      uVar7 = 0;
      if ((int)uVar2 < iVar8) {
        uVar7 = ~uVar2;
      }
      if (iVar8 < 0) {
        uVar7 = uVar2 + 1;
      }
      iVar8 = uVar7 + iVar8;
    }
    uVar7 = (param_3 - iVar3 * iVar5) + (iVar3 - iVar8) * iVar5;
    if (*(int *)(param_4 + 0x208) <= (int)uVar7 || 0x7fffffff < uVar7) {
      uVar7 = 0xffffffff;
    }
  }
  FUN_031ab8cc(param_1,puVar9,param_2,uVar7);
  return;
}

