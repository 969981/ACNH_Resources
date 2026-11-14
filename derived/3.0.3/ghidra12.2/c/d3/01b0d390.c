
undefined8 FUN_01b0d390(undefined8 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  
  if ((int)*(uint *)(DAT_0532a7f0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7f0 + 0xb0) == 0) ||
         (puVar4 = *(uint **)(*(long *)(DAT_0532a7f0 + 0xb0) + 8), puVar4 == (uint *)0x0)) ||
        ((param_2 < *(uint *)(DAT_0532a7f0 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7f0 + 0xd0) + (long)(int)param_2) == '\0')))) ||
       (((*puVar4 <= param_2 || (puVar4[1] == 0)) || ((ushort)puVar4[2] == 0)))) goto LAB_01b0d4d4;
    iVar7 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * param_2 + (uint)(ushort)puVar4[2] * 8 + iVar7) +
                     (long)puVar4);
  }
  else {
    if (*(uint *)(DAT_0532a7f0 + 0x1c0) <= param_2) goto LAB_01b0d4d4;
    if (*(uint *)(DAT_0532a7f0 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    puVar4 = *(uint **)(*(long *)(DAT_0532a7f0 + 0x1b8) + (ulong)param_2 * 8);
  }
  if ((puVar4 != (uint *)0x0) && (uVar3 = *puVar4, uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_05327278 && DAT_05327280 != 0) {
          puVar5 = (undefined8 *)(DAT_05327280 + (long)(int)uVar2 * 10);
          uVar6 = *puVar5;
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar5 + 1);
          *param_1 = uVar6;
          return 1;
        }
      }
    }
  }
LAB_01b0d4d4:
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return 0;
}

