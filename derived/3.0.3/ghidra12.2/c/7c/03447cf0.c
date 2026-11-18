
void FUN_03447cf0(long param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bc1118;
  if (lVar5 != 0) {
    pvVar2 = *(void **)(lVar5 + 0xf08);
    pvVar4 = *(void **)(param_1 + 0x650);
    if (pvVar4 != pvVar2) {
      uVar3 = (ulong)*(uint *)(lVar5 + 0xf14);
      if ((int)*(uint *)(lVar5 + 0xf14) < 0) {
        uVar3 = 0;
        do {
          if (*(short *)((long)pvVar2 + uVar3 * 2) == 0) goto LAB_03447d2c;
          if (*(short *)((long)pvVar2 + uVar3 * 2 + 2) == 0) {
            uVar3 = uVar3 + 1;
            goto LAB_03447d2c;
          }
          if (*(short *)((long)pvVar2 + uVar3 * 2 + 4) == 0) {
            uVar3 = uVar3 + 2;
            goto LAB_03447d2c;
          }
          uVar3 = uVar3 + 3;
        } while (uVar3 != 0x80001);
        uVar3 = 0;
      }
LAB_03447d2c:
      uVar1 = (uint)uVar3;
      if (*(int *)(param_1 + 0x658) <= (int)(uint)uVar3) {
        uVar1 = *(int *)(param_1 + 0x658) - 1;
      }
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(pvVar4,pvVar2,uVar3);
      *(undefined2 *)((long)pvVar4 + uVar3) = 0;
    }
    pvVar2 = *(void **)(lVar5 + 0xf18);
    pvVar4 = *(void **)(param_1 + 0x868);
    if (pvVar4 != pvVar2) {
      uVar3 = (ulong)*(uint *)(lVar5 + 0xf24);
      if ((int)*(uint *)(lVar5 + 0xf24) < 0) {
        uVar3 = 0;
        do {
          if (*(short *)((long)pvVar2 + uVar3 * 2) == 0) goto LAB_03447d68;
          if (*(short *)((long)pvVar2 + uVar3 * 2 + 2) == 0) {
            uVar3 = uVar3 + 1;
            goto LAB_03447d68;
          }
          if (*(short *)((long)pvVar2 + uVar3 * 2 + 4) == 0) {
            uVar3 = uVar3 + 2;
            goto LAB_03447d68;
          }
          uVar3 = uVar3 + 3;
        } while (uVar3 != 0x80001);
        uVar3 = 0;
      }
LAB_03447d68:
      uVar1 = (uint)uVar3;
      if (*(int *)(param_1 + 0x870) <= (int)(uint)uVar3) {
        uVar1 = *(int *)(param_1 + 0x870) - 1;
      }
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(pvVar4,pvVar2,uVar3);
      *(undefined2 *)((long)pvVar4 + uVar3) = 0;
    }
    pvVar2 = *(void **)(lVar5 + 0xf28);
    pvVar4 = *(void **)(param_1 + 0xa80);
    if (pvVar4 != pvVar2) {
      uVar3 = (ulong)*(uint *)(lVar5 + 0xf34);
      if ((int)*(uint *)(lVar5 + 0xf34) < 0) {
        uVar3 = 0;
        do {
          if (*(short *)((long)pvVar2 + uVar3 * 2) == 0) goto LAB_03447da4;
          if (*(short *)((long)pvVar2 + uVar3 * 2 + 2) == 0) {
            uVar3 = uVar3 + 1;
            goto LAB_03447da4;
          }
          if (*(short *)((long)pvVar2 + uVar3 * 2 + 4) == 0) {
            uVar3 = uVar3 + 2;
            goto LAB_03447da4;
          }
          uVar3 = uVar3 + 3;
        } while (uVar3 != 0x80001);
        uVar3 = 0;
      }
LAB_03447da4:
      uVar1 = (uint)uVar3;
      if (*(int *)(param_1 + 0xa88) <= (int)(uint)uVar3) {
        uVar1 = *(int *)(param_1 + 0xa88) - 1;
      }
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(pvVar4,pvVar2,uVar3);
      *(undefined2 *)((long)pvVar4 + uVar3) = 0;
    }
  }
  FUN_03447ed0(param_1);
  return;
}

