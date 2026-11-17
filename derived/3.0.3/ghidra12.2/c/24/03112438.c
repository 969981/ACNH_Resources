
void FUN_03112438(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_c0;
  undefined4 local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  
  puVar2 = PTR_DAT_04bc0cb8;
  plVar6 = *(long **)(param_1 + 0x220);
  if (plVar6 != (long *)0x0) {
    local_b8 = 0x11;
    local_c0 = PTR_DAT_04bc0cb8 + 0x10;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_c0);
    lVar4 = (**(code **)(plVar6[3] + 0x130))(plVar6[1]);
    local_b4 = *(float *)(lVar4 + 0xc);
    uVar8 = *(undefined4 *)(lVar4 + 0x1c);
    local_c0 = (undefined *)0x3f800000;
    local_b8 = 0;
    uVar9 = *(undefined4 *)(lVar4 + 0x2c);
    local_b0 = 0x3f80000000000000;
    local_a8 = 0;
    plVar6 = *(long **)(param_1 + 0x5e8);
    local_a0 = 0;
    local_98 = 0x3f800000;
    if (((plVar6 != (long *)0x0) ||
        (plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 0x278), plVar6 != (long *)0x0)) &&
       (plVar6[1] != 0)) {
      local_90 = puVar2 + 0x10;
      local_88 = 0xb;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
      pfVar5 = (float *)(**(code **)(plVar6[3] + 0xd0))(plVar6[1]);
      fVar11 = *pfVar5 * 0.5;
      pfVar5 = (float *)&DAT_04199340;
      if ((*(long *)PTR_DAT_04bb2908 != 0) &&
         (pfVar5 = (float *)&DAT_04199348, *(char *)(*(long *)PTR_DAT_04bb2908 + 0x78) != '\0')) {
        pfVar5 = (float *)&DAT_04199340;
      }
      fVar7 = *pfVar5 * 0.5;
      plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 0x280);
      fVar10 = fVar7 - fVar11;
      if (local_b4 + fVar11 <= fVar7) {
        fVar10 = local_b4;
      }
      fVar7 = fVar11 - fVar7;
      if (-(*pfVar5 * 0.5) <= local_b4 - fVar11) {
        fVar7 = fVar10;
      }
      fVar10 = local_b4 - fVar7;
      if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) {
        bVar3 = true;
        plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 600);
      }
      else {
        local_88 = 0xb;
        local_90 = puVar2 + 0x10;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
        pfVar5 = (float *)(**(code **)(plVar6[3] + 0xd0))(plVar6[1]);
        local_88 = 7;
        fVar12 = -fVar10;
        if (0.0 <= fVar10) {
          fVar12 = fVar10;
        }
        fVar12 = fVar12 + *pfVar5 * 0.5 + *(float *)(*(long *)(param_1 + 0x210) + 0x2ac);
        bVar3 = fVar12 <= fVar11;
        local_90 = puVar2 + 0x10;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
        (**(code **)(plVar6[3] + 0x88))(plVar6[1],fVar12 <= fVar11);
        plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 600);
      }
      local_b4 = fVar7;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        puVar1 = PTR_DAT_04bc4f00 + 0x10;
        local_88 = 9;
        local_90 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
        fVar7 = (float)(**(code **)(plVar6[3] + 0xb0))(plVar6[1]);
        local_88 = 7;
        fVar11 = (float)(int)fVar10;
        if (!bVar3) {
          fVar11 = -0.0;
        }
        fVar11 = fVar11 + fVar7 * 0.5;
        local_90 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
        fVar10 = (float)(**(code **)(plVar6[3] + 0x90))(plVar6[1]);
        if (fVar11 != fVar10) {
          local_88 = 0x14;
          local_90 = puVar1;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
          (**(code **)(plVar6[3] + 0x158))(fVar11,plVar6[1]);
        }
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x210) + 0x1d0);
    local_90 = puVar2 + 0x10;
    local_88 = 0x11;
    local_a4 = uVar8;
    local_94 = uVar9;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
    (**(code **)(plVar6[3] + 0x128))(plVar6[1],&local_c0);
  }
  return;
}

