
void FUN_03eab510(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    lVar5 = 1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar6;
  }
  FUN_03eab368(param_1,param_2);
  if (0 < (int)param_4) {
    uVar4 = (ulong)param_4;
    do {
      uVar7 = *param_3;
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 == 0) {
        lVar2 = 1;
      }
      else {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
        lVar2 = *(long *)(lVar3 + 0xa8);
        *(long *)(lVar3 + 0xa8) = lVar6;
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x4c) * 8) +
                  0xb8))(uVar7);
      if (lVar2 != 1) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
        *(long *)(lVar6 + 0xa8) = lVar2;
      }
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
  if (lVar5 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar5;
  }
  return;
}

