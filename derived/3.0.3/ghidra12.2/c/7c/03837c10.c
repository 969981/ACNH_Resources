
void FUN_03837c10(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  if (*(long **)(param_2 + 0x10) != (long *)0x0) {
    lVar6 = **(long **)(param_2 + 0x10);
    if ((param_1 < 0.0) || (param_1 < 44100.0)) {
      (**(code **)(lVar6 + 0x150))();
      uVar4 = (**(code **)(**(long **)(param_2 + 0x10) + 0x158))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar5 = 2;
    }
    else {
      (**(code **)(lVar6 + 0x160))();
      puVar1 = PTR_DAT_04bb3350;
      lVar6 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        lVar7 = 1;
        plVar3 = *(long **)(param_2 + 0x10);
      }
      else {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)(lVar2 + 0xa8);
        *(long *)(lVar2 + 0xa8) = lVar6;
        plVar3 = *(long **)(param_2 + 0x10);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xb0))();
      }
      if (lVar7 != 1) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
        *(long *)(lVar6 + 0xa8) = lVar7;
      }
      *(undefined8 *)(param_2 + 0x10) = 0;
      (**(code **)(**(long **)(param_2 + 0x18) + 0x20))();
      uVar5 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    *(undefined4 *)(param_2 + 4) = uVar5;
  }
  return;
}

