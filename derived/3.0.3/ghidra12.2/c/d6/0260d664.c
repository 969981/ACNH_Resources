
void * FUN_0260d664(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  if ((*(long *)(param_1 + 0x28) == 0) || (*(char *)(param_1 + 0xb1) != '\0')) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar2 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                      ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
    lVar1 = DAT_05ae7600;
    if (uVar2 >> 0xc < 5) {
      pvVar5 = (void *)0x0;
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
    else {
      if (DAT_05ae7600 == 0) {
        pvVar5 = malloc(0x28);
      }
      else {
        plVar3 = *(long **)(param_1 + 0x28);
        if (plVar3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar3 = (long *)(lVar1 + 8);
          if (lVar4 != 0) {
            plVar3 = (long *)(lVar4 + 0xa8);
          }
          plVar3 = (long *)*plVar3;
        }
        pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
      }
      FUN_02610e7c(pvVar5,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return pvVar5;
}

