
void FUN_01ed85e0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_48;
  
  puVar7 = PTR_DAT_04bb30c8;
  puVar6 = PTR_DAT_04bb30c0;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_48 = CONCAT44(0x15,(undefined4)local_48);
    puVar15 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar15 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar15 >> 0x15 & 1) != 0) {
      plVar10 = *(long **)(param_1 + 8);
      if ((int)plVar10[0xea] == 1) {
        lVar17 = plVar10[0x76];
        local_48 = CONCAT44(0x14,(undefined4)local_48);
        if ((*(int *)(lVar17 + 0x360) == 0x14) ||
           (local_48 = CONCAT44(0x16,(undefined4)local_48), *(int *)(lVar17 + 0x360) == 0x16)) {
          bVar8 = false;
          if (*(int *)(lVar17 + 0x4b8) != 0) {
            if (*(int *)(lVar17 + 0x378) == 0x23) goto LAB_01ed8750;
            bVar8 = false;
          }
        }
        else {
LAB_01ed8750:
          bVar8 = *(int *)(*(long *)(lVar17 + 0x358) + 0x750) - 1U < 2;
        }
        bVar2 = false;
        if (*(char *)(lVar17 + 0x677) != '\0') {
          bVar2 = bVar8;
        }
        FUN_016f8230(plVar10,1,bVar2,0);
      }
      else if ((int)plVar10[0xea] == 3) {
        if ((long *)plVar10[0x16] != plVar10 + 0x15) {
          lVar17 = (long)*(int *)((long)plVar10 + 0xbc);
          plVar16 = (long *)(plVar10[0x16] - lVar17);
          puVar1 = PTR_DAT_04bb2e38 + 0x10;
          do {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              *(undefined **)puVar6 = puVar1;
              __cxa_guard_release(puVar7);
            }
            if ((plVar16 != (long *)0x0) &&
               (uVar11 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar6), (uVar11 & 1) != 0)) {
              lVar17 = plVar16[0x51];
              if (lVar17 != 0) {
                *(undefined1 *)((long)plVar16 + 0x339) = 1;
                uVar4 = *(uint *)(lVar17 + 0x10);
                if (0 < (int)uVar4) {
                  if (*(char *)((long)plVar16 + 0x33a) == '\0') {
                    uVar13 = 0;
                    do {
                      uVar3 = uVar13;
                      if (*(uint *)(lVar17 + 0x10) <= uVar13) {
                        uVar3 = 0;
                      }
                      puVar15 = (uint *)(*(long *)(lVar17 + 0x18) + (ulong)uVar3 * 0x48 + 0x18);
                      uVar3 = *puVar15;
                      if ((uVar3 >> 3 & 1) == 0) {
                        *puVar15 = uVar3 | 1;
                        uVar3 = uVar13;
                        if (*(uint *)(lVar17 + 0x10) <= uVar13) {
                          uVar3 = 0;
                        }
                        lVar14 = *(long *)(lVar17 + 0x18) + (ulong)uVar3 * 0x48;
                        *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | 2;
                      }
                      else {
                        *puVar15 = uVar3 & 0xfffffffe;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar4 != uVar13);
                  }
                  else {
                    uVar13 = 0;
                    do {
                      uVar3 = uVar13;
                      if (*(uint *)(lVar17 + 0x10) <= uVar13) {
                        uVar3 = 0;
                      }
                      uVar13 = uVar13 + 1;
                      lVar14 = *(long *)(lVar17 + 0x18) + (ulong)uVar3 * 0x48;
                      *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) & 0xfffffffe;
                    } while (uVar4 != uVar13);
                  }
                }
              }
              break;
            }
            plVar16 = (long *)(*(long *)((long)plVar16 + lVar17 + 8) - lVar17);
          } while (plVar16 != (long *)((long)(plVar10 + 0x15) - lVar17));
        }
        plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x60);
        if (plVar10 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(&DAT_052461c0);
            plVar10 = &DAT_05240280;
            if (iVar9 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar10 = &DAT_05240280;
          }
        }
        (**(code **)(*plVar10 + 0x498))(plVar10,1);
        FUN_016f84f0(*(long *)(param_1 + 8),*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
      }
      else {
        (**(code **)(*plVar10 + 0x298))(plVar10,0);
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x7880)) && (*(int *)(param_1 + 0x77b4) == *(int *)(param_1 + 0x7880))
     ) {
    local_48 = 0;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_48 + 4,
                 &local_48,PTR_DAT_04bc1600,6);
  }
  if (0 < *(int *)(param_1 + 0x787c)) {
    if (*(int *)(param_1 + 0x77b4) < *(int *)(param_1 + 0x787c)) {
      return;
    }
    goto LAB_01ed889c;
  }
  local_48 = CONCAT44(0xd,(undefined4)local_48);
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0xd) {
    return;
  }
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar9 = __cxa_guard_acquire(&DAT_052461c0), iVar9 == 0)) {
      puVar12 = &DAT_05240280;
      goto LAB_01ed8928;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar12 = &DAT_05240280;
    lVar17 = DAT_052413b8;
  }
  else {
LAB_01ed8928:
    lVar17 = puVar12[0x227];
  }
  if (lVar17 == 0) {
    uVar11 = FUN_0170a6d0(puVar12,0);
  }
  else {
    local_48 = CONCAT44(1,(undefined4)local_48);
    uVar11 = FUN_0170a6d0(puVar12,*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
  }
  if ((uVar11 & 1) == 0) {
    return;
  }
LAB_01ed889c:
  *(undefined1 *)(param_1 + 0x7878) = 1;
  if (*(char *)(param_1 + 0x789c) == '\0') {
    return;
  }
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  return;
}

