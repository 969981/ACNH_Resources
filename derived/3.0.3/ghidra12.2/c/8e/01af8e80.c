
ulong FUN_01af8e80(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  uint local_38 [2];
  
  lVar3 = DAT_0532a860;
  local_38[0] = 0x6a;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar2 = *puVar8;
    if (uVar2 != 0 && puVar8 != (uint *)(ulong)uVar2) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      if (((*puVar9 != 0) && (uVar2 = puVar9[1], uVar2 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar4 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar9 + lVar4 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar4 != 0) {
          uVar1 = 0;
          if ((ulong)uVar2 != 0) {
            uVar1 = (uint)((ulong)((long)puVar8 - lVar4) / (ulong)uVar2);
          }
          if (*puVar9 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
          goto LAB_01af8f34;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01af8f34:
  if ((uVar7 == 0x6a) && (0 < *(int *)(DAT_0532a860 + 0x78))) {
    uVar10 = 0;
    do {
      if (uVar10 < *(uint *)(lVar3 + 0x58)) {
        lVar4 = *(long *)(*(long *)(lVar3 + 0x60) + uVar10 * 8);
      }
      else {
        lVar4 = 0;
      }
      puVar5 = (ushort *)(**(code **)(*(long *)(lVar4 + 0x30) + 0xf0))();
      local_38[1] = 0;
      local_38[0] = (uint)*puVar5;
      FUN_0277d4ac(local_38);
      uVar6 = FUN_0277d7b4(local_38,param_1 + 8);
      if ((uVar6 & 1) != 0) {
        return uVar10 & 0xffffffff;
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)*(int *)(lVar3 + 0x78));
  }
  return 0xffffffff;
}

