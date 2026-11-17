
/* WARNING: Removing unreachable block (ram,0x030c20bc) */
/* WARNING: Removing unreachable block (ram,0x030c20cc) */
/* WARNING: Removing unreachable block (ram,0x030c20d8) */
/* WARNING: Removing unreachable block (ram,0x030c1f94) */
/* WARNING: Removing unreachable block (ram,0x030c1fa4) */
/* WARNING: Removing unreachable block (ram,0x030c1fb0) */
/* WARNING: Removing unreachable block (ram,0x030c1e6c) */
/* WARNING: Removing unreachable block (ram,0x030c1e7c) */
/* WARNING: Removing unreachable block (ram,0x030c1e88) */
/* WARNING: Removing unreachable block (ram,0x030c1d44) */
/* WARNING: Removing unreachable block (ram,0x030c1d54) */
/* WARNING: Removing unreachable block (ram,0x030c1d60) */
/* WARNING: Removing unreachable block (ram,0x030c1c1c) */
/* WARNING: Removing unreachable block (ram,0x030c1c2c) */
/* WARNING: Removing unreachable block (ram,0x030c1c38) */
/* WARNING: Removing unreachable block (ram,0x030c1af4) */
/* WARNING: Removing unreachable block (ram,0x030c1b04) */
/* WARNING: Removing unreachable block (ram,0x030c1b10) */
/* WARNING: Removing unreachable block (ram,0x030c1b24) */
/* WARNING: Removing unreachable block (ram,0x030c1c4c) */
/* WARNING: Removing unreachable block (ram,0x030c1d74) */
/* WARNING: Removing unreachable block (ram,0x030c1e9c) */
/* WARNING: Removing unreachable block (ram,0x030c1fc4) */
/* WARNING: Removing unreachable block (ram,0x030c20ec) */

void FUN_030c1a14(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_2;
  *(long *)(param_1 + 0x248) = lVar2;
  *(long *)(param_1 + 0x250) = param_2[1];
  *(long *)(param_1 + 600) = param_2[2];
  if (*(long *)(param_1 + 0x218) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0x218);
    plVar3 = *(long **)(*(long *)(lVar2 + 0x210) + 0x48);
    *(long **)(lVar4 + 0x18) = plVar3;
    plVar1 = (long *)(*(int *)((long)plVar3 + 0x14) + lVar4);
    lVar2 = *plVar3;
    *plVar3 = (long)plVar1;
    *plVar1 = lVar2;
    plVar1[1] = (long)plVar3;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
                    /* WARNING: Could not recover jumptable at 0x030c1ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_030c1ab4 + (ulong)DAT_04183cca * 4))();
    return;
  }
  lVar2 = *(long *)(param_1 + 0x220);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x218);
    plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x248) + 0x210) + 0x48);
    *(long **)(lVar4 + 0x18) = plVar3;
    plVar1 = (long *)(*(int *)((long)plVar3 + 0x14) + lVar4);
    lVar4 = *plVar3;
    *plVar3 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar3;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),0,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),1,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),2,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),3,4);
                    /* WARNING: Could not recover jumptable at 0x030c1bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_030c1bdc + (ulong)DAT_04183ccf * 4))();
    return;
  }
  lVar2 = *(long *)(param_1 + 0x228);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x218);
    plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x248) + 0x210) + 0x48);
    *(long **)(lVar4 + 0x18) = plVar3;
    plVar1 = (long *)(*(int *)((long)plVar3 + 0x14) + lVar4);
    lVar4 = *plVar3;
    *plVar3 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar3;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),0,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),1,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),2,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),3,4);
                    /* WARNING: Could not recover jumptable at 0x030c1d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_030c1d04 + (ulong)DAT_04183cd4 * 4))();
    return;
  }
  lVar2 = *(long *)(param_1 + 0x230);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x218);
    plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x248) + 0x210) + 0x48);
    *(long **)(lVar4 + 0x18) = plVar3;
    plVar1 = (long *)(*(int *)((long)plVar3 + 0x14) + lVar4);
    lVar4 = *plVar3;
    *plVar3 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar3;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),0,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),1,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),2,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),3,4);
                    /* WARNING: Could not recover jumptable at 0x030c1e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_030c1e2c + (ulong)DAT_04183cd9 * 4))();
    return;
  }
  lVar2 = *(long *)(param_1 + 0x238);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x218);
    plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x248) + 0x210) + 0x48);
    *(long **)(lVar4 + 0x18) = plVar3;
    plVar1 = (long *)(*(int *)((long)plVar3 + 0x14) + lVar4);
    lVar4 = *plVar3;
    *plVar3 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar3;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),0,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),1,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),2,4);
    FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),3,4);
                    /* WARNING: Could not recover jumptable at 0x030c1f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_030c1f54 + (ulong)DAT_04183cde * 4))();
    return;
  }
  lVar2 = *(long *)(param_1 + 0x240);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar2 + 0x218);
  plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x248) + 0x210) + 0x48);
  *(long **)(lVar4 + 0x18) = plVar3;
  plVar1 = (long *)(*(int *)((long)plVar3 + 0x14) + lVar4);
  lVar4 = *plVar3;
  *plVar3 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar3;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),0,4);
  FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),1,4);
  FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),2,4);
  FUN_03d49da4(*(undefined8 *)(lVar2 + 0x218),3,4);
                    /* WARNING: Could not recover jumptable at 0x030c2078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_030c207c + (ulong)DAT_04183ce3 * 4))();
  return;
}

