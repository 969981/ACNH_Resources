
void * FUN_0260d454(long param_1,undefined8 param_2,int param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  if ((*(long *)(param_1 + 0x28) == 0) || (*(char *)(param_1 + 0xb1) != '\0')) {
    pvVar6 = (void *)0x0;
  }
  else {
    uVar3 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                      ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
    lVar2 = DAT_05ae7600;
    if (uVar3 >> 0xc < 5) {
      pvVar6 = (void *)0x0;
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
    else {
      iVar1 = 100;
      if (0 < param_3) {
        iVar1 = param_3;
      }
      if (DAT_05ae7600 == 0) {
        pvVar6 = malloc(0x50);
      }
      else {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar4 = (long *)(lVar2 + 8);
          if (lVar5 != 0) {
            plVar4 = (long *)(lVar5 + 0xa8);
          }
          plVar4 = (long *)*plVar4;
        }
        pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x50,8);
      }
      FUN_02605160(pvVar6,param_2,iVar1,param_4,param_5);
    }
  }
  return pvVar6;
}

