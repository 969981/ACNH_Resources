
undefined8 FUN_026f0450(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  void *pvVar7;
  size_t sVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  void *pvVar15;
  undefined4 *puVar16;
  
  if ((((((*(int *)(param_1 + 0x94) != 2) && (*(int *)(param_1 + 0x9c) != 2)) &&
        (*(int *)(param_1 + 0xa4) != 2)) &&
       ((*(int *)(param_1 + 0xac) != 2 && (*(int *)(param_1 + 0xb4) != 2)))) &&
      (*(int *)(param_1 + 0xbc) != 2)) &&
     ((*(int *)(param_1 + 0xc4) != 2 && (*(int *)(param_1 + 0xcc) != 2)))) {
    if (*(int *)(param_1 + 0x94) == 0) {
      lVar10 = 0;
    }
    else if (*(int *)(param_1 + 0x9c) == 0) {
      lVar10 = 1;
    }
    else if (*(int *)(param_1 + 0xa4) == 0) {
      lVar10 = 2;
    }
    else if (*(int *)(param_1 + 0xac) == 0) {
      lVar10 = 3;
    }
    else if (*(int *)(param_1 + 0xb4) == 0) {
      lVar10 = 4;
    }
    else if (*(int *)(param_1 + 0xbc) == 0) {
      lVar10 = 5;
    }
    else if (*(int *)(param_1 + 0xc4) == 0) {
      lVar10 = 6;
    }
    else {
      if (*(int *)(param_1 + 0xcc) != 0) goto LAB_026f0550;
      lVar10 = 7;
    }
    *(undefined4 *)(param_1 + lVar10 * 8 + 0x94) = 2;
  }
LAB_026f0550:
  if ((((*(int *)(param_1 + 0xd4) != 2) && (*(int *)(param_1 + 0xdc) != 2)) &&
      (*(int *)(param_1 + 0xe4) != 2)) &&
     (((*(int *)(param_1 + 0xec) != 2 && (*(int *)(param_1 + 0xf4) != 2)) &&
      ((*(int *)(param_1 + 0xfc) != 2 &&
       ((*(int *)(param_1 + 0x104) != 2 && (*(int *)(param_1 + 0x10c) != 2)))))))) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      lVar10 = 0;
    }
    else if (*(int *)(param_1 + 0xdc) == 0) {
      lVar10 = 1;
    }
    else if (*(int *)(param_1 + 0xe4) == 0) {
      lVar10 = 2;
    }
    else if (*(int *)(param_1 + 0xec) == 0) {
      lVar10 = 3;
    }
    else if (*(int *)(param_1 + 0xf4) == 0) {
      lVar10 = 4;
    }
    else if (*(int *)(param_1 + 0xfc) == 0) {
      lVar10 = 5;
    }
    else if (*(int *)(param_1 + 0x104) == 0) {
      lVar10 = 6;
    }
    else {
      if (*(int *)(param_1 + 0x10c) != 0) goto LAB_026f0640;
      lVar10 = 7;
    }
    *(undefined4 *)(param_1 + lVar10 * 8 + 0xd4) = 2;
    FUN_026f3190(param_1);
  }
