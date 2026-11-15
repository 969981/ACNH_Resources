
/* WARNING: Removing unreachable block (ram,0x02227fc0) */
/* WARNING: Removing unreachable block (ram,0x02227fd0) */

undefined8 FUN_02227f50(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) + -2.5;
  fVar7 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) + -2.5;
  uVar3 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  uVar4 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  puVar2 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  uVar1 = uVar4 + 2;
  uVar5 = uVar3;
  do {
    if (((((*(int *)(puVar2 + 4) <= (int)uVar5) && ((int)uVar5 <= *(int *)(puVar2 + 6))) &&
         (*(int *)((long)puVar2 + 0x24) <= (int)uVar4)) &&
        (((int)uVar4 <= *(int *)((long)puVar2 + 0x34) && (puVar2[1] != 0)))) &&
       ((uVar5 < 0x120 &&
        ((uVar4 < 0x100 &&
         (*(int *)(puVar2[1] + (ulong)uVar5 * 0x400 + (ulong)uVar4 * 4 + 0x30) != -1)))))) {
      return 0;
    }
    if ((int)uVar5 < (int)(uVar3 + 1)) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar4 = uVar4 + 1;
      uVar5 = uVar3;
    }
  } while ((uVar3 != uVar5) || (uVar1 != uVar4));
  return 1;
}

