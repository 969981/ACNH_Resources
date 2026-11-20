
undefined8 * FUN_03f25d08(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (DAT_05b05628 != (undefined8 *)0x0) {
    return DAT_05b05628;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0xd8);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_03f25d90;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xd8,8);
  }
LAB_03f25d90:
  FUN_038c69f0(puVar3 + 0x17,param_1,3);
  puVar3[0x17] = &PTR_FUN_04ba8538;
  DAT_05b05618 = puVar3 + 0x17;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0xffffffff;
  uVar4 = nn::os::GetSystemTick();
  puVar3[3] = uVar4;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 0x11) = 0;
  *(undefined4 *)(puVar3 + 0x16) = 0;
  DAT_05b05628 = puVar3;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  return puVar3;
}

