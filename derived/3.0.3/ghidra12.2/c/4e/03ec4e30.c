
void FUN_03ec4e30(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined *local_70;
  long lStack_68;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb2020;
  iVar6 = *(int *)(param_1 + 0xa0);
  if (0 < iVar6) {
    uVar9 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar2 = param_3;
      if (*(uint *)(param_2 + 0x130) <= param_3) {
        uVar2 = 0;
      }
      plVar4 = *(long **)(*(long *)(param_2 + 0x138) + (long)(int)uVar2 * 0x78 + 0x30);
      if (plVar4 != (long *)0x0) {
        uVar2 = uVar9;
        if (*(uint *)(param_1 + 0x20) <= uVar9) {
          uVar2 = 0;
        }
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x28);
        piVar5 = (int *)*puVar7;
        lVar8 = *(long *)(puVar7[2] + 8);
        local_44 = 0x80ffff;
        lStack_68 = lVar8 + *piVar5 + (long)*(int *)(lVar8 + 0x24);
        local_70 = puVar1;
        (**(code **)(*plVar4 + 0x48))(plVar4,piVar5,&local_70,&local_44);
        iVar6 = *(int *)(param_1 + 0xa0);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
  iVar6 = *(int *)(param_1 + 0x9c);
  if (0 < iVar6) {
    uVar9 = 0;
    do {
      uVar2 = param_3;
      if (*(uint *)(param_2 + 0x130) <= param_3) {
        uVar2 = 0;
      }
      plVar4 = *(long **)(*(long *)(param_2 + 0x138) + (long)(int)uVar2 * 0x78 + 0x38);
      if (plVar4 != (long *)0x0) {
        uVar2 = uVar9;
        if (*(uint *)(param_1 + 0x10) <= uVar9) {
          uVar2 = 0;
        }
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x20);
        lVar8 = *(long *)(puVar7[2] + 8);
        local_44 = 0x80ffff;
        lStack_68 = lVar8 + *(int *)*puVar7 + (long)*(int *)(lVar8 + 0x24);
        local_70 = puVar3 + 0x10;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_70,&local_44);
        iVar6 = *(int *)(param_1 + 0x9c);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