LAB_026f0640:
  *(undefined4 *)(param_1 + 0x114) = 2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(*(long *)(param_1 + 0x10) + 0xe0);
    pvVar7 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14);
    memset(pvVar7,0,0x2f650);
    *(undefined8 *)((long)pvVar7 + 0x40) = 0;
    *(undefined2 *)((long)pvVar7 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar7 + 0x46) = 0;
    *(undefined2 *)((long)pvVar7 + 0x4e) = 0xffff;
    FUN_027ecb34((long)pvVar7 + 0x110);
    plVar14 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
    if (((plVar14 != (long *)0x0) && (pvVar7 = (void *)plVar14[1], pvVar7 != (void *)0x0)) &&
       (pvVar15 = (void *)plVar14[2], pvVar15 != (void *)0x0)) {
      sVar8 = (**(code **)(*plVar14 + 0x28))(plVar14);
      memcpy(pvVar15,pvVar7,sVar8);
      (**(code **)(*plVar14 + 0x30))(plVar14);
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14);
      if (plVar14 != (long *)0x0) {
        plVar5 = (long *)plVar14[1];
        while (plVar5 != plVar14) {
          plVar1 = (long *)plVar5[1];
          plVar13 = plVar1;
          if (*plVar5 != 0) {
            *(long **)(*plVar5 + 8) = plVar1;
            plVar13 = (long *)plVar5[1];
          }
          if (plVar13 != (long *)0x0) {
            *plVar13 = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          *(int *)(plVar14 + 2) = (int)plVar14[2] + -1;
          plVar5[-2] = plVar14[3];
          plVar14[3] = (long)(plVar5 + -2);
          plVar5 = plVar1;
        }
      }
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x78);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0x1e] = 0;
    puVar11[0x1f] = 0;
    puVar11[0x1c] = 0;
    puVar11[0x1d] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    *(undefined2 *)((long)puVar11 + 0x4e) = 0xffff;
    *(undefined8 *)((long)puVar11 + 0x46) = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined2 *)((long)puVar11 + 0xe) = 0xffff;
    memset(puVar11 + 0x20,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar11 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
  }
  *(undefined4 *)(param_1 + 0x11c) = 2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(*(long *)(param_1 + 0x10) + 0xe8);
    pvVar7 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14);
    memset(pvVar7,0,0x69560);
    *(undefined8 *)((long)pvVar7 + 0x40) = 0;
    *(undefined2 *)((long)pvVar7 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar7 + 0x46) = 0;
    *(undefined2 *)((long)pvVar7 + 0x4e) = 0xffff;
    memset((void *)((long)pvVar7 + 0x110),0,0x69061);
    plVar14 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
    if (plVar14 != (long *)0x0) {
      pvVar7 = (void *)plVar14[1];
      pvVar15 = (void *)plVar14[2];
      if (pvVar7 != (void *)0x0 && pvVar15 != (void *)0x0) {
        sVar8 = (**(code **)(*plVar14 + 0x28))(plVar14);
        memcpy(pvVar15,pvVar7,sVar8);
        (**(code **)(*plVar14 + 0x30))(plVar14);
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14);
        if (plVar14 != (long *)0x0) {
          plVar5 = (long *)plVar14[1];
          while (plVar5 != plVar14) {
            plVar1 = (long *)plVar5[1];
            plVar13 = plVar1;
            if (*plVar5 != 0) {
              *(long **)(*plVar5 + 8) = plVar1;
              plVar13 = (long *)plVar5[1];
            }
            if (plVar13 != (long *)0x0) {
              *plVar13 = *plVar5;
            }
            *plVar5 = 0;
            plVar5[1] = 0;
            *(int *)(plVar14 + 2) = (int)plVar14[2] + -1;
            plVar5[-2] = plVar14[3];
            plVar14[3] = (long)(plVar5 + -2);
            plVar5 = plVar1;
          }
        }
      }
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x80);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0x1e] = 0;
    puVar11[0x1f] = 0;
    puVar11[0x1c] = 0;
    puVar11[0x1d] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    *(undefined2 *)((long)puVar11 + 0x4e) = 0xffff;
    *(undefined8 *)((long)puVar11 + 0x46) = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined2 *)((long)puVar11 + 0xe) = 0xffff;
    memset(puVar11 + 0x20,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar11 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
  }
  FUN_026f1360(param_1);
  puVar6 = PTR_DAT_04bb21a8;
  if (*(int *)(param_1 + 0x94) == 2) {
    uVar9 = 0;
LAB_026f0a3c:
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (*(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar9 * 8 + 0x60) != 0)) &&
       ((uVar9 < *(uint *)(param_1 + 0x58) && (*(long *)(param_1 + 0x60) != 0)))) {
      puVar16 = (undefined4 *)(*(long *)(param_1 + 0x60) + (ulong)uVar9 * 0x300);
      memset(puVar16 + 4,0,0x2f0);
      *(undefined2 *)((long)puVar16 + 0xe) = 0xffff;
      puVar16[0x13] = 0xffff0000;
      memset(puVar16 + 0x40,0,0x200);
      uVar12 = 0;
      do {
        uVar3 = uVar12 << 2;
        uVar4 = uVar12 >> 0x1f;
        uVar9 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar9;
        *(undefined4 *)((long)(puVar16 + 0x40) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
      } while (uVar9 != 0x80);
      *puVar16 = 0xa0002;
      puVar16[1] = 0xa0028;
      puVar16[2] = 2;
      *(undefined2 *)(puVar16 + 3) = 2;
      uVar2 = *(undefined2 *)puVar6;
      puVar16[0x10] = 0xa0002;
      puVar16[0x11] = 0xa0028;
      puVar16[0x12] = 2;
      *(undefined2 *)(puVar16 + 0x13) = 2;
      *(undefined2 *)((long)puVar16 + 0xe) = uVar2;
      *(undefined2 *)((long)puVar16 + 0x4e) = uVar2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x9c) == 2) {
      uVar9 = 1;
      goto LAB_026f0a3c;
    }
    uVar9 = *(uint *)(param_1 + 0xa4);
    if (uVar9 == 2) goto LAB_026f0a3c;
    if (*(int *)(param_1 + 0xac) == 2) {
      uVar9 = 3;
      goto LAB_026f0a3c;
    }
    if (*(int *)(param_1 + 0xb4) == 2) {
      uVar9 = 4;
      goto LAB_026f0a3c;
    }
    if (*(int *)(param_1 + 0xbc) == 2) {
      uVar9 = 5;
      goto LAB_026f0a3c;
    }
    if (*(int *)(param_1 + 0xc4) == 2) {
      uVar9 = 6;
      goto LAB_026f0a3c;
    }
    if (*(int *)(param_1 + 0xcc) == 2) {
      uVar9 = 7;
      goto LAB_026f0a3c;
    }
  }
  if (*(int *)(param_1 + 0xd4) == 2) {
    uVar9 = 0;
  }
  else if (*(int *)(param_1 + 0xdc) == 2) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xe4);
    if (uVar9 != 2) {
      if (*(int *)(param_1 + 0xec) == 2) {
        uVar9 = 3;
      }
      else if (*(int *)(param_1 + 0xf4) == 2) {
        uVar9 = 4;
      }
      else if (*(int *)(param_1 + 0xfc) == 2) {
        uVar9 = 5;
      }
      else if (*(int *)(param_1 + 0x104) == 2) {
        uVar9 = 6;
      }
      else {
        if (*(int *)(param_1 + 0x10c) != 2) goto LAB_026f0c30;
        uVar9 = 7;
      }
    }
  }
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar9 * 8 + 0xa0) != 0)) &&
     ((uVar9 < *(uint *)(param_1 + 0x68) && (*(long *)(param_1 + 0x70) != 0)))) {
    puVar16 = (undefined4 *)(*(long *)(param_1 + 0x70) + (ulong)uVar9 * 0x300);
    memset(puVar16 + 4,0,0x2f0);
    *(undefined2 *)((long)puVar16 + 0xe) = 0xffff;
    puVar16[0x13] = 0xffff0000;
    memset(puVar16 + 0x40,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar16 + 0x40) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
    *puVar16 = 0xa0002;
    puVar16[1] = 0xa0028;
    puVar16[2] = 2;
    *(undefined2 *)(puVar16 + 3) = 2;
    uVar2 = *(undefined2 *)puVar6;
    puVar16[0x10] = 0xa0002;
    puVar16[0x11] = 0xa0028;
    puVar16[0x12] = 2;
    *(undefined2 *)(puVar16 + 0x13) = 2;
    *(undefined2 *)((long)puVar16 + 0xe) = uVar2;
    *(undefined2 *)((long)puVar16 + 0x4e) = uVar2;
  }
