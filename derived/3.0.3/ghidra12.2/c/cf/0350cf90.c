
void FUN_0350cf90(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *local_88;
  char *pcStack_80;
  long local_78;
  
  puVar1 = (uint *)(param_1 + 0x1c290);
  local_78 = param_2;
  FUN_0345c380(param_1 + (ulong)(*puVar1 != 0) * 0x28 + 0x248,&local_78);
  uVar3 = *puVar1;
  lVar15 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)(uVar3 != 0) * 8 + 0x570);
  if (lVar15 != 0) {
    uVar16 = 0;
    if (uVar3 < 5) {
      uVar16 = uVar3;
    }
    plVar17 = (long *)(param_1 + 0x1c388);
    (**(code **)(*plVar17 + 0x18))(plVar17,*(undefined4 *)(param_1 + (ulong)uVar16 * 4 + 0x1c1f4));
    FUN_02bc30b0(plVar17,lVar15);
    if (*puVar1 != 0) {
      local_88 = PTR_DAT_04bb2020 + 0x10;
      pcStack_80 = "EnableDiyRemake";
      iVar7 = FUN_0274bce0(param_1 + 0x1f8,&local_88);
      puVar5 = PTR_DAT_04bc4d98;
      puVar4 = PTR_DAT_04bc4d90;
      uVar3 = *(uint *)(lVar15 + 0x2f8);
      if (uVar3 != 0) {
        if (uVar16 == 4) {
          uVar18 = 0;
          plVar17 = (long *)(param_1 + 0x1cca8);
          puVar2 = PTR_DAT_04bc4da0 + 0x10;
          do {
            puVar9 = (undefined8 *)0x0;
            if (((-1 < (int)uVar18) && ((int)uVar18 < (int)*(uint *)(lVar15 + 0x208))) &&
               (uVar18 < *(uint *)(lVar15 + 0x208))) {
              puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x210) + uVar18 * 8);
            }
            uVar16 = *(uint *)(param_2 + 0xc);
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              *(undefined **)puVar4 = puVar2;
              __cxa_guard_release(puVar5);
            }
            if ((puVar9 != (undefined8 *)0x0) &&
               (uVar10 = (**(code **)*puVar9)(puVar9,puVar4), (uVar10 & 1) != 0)) {
              uVar10 = uVar18 + uVar16;
              iVar8 = (int)uVar10;
              if ((iVar8 < 0) || (*(int *)(lVar15 + 0x3cc) <= iVar8)) {
                uVar19 = 0x3f800000;
LAB_0350d0c4:
                FUN_0350d350(uVar19,param_1,uVar10 & 0xffffffff);
                bVar6 = 0;
              }
              else {
                if (iVar8 == 0) {
                  uVar19 = 0;
                  uVar10 = uVar18;
                  goto LAB_0350d0c4;
                }
                FUN_0350d350(0x40000000,param_1,uVar18 & 0xffffffff);
                piVar11 = (int *)(**(code **)(*plVar17 + 0x18))(plVar17);
                if (*piVar11 == 0) {
                  plVar14 = (long *)PTR_DAT_04bb37e0;
                }
                else {
                  piVar11 = (int *)(**(code **)(*plVar17 + 0x18))(plVar17);
                  plVar14 = (long *)PTR_DAT_04bb37e0;
                  if (iVar8 - 1U <= *piVar11 - 1U) {
                    lVar12 = (**(code **)(*plVar17 + 0x18))(plVar17);
                    plVar14 = *(long **)(*(long *)(lVar12 + 8) + (ulong)(iVar8 - 1U) * 8);
                  }
                }
                local_88 = (undefined *)*plVar14;
                uVar10 = FUN_03422cc0(&local_88);
                if ((uVar10 & 1) == 0) {
                  bVar6 = FUN_03422a60(&local_88,param_1 + 0x1f8);
                }
                else {
                  bVar6 = 1;
                }
                bVar6 = 0 < iVar7 & bVar6;
              }
              FUN_0350d468(param_1,uVar18 & 0xffffffff,bVar6);
            }
            uVar18 = uVar18 + 1;
          } while (uVar3 != uVar18);
        }
        else {
          uVar18 = 0;
          puVar2 = PTR_DAT_04bc4da0 + 0x10;
          do {
            puVar9 = (undefined8 *)0x0;
            uVar16 = (uint)uVar18;
            if (((-1 < (int)uVar16) && ((int)uVar16 < (int)*(uint *)(lVar15 + 0x208))) &&
               (uVar18 < *(uint *)(lVar15 + 0x208))) {
              puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0x210) + uVar18 * 8);
            }
            iVar7 = *(int *)(param_2 + 0xc);
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              *(undefined **)puVar4 = puVar2;
              __cxa_guard_release(puVar5);
            }
            if ((puVar9 != (undefined8 *)0x0) &&
               (uVar10 = (**(code **)*puVar9)(puVar9,puVar4), (uVar10 & 1) != 0)) {
              uVar13 = uVar16 + iVar7;
              if (*(int *)(lVar15 + 0x3cc) <= (int)uVar13 || 0x7fffffff < uVar13) {
                uVar16 = uVar13;
              }
              FUN_0350d350(0x3f800000,param_1,uVar16);
              FUN_0350d468(param_1,uVar18 & 0xffffffff,0);
            }
            uVar18 = uVar18 + 1;
          } while (uVar3 != uVar18);
        }
      }
    }
  }
  return;
}

