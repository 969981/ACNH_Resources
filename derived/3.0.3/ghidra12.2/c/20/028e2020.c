
void FUN_028e2020(undefined8 *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined *local_70;
  undefined1 *local_68;
  
  lVar8 = *(long *)PTR_DAT_04bb30a0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = &DAT_0409624f;
  if (0 < *(int *)(lVar8 + 0x653a0)) {
    uVar7 = 0;
    uVar9 = 0;
    do {
      if (uVar7 < *(uint *)(lVar8 + 0x100)) {
        lVar3 = *(long *)(*(long *)(lVar8 + 0x108) + (long)(int)uVar7 * 8);
      }
      else {
        lVar3 = 0;
      }
      plVar4 = (long *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))();
      (**(code **)(local_70 + 0x18))(&local_70);
      (**(code **)(local_70 + 0x18))(&local_70);
      puVar1 = local_68;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      puVar5 = (undefined1 *)plVar4[1];
      if (puVar1 == puVar5) goto LAB_028e21a0;
      uVar6 = 0;
      bVar2 = true;
      do {
        if (local_68[uVar6] != puVar5[uVar6]) break;
        if (local_68[uVar6] == '\0') {
          if (bVar2) goto LAB_028e21a0;
          break;
        }
        if (local_68[uVar6 + 1] != puVar5[uVar6 + 1]) break;
        if (local_68[uVar6 + 1] == '\0') goto LAB_028e21a0;
        if (local_68[uVar6 + 2] != puVar5[uVar6 + 2]) break;
        if (local_68[uVar6 + 2] == '\0') goto LAB_028e21a0;
        bVar2 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      uVar9 = uVar9 + 1;
      uVar7 = uVar9 & 0xff;
    } while ((int)uVar7 < *(int *)(lVar8 + 0x653a0));
  }
  uVar7 = 0;
LAB_028e21a0:
  *param_1 = 0x5010807e4;
  *(uint *)(param_1 + 1) = uVar7;
  *(uint *)((long)param_1 + 0xc) = uVar7;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(uint *)(param_1 + 2) = uVar7;
  *(undefined4 *)(param_1 + 0x29) = 0x34;
  FUN_028deee0(param_1);
  FUN_028db6f0(param_1);
  FUN_028dcb50(param_1);
  *(undefined2 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)((long)param_1 + 0x146) = 0;
  return;
}

