
void FUN_03eab630(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    lVar7 = 1;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar8;
  }
  FUN_03eab368(param_1,param_2);
  uVar1 = *(undefined1 *)(param_3 + 0x10);
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    lVar3 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar3 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x4c) * 8);
  (**(code **)(*plVar5 + 0xa8))(plVar5,uVar1);
  if (lVar3 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar3;
  }
  FUN_03eab0ac(param_1);
  if (*(char *)(param_3 + 0x13) != '\0') {
    uVar6 = 0;
    do {
      lVar8 = *(long *)(param_1 + 8);
      uVar9 = *(undefined4 *)(*(long *)(param_3 + 8) + uVar6 * 4);
      if (lVar8 == 0) {
        lVar3 = 1;
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        lVar3 = *(long *)(lVar4 + 0xa8);
        *(long *)(lVar4 + 0xa8) = lVar8;
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x4c) * 8) +
                  0xb8))(uVar9);
      if (lVar3 != 1) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        *(long *)(lVar8 + 0xa8) = lVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_3 + 0x13));
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -2;
  if (lVar7 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar7;
  }
  return;
}

