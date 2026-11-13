
/* WARNING: Removing unreachable block (ram,0x013851b4) */
/* WARNING: Removing unreachable block (ram,0x013851c4) */
/* WARNING: Removing unreachable block (ram,0x013851d0) */

void FUN_01385190(undefined8 param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((*(long *)(DAT_0519d040 + 0x1f8) == 0) ||
     (lVar7 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0), lVar7 == 0)) {
    FUN_007ef010(param_1,&DAT_04cb6038);
    return;
  }
  uVar5 = *(int *)(param_2 + 8) - *(int *)(lVar7 + 0x28);
  uVar1 = *(uint *)(lVar7 + 0x18);
  uVar3 = *(int *)(param_2 + 0xc) - *(int *)(lVar7 + 0x2c);
  if ((uVar5 < uVar1 && uVar3 <= *(uint *)(lVar7 + 0x1c)) &&
      (uVar1 <= uVar5 || *(uint *)(lVar7 + 0x1c) != uVar3)) {
    uVar5 = uVar5 + uVar1 * uVar3;
LAB_0138525c:
    if (*(uint *)(lVar7 + 0x30) <= uVar5) {
      uVar5 = 0;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar5 * 0x68);
  }
  else {
    if (*(char *)(lVar7 + 0x88) != '\0') {
      uVar1 = *(int *)(param_2 + 8) - *(int *)(lVar7 + 0x98);
      uVar3 = *(int *)(param_2 + 0xc) - *(int *)(lVar7 + 0x9c);
      uVar5 = *(uint *)(lVar7 + 0xa0);
      if ((uVar1 < uVar5 && uVar3 <= *(uint *)(lVar7 + 0xa4)) &&
          (uVar5 <= uVar1 || *(uint *)(lVar7 + 0xa4) != uVar3)) {
        uVar5 = uVar1 + uVar5 * uVar3 + *(int *)(lVar7 + 0x8c);
        goto LAB_0138525c;
      }
    }
    puVar6 = &DAT_051a50f0;
  }
  puVar4 = &DAT_04cb6038;
  if ((((*(byte *)((long)puVar6 + 0xe) >> 5 & 1) == 0) &&
      (cVar2 = *(char *)((long)puVar6 + 0x1e), cVar2 != -1)) &&
     (puVar4 = (undefined2 *)(*(long *)(DAT_0519d040 + 0x4740) + (long)(int)cVar2 * 0x70 + 0x28),
     *(uint *)(DAT_0519d040 + 0x4738) <= (uint)(int)cVar2)) {
    puVar4 = &DAT_04cb6038;
  }
  FUN_007ef010(param_1,puVar4);
  return;
}

