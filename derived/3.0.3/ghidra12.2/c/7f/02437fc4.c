
void FUN_02437fc4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  
  puVar4 = PTR_DAT_04bb47c0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "GymnasticsActionNum";
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x78), lVar7 != 0)) &&
     (plVar5 = *(long **)(lVar7 + 0x48), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))
              (plVar5,&local_30,*(undefined4 *)(*(long *)PTR_DAT_04bb47c0 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x225d) = 0;
  if (*(int *)(param_1 + 0x2260) < 1) {
    puVar6 = (uint *)(**(code **)(*(long *)(*(long *)(*(long *)puVar4 + 0x48) + 0x2a68) + 0xf0))
                               (*(long *)(*(long *)puVar4 + 0x48) + 0x2a68);
    uVar3 = *puVar6;
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar6 ^ *puVar6 << 0xb;
    uVar2 = puVar6[3];
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar6[2] = uVar2;
    puVar6[3] = uVar1;
    *(int *)(param_1 + 0x2260) = (int)((ulong)uVar3 * (ulong)uVar1 >> 0x20);
  }
  FUN_023164ec(param_1,6);
  return;
}

