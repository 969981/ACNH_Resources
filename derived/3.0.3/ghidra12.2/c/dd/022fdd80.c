
void FUN_022fdd80(long param_1)

{
  float fVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  float local_3c [3];
  
  pbVar8 = (byte *)(param_1 + 0x10);
  if ((*pbVar8 < 8) && (uVar4 = FUN_02582d8c(pbVar8,1), puVar3 = PTR_DAT_04bb4fb8, uVar4 < 8)) {
    if (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0') &&
        (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
          (uVar4 = FUN_02582d8c(pbVar8,1), uVar4 < 8)) &&
         (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) &&
       (lVar9 = *(long *)puVar3 + (ulong)uVar4 * 0x13f0, (*(byte *)(lVar9 + 0x698) & 1) != 0)) {
      uVar4 = *(uint *)(param_1 + 0xc);
      puVar2 = (uint *)(DAT_051a9970 + 0x20) + (ulong)*(uint *)(param_1 + 8) * 4;
      if (0x1d < *(uint *)(param_1 + 8)) {
        puVar2 = (uint *)(DAT_051a9970 + 0x20);
      }
      if (*puVar2 <= uVar4) {
        uVar4 = 0;
      }
      lVar6 = *(long *)(puVar2 + 2) + (long)(int)uVar4 * 0x30;
      local_3c[0] = *(float *)(lVar6 + 8);
      uVar4 = *(uint *)(lVar6 + 0xc);
      fVar1 = local_3c[0];
      if ((uint)*(float *)(DAT_051a9970 + 0x10) <= (uint)local_3c[0]) {
        fVar1 = 0.0;
      }
      if (uVar4 < *(uint *)(*(long *)(DAT_051a9970 + 0x18) + (long)(int)fVar1 * 0x18 + 8)) {
        lVar7 = *(long *)(*(long *)(DAT_051a9970 + 0x18) + (long)(int)fVar1 * 0x18 + 0x10);
        if (((*(uint *)(lVar6 + 0x10) < *(uint *)(lVar7 + (long)(int)uVar4 * 0x10)) &&
            (lVar7 = *(long *)(lVar7 + (long)(int)uVar4 * 0x10 + 8), lVar7 != 0)) &&
           ((plVar5 = *(long **)(lVar7 + (long)(int)*(uint *)(lVar6 + 0x10) * 0x518 + 0x78),
            plVar5 != (long *)0x0 && (lVar6 = (**(code **)(*plVar5 + 0x28))(), lVar6 != 0)))) {
          local_3c[1] = 0.0;
          local_3c[0] = (float)*(int *)(lVar9 + 0x6a8) * 10.0 + 5.0;
          local_3c[2] = (float)*(int *)(lVar9 + 0x6ac) * 10.0 + 5.0;
          FUN_02542d18(pbVar8,local_3c,lVar6 + 8,1);
        }
      }
    }
  }
  return;
}

