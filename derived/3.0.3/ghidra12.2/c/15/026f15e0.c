
/* WARNING: Removing unreachable block (ram,0x026f1b8c) */
/* WARNING: Removing unreachable block (ram,0x026f1bc8) */

void FUN_026f15e0(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  size_t sVar12;
  void *pvVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  void *pvVar19;
  long *plVar20;
  ulong uVar21;
  
  if (*(int *)(param_1 + 0x94) == 2) {
    uVar18 = 0;
LAB_026f169c:
    uVar21 = (ulong)uVar18;
    lVar14 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + (ulong)uVar18 * 8 + 0x94) = 0;
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + uVar21 * 8 + 0x60), lVar14 != 0)) {
      pvVar19 = *(void **)(lVar14 + 0x10);
      if (pvVar19 != (void *)0x0) {
        memset(pvVar19,0,0x74a40);
        *(undefined8 *)((long)pvVar19 + 0x40) = 0;
        *(undefined2 *)((long)pvVar19 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar19 + 0x46) = 0;
        *(undefined2 *)((long)pvVar19 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar19 + 0x110);
        FUN_028119e0((long)pvVar19 + 0x37be0);
        lVar14 = *(long *)(*(long *)(param_1 + 0x10) + uVar21 * 8 + 0x60);
      }
      pvVar19 = *(void **)(lVar14 + 0x18);
      if (pvVar19 != (void *)0x0) {
        memset(pvVar19,0,0x74a40);
        *(undefined8 *)((long)pvVar19 + 0x40) = 0;
        *(undefined2 *)((long)pvVar19 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar19 + 0x46) = 0;
        *(undefined2 *)((long)pvVar19 + 0x4e) = 0xffff;
        FUN_027ee494((long)pvVar19 + 0x110);
        FUN_028119e0((long)pvVar19 + 0x37be0);
      }
    }
    if ((*(long *)(param_1 + 0x60) != 0) && (uVar18 < *(uint *)(param_1 + 0x58))) {
      pvVar19 = (void *)(*(long *)(param_1 + 0x60) + uVar21 * 0x300);
      memset(pvVar19,0,0x300);
      *(undefined8 *)((long)pvVar19 + 0x40) = 0;
      *(undefined2 *)((long)pvVar19 + 0xe) = 0xffff;
      *(undefined8 *)((long)pvVar19 + 0x46) = 0;
      *(undefined2 *)((long)pvVar19 + 0x4e) = 0xffff;
      memset((void *)((long)pvVar19 + 0x100),0,0x200);
      uVar21 = 0;
      do {
        uVar5 = uVar21 << 2;
        uVar6 = uVar21 >> 0x1f;
        uVar18 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar18;
        *(undefined4 *)((long)pvVar19 + 0x100 + (-uVar6 & 0xfffffffc00000000 | uVar5)) = 0;
      } while (uVar18 != 0x80);
    }
  }
  else {
    bVar8 = *(int *)(param_1 + 0x9c) == 2;
    iVar2 = *(int *)(param_1 + 0xb4);
    bVar9 = *(int *)(param_1 + 0xa4) == 2;
    bVar10 = *(int *)(param_1 + 0xac) == 2;
    bVar11 = *(int *)(param_1 + 0xbc) == 2;
    if (((bVar11 || (iVar2 == 2 || ((bVar8 || bVar9) || bVar10))) || (*(int *)(param_1 + 0xc4) == 2)
        ) || (*(int *)(param_1 + 0xcc) == 2)) {
      uVar18 = 2;
      if (*(int *)(param_1 + 0xa4) != 2) {
        uVar18 = 3;
      }
      if (*(int *)(param_1 + 0x9c) == 2) {
        uVar18 = 1;
      }
      uVar16 = 4;
      if (iVar2 != 2) {
        uVar16 = 5;
      }
      if ((!bVar8 && !bVar9) && !bVar10) {
        uVar18 = uVar16;
      }
      uVar16 = 6;
      if (*(int *)(param_1 + 0xc4) != 2) {
        uVar16 = 7;
      }
      if (!bVar11 && (iVar2 != 2 && ((!bVar8 && !bVar9) && !bVar10))) {
        uVar18 = uVar16;
      }
      goto LAB_026f169c;
    }
  }
  if (*(int *)(param_1 + 0xd4) == 2) {
    uVar21 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xdc);
    iVar3 = *(int *)(param_1 + 0xfc);
    iVar4 = *(int *)(param_1 + 0x104);
    if ((((iVar2 != 2) && (*(int *)(param_1 + 0xe4) != 2)) && (*(int *)(param_1 + 0xec) != 2)) &&
       (((*(int *)(param_1 + 0xf4) != 2 && (iVar3 != 2)) &&
        ((iVar4 != 2 && (*(int *)(param_1 + 0x10c) != 2)))))) goto LAB_026f18ac;
    bVar8 = iVar2 != 2;
    bVar9 = *(int *)(param_1 + 0xe4) != 2;
    uVar18 = 2;
    if (bVar9) {
      uVar18 = 3;
    }
    if (iVar2 == 2) {
      uVar18 = 1;
    }
    bVar10 = *(int *)(param_1 + 0xec) != 2;
    bVar11 = *(int *)(param_1 + 0xf4) != 2;
    uVar16 = 4;
    if (bVar11) {
      uVar16 = 5;
    }
    if (bVar10 && (bVar9 && bVar8)) {
      uVar18 = uVar16;
    }
    uVar16 = 6;
    if (iVar4 != 2) {
      uVar16 = 7;
    }
    if (iVar3 != 2 && (bVar11 && (bVar10 && (bVar9 && bVar8)))) {
      uVar18 = uVar16;
    }
    uVar21 = (ulong)uVar18;
    if (((iVar3 != 2 && (bVar11 && (bVar10 && (bVar9 && bVar8)))) && (iVar4 != 2)) &&
       (*(int *)(param_1 + 0x10c) != 2)) goto LAB_026f18ac;
  }
  *(undefined4 *)(param_1 + uVar21 * 8 + 0xd4) = 0;
  FUN_026f3190(param_1);
