
undefined8 FUN_03efced0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  
  (**(code **)(*param_1 + 0x48))();
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  uVar3 = (ulong)*(uint *)(param_1 + 0xf);
  if (0 < (int)*(uint *)(param_1 + 0xf)) {
    puVar4 = (undefined8 *)param_1[0x10];
    uVar5 = uVar3;
    puVar6 = puVar4;
    do {
      puVar8 = (undefined8 *)*puVar6;
      if (puVar8[1] == lVar2) {
        puVar9 = (uint *)(puVar8 + 2);
        if ((*puVar9 | 2) == 2) goto LAB_03efcf94;
        uVar7 = 0;
        if (param_2 == (undefined8 *)0x0) goto LAB_03efcff8;
        goto LAB_03efcff4;
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    do {
      puVar8 = (undefined8 *)*puVar4;
      if ((puVar8[1] == 0) && (*(int *)(puVar8 + 2) == 0)) {
        puVar9 = (uint *)(puVar8 + 2);
LAB_03efcf94:
        uVar7 = *puVar8;
        (**(code **)(*(long *)(lVar2 + 0x20) + 0x18))();
        if (*(int *)(puVar8 + 2) != 1) {
          uVar1 = 2;
          if (*(int *)(puVar8 + 2) == 0) {
            uVar1 = 3;
          }
          (**(code **)(*(long *)param_1[0xd] + 0x20))
                    ((long *)param_1[0xd],uVar7,*(undefined8 *)(lVar2 + 0x28),uVar1);
          FUN_00442f50(uVar7);
          *puVar9 = 1;
        }
        puVar8[1] = lVar2;
        uVar7 = 1;
        if (param_2 != (undefined8 *)0x0) {
LAB_03efcff4:
          *param_2 = puVar8;
        }
        goto LAB_03efcff8;
      }
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar7 = 0;
LAB_03efcff8:
  (**(code **)(*param_1 + 0x50))(param_1);
  return uVar7;
}

