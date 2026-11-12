
long FUN_0079e4d0(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  undefined8 *puVar10;
  
  uVar2 = *param_2;
  FUN_006bd550("invalid_name",0);
  uVar5 = *(uint *)(param_1 + 0x1e8);
  uVar6 = (ulong)uVar5;
  if (*(char *)(param_1 + 0x1f9) == '\0') {
    if (0 < (int)uVar5) {
      puVar10 = *(undefined8 **)(param_1 + 0x1f0);
      uVar5 = 0xffffffff;
      do {
        puVar8 = (uint *)*puVar10;
        if (uVar2 == puVar8[8]) goto LAB_0079e5bc;
        puVar10 = puVar10 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      goto LAB_0079e5c0;
    }
  }
  else if (uVar5 != 0) {
    if ((int)uVar5 < 2) {
      lVar7 = *(long *)(param_1 + 0x1f0);
      uVar4 = 0;
    }
    else {
      iVar9 = uVar5 - 1;
      lVar7 = *(long *)(param_1 + 0x1f0);
      uVar4 = 0;
      do {
        iVar1 = iVar9 + uVar4;
        if (iVar1 < 0 != SCARRY4(iVar9,uVar4)) {
          iVar1 = iVar1 + 1;
        }
        uVar5 = iVar1 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar7 + (long)(int)uVar5 * 8) + 0x20);
        if (uVar2 == uVar3) goto LAB_0079e5b4;
        if (uVar3 < uVar2) {
          uVar4 = uVar5 + 1;
        }
        else {
          iVar9 = uVar5 - 1;
        }
      } while ((int)uVar4 < iVar9);
    }
    uVar5 = uVar4;
    if (uVar2 == *(uint *)(*(long *)(lVar7 + (long)(int)uVar4 * 8) + 0x20)) {
LAB_0079e5b4:
      if (-1 < (int)uVar5) {
        puVar8 = *(uint **)(lVar7 + (ulong)uVar5 * 8);
LAB_0079e5bc:
        uVar5 = *puVar8;
      }
      goto LAB_0079e5c0;
    }
  }
  uVar5 = 0xffffffff;
LAB_0079e5c0:
  if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
    if ((((*(long *)(param_1 + 0xb0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(param_1 + 200) <= uVar5 ||
         (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar5) != '\0')))) &&
       (((uVar5 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      return (ulong)(puVar8[1] * uVar5 + (uint)(ushort)puVar8[2] * 8 + iVar9) + (long)puVar8;
    }
  }
  else if (uVar5 < *(uint *)(param_1 + 0x1c0)) {
    if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
      uVar5 = 0;
    }
    return *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar5 * 8);
  }
  return 0;
}