LAB_026f18ac:
  if (*(int *)(param_1 + 0x114) == 2) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar20 = *(long **)(*(long *)(param_1 + 0x10) + 0xe0);
      pvVar19 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20);
      memset(pvVar19,0,0x2f650);
      *(undefined8 *)((long)pvVar19 + 0x40) = 0;
      *(undefined2 *)((long)pvVar19 + 0xe) = 0xffff;
      *(undefined8 *)((long)pvVar19 + 0x46) = 0;
      *(undefined2 *)((long)pvVar19 + 0x4e) = 0xffff;
      FUN_027ecb34((long)pvVar19 + 0x110);
      plVar20 = (long *)(**(code **)(*plVar20 + 0x40))(plVar20);
      if (plVar20 != (long *)0x0) {
        pvVar19 = (void *)plVar20[1];
        pvVar13 = (void *)plVar20[2];
        if (pvVar19 != (void *)0x0 && pvVar13 != (void *)0x0) {
          sVar12 = (**(code **)(*plVar20 + 0x28))(plVar20);
          memcpy(pvVar13,pvVar19,sVar12);
          (**(code **)(*plVar20 + 0x30))(plVar20);
          plVar20 = (long *)(**(code **)(*plVar20 + 0x30))(plVar20);
          if (plVar20 != (long *)0x0) {
            plVar7 = (long *)plVar20[1];
            while (plVar7 != plVar20) {
              plVar1 = (long *)plVar7[1];
              plVar17 = plVar1;
              if (*plVar7 != 0) {
                *(long **)(*plVar7 + 8) = plVar1;
                plVar17 = (long *)plVar7[1];
              }
              if (plVar17 != (long *)0x0) {
                *plVar17 = *plVar7;
              }
              *plVar7 = 0;
              plVar7[1] = 0;
              *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
              plVar7[-2] = plVar20[3];
              plVar20[3] = (long)(plVar7 + -2);
              plVar7 = plVar1;
            }
          }
        }
      }
    }
    puVar15 = *(undefined8 **)(param_1 + 0x78);
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[0x1e] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1b] = 0;
      puVar15[0x18] = 0;
      puVar15[0x19] = 0;
      puVar15[0x16] = 0;
      puVar15[0x17] = 0;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x10] = 0;
      puVar15[0x11] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[8] = 0;
      *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
      *(undefined8 *)((long)puVar15 + 0x46) = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
      memset(puVar15 + 0x20,0,0x200);
      uVar21 = 0;
      do {
        uVar5 = uVar21 << 2;
        uVar6 = uVar21 >> 0x1f;
        uVar18 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar18;
        *(undefined4 *)((long)(puVar15 + 0x20) + (-uVar6 & 0xfffffffc00000000 | uVar5)) = 0;
      } while (uVar18 != 0x80);
    }
  }
  if (*(int *)(param_1 + 0x11c) == 2) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar20 = *(long **)(*(long *)(param_1 + 0x10) + 0xe8);
      pvVar19 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20);
      memset(pvVar19,0,0x69560);
      *(undefined8 *)((long)pvVar19 + 0x40) = 0;
      *(undefined2 *)((long)pvVar19 + 0xe) = 0xffff;
      *(undefined8 *)((long)pvVar19 + 0x46) = 0;
      *(undefined2 *)((long)pvVar19 + 0x4e) = 0xffff;
      memset((void *)((long)pvVar19 + 0x110),0,0x69061);
      plVar20 = (long *)(**(code **)(*plVar20 + 0x40))(plVar20);
      if (plVar20 != (long *)0x0) {
        pvVar19 = (void *)plVar20[1];
        pvVar13 = (void *)plVar20[2];
        if (pvVar19 != (void *)0x0 && pvVar13 != (void *)0x0) {
          sVar12 = (**(code **)(*plVar20 + 0x28))(plVar20);
          memcpy(pvVar13,pvVar19,sVar12);
          (**(code **)(*plVar20 + 0x30))(plVar20);
          plVar20 = (long *)(**(code **)(*plVar20 + 0x30))(plVar20);
          if (plVar20 != (long *)0x0) {
            plVar7 = (long *)plVar20[1];
            while (plVar7 != plVar20) {
              plVar1 = (long *)plVar7[1];
              plVar17 = plVar1;
              if (*plVar7 != 0) {
                *(long **)(*plVar7 + 8) = plVar1;
                plVar17 = (long *)plVar7[1];
              }
              if (plVar17 != (long *)0x0) {
                *plVar17 = *plVar7;
              }
              *plVar7 = 0;
              plVar7[1] = 0;
              *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
              plVar7[-2] = plVar20[3];
              plVar20[3] = (long)(plVar7 + -2);
              plVar7 = plVar1;
            }
          }
        }
      }
    }
    puVar15 = *(undefined8 **)(param_1 + 0x80);
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[0x1e] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1b] = 0;
      puVar15[0x18] = 0;
      puVar15[0x19] = 0;
      puVar15[0x16] = 0;
      puVar15[0x17] = 0;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x10] = 0;
      puVar15[0x11] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[8] = 0;
      *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
      *(undefined8 *)((long)puVar15 + 0x46) = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
      memset(puVar15 + 0x20,0,0x200);
      uVar21 = 0;
      do {
        uVar5 = uVar21 << 2;
        uVar6 = uVar21 >> 0x1f;
        uVar18 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar18;
        *(undefined4 *)((long)(puVar15 + 0x20) + (-uVar6 & 0xfffffffc00000000 | uVar5)) = 0;
      } while (uVar18 != 0x80);
    }
  }
  if (((((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0) && (*(int *)(param_1 + 0x124) == 2)) &&
     (*(undefined4 *)(param_1 + 0x124) = 0, ((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0)) {
    plVar20 = *(long **)(*(long *)(param_1 + 0x10) + 0x188);
    pvVar13 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20);
    memset(pvVar13,0,0xb8a4e0);
    *(undefined8 *)((long)pvVar13 + 0x40) = 0;
    *(undefined2 *)((long)pvVar13 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar13 + 0x46) = 0;
    *(undefined2 *)((long)pvVar13 + 0x4e) = 0xffff;
    FUN_028f2ec0((long)pvVar13 + 0x110);
    pvVar19 = (void *)((long)pvVar13 + 0x78028);
    memset(pvVar19,0,0xb0c200);
    lVar14 = 500;
    do {
      FUN_028f4074(pvVar19);
      lVar14 = lVar14 + -1;
      pvVar19 = (void *)((long)pvVar19 + 0x5a80);
    } while (lVar14 != 0);
    FUN_028f7b30((long)pvVar13 + 0xb84228);
    *(undefined2 *)((long)pvVar13 + 0xb8a4d0) = 0;
    *(undefined4 *)((long)pvVar13 + 0xb8a4d2) = 0x101;
    *(undefined1 *)((long)pvVar13 + 0xb8a4d6) = 0;
    *(undefined4 *)((long)pvVar13 + 0xb8a4d8) = 0;
    plVar20 = (long *)(**(code **)(*plVar20 + 0x40))(plVar20);
    if (plVar20 != (long *)0x0) {
      pvVar19 = (void *)plVar20[1];
      pvVar13 = (void *)plVar20[2];
      if (pvVar19 != (void *)0x0 && pvVar13 != (void *)0x0) {
        sVar12 = (**(code **)(*plVar20 + 0x28))(plVar20);
        memcpy(pvVar13,pvVar19,sVar12);
        (**(code **)(*plVar20 + 0x30))(plVar20);
        plVar20 = (long *)(**(code **)(*plVar20 + 0x30))(plVar20);
        if (plVar20 != (long *)0x0) {
          plVar7 = (long *)plVar20[1];
          while (plVar7 != plVar20) {
            plVar1 = (long *)plVar7[1];
            plVar17 = plVar1;
            if (*plVar7 != 0) {
              *(long **)(*plVar7 + 8) = plVar1;
              plVar17 = (long *)plVar7[1];
            }
            if (plVar17 != (long *)0x0) {
              *plVar17 = *plVar7;
            }
            *plVar7 = 0;
            plVar7[1] = 0;
            *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
            plVar7[-2] = plVar20[3];
            plVar20[3] = (long)(plVar7 + -2);
            plVar7 = plVar1;
          }
        }
      }
    }
    puVar15 = *(undefined8 **)(param_1 + 0x88);
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[0x1e] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1b] = 0;
      puVar15[0x18] = 0;
      puVar15[0x19] = 0;
      puVar15[0x16] = 0;
      puVar15[0x17] = 0;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x10] = 0;
      puVar15[0x11] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[8] = 0;
      *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
      *(undefined8 *)((long)puVar15 + 0x46) = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
      memset(puVar15 + 0x20,0,0x200);
      uVar21 = 0;
      do {
        uVar5 = uVar21 << 2;
        uVar6 = uVar21 >> 0x1f;
        uVar18 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar18;
        *(undefined4 *)((long)(puVar15 + 0x20) + (-uVar6 & 0xfffffffc00000000 | uVar5)) = 0;
      } while (uVar18 != 0x80);
    }
  }
  return;
}

