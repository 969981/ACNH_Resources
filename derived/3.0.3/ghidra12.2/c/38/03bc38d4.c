
long * FUN_03bc38d4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar4 = malloc(0xd8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar2 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03bc394c;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xd8,8);
  }
LAB_03bc394c:
  puVar1 = PTR_DAT_04bd22b8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 3) = 0;
  *(undefined4 *)(plVar4 + 9) = 0xffff000d;
  plVar4[6] = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  plVar4[0xe] = 0;
  *(undefined4 *)(plVar4 + 0xf) = 0;
  *(undefined4 *)(plVar4 + 0x10) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0x11] = 0;
  *(undefined1 *)(plVar4 + 0xc) = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  FUN_038e18e4(plVar4 + 0x12);
  *(undefined4 *)(plVar4 + 0x1a) = 0;
  (**(code **)(*plVar4 + 0x30))(plVar4);
  return plVar4;
}

