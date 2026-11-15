
void FUN_01faaf40(undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *puStack_50;
  undefined8 local_48;
  
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  if (*param_2 != 0) {
    lVar8 = (long)*param_2 << 3;
    plVar7 = *(long **)(param_2 + 2);
    puVar2 = PTR_DAT_04bb2e18 + 0x10;
    puStack_60 = puVar1;
    puStack_50 = puVar1;
    do {
      lVar9 = *plVar7;
      local_48 = *(undefined8 *)(lVar9 + 8);
      _local_58 = CONCAT44(*(int *)(lVar9 + 0xc) + -1,*(int *)(lVar9 + 8) + -1);
      uVar4 = FUN_01faa820(*param_1,&local_68);
      if (((uVar4 & 1) != 0) && (piVar5 = (int *)param_1[1], *piVar5 < piVar5[1])) {
        plVar6 = *(long **)(piVar5 + 4);
        if (plVar6 != (long *)0x0) {
          *(long *)(piVar5 + 4) = *plVar6;
        }
        *plVar6 = (long)puVar2;
        *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(lVar9 + 8);
        uVar3 = *(undefined4 *)(lVar9 + 0xc);
        *plVar6 = (long)puVar1;
        *(undefined4 *)((long)plVar6 + 0xc) = uVar3;
        if (*piVar5 < piVar5[1]) {
          *(long **)(*(long *)(piVar5 + 2) + (long)*piVar5 * 8) = plVar6;
          *piVar5 = *piVar5 + 1;
        }
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}

