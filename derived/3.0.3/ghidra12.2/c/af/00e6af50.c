
void FUN_00e6af50(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined *local_50;
  char *local_48;
  undefined4 local_40;
  char local_3c [7];
  undefined1 local_35;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x00e6b010;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e6b010;
    }
  }
  uVar12 = 0;
joined_r0x00e6b010:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar12;
    }
    if ((((uVar7 & 1) != 0) && (uVar1 != 0)) && (*(long *)PTR_DAT_04bb27f8 != 0)) {
      local_35 = 0;
      local_40 = 8;
      local_48 = local_3c;
      local_3c[0] = '\0';
      local_50 = PTR_DAT_04bb3768 + 0x10;
      uVar7 = FUN_036e1fd8(*(long *)PTR_DAT_04bb27f8,&local_50);
      if ((uVar7 & 1) != 0) {
        (**(code **)(local_50 + 0x18))(&local_50);
        (**(code **)(local_50 + 0x18))(&local_50);
        pcVar4 = local_48;
        (**(code **)(plVar10[0x7c] + 0x18))(plVar10 + 0x7c);
        pcVar9 = (char *)plVar10[0x7d];
        if (pcVar4 != pcVar9) {
          if (*local_48 != *pcVar9) {
            return;
          }
          if (*local_48 != '\0') {
            lVar8 = 0;
            do {
              if (lVar8 == 0x80000) {
                return;
              }
              if (local_48[lVar8 + 1] != pcVar9[lVar8 + 1]) {
                return;
              }
              if (local_48[lVar8 + 1] == '\0') break;
              lVar2 = lVar8 + 2;
              if (local_48[lVar2] != pcVar9[lVar8 + 2]) {
                return;
              }
              lVar8 = lVar8 + 2;
            } while (local_48[lVar2] != '\0');
          }
        }
        puVar11 = (undefined8 *)plVar10[0x77];
        if (((*PTR_DAT_04bb6710 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6710);
        }
        if ((puVar11 != (undefined8 *)0x0) &&
           (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) {
          FUN_01fb1450(puVar11,*(undefined8 *)(param_1 + 8));
        }
      }
    }
  }
  return;
}

