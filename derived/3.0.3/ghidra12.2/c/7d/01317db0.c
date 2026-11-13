
/* WARNING: Removing unreachable block (ram,0x01317de4) */
/* WARNING: Removing unreachable block (ram,0x01317df4) */
/* WARNING: Removing unreachable block (ram,0x01317e00) */

float FUN_01317db0(float *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int local_8;
  
  if ((*(long *)(DAT_0519d040 + 0x1f8) == 0) ||
     (lVar5 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0), lVar5 == 0)) {
    local_8 = 0;
    goto LAB_01317ed8;
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  iVar2 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
  iVar3 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
  uVar7 = iVar2 - *(int *)(lVar5 + 0x28);
  uVar4 = iVar3 - *(int *)(lVar5 + 0x2c);
  if ((uVar7 < uVar1 && uVar4 <= *(uint *)(lVar5 + 0x1c)) &&
      (uVar1 <= uVar7 || *(uint *)(lVar5 + 0x1c) != uVar4)) {
    uVar7 = uVar7 + uVar1 * uVar4;
LAB_01317eac:
    if (*(uint *)(lVar5 + 0x30) <= uVar7) {
      uVar7 = 0;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar7 * 0x68);
  }
  else {
    if (*(char *)(lVar5 + 0x88) != '\0') {
      uVar1 = iVar2 - *(int *)(lVar5 + 0x98);
      uVar4 = iVar3 - *(int *)(lVar5 + 0x9c);
      uVar7 = *(uint *)(lVar5 + 0xa0);
      if ((uVar1 < uVar7 && uVar4 <= *(uint *)(lVar5 + 0xa4)) &&
          (uVar7 <= uVar1 || *(uint *)(lVar5 + 0xa4) != uVar4)) {
        uVar7 = uVar1 + uVar7 * uVar4 + *(int *)(lVar5 + 0x8c);
        goto LAB_01317eac;
      }
    }
    puVar6 = &DAT_051a50f0;
  }
  local_8 = (int)*(char *)(puVar6 + 2);
  if (local_8 == 4) {
    return 0.0;
  }
LAB_01317ed8:
  return (float)local_8 * 15.0;
}

