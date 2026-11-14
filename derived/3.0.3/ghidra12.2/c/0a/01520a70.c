
/* WARNING: Type propagation algorithm not settling */

bool FUN_01520a70(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  uVar7 = FUN_015039ac();
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar7 & 1) == 0) {
    return false;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return false;
  }
  uVar11 = *param_1;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01520b40;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01520b40;
    }
  }
  uVar11 = 0;
joined_r0x01520b40:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar3 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
    puVar4 = PTR_DAT_04bbcd18;
    puVar2 = PTR_DAT_04bbcd10;
    if ((int)lVar9 != 1) {
      return false;
    }
    if ((uVar6 & uVar11) == 0) {
      return false;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      return false;
    }
    if ((long *)plVar10[0x16] != plVar10 + 0x15) {
      lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
      plVar8 = (long *)(plVar10[0x16] - lVar9);
      puVar1 = PTR_DAT_04bb65f0 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar2), (uVar7 & 1) != 0)) {
          if (7 < *(byte *)((long)plVar8 + 0x3ac)) {
            return true;
          }
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_58 = "ValidateVillageSave";
          local_60 = puVar2;
          uVar7 = FUN_0273f0a0(&local_60);
          if ((uVar7 & 1) == 0) {
            pcStack_68 = "PlayerProducedByPlayerMoving";
            local_70 = puVar2;
            iVar5 = FUN_0274bce0((long)plVar8 + 0x3ac,&local_70);
            if (iVar5 != 0) {
              return true;
            }
          }
          return (int)plVar8[0x50] == 2;
        }
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
      } while (plVar8 != (long *)((long)(plVar10 + 0x15) - lVar9));
    }
  }
  return false;
}

