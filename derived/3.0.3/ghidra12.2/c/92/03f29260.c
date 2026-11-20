
long * FUN_03f29260(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = DAT_05ae7600;
  plVar5 = (long *)**(undefined8 **)PTR_DAT_04bc3578;
  if (DAT_05ae7600 == 0) {
    plVar3 = malloc(0x48);
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
        plVar3 = (long *)0x0;
        goto LAB_03f292f8;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x48,8);
  }
LAB_03f292f8:
  *plVar3 = (long)(PTR_DAT_04bdf078 + 0x10);
  nn::prepo::Array::Array((Array *)(plVar3 + 1));
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  FUN_03f28c20(plVar3,param_2,param_3,plVar5);
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    plVar5 = *(long **)(param_1 + 0x18);
    do {
      if (*plVar5 == 0) {
        *plVar5 = (long)plVar3;
        return plVar3;
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return (long *)0x0;
}

