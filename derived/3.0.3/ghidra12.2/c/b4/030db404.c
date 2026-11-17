
void FUN_030db404(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0xf8);
    puVar1 = PTR_DAT_04bc9ca0;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) goto LAB_030db4e8;
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xf8,8);
    puVar1 = PTR_DAT_04bc9ca0;
  }
  PTR_DAT_04bc9ca0 = puVar1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0x2ffffffff;
    *puVar4 = 10;
    puVar1 = puVar1 + 0x10;
    puVar4[0x1e] = 0x2ffffffff;
    puVar4[8] = 0;
    puVar4[9] = 0x2ffffffff;
    puVar4[1] = puVar1;
    puVar4[4] = puVar1;
    puVar4[5] = 0;
    puVar4[6] = 0x2ffffffff;
    puVar4[7] = puVar1;
    puVar4[10] = puVar1;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0x2ffffffff;
    puVar4[0xd] = puVar1;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0x2ffffffff;
    puVar4[0x10] = puVar1;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0x2ffffffff;
    puVar4[0x13] = puVar1;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0x2ffffffff;
    puVar4[0x16] = puVar1;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0x2ffffffff;
    puVar4[0x19] = puVar1;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0x2ffffffff;
    puVar4[0x1c] = puVar1;
    puVar4[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x498) = 10;
    *(undefined8 **)(param_1 + 0x4a0) = puVar4 + 1;
  }
LAB_030db4e8:
  lVar2 = *(long *)(param_1 + 0x440);
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = *(long *)(param_1 + 0x4a0);
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  lVar2 = *(long *)(param_1 + 0x448);
  local_40 = 0;
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = *(long *)(param_1 + 0x4a0) + (ulong)(1 < *(uint *)(param_1 + 0x498)) * 0x18;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x450);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0x30;
  if (*(uint *)(param_1 + 0x498) < 3) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x458);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0x48;
  if (*(uint *)(param_1 + 0x498) < 4) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x460);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0x60;
  if (*(uint *)(param_1 + 0x498) < 5) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x468);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0x78;
  if (*(uint *)(param_1 + 0x498) < 6) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x470);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0x90;
  if (*(uint *)(param_1 + 0x498) < 7) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x478);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0xa8;
  if (*(uint *)(param_1 + 0x498) < 8) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x480);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0xc0;
  if (*(uint *)(param_1 + 0x498) < 9) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x488);
  local_38 = *(undefined8 *)(lVar2 + 0x240);
  local_48 = **(undefined8 **)(lVar2 + 0x210);
  FUN_0340a298(lVar2 + 600,&local_48);
  lVar5 = 0xd8;
  if (*(uint *)(param_1 + 0x498) < 10) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4a0) + lVar5;
  *(long *)(lVar5 + 8) = lVar2;
  *(undefined8 *)(lVar5 + 0x10) = 0x2ffffffff;
  return;
}

