
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01e06ff0(void *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 *__dest;
  ulong uVar14;
  undefined2 local_11c [102];
  
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      if (lVar10 != 0) {
        lVar9 = *(long *)(lVar10 + 8);
        goto joined_r0x01e07038;
      }
    }
    else if (lVar10 != 0) {
      lVar9 = *(long *)(lVar10 + 0x138);
joined_r0x01e07038:
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x18);
        plVar11 = *(long **)(lVar9 + 0x28);
        goto joined_r0x01e07064;
      }
    }
  }
  lVar9 = 0;
  plVar11 = _DAT_00000028;
joined_r0x01e07064:
  if ((plVar11 == (long *)0x0) || ((undefined8 *)*plVar11 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (*(code *)**(undefined8 **)*plVar11)();
    uVar6 = uVar6 ^ 1;
  }
  uVar8 = 0;
  uVar2 = *param_2 - (*param_2 >> 1 & 0x55555555);
  uVar3 = param_2[1] - (param_2[1] >> 1 & 0x55555555);
  uVar4 = param_2[2] - (param_2[2] >> 1 & 0x55555555);
  uVar5 = param_2[3] - (param_2[3] >> 1 & 0x55555555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar5 = uVar5 + (uVar5 >> 8);
  iVar1 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f) +
          (uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f);
  local_11c[0] = (undefined2)iVar1;
  puVar13 = (undefined2 *)((ulong)local_11c | 2);
  do {
    puVar12 = puVar13;
    if ((param_2[uVar8 >> 5] >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
      puVar12 = puVar13 + 1;
      *puVar13 = (short)uVar8;
    }
    uVar8 = uVar8 + 1;
    puVar13 = puVar12;
  } while (uVar8 != 100);
  uVar14 = (ulong)(iVar1 * 2 + 2);
  memcpy(param_1,local_11c,uVar14);
  __dest = (undefined8 *)(uVar14 + (long)param_1);
  if (iVar1 != 0) {
    lVar10 = 0;
    uVar14 = 0;
    *__dest = 0x8000002a8;
    __dest = __dest + 1;
    do {
      if ((param_2[uVar14 >> 5 & 0x7ffffff] >> (ulong)((uint)uVar14 & 0x1f) & 1) != 0) {
        memcpy(__dest,(void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + lVar10),0x2a8);
        __dest = __dest + 0x55;
      }
      uVar14 = uVar14 + 1;
      lVar10 = lVar10 + 0x2a8;
    } while (uVar14 != 100);
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return __dest;
}

