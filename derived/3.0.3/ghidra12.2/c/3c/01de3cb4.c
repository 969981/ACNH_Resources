
void FUN_01de3cb4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar7 = 1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = param_2;
  }
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(0x148);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined8 *)((long)puVar5 + 0x44) = 0;
    *(undefined8 *)((long)puVar5 + 0x4c) = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined8 *)((long)puVar5 + 0x5c) = 0;
    *(undefined8 *)((long)puVar5 + 100) = 0;
    *(undefined8 *)((long)puVar5 + 0x6c) = 0;
    *(undefined8 *)((long)puVar5 + 0x74) = 0;
    *(undefined8 *)((long)puVar5 + 0x7c) = 0;
    *(undefined8 *)((long)puVar5 + 0x84) = 0;
    *(undefined8 *)((long)puVar5 + 0x8c) = 0;
    *(undefined8 *)((long)puVar5 + 0x94) = 0;
    *(undefined8 *)((long)puVar5 + 0x9c) = 0;
    *(undefined8 *)((long)puVar5 + 0xa4) = 0;
    *(undefined8 *)((long)puVar5 + 0xac) = 0;
    *(undefined8 *)((long)puVar5 + 0xb4) = 0;
    *(undefined8 *)((long)puVar5 + 0xbc) = 0;
    *(undefined8 *)((long)puVar5 + 0xc4) = 0;
    *(undefined8 *)((long)puVar5 + 0xcc) = 0;
    *(undefined8 *)((long)puVar5 + 0xd4) = 0;
    *(undefined8 *)((long)puVar5 + 0xdc) = 0;
    *(undefined8 *)((long)puVar5 + 0xe4) = 0;
    *(undefined8 *)((long)puVar5 + 0xec) = 0;
    *(undefined8 *)((long)puVar5 + 0xf4) = 0;
    *(undefined8 *)((long)puVar5 + 0xfc) = 0;
    *param_1 = puVar5;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 *)((long)puVar5 + 0x104) = 0;
    *(undefined8 *)((long)puVar5 + 0x10c) = 0;
    *(undefined8 *)((long)puVar5 + 0x114) = 0;
    *(undefined8 *)((long)puVar5 + 0x11c) = 0;
    *(undefined8 *)((long)puVar5 + 0x124) = 0;
    *(undefined8 *)((long)puVar5 + 300) = 0;
    *(undefined8 *)((long)puVar5 + 0x134) = 0;
    *(undefined8 *)((long)puVar5 + 0x13c) = 0;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    puVar5 = (undefined8 *)0x0;
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x148,8);
    }
    lVar2 = DAT_05ae7600;
    *(undefined8 *)((long)puVar5 + 0x4c) = 0;
    *(undefined8 *)((long)puVar5 + 0x44) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined8 *)((long)puVar5 + 0x5c) = 0;
    *(undefined8 *)((long)puVar5 + 100) = 0;
    *(undefined8 *)((long)puVar5 + 0x6c) = 0;
    *(undefined8 *)((long)puVar5 + 0x74) = 0;
    *(undefined8 *)((long)puVar5 + 0x7c) = 0;
    *(undefined8 *)((long)puVar5 + 0x84) = 0;
    *(undefined8 *)((long)puVar5 + 0x8c) = 0;
    *(undefined8 *)((long)puVar5 + 0x94) = 0;
    *(undefined8 *)((long)puVar5 + 0x9c) = 0;
    *(undefined8 *)((long)puVar5 + 0xa4) = 0;
    *(undefined8 *)((long)puVar5 + 0xac) = 0;
    *(undefined8 *)((long)puVar5 + 0xb4) = 0;
    *(undefined8 *)((long)puVar5 + 0xbc) = 0;
    *(undefined8 *)((long)puVar5 + 0xc4) = 0;
    *(undefined8 *)((long)puVar5 + 0xcc) = 0;
    *(undefined8 *)((long)puVar5 + 0xd4) = 0;
    *(undefined8 *)((long)puVar5 + 0xdc) = 0;
    *(undefined8 *)((long)puVar5 + 0xe4) = 0;
    *(undefined8 *)((long)puVar5 + 0xec) = 0;
    *(undefined8 *)((long)puVar5 + 0xf4) = 0;
    *(undefined8 *)((long)puVar5 + 0xfc) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined8 *)((long)puVar5 + 0x104) = 0;
    *(undefined8 *)((long)puVar5 + 0x10c) = 0;
    *(undefined8 *)((long)puVar5 + 0x114) = 0;
    *(undefined8 *)((long)puVar5 + 0x11c) = 0;
    *(undefined8 *)((long)puVar5 + 0x124) = 0;
    *(undefined8 *)((long)puVar5 + 300) = 0;
    *(undefined8 *)((long)puVar5 + 0x134) = 0;
    *(undefined8 *)((long)puVar5 + 0x13c) = 0;
    *param_1 = puVar5;
    if (lVar2 != 0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      puVar5 = (undefined8 *)(lVar2 + 8);
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 0xa8);
      }
      pvVar6 = (void *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x20,8);
      goto LAB_01de3ea0;
    }
  }
  pvVar6 = malloc(0x20);
LAB_01de3ea0:
  FUN_006e90b0(pvVar6,4,param_2);
  param_1[1] = pvVar6;
  if (lVar7 != 1) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar2 + 0xa8) = lVar7;
  }
  return;
}

