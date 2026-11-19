
void FUN_03b48e50(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_04b763e0;
  param_1[1] = 0;
  uVar1 = param_3 - 1;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  lVar2 = DAT_05ae7600;
  if (0 < (int)param_3) {
    if (DAT_05ae7600 == 0) {
      pvVar4 = malloc((long)(int)(param_3 << 5));
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
          return;
        }
      }
      pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)(int)(param_3 << 5),8);
    }
    if (pvVar4 != (void *)0x0) {
      param_1[6] = pvVar4;
      if (1 < param_3) {
        if (uVar1 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          plVar6 = (long *)((long)pvVar4 + 0x20);
          do {
            uVar5 = uVar5 + 2;
            plVar6[-4] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 4);
            plVar6 = plVar6 + 8;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar5);
        }
        if ((uVar1 & 1) != 0) {
          plVar6 = (long *)((long)pvVar4 + uVar5 * 0x20);
          *plVar6 = (long)(plVar6 + 4);
        }
      }
      *(undefined8 *)((long)pvVar4 + (long)(int)(uVar1 * 4) * 8) = 0;
      param_1[7] = pvVar4;
      *(uint *)(param_1 + 8) = param_3;
    }
  }
  return;
}

