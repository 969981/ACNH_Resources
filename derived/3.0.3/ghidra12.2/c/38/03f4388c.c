
undefined8 FUN_03f4388c(long param_1,undefined2 *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 local_60 [2];
  undefined2 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  lVar2 = DAT_05ae7600;
  plVar4 = *(long **)(param_2 + 8);
  if (plVar4 != (long *)0x0) {
    *(long **)(param_1 + 0x180) = plVar4;
    *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) | 0x10;
    bVar1 = *(byte *)(plVar4 + 1);
    goto joined_r0x03f439b0;
  }
  if (DAT_05ae7600 == 0) {
    plVar4 = malloc(0xc0);
  }
  else {
    plVar4 = *(long **)(param_2 + 4);
    if (plVar4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03f43934;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc0,8);
  }
LAB_03f43934:
  uVar5 = *(undefined8 *)(param_2 + 4);
  FUN_03f41cf0(plVar4,uVar5);
  *plVar4 = (long)(PTR_DAT_04bdf178 + 0x10);
  FUN_038e19ac(plVar4 + 0x10,uVar5);
  local_40 = PTR_DAT_04bb2020;
  *(long **)(param_1 + 0x180) = plVar4;
  local_60[0] = 0;
  local_58 = *(undefined8 *)(param_2 + 4);
  local_40 = local_40 + 0x10;
  uStack_50 = 0;
  local_5e = *param_2;
  local_5c = 1;
  local_48 = *(undefined4 *)(param_2 + 0xc);
  uStack_38 = *(undefined8 *)(param_2 + 0x14);
  FUN_03f41f00(plVar4,local_60);
  plVar4 = *(long **)(param_1 + 0x180);
  bVar1 = *(byte *)(plVar4 + 1);
joined_r0x03f439b0:
  if ((bVar1 >> 1 & 1) == 0) {
    if ((bVar1 & 1) != 0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if ((int)plVar4[0xd] < *(int *)((long)plVar4 + 0x6c)) {
      *(long *)(plVar4[0xe] + (long)(int)plVar4[0xd] * 8) = param_1;
      *(int *)(plVar4 + 0xd) = (int)plVar4[0xd] + 1;
    }
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
  }
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x140),0,0);
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x170),0,0);
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x170));
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 2);
  return 1;
}

