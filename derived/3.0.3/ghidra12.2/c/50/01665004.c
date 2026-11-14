
long * FUN_01665004(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar4 = malloc(0x98);
  }
  else {
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_1 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        param_1 = (long *)(lVar3 + 0xa8);
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_01665074;
      }
    }
    plVar4 = (long *)(**(code **)(*param_1 + 0x30))(param_1,0x98,8);
  }
LAB_01665074:
  plVar4[6] = 0;
  puVar1 = PTR_DAT_04bbdbe8;
  *(undefined1 *)(plVar4 + 7) = 1;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined8 *)((long)plVar4 + 0x3c) = 0;
  *(undefined8 *)((long)plVar4 + 0x44) = 0;
  *(undefined8 *)((long)plVar4 + 0x4c) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0;
  FUN_038e18e4(plVar4 + 0xb);
  return plVar4;
}

