
/* WARNING: Removing unreachable block (ram,0x02b91818) */
/* WARNING: Removing unreachable block (ram,0x02b91828) */

undefined4 FUN_02b917e0(int *param_1,float *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_w12;
  undefined4 uVar5;
  undefined4 local_58 [2];
  byte local_50;
  int local_4c;
  
  if (param_1 == (int *)0x0) {
    return DAT_04c9a0c8;
  }
  local_58[0] = 0;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (((puVar1[1] != 0) && (FUN_02a58ea0(local_58,puVar1,param_2), local_4c != 0)) &&
     (((local_4c != 0 && ((local_4c == 0x1a && ((local_50 & 1) == 0)))) ||
      ((local_4c != 0 && ((local_4c == 0x1b && ((local_50 & 1) == 0)))))))) {
    *param_1 = local_4c;
    if ((puVar1[1] != 0) &&
       (((uVar3 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0), uVar3 < 0x120 &&
         (uVar4 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0), uVar4 < 0x100)) &&
        (uVar3 = *(uint *)(puVar1[1] + (ulong)uVar3 * 0x400 + (ulong)uVar4 * 4 + 0x30), uVar3 < 0x36
        )))) {
      uVar4 = 0;
      do {
        uVar2 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1e18 +
                          ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 4);
        if (uVar2 == uVar3) {
          uVar5 = *(undefined4 *)(*(long *)PTR_DAT_04bb5008 + 0x1e18 + (long)(int)uVar4 * 8);
          break;
        }
        uVar4 = uVar4 + 1;
        uVar5 = extraout_w12;
      } while (uVar4 != 0x36);
      if (uVar2 == uVar3) {
        return uVar5;
      }
      return *(undefined4 *)PTR_DAT_04bb3238;
    }
  }
  return DAT_04c9a0c8;
}

