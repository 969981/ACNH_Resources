
void FUN_037e5fd0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar1 = FUN_006bd550(param_2[1],0);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(8);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    puVar4 = (undefined8 *)0x0;
    if (plVar3 == (long *)0x0) goto LAB_037e6068;
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,8,8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_LAB_04b53780;
  }
LAB_037e6068:
  plVar3 = (long *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar5;
    }
    *(uint *)(puVar5 + 4) = uVar1;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &PTR_LAB_04b535a0;
    puVar5[1] = 0;
    puVar5[5] = puVar4;
    puVar5[6] = plVar3;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    lVar6 = FUN_028c13b8(plVar3,*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 1;
  }
  else {
    while (lVar6 = *plVar3, lVar6 != 0) {
      while (*(uint *)(lVar6 + 0x20) <= uVar1) {
        if (uVar1 <= *(uint *)(lVar6 + 0x20)) {
          *(undefined8 **)(lVar6 + 0x28) = puVar4;
          return;
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
      }
      plVar3 = (long *)(lVar6 + 8);
    }
  }
  return;
}

