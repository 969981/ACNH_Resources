
undefined8 * FUN_00811c18(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04ccc690 != (undefined8 *)0x0) {
    return DAT_04ccc690;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xc0);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_00811ca0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xc0,8);
  }
LAB_00811ca0:
  FUN_038c69f0(puVar3 + 0x14,param_1,3);
  *(undefined1 *)(puVar3 + 1) = 0;
  puVar3[0x14] = &PTR_FUN_049175c0;
  DAT_04ccc688 = puVar3 + 0x14;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 6) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[0x12] = 0;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  DAT_04ccc690 = puVar3;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  return puVar3;
}

