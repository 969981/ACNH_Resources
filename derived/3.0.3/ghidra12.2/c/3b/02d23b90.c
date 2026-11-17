
void FUN_02d23b90(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  long *plVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_35;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  puVar9 = PTR_DAT_04bc4648;
  puVar8 = PTR_DAT_04bc4640;
  puVar7 = PTR_DAT_04bc4638;
  puVar6 = PTR_DAT_04bc4630;
  puVar5 = PTR_DAT_04bb5be8;
  puVar4 = PTR_DAT_04bb5be0;
  if (4 < *(uint *)(param_2 + 0x56f00)) {
LAB_02d24034:
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)&DAT_0407ebb1;
    return;
  }
  switch(*(uint *)(param_2 + 0x56f00)) {
  case 0:
    if ((int)*(uint *)(param_2 + 0x1c4f8) <= (int)param_3) goto LAB_02d24034;
    local_35 = 0;
    local_60 = (long)&local_58 + 4;
    local_58 = CONCAT35(local_58._5_3_,0x20);
    if (*(uint *)(param_2 + 0x1c4f8) <= param_3) {
      param_3 = 0;
    }
    local_68 = PTR_DAT_04bb2028 + 0x10;
    FUN_038d1270(&local_68,&DAT_040d486c,
                 *(undefined2 *)(*(long *)(param_2 + 0x1c500) + (ulong)param_3 * 2));
    (**(code **)(local_68 + 0x18))(&local_68);
    goto LAB_02d24074;
  case 1:
    if ((int)*(uint *)(param_2 + 0x1c518) <= (int)param_3) goto LAB_02d24034;
    if (*(uint *)(param_2 + 0x1c518) <= param_3) {
      param_3 = 0;
    }
    lVar17 = *(long *)PTR_DAT_04bb5008;
    uVar10 = (uint)*(ushort *)(*(long *)(param_2 + 0x1c520) + (ulong)param_3 * 2) -
             (uint)*(ushort *)(lVar17 + 0xbf0);
    if ((*(uint *)(lVar17 + 0xbd0) <= uVar10) ||
       (puVar12 = *(uint **)(*(long *)(lVar17 + 0xbd8) + (long)(int)uVar10 * 8),
       puVar12 == (uint *)0x0)) {
      plVar13 = (long *)PTR_PTR_04bc4878;
LAB_02d24070:
      local_60 = *plVar13;
      goto LAB_02d24074;
    }
    uVar10 = *puVar12;
    if (uVar10 != 0) {
      cVar14 = *PTR_DAT_04bc4630;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar12;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x1c);
          if (-1 < (int)uVar3) {
            lVar17 = (ulong)uVar3 + (long)puVar12;
            goto LAB_02d23d68;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar10;
        lVar17 = 0;
        if ((puVar15 == (uint *)0x0) || (puVar12 == puVar15)) goto LAB_02d23d68;
        lVar17 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar1 = (long)puVar12 + (lVar17 - (long)puVar15);
        lVar17 = 0;
        if (lVar1 == 0) goto LAB_02d23d68;
        uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
        *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x39b5a93d) {
          piVar11 = piVar11 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_02d23d64;
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar7 + 0x1c) = iVar2;
        uVar10 = *puVar12;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_02d23d64:
    lVar17 = 0;
LAB_02d23d68:
    plVar13 = (long *)PTR_PTR_04bc4870;
    break;
  case 2:
    if ((int)*(uint *)(param_2 + 0x1c528) <= (int)param_3) goto LAB_02d24034;
    if (*(uint *)(param_2 + 0x1c528) <= param_3) {
      param_3 = 0;
    }
    lVar17 = *(long *)PTR_DAT_04bb5008;
    uVar10 = (uint)*(ushort *)(*(long *)(param_2 + 0x1c530) + (ulong)param_3 * 2) -
             (uint)*(ushort *)(lVar17 + 0xdf0);
    if ((*(uint *)(lVar17 + 0xdd0) <= uVar10) ||
       (puVar12 = *(uint **)(*(long *)(lVar17 + 0xdd8) + (long)(int)uVar10 * 8),
       puVar12 == (uint *)0x0)) {
      plVar13 = (long *)PTR_PTR_04bc4810;
      goto LAB_02d24070;
    }
    uVar10 = *puVar12;
    if (uVar10 != 0) {
      cVar14 = *PTR_DAT_04bc4640;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar12;
        }
        else {
          uVar3 = *(uint *)(puVar9 + 0x28);
          if (-1 < (int)uVar3) {
            lVar17 = (ulong)uVar3 + (long)puVar12;
            goto LAB_02d23e98;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar10;
        lVar17 = 0;
        if ((puVar15 == (uint *)0x0) || (puVar12 == puVar15)) goto LAB_02d23e98;
        lVar17 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar1 = (long)puVar12 + (lVar17 - (long)puVar15);
        lVar17 = 0;
        if (lVar1 == 0) goto LAB_02d23e98;
        uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
        *(undefined4 *)(puVar9 + 0x28) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x39b5a93d) {
          piVar11 = piVar11 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_02d23e94;
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar9 + 0x28) = iVar2;
        uVar10 = *puVar12;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_02d23e94:
    lVar17 = 0;
LAB_02d23e98:
    plVar13 = (long *)PTR_PTR_04bc4808;
    break;
  case 3:
    if ((int)*(uint *)(param_2 + 0x1c508) <= (int)param_3) goto LAB_02d24034;
    if (*(uint *)(param_2 + 0x1c508) <= param_3) {
      param_3 = 0;
    }
    lVar17 = *(long *)PTR_DAT_04bb5008;
    uVar10 = (uint)*(ushort *)(*(long *)(param_2 + 0x1c510) + (ulong)param_3 * 2) -
             (uint)*(ushort *)(lVar17 + 0x9f0);
    if ((*(uint *)(lVar17 + 0x9d0) <= uVar10) ||
       (puVar12 = *(uint **)(*(long *)(lVar17 + 0x9d8) + (long)(int)uVar10 * 8),
       puVar12 == (uint *)0x0)) {
      plVar13 = (long *)PTR_PTR_04bc48e0;
      goto LAB_02d24070;
    }
    uVar10 = *puVar12;
    if (uVar10 != 0) {
      cVar14 = *PTR_DAT_04bb5be0;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar12;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x18);
          if (-1 < (int)uVar3) {
            lVar17 = (ulong)uVar3 + (long)puVar12;
            goto LAB_02d23fbc;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar10;
        lVar17 = 0;
        if ((puVar15 == (uint *)0x0) || (puVar12 == puVar15)) goto LAB_02d23fbc;
        lVar17 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar1 = (long)puVar12 + (lVar17 - (long)puVar15);
        lVar17 = 0;
        if (lVar1 == 0) goto LAB_02d23fbc;
        uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
        *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x39b5a93d) {
          piVar11 = piVar11 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_02d23fb8;
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar5 + 0x18) = iVar2;
        uVar10 = *puVar12;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_02d23fb8:
    lVar17 = 0;
LAB_02d23fbc:
    plVar13 = (long *)PTR_PTR_04bb5bd8;
    break;
  case 4:
    if (((int)param_3 < 1) || (*(int *)(param_2 + 0x1c1f8) == 0)) goto LAB_02d24034;
    plVar13 = (long *)(param_2 + 0x1c558);
    piVar11 = (int *)(**(code **)(*plVar13 + 0x18))(plVar13);
    if (*piVar11 != 0) {
      piVar11 = (int *)(**(code **)(*plVar13 + 0x18))(plVar13);
      if (param_3 - 1 <= *piVar11 - 1U) {
        lVar17 = (**(code **)(*plVar13 + 0x18))(plVar13);
        plVar13 = *(long **)(*(long *)(lVar17 + 8) + (ulong)(param_3 - 1) * 8);
        goto LAB_02d240b0;
      }
    }
    plVar13 = (long *)PTR_DAT_04bb37e0;
LAB_02d240b0:
    puVar4 = PTR_DAT_04bb43c0;
    local_18 = (undefined2)*plVar13;
    local_16 = *(undefined1 *)((long)plVar13 + 2);
    local_15 = *(undefined1 *)((long)plVar13 + 3);
    local_14 = *(undefined4 *)((long)plVar13 + 4);
    local_60 = *plVar13;
    local_68 = PTR_DAT_04bc0510 + 0x10;
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    local_58 = 0;
    uVar10 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar4 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(&local_18);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (uVar10 < *(uint *)(lVar17 + 0x1d8)) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8);
          if (lVar17 != 0) {
            local_58 = lVar17;
          }
        }
      }
    }
    FUN_01ad6490(param_1,&local_68);
    return;
  }
  local_60 = *plVar13;
  if (lVar17 != 0) {
    local_60 = lVar17;
  }
LAB_02d24074:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = local_60;
  return;
}

