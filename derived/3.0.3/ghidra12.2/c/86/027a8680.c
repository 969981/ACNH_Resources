
void FUN_027a8680(long param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar3 = *(ushort *)(param_1 + 800);
  uVar5 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (*(int *)(param_1 + 0x324) == 0) {
      uVar7 = 0;
      do {
        if (*(int *)(param_1 + ((long)((ulong)uVar7 << 0x20) >> 0x1d) + 4) != 0) goto LAB_027a86d8;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 100);
      uVar7 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x324);
        uVar4 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
        *(int *)(param_1 + 0x324) = iVar2 + 1;
        *(int *)(param_1 + ((long)(uVar4 << 0x20) >> 0x1d) + 4) = iVar2;
      } while (uVar7 != 100);
    }
LAB_027a86d8:
    if (99 < uVar3) {
      lVar6 = 0;
      do {
        puVar1 = (undefined4 *)(param_1 + lVar6);
        lVar6 = lVar6 + 8;
        *puVar1 = puVar1[2];
        puVar1[1] = puVar1[3];
      } while (lVar6 != 0x318);
      puVar8 = (ushort *)(param_1 + 0x318);
      uVar5 = 99;
      goto LAB_027a8714;
    }
  }
  *(ushort *)(param_1 + 800) = uVar3 + 1;
  puVar8 = (ushort *)(param_1 + uVar5 * 8);
LAB_027a8714:
  iVar2 = *(int *)(param_1 + 0x324);
  lVar6 = param_1 + uVar5 * 8;
  *(undefined2 *)(lVar6 + 2) = param_2;
  *(int *)(param_1 + 0x324) = iVar2 + 1;
  uVar3 = *puVar8;
  *(int *)(lVar6 + 4) = iVar2;
  *puVar8 = uVar3 | 3;
  return;
}

