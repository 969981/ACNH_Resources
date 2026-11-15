
/* WARNING: Removing unreachable block (ram,0x022e3d08) */
/* WARNING: Removing unreachable block (ram,0x022e3d18) */
/* WARNING: Removing unreachable block (ram,0x022e3d24) */

ulong FUN_022e3c80(undefined8 param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  short local_18 [4];
  
  uVar4 = FUN_007ef010(local_18,param_2 + 0x14);
  sVar2 = *(short *)PTR_DAT_04bb3170;
  uVar5 = FUN_022e4050(uVar4,param_2);
  if ((uVar5 & 1) == 0) {
    if (local_18[0] != sVar2) {
      uVar5 = FUN_013852c0(param_2,1);
      return uVar5;
    }
  }
  else {
    if (local_18[0] != sVar2) {
      return 0;
    }
    if (6 < *(uint *)(param_2 + 0x10)) {
      return 0;
    }
    if ((1 << (ulong)(*(uint *)(param_2 + 0x10) & 0x1f) & 0x53U) == 0) {
      return 0;
    }
  }
  if ((*(long *)(DAT_0519d040 + 0x1f8) == 0) ||
     (lVar6 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0), lVar6 == 0)) {
    return 0;
  }
  uVar8 = *(int *)(param_2 + 8) - *(int *)(lVar6 + 0x28);
  uVar1 = *(uint *)(lVar6 + 0x18);
  uVar3 = *(int *)(param_2 + 0xc) - *(int *)(lVar6 + 0x2c);
  if ((uVar8 < uVar1 && uVar3 <= *(uint *)(lVar6 + 0x1c)) &&
      (uVar1 <= uVar8 || *(uint *)(lVar6 + 0x1c) != uVar3)) {
    uVar8 = uVar8 + uVar1 * uVar3;
LAB_022e3dc0:
    if (*(uint *)(lVar6 + 0x30) <= uVar8) {
      uVar8 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar8 * 0x68);
  }
  else {
    if (*(char *)(lVar6 + 0x88) != '\0') {
      uVar1 = *(int *)(param_2 + 8) - *(int *)(lVar6 + 0x98);
      uVar3 = *(int *)(param_2 + 0xc) - *(int *)(lVar6 + 0x9c);
      uVar8 = *(uint *)(lVar6 + 0xa0);
      if ((uVar1 < uVar8 && uVar3 <= *(uint *)(lVar6 + 0xa4)) &&
          (uVar8 <= uVar1 || *(uint *)(lVar6 + 0xa4) != uVar3)) {
        uVar8 = uVar1 + uVar8 * uVar3 + *(int *)(lVar6 + 0x8c);
        goto LAB_022e3dc0;
      }
    }
    puVar7 = &DAT_051a50f0;
  }
  return (ulong)((*(uint *)((long)puVar7 + 0xc) & 0x2100) == 0x100);
}

