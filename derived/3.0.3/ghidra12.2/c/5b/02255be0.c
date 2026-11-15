
void FUN_02255be0(long param_1,uint *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  char *pcVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 0;
      goto joined_r0x02255ca4;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 5U >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02255ca4;
    }
  }
  uVar10 = 1;
joined_r0x02255ca4:
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    if ((int)lVar6 != 1) {
      uVar10 = 1;
    }
    if (((uVar5 & 1) != 0) && (uVar10 == 0)) {
      (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
      (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
      pcVar8 = (char *)plVar9[0x7d];
      if (pcVar8 != "doc") {
        if (*pcVar8 == 'd') {
          lVar6 = 0;
          do {
            if ((lVar6 == 0x80000) || (lVar1 = lVar6 + 1, pcVar8[lVar1] != (&DAT_040f40a9)[lVar6]))
            goto LAB_02255d68;
            lVar6 = lVar6 + 1;
          } while (pcVar8[lVar1] != '\0');
        }
        else {
LAB_02255d68:
          if (*(int *)(lVar11 + 0x440) < *(int *)(lVar11 + 0x444)) {
            puVar7 = *(uint **)(lVar11 + 0x450);
            if (puVar7 != (uint *)0x0) {
              *(undefined8 *)(lVar11 + 0x450) = *(undefined8 *)puVar7;
            }
            *puVar7 = *param_2;
            if (*(int *)(lVar11 + 0x440) < *(int *)(lVar11 + 0x444)) {
              *(uint **)(*(long *)(lVar11 + 0x448) + (long)*(int *)(lVar11 + 0x440) * 8) = puVar7;
              *(int *)(lVar11 + 0x440) = *(int *)(lVar11 + 0x440) + 1;
            }
          }
        }
      }
    }
  }
  return;
}

