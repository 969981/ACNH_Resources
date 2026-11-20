
undefined4 *
FUN_03f29144(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  
  lVar1 = DAT_05ae7600;
  plVar5 = (long *)**(undefined8 **)PTR_DAT_04bc3578;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x58);
  }
  else {
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined4 *)0x0;
        goto LAB_03f291e8;
      }
    }
    puVar4 = (undefined4 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x58,8);
  }
LAB_03f291e8:
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar4[4] = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  puVar4[8] = 0;
  puVar4[0xe] = 0;
  *(undefined8 *)(puVar4 + 10) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  puVar4[0xf] = *param_5;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  FUN_03f295a0(puVar4,param_2,param_3,param_4,plVar5);
  FUN_03f29940(puVar4,param_1);
  return puVar4;
}

