
void FUN_03038360(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined *local_80;
  undefined4 local_78;
  
  plVar11 = (long *)(param_1 + 200);
  FUN_03404d70();
  if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xf0)) {
    plVar7 = *(long **)(param_1 + 0xe0);
    if (plVar7 != (long *)0x0) {
      *(long *)(param_1 + 0xe0) = *plVar7;
    }
    *plVar7 = param_1;
    plVar7[2] = 0;
    plVar13 = plVar7 + 1;
    *plVar13 = 0;
    lVar9 = *(long *)(param_1 + 200);
    *(long **)(param_1 + 200) = plVar13;
    plVar7[2] = (long)plVar11;
    *plVar13 = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar13;
    }
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  }
  FUN_03404d70(param_1 + 0x20,param_2 + 0x38);
  iVar5 = *(int *)(param_1 + 0xd8);
  if (iVar5 < *(int *)(param_1 + 0xf0)) {
    plVar7 = *(long **)(param_1 + 0xe0);
    if (plVar7 != (long *)0x0) {
      *(long *)(param_1 + 0xe0) = *plVar7;
    }
    *plVar7 = param_1 + 0x20;
    plVar7[2] = 0;
    plVar13 = plVar7 + 1;
    *plVar13 = 0;
    lVar9 = *plVar11;
    *plVar11 = (long)plVar13;
    plVar7[2] = (long)plVar11;
    *plVar13 = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar13;
    }
    iVar5 = *(int *)(param_1 + 0xd8) + 1;
    *(int *)(param_1 + 0xd8) = iVar5;
  }
  puVar3 = PTR_DAT_04bc0cb8;
  if ((1 < iVar5) && (plVar7 = *(long **)(*(long *)(param_1 + 0xd0) + 8), plVar7 != plVar11)) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    do {
      plVar13 = (long *)*plVar7;
      plVar4 = (long *)plVar7[1];
      plVar10 = plVar7 + -1;
      iVar5 = FUN_03038210(plVar13 + -1,plVar10);
      if (0 < iVar5) {
        do {
          plVar13 = (long *)*plVar13;
          if (plVar13 == plVar11) {
            lVar9 = *plVar7;
            plVar13 = plVar11;
            goto joined_r0x030385b8;
          }
          local_78 = 8;
          plVar12 = *(long **)(plVar13[-1] + 0x10);
          local_80 = puVar1;
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_80);
          lVar9 = (**(code **)(plVar12[3] + 0xa0))(plVar12[1]);
          fVar15 = *(float *)(lVar9 + 4);
          local_78 = 8;
          plVar12 = *(long **)(*plVar10 + 0x10);
          local_80 = puVar1;
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_80);
          lVar9 = (**(code **)(plVar12[3] + 0xa0))(plVar12[1]);
        } while (fVar15 < *(float *)(lVar9 + 4));
        puVar2 = puVar3 + 0x10;
        local_78 = 8;
        plVar10 = *(long **)(*plVar10 + 0x10);
        local_80 = puVar2;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
        (**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
        local_78 = 8;
        plVar10 = *(long **)(plVar13[-1] + 0x10);
        local_80 = puVar2;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
        (**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
        lVar9 = *plVar7;
joined_r0x030385b8:
        if (lVar9 != 0) {
          *(long *)(lVar9 + 8) = plVar7[1];
        }
        if ((long *)plVar7[1] != (long *)0x0) {
          *(long *)plVar7[1] = *plVar7;
        }
        *plVar7 = 0;
        plVar7[1] = 0;
        puVar8 = (undefined8 *)plVar13[1];
        plVar13[1] = (long)plVar7;
        *plVar7 = (long)plVar13;
        plVar7[1] = (long)puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = plVar7;
        }
      }
      plVar7 = plVar4;
    } while (plVar4 != plVar11);
  }
  plVar11 = *(long **)(param_1 + 0x10);
  puVar3 = puVar3 + 0x10;
  local_78 = 8;
  local_80 = puVar3;
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
  lVar9 = (**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
  plVar11 = *(long **)(param_1 + 0x30);
  fVar16 = *(float *)(lVar9 + 4);
  local_78 = 8;
  local_80 = puVar3;
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
  lVar9 = (**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
  local_78 = 8;
  plVar11 = *(long **)(param_1 + 0x10);
  fVar16 = fVar16 - *(float *)(lVar9 + 4);
  fVar15 = -fVar16;
  if (0.0 <= fVar16) {
    fVar15 = fVar16;
  }
  *(float *)(param_1 + 0x40) = fVar15;
  local_80 = puVar3;
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
  puVar6 = (undefined4 *)(**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
  *(undefined4 *)(param_1 + 0x44) = *puVar6;
  *(undefined4 *)(param_1 + 0x48) = puVar6[1];
  lVar9 = *(long *)PTR_DAT_04bb2230;
  *(undefined4 *)(param_1 + 0x4c) = puVar6[2];
  uVar14 = *(undefined4 *)(lVar9 + 0x424);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0x3eb3333300000001;
  *(undefined8 *)(param_1 + 0x58) = 0x43fa00003f000000;
  *(undefined4 *)(param_1 + 0x60) = uVar14;
  return;
}

