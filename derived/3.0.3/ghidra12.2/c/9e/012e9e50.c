
void FUN_012e9e50(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uStack_65;
  uint local_64;
  
  puVar1 = PTR_DAT_04bdf1b8 + 0x10;
  puVar2 = PTR_DAT_04bd0e58 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  uVar8 = 0;
  do {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    local_64 = uVar8;
    if (lVar7 == 0) {
      plVar5 = malloc(0x98);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar7 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
          goto LAB_012e9f1c;
        }
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x98,8);
    }
LAB_012e9f1c:
    *plVar5 = (long)puVar1;
    *(undefined2 *)(plVar5 + 1) = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    *(undefined4 *)(plVar5 + 8) = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xb] = (long)puVar2;
    plVar5[0xc] = 0;
    nn::os::InitializeLightEvent((LightEventType *)(plVar5 + 0xf),0,0);
    plVar5[0x11] = (long)puVar3;
    plVar5[0x12] = (long)PTR_DAT_04bb2120;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 0xf));
    (**(code **)(*plVar5 + 0x20))(plVar5,&uStack_65);
    uVar6 = (ulong)local_64;
    if (0x38 < local_64) {
      uVar6 = 0;
    }
    uVar9 = 0x39;
    if ((int)uVar8 < 0x39) {
      uVar9 = uVar8 + 1;
    }
    *(long **)(param_1 + 8 + uVar6 * 8) = plVar5;
    uVar8 = uVar9;
    if (uVar9 == 0x39) {
      *(undefined4 *)(param_1 + 0x9d0) = 0;
      *(undefined8 *)(param_1 + 0x9c8) = 0;
      *(undefined8 *)(param_1 + 0x9c0) = 0;
      *(undefined8 *)(param_1 + 0x9b8) = 0;
      *(undefined8 *)(param_1 + 0x9b0) = 0;
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      *(undefined8 *)(param_1 + 0x9a0) = 0;
      *(undefined8 *)(param_1 + 0x998) = 0;
      *(undefined8 *)(param_1 + 0x990) = 0;
      *(undefined8 *)(param_1 + 0x988) = 0;
      *(undefined8 *)(param_1 + 0x980) = 0;
      *(undefined8 *)(param_1 + 0x978) = 0;
      *(undefined8 *)(param_1 + 0x970) = 0;
      *(undefined8 *)(param_1 + 0x968) = 0;
      *(undefined8 *)(param_1 + 0x960) = 0;
      *(undefined8 *)(param_1 + 0x958) = 0;
      *(undefined8 *)(param_1 + 0x950) = 0;
      *(undefined8 *)(param_1 + 0x948) = 0;
      *(undefined8 *)(param_1 + 0x940) = 0;
      *(undefined8 *)(param_1 + 0x938) = 0;
      *(undefined8 *)(param_1 + 0x930) = 0;
      *(undefined8 *)(param_1 + 0x928) = 0;
      *(undefined8 *)(param_1 + 0x920) = 0;
      *(undefined8 *)(param_1 + 0x918) = 0;
      *(undefined8 *)(param_1 + 0x910) = 0;
      *(undefined8 *)(param_1 + 0x908) = 0;
      *(undefined8 *)(param_1 + 0x900) = 0;
      *(undefined8 *)(param_1 + 0x8f8) = 0;
      *(undefined8 *)(param_1 + 0x8f0) = 0;
      return;
    }
  } while( true );
}

