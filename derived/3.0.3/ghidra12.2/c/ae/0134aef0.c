
void FUN_0134aef0(uint *param_1,uint param_2,long param_3,undefined2 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  uint local_68;
  
  puVar5 = PTR_PTR_04bb2238;
  puVar4 = PTR_DAT_04bb2020;
  uVar3 = *param_1;
  iVar8 = param_2 - uVar3;
  if ((int)param_2 < (int)uVar3) {
    if (param_2 < uVar3 || iVar8 == 0) {
      lVar7 = (long)(int)param_2;
      do {
        puVar6 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar7 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + 1;
        *puVar6 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar6;
      } while (lVar7 < (int)*param_1);
      *param_1 = param_2;
    }
  }
  else if (iVar8 != 0 && (int)uVar3 <= (int)param_2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    do {
      local_90 = *(long *)(param_3 + 8);
      uStack_80 = *(undefined8 *)(puVar5 + 8);
      local_68 = *(uint *)(param_3 + 0x20);
      plVar9 = *(long **)(param_1 + 4);
      if (plVar9 != (long *)0x0) {
        *(long *)(param_1 + 4) = *plVar9;
      }
      *plVar9 = (long)puVar2;
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      (**(code **)(puVar4 + 0x28))(&local_98);
      plVar9[3] = 0;
      plVar9[1] = local_90;
      plVar9[2] = 0;
      plVar9[5] = 0;
      *(undefined2 *)((long)plVar9 + 0x24) = param_4;
      if ((local_68 >> 7 & 1) == 0) {
        *(undefined2 *)(plVar9 + 5) = param_4;
      }
      local_68 = local_68 & 0xfeffffff;
      *plVar9 = (long)&PTR_LAB_04992058;
      *(uint *)(plVar9 + 4) = local_68;
      if ((int)*param_1 < (int)param_1[1]) {
        *(long **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = plVar9;
        *param_1 = *param_1 + 1;
        local_68 = *(uint *)(plVar9 + 4);
      }
      iVar8 = iVar8 + -1;
      *(uint *)(plVar9 + 4) = local_68 & 0xfffffffc;
    } while (iVar8 != 0);
  }
  return;
}

