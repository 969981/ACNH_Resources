
void FUN_0390e640(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  
  puVar5 = PTR_DAT_04bcfc60;
  lVar1 = param_1 + 0x160;
  (**(code **)PTR_DAT_04bcfc60)();
  puVar6 = PTR_DAT_04bcfc88;
  (**(code **)PTR_DAT_04bcfc88)(lVar1);
  (**(code **)puVar5)(param_1 + 0x120);
  (**(code **)puVar6)(param_1 + 0x168);
  (**(code **)puVar5)(param_1 + 0x124);
  (**(code **)puVar6)(param_1 + 0x170);
  (**(code **)puVar5)(param_1 + 0x128);
  (**(code **)puVar6)(param_1 + 0x178);
  (**(code **)puVar5)(param_1 + 300);
  (**(code **)puVar6)(param_1 + 0x180);
  (**(code **)puVar5)(param_1 + 0x130);
  (**(code **)puVar6)(param_1 + 0x188);
  (**(code **)puVar5)(param_1 + 0x134);
  (**(code **)puVar6)(param_1 + 400);
  (**(code **)puVar5)(param_1 + 0x138);
  (**(code **)puVar6)(param_1 + 0x198);
  (**(code **)puVar5)(param_1 + 0x13c);
  (**(code **)puVar6)(param_1 + 0x1a0);
  (**(code **)puVar5)(param_1 + 0x140);
  (**(code **)puVar6)(param_1 + 0x1a8);
  (**(code **)puVar5)(param_1 + 0x144);
  (**(code **)puVar6)(param_1 + 0x1b0);
  (**(code **)puVar5)(param_1 + 0x148);
  (**(code **)puVar6)(param_1 + 0x1b8);
  (**(code **)puVar5)(param_1 + 0x14c);
  (**(code **)puVar6)(param_1 + 0x1c0);
  (**(code **)puVar5)(param_1 + 0x150);
  (**(code **)puVar6)(param_1 + 0x1c8);
  (**(code **)puVar5)(param_1 + 0x154);
  (**(code **)puVar6)(param_1 + 0x1d0);
  (**(code **)puVar5)(param_1 + 0x158);
  (**(code **)puVar6)(param_1 + 0x1d8);
  puVar6 = PTR_DAT_04bcfc70;
  puVar5 = PTR_DAT_04bcfc68;
  uVar11 = 0;
  do {
    lVar8 = *(long *)(param_1 + 8 + (-(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4));
    iVar10 = (int)uVar11;
    if (lVar8 != 0) {
      puVar2 = (undefined4 *)(lVar8 + 0x38);
      lVar8 = param_1 + 8 + (long)iVar10 * 0x10;
      lVar9 = param_1 + 0x11c + (long)iVar10 * 4;
      puVar4 = puVar2 + (ulong)(uint)(int)*(char *)(lVar8 + 8) * 3;
      if (0xf < (uint)(int)*(char *)(lVar8 + 8)) {
        puVar4 = puVar2;
      }
      (**(code **)puVar5)(lVar9,*puVar4,puVar4[1]);
      (**(code **)puVar6)(lVar9,(long)*(char *)(lVar8 + 9));
      puVar4 = puVar2 + (ulong)(uint)(int)*(char *)(lVar8 + 8) * 3;
      if (0xf < (uint)(int)*(char *)(lVar8 + 8)) {
        puVar4 = puVar2;
      }
      if (*(char *)((long)puVar4 + 9) != '\0') {
        (**(code **)PTR_DAT_04bcfc98)(lVar1 + (long)*(char *)(lVar8 + 9) * 8,1);
      }
    }
    puVar7 = PTR_DAT_04bcfc90;
    uVar11 = (ulong)(iVar10 + 1U);
  } while (iVar10 + 1U != 0x10);
  iVar10 = *(int *)(param_1 + 0x108);
  if (iVar10 != 0) {
    lVar8 = *(long *)(param_1 + 0x110);
    uVar11 = 0;
    do {
      lVar9 = *(long *)(lVar8 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
      if (lVar9 != 0) {
        (**(code **)puVar7)(lVar1 + (long)(int)uVar11 * 8,*(undefined4 *)(lVar9 + 0x110));
      }
      uVar3 = uVar11 + 1;
      uVar11 = uVar3 & 0xffffffff;
    } while (iVar10 != (int)uVar3);
  }
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
  return;
}

