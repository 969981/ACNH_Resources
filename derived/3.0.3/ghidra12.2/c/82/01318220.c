
/* WARNING: Removing unreachable block (ram,0x0131823c) */
/* WARNING: Removing unreachable block (ram,0x0131824c) */
/* WARNING: Removing unreachable block (ram,0x01318258) */

byte FUN_01318220(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if ((*(long *)(DAT_0519d040 + 0x1f8) == 0) ||
     (lVar3 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0), lVar3 == 0)) {
    return 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(lVar3 + 0x28);
  uVar1 = *(uint *)(lVar3 + 0x18);
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(lVar3 + 0x2c);
  if ((uVar5 < uVar1 && uVar2 <= *(uint *)(lVar3 + 0x1c)) &&
      (uVar1 <= uVar5 || *(uint *)(lVar3 + 0x1c) != uVar2)) {
    uVar5 = uVar5 + uVar1 * uVar2;
LAB_013182e0:
    if (*(uint *)(lVar3 + 0x30) <= uVar5) {
      uVar5 = 0;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x38) + (long)(int)uVar5 * 0x68);
  }
  else {
    if (*(char *)(lVar3 + 0x88) != '\0') {
      uVar1 = *(int *)(param_1 + 8) - *(int *)(lVar3 + 0x98);
      uVar2 = *(int *)(param_1 + 0xc) - *(int *)(lVar3 + 0x9c);
      uVar5 = *(uint *)(lVar3 + 0xa0);
      if ((uVar1 < uVar5 && uVar2 <= *(uint *)(lVar3 + 0xa4)) &&
          (uVar5 <= uVar1 || *(uint *)(lVar3 + 0xa4) != uVar2)) {
        uVar5 = uVar1 + uVar5 * uVar2 + *(int *)(lVar3 + 0x8c);
        goto LAB_013182e0;
      }
    }
    puVar4 = &DAT_051a50f0;
  }
  return *(byte *)((long)puVar4 + 0xc) >> 1 & 1;
}

