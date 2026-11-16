
/* WARNING: Removing unreachable block (ram,0x026f27f4) */
/* WARNING: Removing unreachable block (ram,0x026f2868) */

void FUN_026f27c0(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined2 uVar6;
  long lVar7;
  void *pvVar8;
  size_t __n;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  void *pvVar14;
  
  if (((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar7 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x18))();
    if ((param_2 < 8) &&
       (lVar7 = lVar7 + (ulong)param_2 * 0x48,
       *(long *)(lVar7 + 0x1e34c0) != 0 || *(long *)(lVar7 + 0x1e34c8) != 0)) {
      *(uint *)(param_1 + 0x120) = param_2;
      *(undefined4 *)(param_1 + 0x124) = 1;
      if (((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0) {
        plVar13 = *(long **)(*(long *)(param_1 + 0x10) + 0x188);
        pvVar8 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13);
        memset(pvVar8,0,0xb8a4e0);
        *(undefined8 *)((long)pvVar8 + 0x40) = 0;
        *(undefined2 *)((long)pvVar8 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar8 + 0x46) = 0;
        *(undefined2 *)((long)pvVar8 + 0x4e) = 0xffff;
        FUN_028f2ec0((long)pvVar8 + 0x110);
        pvVar14 = (void *)((long)pvVar8 + 0x78028);
        memset(pvVar14,0,0xb0c200);
        lVar7 = 500;
        do {
          FUN_028f4074(pvVar14);
          lVar7 = lVar7 + -1;
          pvVar14 = (void *)((long)pvVar14 + 0x5a80);
        } while (lVar7 != 0);
        FUN_028f7b30((long)pvVar8 + 0xb84228);
        *(undefined2 *)((long)pvVar8 + 0xb8a4d0) = 0;
        *(undefined4 *)((long)pvVar8 + 0xb8a4d2) = 0x101;
        *(undefined1 *)((long)pvVar8 + 0xb8a4d6) = 0;
        *(undefined4 *)((long)pvVar8 + 0xb8a4d8) = 0;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
        if (plVar13 != (long *)0x0) {
          pvVar14 = (void *)plVar13[1];
          pvVar8 = (void *)plVar13[2];
          if (pvVar14 != (void *)0x0 && pvVar8 != (void *)0x0) {
            __n = (**(code **)(*plVar13 + 0x28))(plVar13);
            memcpy(pvVar8,pvVar14,__n);
            (**(code **)(*plVar13 + 0x30))(plVar13);
            plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13);
            if (plVar13 != (long *)0x0) {
              plVar5 = (long *)plVar13[1];
              while (plVar5 != plVar13) {
                plVar2 = (long *)plVar5[1];
                plVar12 = plVar2;
                if (*plVar5 != 0) {
                  *(long **)(*plVar5 + 8) = plVar2;
                  plVar12 = (long *)plVar5[1];
                }
                if (plVar12 != (long *)0x0) {
                  *plVar12 = *plVar5;
                }
                *plVar5 = 0;
                plVar5[1] = 0;
                *(int *)(plVar13 + 2) = (int)plVar13[2] + -1;
                plVar5[-2] = plVar13[3];
                plVar13[3] = (long)(plVar5 + -2);
                plVar5 = plVar2;
              }
            }
          }
        }
        puVar10 = *(undefined8 **)(param_1 + 0x88);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[0x1e] = 0;
          puVar10[0x1f] = 0;
          puVar10[0x1c] = 0;
          puVar10[0x1d] = 0;
          puVar10[0x1a] = 0;
          puVar10[0x1b] = 0;
          puVar10[0x18] = 0;
          puVar10[0x19] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          *(undefined2 *)((long)puVar10 + 0x4e) = 0xffff;
          *(undefined8 *)((long)puVar10 + 0x46) = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined2 *)((long)puVar10 + 0xe) = 0xffff;
          memset(puVar10 + 0x20,0,0x200);
          uVar11 = 0;
          do {
            uVar3 = uVar11 << 2;
            uVar4 = uVar11 >> 0x1f;
            uVar1 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar1;
            *(undefined4 *)((long)(puVar10 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
          } while (uVar1 != 0x80);
        }
      }
      if ((param_3 & 1) != 0) {
        lVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x188) + 0x10))();
        if (lVar7 != 0) {
          puVar9 = (undefined4 *)
                   (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x188) + 0x10))();
          *puVar9 = 0xa0002;
          puVar9[1] = 0xa0028;
          puVar9[2] = 2;
          uVar6 = DAT_04c47c68;
          *(undefined2 *)(puVar9 + 3) = 2;
          puVar9[0x10] = 0xa0002;
          puVar9[0x11] = 0xa0028;
          puVar9[0x12] = 2;
          *(undefined2 *)(puVar9 + 0x13) = 2;
          *(undefined2 *)((long)puVar9 + 0xe) = uVar6;
          *(undefined2 *)((long)puVar9 + 0x4e) = uVar6;
        }
        lVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x188) + 0x20))();
        if (lVar7 != 0) {
          puVar9 = (undefined4 *)
                   (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x188) + 0x20))();
          *puVar9 = 0xa0002;
          puVar9[1] = 0xa0028;
          puVar9[2] = 2;
          uVar6 = DAT_04c47c68;
          *(undefined2 *)(puVar9 + 3) = 2;
          puVar9[0x10] = 0xa0002;
          puVar9[0x11] = 0xa0028;
          puVar9[0x12] = 2;
          *(undefined2 *)(puVar9 + 0x13) = 2;
          *(undefined2 *)((long)puVar9 + 0xe) = uVar6;
          *(undefined2 *)((long)puVar9 + 0x4e) = uVar6;
        }
        puVar9 = *(undefined4 **)(param_1 + 0x88);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0xa0002;
          puVar9[1] = 0xa0028;
          puVar9[2] = 2;
          uVar6 = DAT_04c47c68;
          *(undefined2 *)(puVar9 + 3) = 2;
          puVar9[0x10] = 0xa0002;
          puVar9[0x11] = 0xa0028;
          puVar9[0x12] = 2;
          *(undefined2 *)(puVar9 + 0x13) = 2;
          *(undefined2 *)((long)puVar9 + 0xe) = uVar6;
          *(undefined2 *)((long)puVar9 + 0x4e) = uVar6;
        }
      }
    }
  }
  return;
}

