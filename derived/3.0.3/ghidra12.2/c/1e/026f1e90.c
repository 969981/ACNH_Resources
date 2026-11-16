
void FUN_026f1e90(long param_1)

{
  uint uVar1;
  void *__dest;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  size_t __n;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar10 = *(long **)(*(long *)(param_1 + 0x10) + 0xe0);
    pvVar6 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10);
    memset(pvVar6,0,0x2f650);
    *(undefined8 *)((long)pvVar6 + 0x40) = 0;
    *(undefined2 *)((long)pvVar6 + 0xe) = 0xffff;
    *(undefined8 *)((long)pvVar6 + 0x46) = 0;
    *(undefined2 *)((long)pvVar6 + 0x4e) = 0xffff;
    FUN_027ecb34((long)pvVar6 + 0x110);
    plVar10 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
    if (plVar10 != (long *)0x0) {
      pvVar6 = (void *)plVar10[1];
      __dest = (void *)plVar10[2];
      if (pvVar6 != (void *)0x0 && __dest != (void *)0x0) {
        __n = (**(code **)(*plVar10 + 0x28))(plVar10);
        memcpy(__dest,pvVar6,__n);
        (**(code **)(*plVar10 + 0x30))(plVar10);
        plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10);
        if (plVar10 != (long *)0x0) {
          plVar5 = (long *)plVar10[1];
          while (plVar5 != plVar10) {
            plVar2 = (long *)plVar5[1];
            plVar9 = plVar2;
            if (*plVar5 != 0) {
              *(long **)(*plVar5 + 8) = plVar2;
              plVar9 = (long *)plVar5[1];
            }
            if (plVar9 != (long *)0x0) {
              *plVar9 = *plVar5;
            }
            *plVar5 = 0;
            plVar5[1] = 0;
            *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
            plVar5[-2] = plVar10[3];
            plVar10[3] = (long)(plVar5 + -2);
            plVar5 = plVar2;
          }
        }
      }
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x78);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x1e] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    *(undefined2 *)((long)puVar7 + 0x4e) = 0xffff;
    *(undefined8 *)((long)puVar7 + 0x46) = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined2 *)((long)puVar7 + 0xe) = 0xffff;
    memset(puVar7 + 0x20,0,0x200);
    uVar8 = 0;
    do {
      uVar3 = uVar8 << 2;
      uVar4 = uVar8 >> 0x1f;
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar1;
      *(undefined4 *)((long)(puVar7 + 0x20) + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
    } while (uVar1 != 0x80);
  }
  return;
}

