
void FUN_01db90a4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *__s;
  long lVar3;
  
  lVar1 = DAT_05ae7600;
  if (*(long *)(param_1 + 0xc0) == 0) {
    if (DAT_05ae7600 == 0) {
      puVar2 = malloc(0x68);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar1 + 8);
      if (lVar3 != 0) {
        puVar2 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x68,8);
    }
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *puVar2 = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(param_1 + 0xc0) = puVar2;
    lVar3 = *(long *)(param_1 + 200);
    lVar1 = DAT_05ae7600;
  }
  else {
    lVar3 = *(long *)(param_1 + 200);
  }
  DAT_05ae7600 = lVar1;
  if (lVar3 == 0) {
    if (lVar1 == 0) {
      __s = malloc(0x7b0);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar1 + 8);
      if (lVar3 != 0) {
        puVar2 = (undefined8 *)(lVar3 + 0xa8);
      }
      __s = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x7b0,8);
    }
    memset(__s,0,0x7b0);
    *(void **)(param_1 + 200) = __s;
  }
  return;
}

