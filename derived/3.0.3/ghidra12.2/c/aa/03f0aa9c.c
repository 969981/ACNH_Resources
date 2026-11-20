
undefined8 * FUN_03f0aa9c(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return (undefined8 *)0x0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar2 = malloc(0x68);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_3 = (long *)(lVar1 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        puVar2 = (undefined8 *)0x0;
        goto LAB_03f0ab20;
      }
    }
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x68,8);
  }
LAB_03f0ab20:
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *puVar2 = &PTR_LAB_04ba7c98;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x24) = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  *(undefined8 *)((long)puVar2 + 0x34) = 0;
  *(undefined4 *)((long)puVar2 + 0x3c) = 0;
  puVar2[10] = param_2;
  puVar2[0xb] = 0;
  puVar3 = (undefined8 *)FUN_00438810(0x20);
  FUN_0054fec0();
  puVar3[3] = puVar2;
  *puVar3 = &PTR_LAB_04ba7cb8;
  puVar2[1] = puVar3;
  return puVar2;
}

