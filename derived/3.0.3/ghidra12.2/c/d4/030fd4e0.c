
void FUN_030fd4e0(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  uint uVar20;
  undefined **local_90;
  long local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined ***local_68;
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(param_1 + 8);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    while (puVar3 != puVar2) {
      puVar15 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar15;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 8) = param_1 + 8;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    lVar13 = *param_2;
  }
  local_68 = &local_90;
  local_70 = (undefined8 *)(PTR_DAT_04bc5180 + 0x10);
  local_80 = &LAB_030fd850;
  uStack_78 = 0;
  local_90 = &PTR_LAB_04affc30;
  if (*(long *)(lVar13 + 0x40) == lVar13 + 0x38) {
    return;
  }
  lVar18 = (long)*(int *)(lVar13 + 0x4c);
  lVar17 = *(long *)(lVar13 + 0x40) - lVar18;
  local_88 = param_1;
  do {
    uVar8 = (*(code *)*local_70)(&local_70,lVar17);
    if ((uVar8 & 1) != 0) break;
    lVar17 = *(long *)(lVar17 + lVar18 + 8) - lVar18;
  } while (lVar17 != (lVar13 + 0x38) - lVar18);
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0) {
    return;
  }
  if ((int)uVar4 < 1) {
    return;
  }
  uVar8 = (ulong)uVar4 * 0x60 | 8;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar10 = malloc(uVar8);
    puVar5 = PTR_DAT_04bc6260;
    puVar6 = PTR_DAT_04bc8e10;
  }
  else {
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar13 + 8);
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_030fd6c8;
    puVar10 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar8,8);
    puVar5 = PTR_DAT_04bc6260;
    puVar6 = PTR_DAT_04bc8e10;
  }
  PTR_DAT_04bc6260 = puVar5;
  PTR_DAT_04bc8e10 = puVar6;
  if (puVar10 != (ulong *)0x0) {
    puVar11 = puVar10 + 1;
    *puVar10 = (ulong)uVar4;
    puVar10 = puVar11;
    do {
      *puVar10 = (ulong)(puVar5 + 0x10);
      puVar10[1] = 0;
      *(undefined8 *)((long)puVar10 + 0x54) = 0xfffe;
      puVar10[4] = 0xffffffff;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 8) = 0;
      puVar10[9] = 0xffffffffffffffff;
      *(undefined1 *)(puVar10 + 10) = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[5] = (ulong)(puVar6 + 0x10);
      puVar10[6] = 0xffffffffffffffff;
      FUN_0277d4ac();
      *(undefined1 *)((long)puVar10 + 0x5c) = 0;
      puVar10 = puVar10 + 0xc;
    } while (puVar10 != puVar11 + (ulong)uVar4 * 0xc);
    *(uint *)(param_1 + 0x20) = uVar4;
    *(ulong **)(param_1 + 0x28) = puVar11;
  }
LAB_030fd6c8:
  local_88 = 0;
  bVar7 = false;
  uVar14 = 1;
  uVar20 = 1;
  puVar3 = (undefined8 *)(PTR_DAT_04bc0cb8 + 0x10);
  uVar12 = 0;
  do {
    uVar16 = *(uint *)(param_1 + 0x18);
    uVar1 = uVar12 + 1;
    if ((int)uVar12 < (int)uVar16 && uVar16 != 0) {
      if (uVar12 < uVar16) {
        puVar15 = puVar2;
        if (6 < uVar12) {
          uVar16 = uVar20 & 0xfffffff8;
          do {
            uVar16 = uVar16 - 8;
            puVar15 = *(undefined8 **)
                       (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(puVar15[1] + 8)
                                                                         + 8) + 8) + 8) + 8) + 8) +
                       8);
          } while (uVar16 != 0);
        }
        if ((uVar1 & 7) != 0) {
          uVar16 = uVar14 & 7;
          do {
            puVar15 = (undefined8 *)puVar15[1];
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      else {
        puVar15 = (undefined8 *)0x0;
      }
      if ((puVar15 != (undefined8 *)0x0) &&
         (lVar13 = (long)puVar15 - (long)*(int *)(param_1 + 0x1c), lVar13 != 0)) {
        ppuVar19 = *(undefined ***)(lVar13 + 0x238);
        if (*(uint *)(param_1 + 0x20) <= uVar12) {
          uVar12 = 0;
        }
        lVar13 = *(long *)(param_1 + 0x28) + (ulong)uVar12 * 0x60;
        local_80 = (undefined1 *)(lVar13 + 0x28);
        local_90 = ppuVar19;
        FUN_0340a298(lVar13,&local_90);
        if (!(bool)(bVar7 | ppuVar19 == (undefined **)0x0)) {
          local_68 = (undefined ***)CONCAT44(local_68._4_4_,0x1f);
          local_70 = puVar3;
          (**(code **)(*ppuVar19 + 0x20))(ppuVar19,&local_70);
          (**(code **)(ppuVar19[3] + 0x210))(param_1 + 0x30,ppuVar19[1],0,0);
          bVar7 = *(long *)(param_1 + 0x38) != -1;
        }
      }
    }
    uVar20 = uVar20 + 1;
    uVar14 = (uVar14 & 7) + 1;
    uVar12 = uVar1;
  } while (uVar1 != uVar4);
  return;
}

