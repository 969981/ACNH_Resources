
long FUN_0171ee68(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  
  lVar5 = DAT_0524a598;
  uVar4 = (ulong)**(byte **)(param_1 + 8);
  if (**(byte **)(param_1 + 8) != 0) {
    if (DAT_0524a598 == 0) {
      return 0;
    }
    uVar2 = FUN_0171f4d0(DAT_0524a598,param_1);
    uVar3 = *(uint *)(lVar5 + 0x1c0);
    if ((int)uVar3 < 1) {
      lVar5 = *(long *)(lVar5 + 0xb0);
      uVar3 = 0;
      if (lVar5 != 0) {
        puVar6 = *(uint **)(lVar5 + 8);
        uVar3 = 0;
        if (puVar6 != (uint *)0x0) {
          uVar3 = *puVar6;
        }
      }
    }
    uVar1 = uVar2 & 0xffff;
    if (uVar3 <= uVar2) {
      uVar1 = 0;
    }
    uVar4 = (ulong)uVar1;
  }
  if (DAT_0524a598 != 0) {
    uVar3 = (uint)uVar4;
    if ((int)*(uint *)(DAT_0524a598 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0524a598 + 0xb0) != 0) &&
           (puVar6 = *(uint **)(*(long *)(DAT_0524a598 + 0xb0) + 8), puVar6 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0524a598 + 200) <= uVar3 ||
           (*(char *)(*(long *)(DAT_0524a598 + 0xd0) + uVar4) != '\0')))) &&
         (((uVar3 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        return (ulong)(puVar6[1] * uVar3 + (uint)(ushort)puVar6[2] * 8 + iVar7) + (long)puVar6;
      }
    }
    else if (uVar3 < *(uint *)(DAT_0524a598 + 0x1c0)) {
      if (*(uint *)(DAT_0524a598 + 0x1b0) <= uVar3) {
        uVar3 = 0;
      }
      return *(long *)(*(long *)(DAT_0524a598 + 0x1b8) + (ulong)uVar3 * 8);
    }
  }
  return 0;
}

