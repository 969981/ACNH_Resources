
void FUN_01e224d4(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar5 = malloc(0x1b0);
joined_r0x01e225a8:
    if (puVar5 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 1;
      puVar5[0xd8] = 1;
      *(undefined4 *)(puVar5 + 0x1c) = 0;
      puVar5[0x29] = 0;
      *(undefined8 *)(puVar5 + 0xe0) = 0;
      *(undefined4 *)(puVar5 + 0xe8) = 0;
      *(undefined4 *)(puVar5 + 0xf4) = 0;
      puVar5[0x101] = 0;
      *(undefined8 *)(puVar5 + 200) = 0;
      *(undefined8 *)(puVar5 + 0xd0) = 0;
      *(undefined8 *)(puVar5 + 0x1a0) = 0;
      *(undefined8 *)(puVar5 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 1) = 2;
      param_1[2] = puVar5;
    }
    lVar8 = *(long *)puVar1;
    if (lVar8 != 0) {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
LAB_01e225b8:
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar8 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
          goto LAB_01e22608;
        }
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x40,8);
      goto LAB_01e22608;
    }
  }
  else {
    plVar4 = param_2;
    if (param_2 != (long *)0x0) {
LAB_01e22534:
      puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1b0,8);
      goto joined_r0x01e225a8;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_01e22534;
    lVar8 = *(long *)puVar1;
    if (lVar8 != 0) goto LAB_01e225b8;
  }
  plVar4 = malloc(0x40);
LAB_01e22608:
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (long)(PTR_DAT_04bd2dd0 + 0x10);
  plVar4[1] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar4 + 0x2c));
  puVar2 = PTR_LAB_04bd2dc8;
  *(undefined4 *)(plVar4 + 7) = 0;
  plVar4[3] = 0;
  plVar4[1] = (long)plVar4;
  plVar4[2] = (long)puVar2;
  param_1[0x10] = plVar4;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar6 = malloc(0x198);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x198,8);
    }
  }
  puVar2 = PTR_DAT_04bc1550;
  puVar1 = PTR_LAB_04bc1548;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[4] = puVar1;
  puVar6[5] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  puVar6[0x10] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[2] = puVar2 + 0x10;
  puVar6[3] = puVar6;
  FUN_038e18e4(puVar6 + 0x11);
  *(undefined2 *)(puVar6 + 0x19) = 0;
  *(undefined1 *)(puVar6 + 0x1b) = 0;
  *(undefined4 *)(puVar6 + 0x1a) = 0;
  *(undefined8 *)((long)puVar6 + 0x136) = 0;
  *(undefined8 *)((long)puVar6 + 0x13e) = 0;
  *(undefined8 *)((long)puVar6 + 0x146) = 0;
  *(undefined8 *)((long)puVar6 + 0x14e) = 0;
  *(undefined8 *)((long)puVar6 + 0x156) = 0;
  *(undefined8 *)((long)puVar6 + 0x15e) = 0;
  *(undefined8 *)((long)puVar6 + 0x166) = 0;
  *(undefined8 *)((long)puVar6 + 0x16e) = 0;
  *(undefined8 *)((long)puVar6 + 0xdc) = 0;
  *(undefined8 *)((long)puVar6 + 0xe4) = 0;
  *(undefined8 *)((long)puVar6 + 0xec) = 0;
  *(undefined8 *)((long)puVar6 + 0xf4) = 0;
  *(undefined8 *)((long)puVar6 + 0xfc) = 0;
  *(undefined1 *)((long)puVar6 + 0x134) = 0;
  *(undefined8 *)((long)puVar6 + 0x104) = 0;
  *(undefined8 *)((long)puVar6 + 0x10c) = 0;
  *(undefined8 *)((long)puVar6 + 0x114) = 0;
  *(undefined8 *)((long)puVar6 + 0x11c) = 0;
  *(undefined8 *)((long)puVar6 + 0x124) = 0;
  *(undefined8 *)((long)puVar6 + 300) = 0;
  *(undefined1 *)(puVar6 + 0x30) = 0;
  puVar6[0x2f] = 0;
  uVar7 = nn::os::GetSystemTick();
  puVar6[0x31] = uVar7;
  *(undefined1 *)(puVar6 + 0x30) = 0;
  *(undefined2 *)(puVar6 + 0x32) = 0;
  *(undefined1 *)((long)puVar6 + 0x192) = 0;
  *(undefined4 *)((long)puVar6 + 0x7c) = 0;
  *param_1 = puVar6;
  local_34 = 9;
  FUN_01e23f18(puVar6,&local_34,param_2);
  return;
}

