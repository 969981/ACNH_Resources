
void FUN_03890940(long param_1,undefined1 *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 local_48 [4];
  char local_44 [4];
  
  lVar8 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x18);
  plVar7 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  if (0 < *(int *)(param_2 + 8)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_2 + 0x18);
    do {
      puVar6 = *(undefined8 **)(*(long *)(param_2 + 0x10) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar6 = puVar4;
      *(undefined8 **)(param_2 + 0x18) = puVar6;
      puVar4 = puVar6;
    } while (lVar3 < *(int *)(param_2 + 8));
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(char *)(lVar8 + 0x121) == '\0') {
    uVar11 = 1;
  }
  else {
    local_44[0] = *(char *)(param_1 + 0x18);
    uVar9 = 0;
    uVar10 = 1;
    do {
      uVar2 = (**(code **)(*plVar7 + 0x238))(plVar7,local_44);
      if ((uVar2 & 1) == 0) {
        local_44[0] = (**(code **)(*plVar7 + 0x1c8))(plVar7,&DAT_0419944c,0);
        *(char *)(param_1 + 0x18) = local_44[0];
        uVar2 = (**(code **)(*plVar7 + 0x238))(plVar7,local_44);
        uVar11 = 0;
        if ((uVar2 & 1) != 0) goto LAB_03890a94;
      }
      else {
LAB_03890a94:
        uVar2 = (**(code **)(*plVar7 + 0x218))(plVar7,local_44);
        if ((uVar2 & 1) == 0) {
          lVar3 = (**(code **)(*plVar7 + 0x180))(plVar7,local_44);
        }
        else {
          lVar3 = (**(code **)(*plVar7 + 0x198))(plVar7);
        }
        uVar2 = (ulong)*(uint *)(param_2 + 8);
        if ((int)*(uint *)(param_2 + 8) < 1) {
          bVar1 = true;
          plVar5 = *(long **)(param_2 + 0x18);
        }
        else {
          puVar4 = *(undefined8 **)(param_2 + 0x10);
          do {
            uVar2 = uVar2 - 1;
            bVar1 = *(long *)*puVar4 != lVar3;
            if (*(long *)*puVar4 == lVar3) break;
            puVar4 = puVar4 + 1;
          } while (uVar2 != 0);
          plVar5 = *(long **)(param_2 + 0x18);
        }
        if (plVar5 != (long *)0x0) {
          *(long *)(param_2 + 0x18) = *plVar5;
        }
        *plVar5 = 0;
        if (*(int *)(param_2 + 8) < *(int *)(param_2 + 0xc)) {
          *(long **)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 8) * 8) = plVar5;
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        }
        if (!bVar1) {
          lVar3 = 0;
        }
        *plVar5 = lVar3;
        *(ulong *)(param_1 + 0x20) = 1L << ((long)local_44[0] & 0x3fU) | *(ulong *)(param_1 + 0x20);
        uVar11 = uVar10;
      }
      local_48[0] = *(undefined1 *)(param_1 + 0x18);
      local_44[0] = (**(code **)(*plVar7 + 0x1c8))(plVar7,local_48,0);
      *(char *)(param_1 + 0x18) = local_44[0];
      uVar9 = uVar9 + 1;
      uVar10 = uVar11;
    } while (uVar9 < *(byte *)(lVar8 + 0x121));
  }
  *param_2 = uVar11;
  return;
}

