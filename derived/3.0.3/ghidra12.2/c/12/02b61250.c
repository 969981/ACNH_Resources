
undefined4 FUN_02b61250(long param_1,uint param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  float fVar8;
  ulong local_20;
  float local_18;
  
  lVar5 = *(long *)PTR_DAT_04bb5008;
  uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0xff0);
  if (uVar3 < *(uint *)(lVar5 + 0xfd0)) {
    puVar6 = *(uint **)(*(long *)(lVar5 + 0xfd8) + (long)(int)uVar3 * 8);
    uVar4 = 0;
    if (puVar6 == (uint *)0x0) goto LAB_02b61308;
    uVar3 = *puVar6;
    if (uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
      if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar5 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05604488) &&
             (uVar4 = *(ushort *)(DAT_05604490 + (long)(int)uVar2 * 2), uVar4 < 6))
          goto LAB_02b61308;
        }
      }
    }
  }
  uVar4 = 0;
LAB_02b61308:
  if ((uVar4 == 5) || (uVar4 == 3)) {
    uVar3 = *param_3 + 0x20000000U >> 0x1e;
    piVar1 = &DAT_04058020 + (ulong)uVar3 * 2;
    if (3 < uVar3) {
      piVar1 = &DAT_04058020;
    }
    fVar8 = (float)(*piVar1 + *(int *)(param_1 + 8)) * 5.0 + 2.5;
    local_18 = (float)(piVar1[1] + *(int *)(param_1 + 0xc)) * 5.0 + 2.5;
  }
  else {
    fVar8 = (float)*(int *)(param_1 + 8) * 5.0;
    local_18 = (float)*(int *)(param_1 + 0xc) * 5.0;
  }
  local_20 = (ulong)(uint)fVar8;
  FUN_015cb8d4(&local_20,0);
  return (undefined4)local_20;
}

