
void FUN_01449b80(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined **local_b8;
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  plVar1 = &DAT_051c61e8 + (param_3 & 0xffffffff) * 2;
  iVar9 = 0;
  do {
    local_b8 = &PTR_LAB_048fd2d8;
    local_65 = 0;
    local_a8 = 0x40;
    local_b0 = local_a4;
    (**(code **)(DAT_051c61d8 + 0x18))(&DAT_051c61d8);
    puVar5 = DAT_051c61e0;
    if (local_a4 != DAT_051c61e0) {
      (**(code **)(DAT_051c61d8 + 0x18))(&DAT_051c61d8);
      lVar7 = 0;
      do {
        if (DAT_051c61e0[lVar7] == '\0') goto LAB_01449c8c;
        if (DAT_051c61e0[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_01449c8c;
        }
        if (DAT_051c61e0[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_01449c8c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_01449c8c:
      iVar10 = (int)lVar7;
      if (local_a8 <= (int)lVar7) {
        iVar10 = local_a8 + -1;
      }
      memcpy(local_a4,puVar5,(long)iVar10);
      local_a4[iVar10] = 0;
    }
    local_b8 = &PTR_LAB_048fb9f8;
    FUN_038d13f0(&local_b8,&DAT_040d486c,iVar9);
    puVar5 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar7 = 0;
    do {
      if (local_b0[lVar7] == '\0') goto LAB_01449d24;
      if (local_b0[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01449d24;
      }
      if (local_b0[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01449d24;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01449d24:
    uVar3 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar7 = 0;
    lVar8 = (&DAT_051c61f0)[(param_3 & 0xffffffff) * 2];
    do {
      if (*(char *)(lVar8 + lVar7) == '\0') goto LAB_01449d84;
      lVar2 = lVar8 + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01449d84;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01449d84;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01449d84:
    uVar4 = (uint)lVar7;
    if ((int)(local_a8 - uVar3) <= (int)(uint)lVar7) {
      uVar4 = local_a8 + ~uVar3;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      memcpy(puVar5 + uVar3,(void *)(&DAT_051c61f0)[(param_3 & 0xffffffff) * 2],(ulong)uVar4);
      puVar5[(int)(uVar4 + uVar3)] = 0;
    }
    if (*(int *)(param_2 + 200) == 0) {
      return;
    }
    plVar11 = *(long **)(param_2 + 0xd0);
    iVar10 = 0;
    lVar7 = (long)*(int *)(param_2 + 200) << 3;
    while( true ) {
      lVar8 = *plVar11;
      iVar6 = FUN_039fe6a0(lVar8,&local_b8);
      if (-1 < iVar6) break;
      plVar11 = plVar11 + 1;
      lVar7 = lVar7 + -8;
      iVar10 = iVar10 + (uint)*(ushort *)(*(long *)(lVar8 + 0x20) + 0xe2);
      if (lVar7 == 0) {
        return;
      }
    }
    if (((iVar6 + iVar10 ^ 0xffffffffU) & 0xffff) == 0) {
      return;
    }
    *(int *)(param_1 + 0x360 + (param_3 & 0xffffffff) * 4) = iVar9;
    iVar9 = iVar9 + 1;
    if (iVar9 == 5) {
      return;
    }
  } while( true );
}

