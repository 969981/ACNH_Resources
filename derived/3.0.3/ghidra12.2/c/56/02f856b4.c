
void FUN_02f856b4(long param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *local_30;
  undefined4 local_28;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  if (param_3 < 0) {
    return;
  }
  if (*(int *)(param_2 + 0x3cc) <= param_3) {
    return;
  }
  if (param_3 < *(int *)(param_2 + 0x3d4)) {
    iVar6 = *(int *)(param_2 + 0x2e8);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = param_3 / iVar6;
    }
    iVar8 = *(int *)(param_2 + 0x430) - *(int *)(param_2 + 0x438);
    if ((*(byte *)(param_2 + 1000) >> 1 & 1) != 0) {
      uVar3 = *(uint *)(param_2 + 0x434);
      uVar2 = 0;
      if ((int)uVar3 < iVar8) {
        uVar2 = ~uVar3;
      }
      if (iVar8 < 0) {
        uVar2 = uVar3 + 1;
      }
      iVar8 = uVar2 + iVar8;
    }
    uVar2 = (param_3 - iVar4 * iVar6) + (iVar4 - iVar8) * iVar6;
    uVar3 = *(uint *)(param_2 + 0x208);
    bVar5 = (int)uVar2 < 0;
    bVar1 = (int)uVar3 <= (int)uVar2;
    if (bVar5 || bVar1) {
      uVar2 = 0xffffffff;
    }
    if ((((!bVar5 && !bVar1) && (int)uVar2 < (int)uVar3) && uVar2 <= uVar3) &&
        (((bVar5 || bVar1) || (int)uVar3 <= (int)uVar2) || uVar3 != uVar2)) {
      puVar9 = *(undefined8 **)(*(long *)(param_2 + 0x210) + (ulong)uVar2 * 8);
      goto LAB_02f8576c;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_02f8576c:
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((((puVar9 != (undefined8 *)0x0) &&
       (uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4d90), (uVar7 & 1) != 0)) &&
      (plVar10 = *(long **)puVar9[0x5a], plVar10 != (long *)0x0)) &&
     (*(char *)(param_1 + 0x28) != '\0')) {
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    local_28 = 0x1f;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_30);
    (**(code **)(plVar10[3] + 0x208))(plVar10[1],0,0,param_1 + 8);
  }
  return;
}

