
void FUN_008134e0(long param_1,undefined8 param_2)

{
  void *__src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  FUN_02582a24(param_2);
  uVar1 = FUN_02582d8c(param_2,1);
  if (((uVar1 < 8) &&
      (lVar4 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0, *(char *)(lVar4 + 0x13d4) != '\0')
      ) && (*(int *)(lVar4 + 0x13d0) == 0)) {
    uVar2 = (uint)*(byte *)(lVar4 + 0x13d5);
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  else {
    uVar2 = 0xffffffff;
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  if (uVar1 != 0) {
    lVar4 = (long)(int)uVar1 << 3;
    puVar9 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar8 = (uint *)*puVar9;
      if (*puVar8 == uVar2) goto LAB_00813570;
      puVar9 = puVar9 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    puVar8 = (uint *)0x0;
LAB_00813570:
    if (0 < (int)uVar1) {
      uVar5 = 0;
      lVar4 = 8;
      lVar10 = 0x100000000;
      do {
        if ((uint *)(*(undefined8 **)(param_1 + 0x40))[uVar5] == puVar8) {
          iVar3 = (int)uVar5;
          if (iVar3 == -1) {
            return;
          }
          if (iVar3 < (int)uVar1) {
            uVar7 = uVar5;
            puVar9 = *(undefined8 **)(param_1 + 0x48);
            do {
              puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x40) + uVar7 * 8);
              uVar7 = uVar7 + 1;
              *puVar11 = puVar9;
              *(undefined8 **)(param_1 + 0x48) = puVar11;
              puVar9 = puVar11;
            } while ((long)uVar7 < lVar10 >> 0x20);
          }
          if (iVar3 < 0) {
            return;
          }
          iVar6 = *(int *)(param_1 + 0x38);
          if (iVar6 <= iVar3) {
            return;
          }
          if (iVar3 + 1 < iVar6) {
            __src = (void *)(*(long *)(param_1 + 0x40) + lVar4);
            memmove((void *)((long)__src + -8),__src,((long)iVar6 - uVar5) * 8 - 8);
            iVar6 = *(int *)(param_1 + 0x38);
          }
          *(int *)(param_1 + 0x38) = iVar6 + -1;
          return;
        }
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 0x100000000;
        lVar4 = lVar4 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return;
}

