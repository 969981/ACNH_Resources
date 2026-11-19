
void FUN_0384accc(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bcb3d8;
  puVar1 = PTR_DAT_04bb3350;
  pbVar2 = (byte *)(param_1 + 0x2f88);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) {
      lVar7 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = lVar6;
    }
    FUN_0378dab0(param_1 + 0x2fc0);
    *pbVar2 = *pbVar2 & 0xfd;
    FUN_03f45838(param_1 + 0x2f98);
    if (*(long *)(param_1 + 0x2f90) != 0) {
      *pbVar2 = *pbVar2 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x2f90),0);
      *(undefined8 *)(param_1 + 0x2f90) = 0;
    }
    if (DAT_05ac5af0 != (long *)0x0) {
      (**(code **)(*DAT_05ac5af0 + 8))();
    }
    DAT_05ac5af0 = (long *)0x0;
    if (DAT_05ac5ae8 != (long *)0x0) {
      (**(code **)(*DAT_05ac5ae8 + 8))();
    }
    DAT_05ac5ae8 = (long *)0x0;
    FUN_037c8384();
    DAT_05ae1b08 = DAT_05ae1b08 & 0xfd;
    FUN_03f45838(&DAT_05ae1b18);
    if (DAT_05ae1b10 != 0) {
      DAT_05ae1b08 = DAT_05ae1b08 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)puVar3,DAT_05ae1b10,0);
      DAT_05ae1b10 = 0;
    }
    uVar4 = DAT_05aec220;
    if ((*(byte *)(param_1 + 0x960) & 1) != 0) {
      FUN_03bec1f4(DAT_05aec208);
      FUN_03bec1f4(uVar4);
      *(byte *)(param_1 + 0x960) = *(byte *)(param_1 + 0x960) & 0xfe;
    }
    FUN_03f44fe0(param_1 + 0x6b8);
    (**(code **)(**(long **)(param_1 + 0x6b0) + 0x50))(*(long **)(param_1 + 0x6b0),0);
    if (*(long **)(param_1 + 0x6b0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x6b0) + 8))();
    }
    *(undefined8 *)(param_1 + 0x6b0) = 0;
    (**(code **)(**(long **)(param_1 + 0x678) + 0x20))();
    *(undefined8 *)(param_1 + 0x678) = 0;
    (**(code **)(**(long **)(param_1 + 0x668) + 0x20))();
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(byte *)(param_1 + 0x660) = *(byte *)(param_1 + 0x660) | 1;
    FUN_038361a0(param_1 + 0x930);
    FUN_03831470(param_1 + 0xe8);
    if (lVar7 != 1) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar6 + 0xa8) = lVar7;
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  }
  *(byte *)(param_1 + 0x2fc8) = *(byte *)(param_1 + 0x2fc8) & 0xfd;
  FUN_03f45838(param_1 + 0x2fd8);
  if (*(long *)(param_1 + 0x2fd0) != 0) {
    *(byte *)(param_1 + 0x2fc8) = *(byte *)(param_1 + 0x2fc8) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x2fd0),0);
    *(undefined8 *)(param_1 + 0x2fd0) = 0;
  }
  FUN_03f457c4(param_1 + 0x2fd8);
  *pbVar2 = *pbVar2 & 0xfd;
  FUN_03f45838(param_1 + 0x2f98);
  if (*(long *)(param_1 + 0x2f90) != 0) {
    *pbVar2 = *pbVar2 & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x2f90),0);
    *(undefined8 *)(param_1 + 0x2f90) = 0;
  }
  FUN_03f457c4(param_1 + 0x2f98);
  *(undefined4 *)(param_1 + 0x1acc) = 0;
  *(undefined8 *)(param_1 + 0x1ad0) = 0;
  puVar1 = PTR_DAT_04bd2440 + 0x10;
  *(undefined4 *)(param_1 + 0x1a34) = 0;
  *(undefined8 *)(param_1 + 0x1a38) = 0;
  *(undefined4 *)(param_1 + 0x161c) = 0;
  *(undefined8 *)(param_1 + 0x1620) = 0;
  *(undefined4 *)(param_1 + 0x1584) = 0;
  *(undefined8 *)(param_1 + 0x1588) = 0;
  *(undefined4 *)(param_1 + 0x116c) = 0;
  *(undefined8 *)(param_1 + 0x1170) = 0;
  *(undefined4 *)(param_1 + 0x10d4) = 0;
  *(undefined8 *)(param_1 + 0x10d8) = 0;
  *(undefined4 *)(param_1 + 0x101c) = 0;
  *(undefined8 *)(param_1 + 0x1020) = 0;
  *(undefined **)(param_1 + 0x1a60) = puVar1;
  *(undefined **)(param_1 + 0x19c8) = puVar1;
  *(undefined **)(param_1 + 0x15b0) = puVar1;
  *(undefined **)(param_1 + 0x1518) = puVar1;
  *(undefined **)(param_1 + 0x1100) = puVar1;
  *(undefined **)(param_1 + 0x1068) = puVar1;
  *(undefined **)(param_1 + 0xfb0) = puVar1;
  *(undefined4 *)(param_1 + 0xe3c) = 0;
  *(undefined8 *)(param_1 + 0xe40) = 0;
  *(undefined **)(param_1 + 0xdd0) = puVar1;
  *(undefined4 *)(param_1 + 0xda4) = 0;
  *(undefined8 *)(param_1 + 0xda8) = 0;
  *(undefined **)(param_1 + 0xd38) = puVar1;
  *(undefined4 *)(param_1 + 0xd0c) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  *(undefined **)(param_1 + 0xca0) = puVar1;
  *(undefined4 *)(param_1 + 0xc74) = 0;
  *(undefined8 *)(param_1 + 0xc78) = 0;
  *(undefined **)(param_1 + 0xc08) = puVar1;
  *(undefined ***)(param_1 + 0x930) = &PTR_FUN_04b5d4a8;
  FUN_038361a0(param_1 + 0x930);
  FUN_03f44fe0(param_1 + 0x6b8);
  FUN_038e1c80(param_1 + 0x780);
  FUN_038e1c80(param_1 + 0x750);
  FUN_038e1a84(param_1 + 0x710);
  FUN_038e1a84(param_1 + 0x6d0);
  FUN_038e1c80(param_1 + 0x680);
  FUN_03849ef0(param_1 + 0x638);
  FUN_03830d84(param_1 + 0xe8);
  FUN_038e1a84(param_1 + 0x20);
  return;
}

