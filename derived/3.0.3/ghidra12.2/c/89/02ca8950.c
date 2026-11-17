
void FUN_02ca8950(long param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined **local_70;
  long lStack_68;
  
  lStack_68 = *(long *)(param_1 + 0x210) + 0x5e0;
  local_70 = &PTR_LAB_04ab4ef0;
  uVar10 = (uint)*(byte *)(param_1 + 0x31a);
  if (*(uint *)(param_1 + 0xbb0) == uVar10) {
    iVar11 = 0;
  }
  else if (*(uint *)(param_1 + 0xbb4) == uVar10) {
    iVar11 = 1;
  }
  else {
    iVar11 = 2;
    if (*(uint *)(param_1 + 3000) != uVar10) {
      iVar11 = -1;
    }
  }
  plVar1 = (long *)(param_1 + 0xf80);
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0xf80) + 0x18))(plVar1,iVar11);
    FUN_02ca85b0(plVar1,&local_70);
  }
  else {
    iVar6 = (**(code **)(*(long *)(param_1 + 0xf80) + 0x10))(plVar1);
    if (iVar6 < 0) {
      if (iVar11 == 0) {
        return;
      }
    }
    else {
      iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (iVar6 == iVar11) {
        return;
      }
    }
    (**(code **)(*(long *)(param_1 + 0xf80) + 0x18))(plVar1,iVar11);
    puVar5 = PTR_DAT_04bc4d98;
    puVar4 = PTR_DAT_04bc4d90;
    if (*(char *)(param_1 + 0xf88) != '\0') {
      iVar11 = 0;
      puVar2 = PTR_DAT_04bc4da0 + 0x10;
      do {
        puVar8 = (undefined8 *)(*(code *)local_70[3])(&local_70,iVar11);
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)puVar4 = puVar2;
          __cxa_guard_release(puVar5);
        }
        if (((puVar8 != (undefined8 *)0x0) &&
            (uVar9 = (**(code **)*puVar8)(puVar8,puVar4), (uVar9 & 1) != 0)) &&
           (plVar13 = (long *)puVar8[0x71], plVar13 != (long *)0x0)) {
          iVar6 = (**(code **)(*plVar13 + 0x80))(plVar13,0);
          iVar7 = (**(code **)(*plVar13 + 0x80))(plVar13,1);
          lVar12 = *(long *)(plVar13[0xd] + (long)(iVar6 + (int)plVar13[0xc] * iVar7) * 0x18);
          if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
            lVar12 = puVar8[0x71];
            if (*(char *)(lVar12 + 0x20) == '\0') {
              iVar6 = *(int *)(lVar12 + 0x28);
            }
            else {
              piVar3 = (int *)(lVar12 + 0x24);
              if (*(char *)(lVar12 + 0x21) != '\0') {
                piVar3 = (int *)(lVar12 + 0x28);
              }
              iVar6 = *piVar3;
            }
            if (iVar6 == 0) {
              FUN_030bfe80(puVar8,0);
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      (**(code **)(*plVar1 + 8))(plVar1,&local_70);
    }
  }
  return;
}

