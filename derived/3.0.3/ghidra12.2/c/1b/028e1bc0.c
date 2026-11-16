
void FUN_028e1bc0(ulong *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined *local_78;
  undefined1 *local_70;
  uint local_64;
  
  puVar1 = PTR_DAT_04bb59d8;
  uVar4 = FUN_0375f318(*(undefined8 *)PTR_DAT_04bb59d8);
  iVar5 = FUN_0375f4d8(*(undefined8 *)puVar1);
  lVar10 = *(long *)PTR_DAT_04bb30a0;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = &DAT_04068b4c;
  if (0 < *(int *)(lVar10 + 0x653a0)) {
    uVar11 = 0;
    uVar12 = 0;
    do {
      if (uVar11 < *(uint *)(lVar10 + 0x100)) {
        lVar6 = *(long *)(*(long *)(lVar10 + 0x108) + (long)(int)uVar11 * 8);
      }
      else {
        lVar6 = 0;
      }
      local_64 = uVar11;
      plVar7 = (long *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
      (**(code **)(local_78 + 0x18))(&local_78);
      (**(code **)(local_78 + 0x18))(&local_78);
      puVar2 = local_70;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      puVar8 = (undefined1 *)plVar7[1];
      if (puVar2 == puVar8) goto LAB_028e1d60;
      uVar9 = 0;
      bVar3 = true;
      do {
        if (local_70[uVar9] != puVar8[uVar9]) break;
        if (local_70[uVar9] == '\0') {
          if (bVar3) goto LAB_028e1d60;
          break;
        }
        if (local_70[uVar9 + 1] != puVar8[uVar9 + 1]) break;
        if (local_70[uVar9 + 1] == '\0') goto LAB_028e1d60;
        if (local_70[uVar9 + 2] != puVar8[uVar9 + 2]) break;
        if (local_70[uVar9 + 2] == '\0') goto LAB_028e1d60;
        bVar3 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      uVar12 = uVar12 + 1;
      uVar11 = uVar12 & 0xff;
    } while ((int)uVar11 < *(int *)(lVar10 + 0x653a0));
  }
  uVar11 = 0;
LAB_028e1d60:
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(uint *)(param_1 + 1) = uVar11;
  *(uint *)((long)param_1 + 0xc) = uVar11;
  *(uint *)(param_1 + 2) = uVar11;
  *(undefined4 *)(param_1 + 0x29) = 0x34;
  *param_1 = (ulong)((uVar4 & 0xff) << 0x10 | iVar5 << 0x18) | 0x5000007e4;
  local_64 = uVar11;
  FUN_028e0100(param_1);
  FUN_028e03f0(param_1);
  FUN_028e0bb0(param_1);
  FUN_028e0eb0(param_1);
  FUN_028e10f0(param_1);
  FUN_028e1320(param_1);
  *(undefined1 *)((long)param_1 + 0x146) = 0;
  return;
}

