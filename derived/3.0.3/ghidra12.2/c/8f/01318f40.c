
/* WARNING: Removing unreachable block (ram,0x0131906c) */
/* WARNING: Removing unreachable block (ram,0x01318f74) */
/* WARNING: Removing unreachable block (ram,0x01318f84) */
/* WARNING: Removing unreachable block (ram,0x0131907c) */
/* WARNING: Removing unreachable block (ram,0x01319088) */

ulong FUN_01318f40(float *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  
  cVar5 = '\0';
  if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
    lVar6 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
    cVar5 = '\0';
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      iVar2 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
      iVar3 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
      uVar9 = iVar2 - *(int *)(lVar6 + 0x28);
      uVar4 = iVar3 - *(int *)(lVar6 + 0x2c);
      if ((uVar9 < uVar1 && uVar4 <= *(uint *)(lVar6 + 0x1c)) &&
          (uVar1 <= uVar9 || *(uint *)(lVar6 + 0x1c) != uVar4)) {
        uVar9 = uVar9 + uVar1 * uVar4;
LAB_0131902c:
        if (*(uint *)(lVar6 + 0x30) <= uVar9) {
          uVar9 = 0;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar9 * 0x68);
      }
      else {
        if (*(char *)(lVar6 + 0x88) != '\0') {
          uVar1 = iVar2 - *(int *)(lVar6 + 0x98);
          uVar4 = iVar3 - *(int *)(lVar6 + 0x9c);
          uVar9 = *(uint *)(lVar6 + 0xa0);
          if ((uVar1 < uVar9 && uVar4 <= *(uint *)(lVar6 + 0xa4)) &&
              (uVar9 <= uVar1 || *(uint *)(lVar6 + 0xa4) != uVar4)) {
            uVar9 = uVar1 + uVar9 * uVar4 + *(int *)(lVar6 + 0x8c);
            goto LAB_0131902c;
          }
        }
        puVar7 = &DAT_051a50f0;
      }
      cVar5 = *(char *)(puVar7 + 2);
    }
  }
  cVar8 = '\0';
  if (*(long *)(DAT_0519d040 + 0x1f8) == 0) goto LAB_01319164;
  lVar6 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
  cVar8 = '\0';
  if (lVar6 == 0) goto LAB_01319164;
  iVar2 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
  iVar3 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
  uVar9 = iVar2 - *(int *)(lVar6 + 0x28);
  if ((uVar9 < *(uint *)(lVar6 + 0x18)) &&
     (uVar1 = iVar3 - *(int *)(lVar6 + 0x2c), uVar1 < *(uint *)(lVar6 + 0x1c))) {
    uVar9 = uVar9 + *(uint *)(lVar6 + 0x18) * uVar1;
LAB_0131913c:
    if (*(uint *)(lVar6 + 0x30) <= uVar9) {
      uVar9 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar9 * 0x68);
  }
  else if (*(char *)(lVar6 + 0x88) == '\0') {
    puVar7 = &DAT_051a50f0;
  }
  else {
    uVar9 = iVar2 - *(int *)(lVar6 + 0x98);
    puVar7 = &DAT_051a50f0;
    if ((uVar9 < *(uint *)(lVar6 + 0xa0)) &&
       (uVar1 = iVar3 - *(int *)(lVar6 + 0x9c), uVar1 < *(uint *)(lVar6 + 0xa4))) {
      uVar9 = uVar9 + *(uint *)(lVar6 + 0xa0) * uVar1 + *(int *)(lVar6 + 0x8c);
      goto LAB_0131913c;
    }
  }
  cVar8 = *(char *)(puVar7 + 2);
LAB_01319164:
  if (cVar5 == '\x04') {
    cVar5 = '\0';
  }
  if (cVar8 == '\x04') {
    cVar8 = '\0';
  }
  if (cVar8 < cVar5) {
    return 0xffffffff;
  }
  return (ulong)(cVar5 != cVar8);
}

