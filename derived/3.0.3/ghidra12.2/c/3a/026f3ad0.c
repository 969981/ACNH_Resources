
void FUN_026f3ad0(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  void *__dest;
  long *plVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  void *pvVar8;
  size_t __n;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  if (param_2 < 8) {
    *(uint *)(param_1 + 0x110) = param_2;
    *(undefined4 *)(param_1 + 0x114) = 1;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar15 = *(long **)(*(long *)(param_1 + 0x10) + 0xe0);
      pvVar8 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15);
      memset(pvVar8,0,0x2f650);
      *(undefined8 *)((long)pvVar8 + 0x40) = 0;
      *(undefined2 *)((long)pvVar8 + 0xe) = 0xffff;
      *(undefined8 *)((long)pvVar8 + 0x46) = 0;
      *(undefined2 *)((long)pvVar8 + 0x4e) = 0xffff;
      FUN_027ecb34((long)pvVar8 + 0x110);
      plVar15 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
      if (plVar15 != (long *)0x0) {
        pvVar8 = (void *)plVar15[1];
        __dest = (void *)plVar15[2];
        if (pvVar8 != (void *)0x0 && __dest != (void *)0x0) {
          __n = (**(code **)(*plVar15 + 0x28))(plVar15);
          memcpy(__dest,pvVar8,__n);
          (**(code **)(*plVar15 + 0x30))(plVar15);
          plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15);
          if (plVar15 != (long *)0x0) {
            plVar6 = (long *)plVar15[1];
            while (plVar6 != plVar15) {
              plVar2 = (long *)plVar6[1];
              plVar14 = plVar2;
              if (*plVar6 != 0) {
                *(long **)(*plVar6 + 8) = plVar2;
                plVar14 = (long *)plVar6[1];
              }
              if (plVar14 != (long *)0x0) {
                *plVar14 = *plVar6;
              }
              *plVar6 = 0;
              plVar6[1] = 0;
              *(int *)(plVar15 + 2) = (int)plVar15[2] + -1;
              plVar6[-2] = plVar15[3];
              plVar15[3] = (long)(plVar6 + -2);
              plVar6 = plVar2;
            }
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
        uVar4 = uVar12 << 2;
        uVar5 = uVar12 >> 0x1f;
        uVar1 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar1;
        *(undefined4 *)((long)(puVar11 + 0x20) + (-uVar5 & 0xfffffffc00000000 | uVar4)) = 0;
      } while (uVar1 != 0x80);
    }
    if ((param_3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar15 = *(long **)(*(long *)(param_1 + 0x10) + 0xe0), plVar15 != (long *)0x0)) {
        lVar9 = (**(code **)(*plVar15 + 0x10))();
        lVar13 = *(long *)(param_1 + 0x10);
        if (lVar9 != 0) {
          puVar10 = (undefined4 *)(**(code **)(**(long **)(lVar13 + 0xe0) + 0x10))();
          puVar10[2] = 2;
          *puVar10 = 0xa0002;
          puVar10[1] = 0xa0028;
          *(undefined2 *)(puVar10 + 3) = 2;
          puVar10[0x10] = 0xa0002;
          puVar10[0x11] = 0xa0028;
          uVar3 = DAT_04c47c68;
          puVar10[0x12] = 2;
          *(undefined2 *)(puVar10 + 0x13) = 2;
          *(undefined2 *)((long)puVar10 + 0xe) = uVar3;
          *(undefined2 *)((long)puVar10 + 0x4e) = uVar3;
          lVar13 = *(long *)(param_1 + 0x10);
        }
        if (((lVar13 != 0) && (*(long **)(lVar13 + 0xe0) != (long *)0x0)) &&
           (lVar9 = (**(code **)(**(long **)(lVar13 + 0xe0) + 0x20))(), lVar9 != 0)) {
          puVar10 = (undefined4 *)
                    (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0xe0) + 0x20))();
          puVar10[2] = 2;
          puVar7 = PTR_DAT_04bb21a8;
          *puVar10 = 0xa0002;
          puVar10[1] = 0xa0028;
          *(undefined2 *)(puVar10 + 3) = 2;
          puVar10[0x10] = 0xa0002;
          puVar10[0x11] = 0xa0028;
          uVar3 = *(undefined2 *)puVar7;
          puVar10[0x12] = 2;
          *(undefined2 *)(puVar10 + 0x13) = 2;
          *(undefined2 *)((long)puVar10 + 0xe) = uVar3;
          *(undefined2 *)((long)puVar10 + 0x4e) = uVar3;
        }
      }
      puVar10 = *(undefined4 **)(param_1 + 0x78);
      if (puVar10 != (undefined4 *)0x0) {
        puVar10[2] = 2;
        puVar7 = PTR_DAT_04bb21a8;
        *puVar10 = 0xa0002;
        puVar10[1] = 0xa0028;
        *(undefined2 *)(puVar10 + 3) = 2;
        puVar10[0x10] = 0xa0002;
        puVar10[0x11] = 0xa0028;
        uVar3 = *(undefined2 *)puVar7;
        puVar10[0x12] = 2;
        *(undefined2 *)(puVar10 + 0x13) = 2;
        *(undefined2 *)((long)puVar10 + 0xe) = uVar3;
        *(undefined2 *)((long)puVar10 + 0x4e) = uVar3;
      }
    }
  }
  return;
}

