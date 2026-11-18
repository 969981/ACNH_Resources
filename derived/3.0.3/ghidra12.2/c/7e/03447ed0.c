
void FUN_03447ed0(long param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  
  lVar2 = DAT_05355a60;
  if (DAT_05355a60 != 0) {
    pvVar3 = *(void **)(DAT_05355a60 + 0xf08);
    pvVar5 = *(void **)(param_1 + 8);
    if (pvVar5 != pvVar3) {
      uVar4 = (ulong)*(uint *)(DAT_05355a60 + 0xf14);
      if ((int)*(uint *)(DAT_05355a60 + 0xf14) < 0) {
        uVar4 = 0;
        do {
          if (*(short *)((long)pvVar3 + uVar4 * 2) == 0) goto LAB_03447f0c;
          if (*(short *)((long)pvVar3 + uVar4 * 2 + 2) == 0) {
            uVar4 = uVar4 + 1;
            goto LAB_03447f0c;
          }
          if (*(short *)((long)pvVar3 + uVar4 * 2 + 4) == 0) {
            uVar4 = uVar4 + 2;
            goto LAB_03447f0c;
          }
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
        uVar4 = 0;
      }
LAB_03447f0c:
      uVar1 = (uint)uVar4;
      if (*(int *)(param_1 + 0x10) <= (int)(uint)uVar4) {
        uVar1 = *(int *)(param_1 + 0x10) - 1;
      }
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(pvVar5,pvVar3,uVar4);
      *(undefined2 *)((long)pvVar5 + uVar4) = 0;
    }
    pvVar3 = *(void **)(lVar2 + 0xf18);
    pvVar5 = *(void **)(param_1 + 0x220);
    if (pvVar5 != pvVar3) {
      uVar4 = (ulong)*(uint *)(lVar2 + 0xf24);
      if ((int)*(uint *)(lVar2 + 0xf24) < 0) {
        uVar4 = 0;
        do {
          if (*(short *)((long)pvVar3 + uVar4 * 2) == 0) goto LAB_03447f48;
          if (*(short *)((long)pvVar3 + uVar4 * 2 + 2) == 0) {
            uVar4 = uVar4 + 1;
            goto LAB_03447f48;
          }
          if (*(short *)((long)pvVar3 + uVar4 * 2 + 4) == 0) {
            uVar4 = uVar4 + 2;
            goto LAB_03447f48;
          }
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
        uVar4 = 0;
      }
LAB_03447f48:
      uVar1 = (uint)uVar4;
      if (*(int *)(param_1 + 0x228) <= (int)(uint)uVar4) {
        uVar1 = *(int *)(param_1 + 0x228) - 1;
      }
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(pvVar5,pvVar3,uVar4);
      *(undefined2 *)((long)pvVar5 + uVar4) = 0;
    }
    pvVar3 = *(void **)(lVar2 + 0xf28);
    pvVar5 = *(void **)(param_1 + 0x438);
    if (pvVar5 != pvVar3) {
      uVar4 = (ulong)*(uint *)(lVar2 + 0xf34);
      if ((int)*(uint *)(lVar2 + 0xf34) < 0) {
        uVar4 = 0;
        do {
          if (*(short *)((long)pvVar3 + uVar4 * 2) == 0) goto LAB_03447f84;
          if (*(short *)((long)pvVar3 + uVar4 * 2 + 2) == 0) {
            uVar4 = uVar4 + 1;
            goto LAB_03447f84;
          }
          if (*(short *)((long)pvVar3 + uVar4 * 2 + 4) == 0) {
            uVar4 = uVar4 + 2;
            goto LAB_03447f84;
          }
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
        uVar4 = 0;
      }
LAB_03447f84:
      uVar1 = (uint)uVar4;
      if (*(int *)(param_1 + 0x440) <= (int)(uint)uVar4) {
        uVar1 = *(int *)(param_1 + 0x440) - 1;
      }
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(pvVar5,pvVar3,uVar4);
      *(undefined2 *)((long)pvVar5 + uVar4) = 0;
    }
  }
  return;
}

