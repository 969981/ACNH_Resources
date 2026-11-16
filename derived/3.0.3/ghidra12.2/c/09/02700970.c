
/* WARNING: Removing unreachable block (ram,0x02700aa4) */

void FUN_02700970(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  void *pvVar14;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x188), plVar5 != (long *)0x0)) {
    lVar6 = (**(code **)(*plVar5 + 0x48))();
    uVar9 = *(uint *)(param_1 + 0x128);
    if (0 < (int)uVar9) {
      plVar5 = *(long **)(param_1 + 0x130);
      sVar13 = (long)(int)uVar9 * 8;
      uVar11 = 0;
      do {
        sVar13 = sVar13 - 8;
        if (*plVar5 == lVar6) {
          iVar10 = (int)uVar11;
          if ((-1 < iVar10) && (iVar10 < (int)uVar9)) {
            if (iVar10 + 1 < (int)uVar9) {
              memmove(plVar5,plVar5 + 1,sVar13);
              uVar9 = *(uint *)(param_1 + 0x128);
            }
            *(uint *)(param_1 + 0x128) = uVar9 - 1;
          }
          break;
        }
        uVar11 = uVar11 + 1;
        plVar5 = plVar5 + 1;
      } while (uVar9 != uVar11);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (*(long **)(lVar6 + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x188) + 8))();
      lVar6 = *(long *)(param_1 + 0x10);
    }
    *(undefined8 *)(lVar6 + 0x188) = 0;
  }
  pvVar14 = *(void **)(param_1 + 0x88);
  if (pvVar14 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar14);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar14);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar14);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x188);
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5);
    memset(pvVar7,0,0xb8a4e0);
    *(undefined8 *)((long)pvVar7 + 0x40) = 0;
    *(undefined2 *)((long)pvVar7 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar7 + 0x46) = 0;
    *(undefined2 *)((long)pvVar7 + 0x4e) = 0xffff;
    FUN_028f2ec0((long)pvVar7 + 0x110);
    pvVar14 = (void *)((long)pvVar7 + 0x78028);
    memset(pvVar14,0,0xb0c200);
    lVar6 = 500;
    do {
      FUN_028f4074(pvVar14);
      lVar6 = lVar6 + -1;
      pvVar14 = (void *)((long)pvVar14 + 0x5a80);
    } while (lVar6 != 0);
    FUN_028f7b30((long)pvVar7 + 0xb84228);
    *(undefined2 *)((long)pvVar7 + 0xb8a4d0) = 0;
    *(undefined4 *)((long)pvVar7 + 0xb8a4d2) = 0x101;
    *(undefined1 *)((long)pvVar7 + 0xb8a4d6) = 0;
    *(undefined4 *)((long)pvVar7 + 0xb8a4d8) = 0;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
    if (plVar5 != (long *)0x0) {
      pvVar14 = (void *)plVar5[1];
      pvVar7 = (void *)plVar5[2];
      if (pvVar14 != (void *)0x0 && pvVar7 != (void *)0x0) {
        sVar13 = (**(code **)(*plVar5 + 0x28))(plVar5);
        memcpy(pvVar7,pvVar14,sVar13);
        (**(code **)(*plVar5 + 0x30))(plVar5);
        plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5);
        if (plVar5 != (long *)0x0) {
          plVar4 = (long *)plVar5[1];
          while (plVar4 != plVar5) {
            plVar1 = (long *)plVar4[1];
            plVar12 = plVar1;
            if (*plVar4 != 0) {
              *(long **)(*plVar4 + 8) = plVar1;
              plVar12 = (long *)plVar4[1];
            }
            if (plVar12 != (long *)0x0) {
              *plVar12 = *plVar4;
            }
            *plVar4 = 0;
            plVar4[1] = 0;
            *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
            plVar4[-2] = plVar5[3];
            plVar5[3] = (long)(plVar4 + -2);
            plVar4 = plVar1;
          }
        }
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 0x88);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      *(undefined2 *)((long)puVar8 + 0x4e) = 0xffff;
      *(undefined8 *)((long)puVar8 + 0x46) = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined2 *)((long)puVar8 + 0xe) = 0xffff;
      memset(puVar8 + 0x20,0,0x200);
      uVar11 = 0;
      do {
        uVar2 = uVar11 << 2;
        uVar3 = uVar11 >> 0x1f;
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar9;
        *(undefined4 *)((long)(puVar8 + 0x20) + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
      } while (uVar9 != 0x80);
    }
  }
  return;
}