LAB_026f0c30:
  puVar16 = *(undefined4 **)(param_1 + 0x78);
  if (puVar16 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar16 + 0x3c) = 0;
    *(undefined8 *)(puVar16 + 0x3e) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0;
    *(undefined8 *)(puVar16 + 0x3a) = 0;
    *(undefined8 *)(puVar16 + 0x34) = 0;
    *(undefined8 *)(puVar16 + 0x36) = 0;
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x32) = 0;
    *(undefined8 *)(puVar16 + 0x2c) = 0;
    *(undefined8 *)(puVar16 + 0x2e) = 0;
    *(undefined8 *)(puVar16 + 0x28) = 0;
    *(undefined8 *)(puVar16 + 0x2a) = 0;
    *(undefined8 *)(puVar16 + 0x24) = 0;
    *(undefined8 *)(puVar16 + 0x26) = 0;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    *(undefined8 *)(puVar16 + 0x22) = 0;
    *(undefined8 *)(puVar16 + 0x1c) = 0;
    *(undefined8 *)(puVar16 + 0x1e) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x1a) = 0;
    *(undefined8 *)(puVar16 + 0x14) = 0;
    *(undefined8 *)(puVar16 + 0x16) = 0;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x12) = 0;
    *(undefined8 *)(puVar16 + 0xc) = 0;
    *(undefined8 *)(puVar16 + 0xe) = 0;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 10) = 0;
    *(undefined8 *)(puVar16 + 4) = 0;
    *(undefined8 *)(puVar16 + 6) = 0;
    memset(puVar16 + 0x40,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar16 + 0x40) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
    *puVar16 = 0xa0002;
    puVar16[1] = 0xa0028;
    puVar16[2] = 2;
    uVar2 = *(undefined2 *)puVar6;
    *(undefined2 *)(puVar16 + 3) = 2;
    puVar16[0x10] = 0xa0002;
    puVar16[0x11] = 0xa0028;
    puVar16[0x12] = 2;
    *(undefined2 *)(puVar16 + 0x13) = 2;
    *(undefined2 *)((long)puVar16 + 0xe) = uVar2;
    *(undefined2 *)((long)puVar16 + 0x4e) = uVar2;
  }
  puVar16 = *(undefined4 **)(param_1 + 0x80);
  if (puVar16 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar16 + 0x3c) = 0;
    *(undefined8 *)(puVar16 + 0x3e) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0;
    *(undefined8 *)(puVar16 + 0x3a) = 0;
    *(undefined8 *)(puVar16 + 0x34) = 0;
    *(undefined8 *)(puVar16 + 0x36) = 0;
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x32) = 0;
    *(undefined8 *)(puVar16 + 0x2c) = 0;
    *(undefined8 *)(puVar16 + 0x2e) = 0;
    *(undefined8 *)(puVar16 + 0x28) = 0;
    *(undefined8 *)(puVar16 + 0x2a) = 0;
    *(undefined8 *)(puVar16 + 0x24) = 0;
    *(undefined8 *)(puVar16 + 0x26) = 0;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    *(undefined8 *)(puVar16 + 0x22) = 0;
    *(undefined8 *)(puVar16 + 0x1c) = 0;
    *(undefined8 *)(puVar16 + 0x1e) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x1a) = 0;
    *(undefined8 *)(puVar16 + 0x14) = 0;
    *(undefined8 *)(puVar16 + 0x16) = 0;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x12) = 0;
    *(undefined8 *)(puVar16 + 0xc) = 0;
    *(undefined8 *)(puVar16 + 0xe) = 0;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 10) = 0;
    *(undefined8 *)(puVar16 + 4) = 0;
    *(undefined8 *)(puVar16 + 6) = 0;
    memset(puVar16 + 0x40,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar16 + 0x40) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
    *puVar16 = 0xa0002;
    puVar16[1] = 0xa0028;
    puVar16[2] = 2;
    uVar2 = *(undefined2 *)puVar6;
    *(undefined2 *)(puVar16 + 3) = 2;
    puVar16[0x10] = 0xa0002;
    puVar16[0x11] = 0xa0028;
    puVar16[0x12] = 2;
    *(undefined2 *)(puVar16 + 0x13) = 2;
    *(undefined2 *)((long)puVar16 + 0xe) = uVar2;
    *(undefined2 *)((long)puVar16 + 0x4e) = uVar2;
  }
  puVar16 = *(undefined4 **)(param_1 + 0x4c0);
  if (puVar16 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar16 + 0x3c) = 0;
    *(undefined8 *)(puVar16 + 0x3e) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0;
    *(undefined8 *)(puVar16 + 0x3a) = 0;
    *(undefined8 *)(puVar16 + 0x34) = 0;
    *(undefined8 *)(puVar16 + 0x36) = 0;
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x32) = 0;
    *(undefined8 *)(puVar16 + 0x2c) = 0;
    *(undefined8 *)(puVar16 + 0x2e) = 0;
    *(undefined8 *)(puVar16 + 0x28) = 0;
    *(undefined8 *)(puVar16 + 0x2a) = 0;
    *(undefined8 *)(puVar16 + 0x24) = 0;
    *(undefined8 *)(puVar16 + 0x26) = 0;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    *(undefined8 *)(puVar16 + 0x22) = 0;
    *(undefined8 *)(puVar16 + 0x1c) = 0;
    *(undefined8 *)(puVar16 + 0x1e) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x1a) = 0;
    *(undefined8 *)(puVar16 + 0x14) = 0;
    *(undefined8 *)(puVar16 + 0x16) = 0;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x12) = 0;
    *(undefined8 *)(puVar16 + 0xc) = 0;
    *(undefined8 *)(puVar16 + 0xe) = 0;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 10) = 0;
    *(undefined8 *)(puVar16 + 4) = 0;
    *(undefined8 *)(puVar16 + 6) = 0;
    memset(puVar16 + 0x40,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar16 + 0x40) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
    *puVar16 = 0xa0002;
    puVar16[1] = 0xa0028;
    puVar16[2] = 2;
    uVar2 = *(undefined2 *)puVar6;
    *(undefined2 *)(puVar16 + 3) = 2;
    puVar16[0x10] = 0xa0002;
    puVar16[0x11] = 0xa0028;
    puVar16[0x12] = 2;
    *(undefined2 *)(puVar16 + 0x13) = 2;
    *(undefined2 *)((long)puVar16 + 0xe) = uVar2;
    *(undefined2 *)((long)puVar16 + 0x4e) = uVar2;
  }
  puVar16 = *(undefined4 **)(param_1 + 0x88);
  if (puVar16 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar16 + 0x3c) = 0;
    *(undefined8 *)(puVar16 + 0x3e) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0;
    *(undefined8 *)(puVar16 + 0x3a) = 0;
    *(undefined8 *)(puVar16 + 0x34) = 0;
    *(undefined8 *)(puVar16 + 0x36) = 0;
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x32) = 0;
    *(undefined8 *)(puVar16 + 0x2c) = 0;
    *(undefined8 *)(puVar16 + 0x2e) = 0;
    *(undefined8 *)(puVar16 + 0x28) = 0;
    *(undefined8 *)(puVar16 + 0x2a) = 0;
    *(undefined8 *)(puVar16 + 0x24) = 0;
    *(undefined8 *)(puVar16 + 0x26) = 0;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    *(undefined8 *)(puVar16 + 0x22) = 0;
    *(undefined8 *)(puVar16 + 0x1c) = 0;
    *(undefined8 *)(puVar16 + 0x1e) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x1a) = 0;
    *(undefined8 *)(puVar16 + 0x14) = 0;
    *(undefined8 *)(puVar16 + 0x16) = 0;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x12) = 0;
    *(undefined8 *)(puVar16 + 0xc) = 0;
    *(undefined8 *)(puVar16 + 0xe) = 0;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 10) = 0;
    *(undefined8 *)(puVar16 + 4) = 0;
    *(undefined8 *)(puVar16 + 6) = 0;
    memset(puVar16 + 0x40,0,0x200);
    uVar12 = 0;
    do {
      uVar3 = uVar12 << 2;
      uVar4 = uVar12 >> 0x1f;
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar9;
      *(undefined4 *)((long)(puVar16 + 0x40) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar9 != 0x80);
    *puVar16 = 0xa0002;
    puVar16[1] = 0xa0028;
    puVar16[2] = 2;
    uVar2 = *(undefined2 *)puVar6;
    *(undefined2 *)(puVar16 + 3) = 2;
    puVar16[0x10] = 0xa0002;
    puVar16[0x11] = 0xa0028;
    puVar16[0x12] = 2;
    *(undefined2 *)(puVar16 + 0x13) = 2;
    *(undefined2 *)((long)puVar16 + 0xe) = uVar2;
    *(undefined2 *)((long)puVar16 + 0x4e) = uVar2;
  }
  return 1;
}

