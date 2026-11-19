
bool FUN_03bdfe34(long param_1,float *param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong *puVar8;
  float fVar9;
  float fVar10;
  
  puVar6 = *(uint **)(param_1 + 0x18);
  if ((puVar6 == (uint *)0x0) || ((*puVar6 >> (ulong)(param_4 & 0x1f) & 1) == 0)) {
    uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x18);
    puVar8 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | uVar7);
    puVar3 = puVar8 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar7) {
      puVar3 = puVar8;
    }
    if ((*puVar3 >> ((ulong)param_3 & 0x3f) & 1) == 0) {
      return false;
    }
    uVar7 = *puVar3 & 0xffffffffffffffffU >> (~(ulong)param_3 & 0x3f);
    uVar2 = (int)uVar7 - ((uint)(uVar7 >> 1) & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar5 = (uint)(uVar7 >> 0x20);
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    puVar6 = (uint *)((long)puVar3 +
                     (long)(int)((uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f)
                                + -1) * 4 + 8);
  }
  else {
    uVar2 = *puVar6 & 0xffffffffU >> (ulong)(~param_4 & 0x1f);
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    puVar6 = puVar6 + ((ulong)(uVar2 + (uVar2 >> 0x10)) & 0x3f);
  }
  fVar9 = (float)FUN_03be0a1c(param_1,puVar6);
  *param_2 = fVar9;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = *(char *)((long)puVar6 + 3) == '\x02';
    if (*puVar6 >> 0x18 == 2) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 0x18);
      uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
      puVar4 = puVar1 + uVar2;
      if (1 < uVar2) {
        puVar4 = puVar1;
      }
      if (*(char *)(*(long *)(*(long *)*puVar4 + 0x58) + ((ulong)*puVar6 & 0xffffff) * 0x14 + 0x12)
          != '\0') {
        *param_5 = 0;
      }
    }
  }
  fVar10 = *param_2;
  fVar9 = -fVar10;
  if (0.0 <= fVar10) {
    fVar9 = fVar10;
  }
  return fVar9 <= 3.4028235e+38;
}

