
/* WARNING: Removing unreachable block (ram,0x02ce5944) */
/* WARNING: Removing unreachable block (ram,0x02ce5ae4) */
/* WARNING: Removing unreachable block (ram,0x02ce57cc) */
/* WARNING: Removing unreachable block (ram,0x02ce57f4) */
/* WARNING: Removing unreachable block (ram,0x02ce5b14) */
/* WARNING: Removing unreachable block (ram,0x02ce596c) */

void FUN_02ce54f0(long param_1,int param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined **local_88;
  long lStack_80;
  int local_68;
  uint local_64;
  
  *(int *)(param_1 + 0xef8) = param_2;
  plVar1 = (long *)(param_1 + 0x3b8a8);
  local_68 = param_2;
  piVar8 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar8) {
    lVar11 = 0;
    puVar13 = *(undefined8 **)(piVar8 + 4);
    do {
      puVar14 = *(undefined8 **)(*(long *)(piVar8 + 2) + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar14 = puVar13;
      *(undefined8 **)(piVar8 + 4) = puVar14;
      puVar13 = puVar14;
    } while (lVar11 < *piVar8);
  }
  *piVar8 = 0;
  puVar6 = PTR_DAT_04bb43c0;
  if (param_2 == 0) {
    uVar16 = *(uint *)(param_1 + 0xf08);
    if (0 < (int)uVar16) {
      uVar10 = 0;
      do {
        lVar11 = *(long *)puVar6;
        uVar7 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0xf10) + uVar10 * 8));
        if (*(long *)puVar6 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            puVar12 = *(undefined2 **)(*(long *)(param_1 + 0xf10) + uVar10 * 8);
            uVar5 = *puVar12;
            uVar3 = *(undefined1 *)(puVar12 + 1);
            uVar4 = *(undefined1 *)((long)puVar12 + 3);
            uVar2 = *(undefined4 *)(puVar12 + 2);
            piVar8 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
            if (*piVar8 < piVar8[1]) {
              puVar13 = *(undefined8 **)(piVar8 + 4);
              if (puVar13 != (undefined8 *)0x0) {
                *(undefined8 *)(piVar8 + 4) = *puVar13;
              }
              *(undefined2 *)puVar13 = uVar5;
              *(undefined1 *)((long)puVar13 + 2) = uVar3;
              *(undefined1 *)((long)puVar13 + 3) = uVar4;
              *(undefined4 *)((long)puVar13 + 4) = uVar2;
              if (*piVar8 < piVar8[1]) {
                *(undefined8 **)(*(long *)(piVar8 + 2) + (long)*piVar8 * 8) = puVar13;
                *piVar8 = *piVar8 + 1;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar16 != uVar10);
    }
  }
  else {
    switch(local_68) {
    case 3:
      local_88 = &PTR_FUN_04b2a408;
      break;
    default:
      goto switchD_02ce55a8_caseD_4;
    case 0x1d:
      local_88 = &PTR_FUN_04b2a250;
      break;
    case 0x1e:
      local_88 = &PTR_FUN_04b2a278;
      break;
    case 0x1f:
      local_88 = &PTR_FUN_04b2a2a0;
      break;
    case 0x20:
      local_88 = &PTR_FUN_04b2a2c8;
      break;
    case 0x21:
      local_88 = &PTR_FUN_04b2a2f0;
      break;
    case 0x22:
      local_88 = &PTR_FUN_04b2a318;
      break;
    case 0x23:
      local_88 = &PTR_FUN_04b2a340;
      break;
    case 0x24:
      local_88 = &PTR_FUN_04b2a368;
    }
    FUN_02ce5bc0(param_1,&local_88);
  }
switchD_02ce55a8_caseD_4:
  local_88 = &PTR_LAB_04ab8a20;
  lStack_80 = param_1;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar9 = (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_02c5ef70(uVar9,&local_88);
  FUN_02ce119c(param_1 + 0x76250,local_68);
  lVar11 = param_1 + 0x762c0;
  iVar17 = -(uint)(*(byte *)(param_1 + 0x7628c) == 0);
  *(int *)(param_1 + 0x762b8) = iVar17;
  *(uint *)(param_1 + 0x762bc) = (uint)*(byte *)(param_1 + 0x7628c);
  if (local_68 == 0) {
    uVar16 = 0;
    do {
      lVar18 = lVar11 + (ulong)uVar16 * 0x10;
      if (9 < uVar16) {
        lVar18 = lVar11;
      }
      local_64 = uVar16;
      if (*(int *)(lVar18 + 8) == 4) {
        lVar18 = lVar11 + (ulong)uVar16 * 0x10;
        if (9 < uVar16) {
          lVar18 = lVar11;
        }
        if (*(int *)(param_1 + 0x3b8b0) != 0) {
          lVar15 = *(long *)(param_1 + 0x3b8b8);
          lVar20 = 0;
          lVar19 = (long)*(int *)(param_1 + 0x3b8b0) << 3;
          do {
            local_88 = (undefined **)**(undefined8 **)(lVar15 + lVar20 * 8);
            uVar10 = FUN_0277d7b4(&local_88,lVar18);
            if ((uVar10 & 1) != 0) {
              iVar17 = *(int *)(param_1 + 0x762bc) + (int)lVar20;
              goto LAB_02ce5864;
            }
            lVar20 = lVar20 + 1;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        iVar17 = -1;
LAB_02ce5864:
        lVar18 = lVar11 + (ulong)local_64 * 0x10;
        if (9 < local_64) {
          lVar18 = lVar11;
        }
        *(int *)(lVar18 + 0xc) = iVar17;
      }
      else if (*(int *)(lVar18 + 8) == 3) {
        iVar17 = *(int *)(param_1 + 0x762b8);
        goto LAB_02ce5864;
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == 10) {
        return;
      }
    } while( true );
  }
  *(undefined4 *)(param_1 + 0x762cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x762dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x762ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x762fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7630c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7631c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7632c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7633c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7634c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7635c) = 0xffffffff;
  if (local_68 == 3) {
    local_64 = 9;
    if (*(int *)(param_1 + 0x76358) == 3) goto LAB_02ce5a94;
    if (*(int *)(param_1 + 0x76358) != 4) {
      return;
    }
    if (*(int *)(param_1 + 0x3b8b0) != 0) {
      lVar19 = *(long *)(param_1 + 0x3b8b8);
      lVar18 = 0;
      lVar20 = (long)*(int *)(param_1 + 0x3b8b0) << 3;
      iVar17 = -1;
      do {
        local_88 = (undefined **)**(undefined8 **)(lVar19 + lVar18 * 8);
        uVar10 = FUN_0277d7b4(&local_88,param_1 + 0x76350);
        if ((uVar10 & 1) != 0) goto LAB_02ce5a8c;
        lVar18 = lVar18 + 1;
        lVar20 = lVar20 + -8;
      } while (lVar20 != 0);
      goto LAB_02ce5a94;
    }
  }
  else {
    if (local_68 == 0x1e) {
      local_64 = 1;
      if (*(int *)(param_1 + 0x762d8) != 3) {
        if (*(int *)(param_1 + 0x762d8) != 4) goto LAB_02ce5ad0;
        if (*(int *)(param_1 + 0x3b8b0) == 0) {
          iVar17 = -1;
        }
        else {
          lVar19 = *(long *)(param_1 + 0x3b8b8);
          lVar18 = 0;
          lVar20 = (long)*(int *)(param_1 + 0x3b8b0) << 3;
          iVar17 = -1;
          do {
            local_88 = (undefined **)**(undefined8 **)(lVar19 + lVar18 * 8);
            uVar10 = FUN_0277d7b4(&local_88,param_1 + 0x762d0);
            if ((uVar10 & 1) != 0) {
              iVar17 = *(int *)(param_1 + 0x762bc) + (int)lVar18;
              break;
            }
            lVar18 = lVar18 + 1;
            lVar20 = lVar20 + -8;
          } while (lVar20 != 0);
        }
      }
      lVar18 = lVar11 + (ulong)local_64 * 0x10;
      if (9 < local_64) {
        lVar18 = lVar11;
      }
      *(int *)(lVar18 + 0xc) = iVar17;
LAB_02ce5ad0:
      local_64 = 2;
      if (*(int *)(param_1 + 0x762e8) == 4) {
        if (*(int *)(param_1 + 0x3b8b0) == 0) {
          iVar17 = -1;
        }
        else {
          lVar19 = *(long *)(param_1 + 0x3b8b8);
          lVar18 = 0;
          lVar20 = (long)*(int *)(param_1 + 0x3b8b0) << 3;
          iVar17 = -1;
          do {
            local_88 = (undefined **)**(undefined8 **)(lVar19 + lVar18 * 8);
            uVar10 = FUN_0277d7b4(&local_88,param_1 + 0x762e0);
            if ((uVar10 & 1) != 0) {
              iVar17 = *(int *)(param_1 + 0x762bc) + (int)lVar18;
              break;
            }
            lVar18 = lVar18 + 1;
            lVar20 = lVar20 + -8;
          } while (lVar20 != 0);
        }
      }
      else {
        if (*(int *)(param_1 + 0x762e8) != 3) {
          return;
        }
        iVar17 = *(int *)(param_1 + 0x762b8);
      }
      lVar18 = lVar11 + (ulong)local_64 * 0x10;
      if (9 < local_64) {
        lVar18 = lVar11;
      }
      *(int *)(lVar18 + 0xc) = iVar17;
      return;
    }
    if (7 < local_68 - 0x1dU) {
      return;
    }
    local_64 = *(uint *)(&DAT_04058560 + (long)(int)(local_68 - 0x1dU) * 4);
    lVar18 = lVar11 + (ulong)local_64 * 0x10;
    if (9 < local_64) {
      lVar18 = lVar11;
    }
    if (*(int *)(lVar18 + 8) == 3) goto LAB_02ce5a94;
    if (*(int *)(lVar18 + 8) != 4) {
      return;
    }
    lVar20 = lVar11 + (ulong)local_64 * 0x10;
    if (9 < local_64) {
      lVar20 = lVar11;
    }
    if (*(int *)(param_1 + 0x3b8b0) != 0) {
      lVar15 = *(long *)(param_1 + 0x3b8b8);
      lVar18 = 0;
      lVar19 = (long)*(int *)(param_1 + 0x3b8b0) << 3;
      iVar17 = -1;
      do {
        local_88 = (undefined **)**(undefined8 **)(lVar15 + lVar18 * 8);
        uVar10 = FUN_0277d7b4(&local_88,lVar20);
        if ((uVar10 & 1) != 0) goto LAB_02ce5a8c;
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + -8;
      } while (lVar19 != 0);
      goto LAB_02ce5a94;
    }
  }
  iVar17 = -1;
LAB_02ce5a94:
  lVar18 = lVar11 + (ulong)local_64 * 0x10;
  if (9 < local_64) {
    lVar18 = lVar11;
  }
  *(int *)(lVar18 + 0xc) = iVar17;
  return;
LAB_02ce5a8c:
  iVar17 = *(int *)(param_1 + 0x762bc) + (int)lVar18;
  goto LAB_02ce5a94;
}

