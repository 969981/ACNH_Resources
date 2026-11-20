
void FUN_03ee3da0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_70;
  undefined8 *puStack_68;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + 0x240);
  if (0 < (int)uVar3) {
    uVar9 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      puVar5 = &DAT_0407ebb1;
      if (uVar9 < *(uint *)(*(long *)(param_1 + 0x28) + 0x250)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 600) + uVar9 * 0x28;
        plVar7 = (long *)(lVar6 + 0x18);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        puVar5 = *(undefined8 **)(lVar6 + 0x20);
      }
      lVar6 = *(long *)(param_2 + 0x10);
      local_70 = puVar1;
      puStack_68 = puVar5;
      if (((lVar6 != 0) && (*(long *)(param_2 + 0x30) != 0)) && (*(int *)(lVar6 + 0x30) != 0)) {
        lVar10 = *(long *)(lVar6 + 0x38);
        lVar8 = 0;
        lVar6 = (long)*(int *)(lVar6 + 0x30) << 3;
        do {
          plVar7 = (long *)**(undefined8 **)(lVar10 + lVar8 * 8);
          iVar4 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_70);
          if (iVar4 != -1) {
            if (((((uint)lVar8 ^ 0xffffffff) & 0xffff) != 0) && (iVar4 * 0x10000 != -0x10000)) {
              uVar2 = iVar4 * 0x10000 >> 0x10;
              if (*(uint *)(param_2 + 0x28) <= uVar2) {
                uVar2 = 0;
              }
              *(undefined1 *)(*(long *)(param_2 + 0x30) + (long)(int)uVar2) = 1;
            }
            break;
          }
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  return;
}

