
void FUN_0382b080(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar7 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar6;
  }
  FUN_02a04570(param_1 + 0xed0);
  FUN_02a04570(param_1 + 0xf90);
  FUN_02a04570(param_1 + 0x1050);
  FUN_02a04570(param_1 + 0x1110);
  FUN_02a04570(param_1 + 0x11d0);
  FUN_02a04570(param_1 + 0x1290);
  FUN_02a04570(param_1 + 0x1350);
  FUN_02a04570(param_1 + 0x1410);
  FUN_02a04570(param_1 + 0x14d0);
  FUN_02a04570(param_1 + 0x800);
  FUN_02a04570(param_1 + 0x8c0);
  FUN_02a04570(param_1 + 0x980);
  FUN_02a04570(param_1 + 0xa40);
  FUN_02a04570(param_1 + 0xb00);
  FUN_02a04570(param_1 + 0xbc0);
  FUN_02a04570(param_1 + 0xc80);
  FUN_02a04570(param_1 + 0xd40);
  FUN_02a04570(param_1 + 0xe00);
  *(byte *)(param_1 + 0x7a8) = *(byte *)(param_1 + 0x7a8) & 0xfd;
  FUN_03f45838(param_1 + 0x7b8);
  puVar2 = PTR_DAT_04bcb3d8;
  if (*(long *)(param_1 + 0x7b0) != 0) {
    *(byte *)(param_1 + 0x7a8) = *(byte *)(param_1 + 0x7a8) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x7b0),1);
    *(undefined8 *)(param_1 + 0x7b0) = 0;
  }
  FUN_02a04570(param_1 + 0x680);
  FUN_02a04570(param_1 + 0x558);
  *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) & 0xfd;
  FUN_03f45838(param_1 + 0x2a8);
  if (*(long *)(param_1 + 0x2a0) != 0) {
    *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x2a0),1);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  puVar3 = DAT_05ae0398;
  if (DAT_05ae0398 != (undefined8 *)0x0) {
    DAT_05ae0398 = (undefined8 *)0x0;
    (**(code **)*puVar3)();
    puVar3 = DAT_05ae03a0;
    if (DAT_05ae03a0 != (undefined8 *)0x0) {
      *DAT_05ae03a0 = &PTR_FUN_04a99468;
      if (DAT_05ae7600 == 0) {
        free(puVar3);
      }
      else {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,puVar3);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar3);
        }
      }
    }
    DAT_05ae03a0 = (undefined8 *)0x0;
  }
  *(byte *)(param_1 + 0x268) = *(byte *)(param_1 + 0x268) & 0xfd;
  FUN_03f45838(param_1 + 0x278);
  if (*(long *)(param_1 + 0x270) != 0) {
    *(byte *)(param_1 + 0x268) = *(byte *)(param_1 + 0x268) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x270),1);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  FUN_02a04570(param_1 + 0x148);
  *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfd;
  FUN_03f45838(param_1 + 0x248);
  if (*(long *)(param_1 + 0x240) != 0) {
    *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x240),1);
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  FUN_02a04570(param_1 + 0x478);
  *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) & 0xfd;
  FUN_03f45838(param_1 + 0x218);
  if (*(long *)(param_1 + 0x210) != 0) {
    *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x210),1);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  puVar3 = DAT_05ade028;
  if (DAT_05ade028 != (undefined8 *)0x0) {
    DAT_05ade028 = (undefined8 *)0x0;
    (**(code **)*puVar3)();
    puVar3 = DAT_05ade040;
    if (DAT_05ade040 != (undefined8 *)0x0) {
      FUN_038e1a84(DAT_05ade040 + 0x1c);
      *puVar3 = &PTR_FUN_04a99468;
      if (DAT_05ae7600 == 0) {
        free(puVar3);
      }
      else {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,puVar3);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar3);
        }
      }
    }
    DAT_05ade040 = (undefined8 *)0x0;
  }
  FUN_02a04570(param_1 + 0x3a0);
  FUN_02a04570(param_1 + 0x2c8);
  FUN_02a04570(param_1 + 0xa0);
  FUN_02a060d0(param_1 + 0x20);
  FUN_02a060d0(param_1 + 0x40);
  if (lVar7 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar7;
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

