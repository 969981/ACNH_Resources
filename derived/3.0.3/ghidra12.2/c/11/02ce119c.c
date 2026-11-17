
void FUN_02ce119c(long param_1,int param_2)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar6 = DAT_0558600c;
  uVar5 = DAT_0558600b;
  uVar4 = DAT_0558600a;
  uVar3 = DAT_05586008;
  *(undefined1 *)(param_1 + 0x23) = DAT_0558600b;
  *(undefined1 *)(param_1 + 0x2b) = uVar5;
  *(undefined1 *)(param_1 + 0x33) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined2 *)(param_1 + 0x20) = uVar3;
  *(undefined1 *)(param_1 + 0x22) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined2 *)(param_1 + 0x28) = uVar3;
  *(undefined1 *)(param_1 + 0x2a) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  *(undefined1 *)(param_1 + 0x32) = uVar4;
  puVar2 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  if (param_2 == 0x1d) {
    uVar9 = 0;
  }
  else if (param_2 == 0x20) {
    uVar9 = 2;
  }
  else {
    if (param_2 != 0x1f) {
      return;
    }
    uVar9 = 1;
  }
  if ((*(int *)(param_1 + 0x40) == 1) && (uVar9 != 1)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x44) >> (ulong)uVar9 & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x60) >> (ulong)uVar9 & 1) == 0) {
    puVar1 = (undefined2 *)(param_1 + 8);
    puVar8 = puVar1 + (ulong)uVar9 * 4;
    if (2 < uVar9) {
      puVar8 = puVar1;
    }
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(puVar8);
    if (*(long *)puVar2 == 0) goto LAB_02ce12ac;
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02ce12ac;
    puVar8 = puVar1 + (ulong)uVar9 * 4;
    if (2 < uVar9) {
      puVar8 = puVar1;
    }
  }
  else {
    puVar8 = (undefined2 *)(param_1 + 0x48) + (ulong)uVar9 * 4;
    if (2 < uVar9) {
      puVar8 = (undefined2 *)(param_1 + 0x48);
    }
  }
  *(undefined2 *)(param_1 + 0x20) = *puVar8;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(puVar8 + 1);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)((long)puVar8 + 3);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)(param_1 + 0x38) = 1;
LAB_02ce12ac:
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

