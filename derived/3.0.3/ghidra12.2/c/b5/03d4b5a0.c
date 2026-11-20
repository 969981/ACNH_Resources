
void FUN_03d4b5a0(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  uint local_88;
  undefined1 local_84;
  long local_80;
  long *plStack_78;
  long local_68;
  
  bVar5 = true;
  if (((param_3 & 1) == 0) && (*(char *)((long)param_1 + 0x54) == '\0')) {
    bVar5 = (*(uint *)(param_1 + 0xb) & *(uint *)(*(long *)(DAT_05af83f0 + 0x418) + 0x10)) != 0;
  }
  plVar12 = param_1 + 0xd;
  uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
  if (((uVar6 & 1) != 0) && (uVar7 = *(uint *)(param_2 + 8), local_68 = param_2, 0 < (int)uVar7)) {
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      if (uVar7 <= uVar11) {
        uVar2 = 0;
      }
      local_88 = uVar11;
      local_84 = bVar5;
      local_80 = param_2 + 0x18;
      plStack_78 = &local_68;
      (**(code **)*plVar12)(plVar12,*(long *)(param_2 + 0x10) + (ulong)uVar2 * 0x48,&local_88);
      uVar7 = *(uint *)(param_2 + 8);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar7);
  }
  lVar3 = param_2 + 0x18;
  if (*(char *)((long)param_1 + 100) != '\0') {
    lVar3 = (long)param_1 + 0x5c;
  }
  iVar8 = *(int *)((long)param_1 + 0x14);
  if ((1 < (int)param_1[2]) && (*(long **)(param_1[1] + 8) != param_1)) {
    lVar13 = -(long)iVar8;
    plVar12 = *(long **)(param_1[1] + 8);
    do {
      plVar14 = (long *)*plVar12;
      plVar4 = (long *)plVar12[1];
      plVar1 = (long *)((long)plVar12 + lVar13);
      fVar15 = (float)(**(code **)(*(long *)((long)plVar14 + lVar13) + 0x10))();
      fVar16 = (float)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (fVar15 < fVar16) {
        do {
          plVar14 = (long *)*plVar14;
          if (plVar14 == param_1) {
            lVar9 = *plVar12;
            plVar14 = param_1;
            goto joined_r0x03d4b76c;
          }
          fVar15 = (float)(**(code **)(*(long *)((long)plVar14 + lVar13) + 0x10))();
          fVar16 = (float)(**(code **)(*plVar1 + 0x10))(plVar1);
        } while (fVar15 < fVar16);
        lVar9 = *plVar12;
joined_r0x03d4b76c:
        if (lVar9 != 0) {
          *(long *)(lVar9 + 8) = plVar12[1];
        }
        if ((long *)plVar12[1] != (long *)0x0) {
          *(long *)plVar12[1] = *plVar12;
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        puVar10 = (undefined8 *)plVar14[1];
        plVar14[1] = (long)plVar12;
        *plVar12 = (long)plVar14;
        plVar12[1] = (long)puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = plVar12;
        }
      }
      plVar12 = plVar4;
    } while (plVar4 != param_1);
    iVar8 = *(int *)((long)param_1 + 0x14);
  }
  if ((long *)param_1[1] != param_1) {
    lVar9 = (long)-iVar8;
    lVar13 = lVar9 + param_1[1];
    do {
      FUN_03d4bdf8(lVar13,param_2);
      if (*(char *)(lVar13 + 0x3c) != '\0') {
        FUN_03d4bea8(lVar13,param_2,lVar3,bVar5);
      }
      lVar13 = *(long *)(lVar13 + iVar8 + 8) + lVar9;
    } while (lVar13 != lVar9 + (long)param_1);
  }
  param_1 = param_1 + 0x11;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  if (((uVar6 & 1) != 0) && (uVar7 = *(uint *)(param_2 + 8), 0 < (int)uVar7)) {
    uVar11 = 0;
    local_68 = param_2;
    do {
      uVar2 = uVar11;
      if (uVar7 <= uVar11) {
        uVar2 = 0;
      }
      local_88 = uVar11;
      local_84 = bVar5;
      local_80 = param_2 + 0x18;
      plStack_78 = &local_68;
      (**(code **)*param_1)(param_1,*(long *)(param_2 + 0x10) + (ulong)uVar2 * 0x48,&local_88);
      uVar7 = *(uint *)(param_2 + 8);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar7);
  }
  return;
}

