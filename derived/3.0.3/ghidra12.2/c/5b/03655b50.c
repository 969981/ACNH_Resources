
void FUN_03655b50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,void *param_8,size_t param_9)

{
  char *pcVar1;
  char cVar2;
  void *__s;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  __s = (void *)(**(code **)(*DAT_05b059a0 + 0x10))(DAT_05b059a0,0x18900,1);
  *(int *)(param_1 + 900) = param_7;
  *param_1 = __s;
  param_1[1] = __s;
  param_1[2] = (long)__s + 0x800;
  param_1[3] = (long)__s + 0x8800;
  param_1[4] = (long)__s + 0xa800;
  param_1[5] = (long)__s + 0xc800;
  pvVar5 = (void *)((long)__s + 0xe900);
  param_1[6] = (long)__s + 0xc900;
  param_1[7] = pvVar5;
  param_1[8] = (long)__s + 0x16900;
  if (param_7 == 0) {
    memset(__s,0,0x800);
LAB_03655ce4:
    memset((void *)param_1[4],0,0x2000);
    memset((void *)param_1[3],0,0x2000);
    memset((void *)param_1[6],0,0x2000);
  }
  else {
    if (param_7 == 1) {
      memset(__s,0xff,0x800);
      *(undefined1 *)(param_1[1] + 8) = 0xf7;
      *(undefined1 *)(param_1[1] + 9) = 0xef;
      *(undefined1 *)(param_1[1] + 10) = 0xdf;
      *(undefined1 *)(param_1[1] + 0xf) = 0xbf;
      goto LAB_03655ce4;
    }
    if (param_7 != 2) goto LAB_03655d5c;
    lVar6 = 0;
    lVar3 = 0;
    do {
      pcVar1 = (char *)((long)__s + lVar6);
      lVar6 = lVar6 + 2;
      cVar2 = (char)(lVar3 >> 0x3f);
      *pcVar1 = cVar2;
      pcVar1[1] = cVar2;
      lVar3 = lVar3 + 0x4000000000000000;
    } while (lVar6 != 0x800);
    memset((void *)param_1[4],0,0x2000);
    memset((void *)param_1[3],0,0x2000);
    lVar7 = param_1[6];
    lVar6 = 0;
    lVar3 = 0;
    do {
      pcVar1 = (char *)(lVar7 + lVar6);
      lVar6 = lVar6 + 2;
      cVar2 = (char)(lVar3 >> 0x3f);
      *pcVar1 = cVar2;
      pcVar1[1] = cVar2;
      lVar3 = lVar3 + 0x4000000000000000;
    } while (lVar6 != 0x2000);
  }
  puVar4 = (undefined8 *)param_1[5];
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  pvVar5 = (void *)param_1[7];
LAB_03655d5c:
  memset(pvVar5,0,0x8000);
  memcpy(param_1 + 9,&DAT_04b41fa8,0x230);
  pvVar5 = (void *)param_1[8];
  param_1[0x382] = param_5;
  param_1[899] = param_6;
  param_1[0x380] = param_3;
  param_1[0x381] = param_2;
  param_1[0x3ec] = param_4;
  param_1[0x385] = &LAB_03652680;
  if ((param_8 == (void *)0x0) || (param_9 == 0)) {
    param_9 = 0x2000;
  }
  else {
    memcpy(pvVar5,param_8,param_9);
    pvVar5 = (void *)(param_1[8] + param_9);
    param_9 = 0x2000 - param_9;
  }
  memset(pvVar5,0,param_9);
  *(undefined2 *)(param_1 + 0x3ed) = 0;
  *(undefined1 *)((long)param_1 + 0x1f6a) = 0;
  return;
}

