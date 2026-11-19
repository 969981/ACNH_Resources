
void FUN_03a0d900(undefined8 *param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,long *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  
  FUN_038e1f88(param_1,param_6,param_7,param_5,0,0x7fffffff,param_4,1);
  param_1[0x22] = param_2;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *param_1 = &PTR_LAB_04b6c2b0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar3 = nn::os::GetSystemTick();
  param_1[0x2a] = uVar3;
  FUN_038e1bac(param_1 + 0x2b,1);
  lVar2 = DAT_05ae7600;
  if (param_7 == (long *)0x0) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar2 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_7 = (long *)*puVar1;
  }
  lVar2 = DAT_05ae7600;
  if (0 < (int)param_3) {
    if (DAT_05ae7600 == 0) {
      pvVar5 = malloc((ulong)param_3 << 3);
    }
    else {
      if (param_7 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar2 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        param_7 = (long *)*puVar1;
        if (param_7 == (long *)0x0) goto LAB_03a0da2c;
      }
      pvVar5 = (void *)(**(code **)(*param_7 + 0x30))(param_7,(ulong)param_3 << 3,8);
    }
    if (pvVar5 != (void *)0x0) {
      param_1[0x23] = pvVar5;
      *(uint *)(param_1 + 0x24) = param_3;
      *(undefined8 *)((long)param_1 + 0x124) = 0;
    }
  }
LAB_03a0da2c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f));
  return;
}

