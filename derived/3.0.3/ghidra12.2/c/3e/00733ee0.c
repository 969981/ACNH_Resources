
void FUN_00733ee0(uint *param_1,uint param_2,long param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  uint local_68;
  
  puVar6 = PTR_PTR_04bb2238;
  puVar5 = PTR_DAT_04bb2020;
  uVar3 = *param_1;
  iVar8 = param_2 - uVar3;
  if ((int)param_2 < (int)uVar3) {
    if (param_2 < uVar3 || iVar8 == 0) {
      lVar9 = (long)(int)param_2;
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar9 * 8);
        (**(code **)*puVar7)(puVar7);
        lVar9 = lVar9 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar7;
      } while (lVar9 < (int)*param_1);
      *param_1 = param_2;
    }
  }
  else if (iVar8 != 0 && (int)uVar3 <= (int)param_2) {
    uVar4 = *param_4;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    do {
      local_90 = *(long *)(param_3 + 8);
      uStack_80 = *(undefined8 *)(puVar6 + 8);
      local_68 = *(uint *)(param_3 + 0x20);
      plVar10 = *(long **)(param_1 + 4);
      if (plVar10 != (long *)0x0) {
        *(long *)(param_1 + 4) = *plVar10;
      }
      *plVar10 = (long)puVar2;
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      (**(code **)(puVar5 + 0x28))(&local_98);
      plVar10[3] = 0;
      plVar10[1] = local_90;
      plVar10[2] = 0;
      plVar10[5] = 0;
      *(undefined4 *)((long)plVar10 + 0x24) = uVar4;
      if ((local_68 >> 7 & 1) == 0) {
        *(undefined4 *)(plVar10 + 5) = uVar4;
      }
      local_68 = local_68 & 0xfeffffff;
      *plVar10 = (long)&PTR_LAB_04902430;
      *(uint *)(plVar10 + 4) = local_68;
      if ((int)*param_1 < (int)param_1[1]) {
        *(long **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = plVar10;
        *param_1 = *param_1 + 1;
        local_68 = *(uint *)(plVar10 + 4);
      }
      iVar8 = iVar8 + -1;
      *(uint *)(plVar10 + 4) = local_68 & 0xfffffffc;
    } while (iVar8 != 0);
  }
  return;
}

