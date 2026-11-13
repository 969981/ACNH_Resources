
/* WARNING: Removing unreachable block (ram,0x01384f1c) */
/* WARNING: Removing unreachable block (ram,0x01384f2c) */

bool FUN_01384ee0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) ||
     (lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0), lVar3 == 0)) {
    return false;
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  fVar8 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar6 = 0;
  if (fVar8 != (float)(int)fVar8) {
    uVar6 = (uint)(fVar8 < 0.0);
  }
  fVar9 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  uVar5 = ((int)fVar8 - uVar6) - *(int *)(lVar3 + 0x28);
  uVar2 = ((int)fVar9 - uVar7) - *(int *)(lVar3 + 0x2c);
  if ((uVar5 < uVar1 && uVar2 <= *(uint *)(lVar3 + 0x1c)) &&
      (uVar1 <= uVar5 || *(uint *)(lVar3 + 0x1c) != uVar2)) {
    uVar5 = uVar5 + uVar2 * uVar1;
LAB_01385004:
    if (*(uint *)(lVar3 + 0x30) <= uVar5) {
      uVar5 = 0;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x38) + (long)(int)uVar5 * 0x68);
  }
  else {
    if (*(char *)(lVar3 + 0x88) != '\0') {
      uVar1 = ((int)fVar8 - uVar6) - *(int *)(lVar3 + 0x98);
      uVar7 = ((int)fVar9 - uVar7) - *(int *)(lVar3 + 0x9c);
      uVar6 = *(uint *)(lVar3 + 0xa0);
      if ((uVar1 < uVar6 && uVar7 <= *(uint *)(lVar3 + 0xa4)) &&
          (uVar6 <= uVar1 || *(uint *)(lVar3 + 0xa4) != uVar7)) {
        uVar5 = uVar1 + uVar6 * uVar7 + *(int *)(lVar3 + 0x8c);
        goto LAB_01385004;
      }
    }
    puVar4 = &DAT_051a50f0;
  }
  return (*(byte *)((long)puVar4 + 0xe) & 0x20) == 0 && *(char *)((long)puVar4 + 0x1e) != -1;
}

