
undefined8 * FUN_02a1e7e4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar2 = malloc(0x150);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        puVar2 = (undefined8 *)0x0;
        goto LAB_02a1e860;
      }
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x150,0x10);
  }
LAB_02a1e860:
  FUN_03baaf90(puVar2,param_1);
  *(undefined4 *)(puVar2 + 0xd) = 0;
  *puVar2 = &PTR_LAB_04a997f0;
  puVar2[0x1c] = 0;
  *(undefined2 *)(puVar2 + 0x10) = 0x101;
  puVar2[0x1b] = puVar2 + 0x1c;
  *(undefined4 *)((long)puVar2 + 0x84) = 0x3f333333;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x1a] = puVar2 + 0x1b;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar3 = puVar2 + 0x19;
  *puVar3 = puVar2 + 0x1a;
  puVar2[0x17] = puVar3;
  puVar2[0x18] = puVar3;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0x400000000;
  puVar2[0x16] = puVar2 + 0x1d;
  return puVar2;
}

