
/* WARNING: Removing unreachable block (ram,0x0321c6fc) */
/* WARNING: Removing unreachable block (ram,0x0321c688) */
/* WARNING: Removing unreachable block (ram,0x0321c60c) */
/* WARNING: Removing unreachable block (ram,0x0321c594) */
/* WARNING: Removing unreachable block (ram,0x0321c520) */
/* WARNING: Removing unreachable block (ram,0x0321c49c) */
/* WARNING: Removing unreachable block (ram,0x0321c420) */
/* WARNING: Removing unreachable block (ram,0x0321c3ac) */
/* WARNING: Removing unreachable block (ram,0x0321c390) */
/* WARNING: Removing unreachable block (ram,0x0321c404) */
/* WARNING: Removing unreachable block (ram,0x0321c480) */
/* WARNING: Removing unreachable block (ram,0x0321c504) */
/* WARNING: Removing unreachable block (ram,0x0321c578) */
/* WARNING: Removing unreachable block (ram,0x0321c5dc) */
/* WARNING: Removing unreachable block (ram,0x0321c62c) */
/* WARNING: Removing unreachable block (ram,0x0321c6a4) */
/* WARNING: Removing unreachable block (ram,0x0321c71c) */

void FUN_0321c348(long param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  
  puVar5 = PTR_DAT_04bb37e0;
  uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar2 = PTR_DAT_04bb37e0[2];
  uVar3 = PTR_DAT_04bb37e0[3];
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  param_2[4] = uVar4;
  *(undefined1 *)(param_2 + 5) = uVar2;
  *(undefined1 *)((long)param_2 + 0xb) = uVar3;
  *(undefined4 *)(param_2 + 6) = uVar1;
  if (-1 < *(int *)(param_1 + 0x4c)) {
    puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x4c) * 8);
    param_2[4] = *puVar6;
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar6 + 1);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)((long)puVar6 + 3);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar6 + 2);
  }
  param_2[8] = uVar4;
  *(undefined1 *)(param_2 + 9) = uVar2;
  *(undefined1 *)((long)param_2 + 0x13) = uVar3;
  *(undefined4 *)(param_2 + 10) = uVar1;
  if (-1 < *(int *)(param_1 + 0x58)) {
    puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x58) * 8);
    param_2[8] = *puVar6;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(puVar6 + 1);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)((long)puVar6 + 3);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar6 + 2);
  }
  *param_2 = uVar4;
  *(undefined *)(param_2 + 1) = puVar5[2];
  *(undefined *)((long)param_2 + 3) = puVar5[3];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar5 + 4);
  if (-1 < *(int *)(param_1 + 0x40)) {
    puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x40) * 8);
    *param_2 = *puVar6;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar6 + 1);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puVar6 + 3);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar6 + 2);
  }
  uVar2 = puVar5[2];
  uVar4 = *(undefined2 *)puVar5;
  *(undefined1 *)(param_2 + 0x15) = uVar2;
  uVar3 = puVar5[3];
  uVar1 = *(undefined4 *)(puVar5 + 4);
  *(undefined1 *)((long)param_2 + 0x2b) = uVar3;
  param_2[0x14] = uVar4;
  *(undefined4 *)(param_2 + 0x16) = uVar1;
  if (-1 < *(int *)(param_1 + 0x88)) {
    puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x88) * 8);
    param_2[0x14] = *puVar6;
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(puVar6 + 1);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)((long)puVar6 + 3);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(puVar6 + 2);
  }
  param_2[0x18] = uVar4;
  *(undefined1 *)(param_2 + 0x19) = uVar2;
  *(undefined1 *)((long)param_2 + 0x33) = uVar3;
  *(undefined4 *)(param_2 + 0x1a) = uVar1;
  if (-1 < *(int *)(param_1 + 0x94)) {
    puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x94) * 8);
    param_2[0x18] = *puVar6;
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(puVar6 + 1);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)((long)puVar6 + 3);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(puVar6 + 2);
  }
  if (*(int *)(param_1 + 100) < 0) {
    param_2[0xc] = uVar4;
    *(undefined1 *)(param_2 + 0xd) = uVar2;
    *(undefined1 *)((long)param_2 + 0x1b) = uVar3;
    *(undefined4 *)(param_2 + 0xe) = uVar1;
    if (-1 < *(int *)(param_1 + 0x70)) {
      puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x70) * 8);
      param_2[0xc] = *puVar6;
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(puVar6 + 1);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)puVar6 + 3);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar6 + 2);
    }
    param_2[0x10] = uVar4;
    *(undefined1 *)(param_2 + 0x11) = uVar2;
    *(undefined1 *)((long)param_2 + 0x23) = uVar3;
    *(undefined4 *)(param_2 + 0x12) = uVar1;
    if (-1 < *(int *)(param_1 + 0x7c)) {
      puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x7c) * 8);
      param_2[0x10] = *puVar6;
      *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(puVar6 + 1);
      *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)((long)puVar6 + 3);
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(puVar6 + 2);
    }
  }
  else {
    param_2[0xc] = uVar4;
    *(undefined1 *)(param_2 + 0xd) = uVar2;
    *(undefined1 *)((long)param_2 + 0x1b) = uVar3;
    *(undefined4 *)(param_2 + 0xe) = uVar1;
    if (-1 < *(int *)(param_1 + 100)) {
      puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 100) * 8);
      param_2[0xc] = *puVar6;
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(puVar6 + 1);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)puVar6 + 3);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar6 + 2);
      return;
    }
  }
  return;
}

