
void FUN_0388f350(long param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  FUN_0388d320();
  iVar3 = *param_2;
  if (iVar3 != 0) {
    lVar5 = *(long *)(param_2 + 2);
    uVar7 = 0;
    iVar9 = 0;
    if (param_3 < 0) {
      do {
        iVar1 = iVar9 + 1;
        uVar2 = uVar7;
        if (*(uint *)(param_1 + 0x168) <= uVar7) {
          uVar2 = 0;
        }
        uVar7 = uVar7 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x170) + (ulong)uVar2) = *(undefined1 *)(lVar5 + iVar9);
        iVar9 = iVar1;
      } while (iVar3 != iVar1);
    }
    else {
      if (param_3 < 2) {
        param_3 = 1;
      }
      do {
        uVar2 = uVar7;
        if (*(uint *)(param_1 + 0x168) <= uVar7) {
          uVar2 = 0;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x170) + (ulong)uVar2) = *(undefined1 *)(lVar5 + iVar9);
        if (param_3 - 1U == uVar7) break;
        iVar9 = iVar9 + 1;
        uVar7 = uVar7 + 1;
      } while (iVar3 != iVar9);
    }
  }
  puVar4 = PTR_DAT_04bcb7d8;
  FUN_03892740(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x90) + 0xc0),param_1 + 0x168);
  lVar5 = *(long *)puVar4;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined1 *)(*(long *)(*(long *)(lVar5 + 0x90) + 0xc0) + 0x560) = 1;
  FUN_0388d4f0(param_1);
  lVar5 = *(long *)(*(long *)puVar4 + 0x68);
  uVar6 = (ulong)*(uint *)(lVar5 + 0xa0);
  if (0 < (int)*(uint *)(lVar5 + 0xa0)) {
    puVar8 = *(undefined8 **)(lVar5 + 0xa8);
    do {
      if (*(char *)*puVar8 == -2) {
        puVar8 = (undefined8 *)*puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          uVar7 = *(uint *)((long)puVar8 + 4) | 2;
          goto LAB_0388f4d4;
        }
        break;
      }
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar8 = *(undefined8 **)(lVar5 + 0xb0);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar5 + 0xb0) = *puVar8;
  }
  *puVar8 = 0;
  if (*(int *)(lVar5 + 0xa0) < *(int *)(lVar5 + 0xa4)) {
    *(undefined8 **)(*(long *)(lVar5 + 0xa8) + (long)*(int *)(lVar5 + 0xa0) * 8) = puVar8;
    *(int *)(lVar5 + 0xa0) = *(int *)(lVar5 + 0xa0) + 1;
    uVar7 = *(uint *)((long)puVar8 + 4) | 2;
  }
  else {
    uVar7 = 2;
  }
  *(undefined1 *)puVar8 = 0xfe;
LAB_0388f4d4:
  *(uint *)((long)puVar8 + 4) = uVar7;
  return;
}

