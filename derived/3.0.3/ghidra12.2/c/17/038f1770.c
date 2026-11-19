
void FUN_038f1770(long *param_1,long *param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  void *__src;
  size_t __size;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar2 = DAT_05ae7600;
  lVar6 = 0;
  __size = 1;
  do {
    if (*(char *)(param_3[1] + lVar6) == '\0') {
LAB_038f17f8:
      __size = (size_t)((int)lVar6 + 1);
      break;
    }
    lVar1 = param_3[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038f17f8;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038f17f8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (DAT_05ae7600 == 0) {
    pvVar4 = malloc(__size);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar2 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_2 = (long *)*puVar3;
      if (param_2 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_038f1868;
      }
    }
    pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,param_4);
  }
LAB_038f1868:
  memset(pvVar4,0,__size);
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar6 = 0;
  do {
    if (*(char *)(param_3[1] + lVar6) == '\0') {
LAB_038f18dc:
      iVar5 = (int)lVar6;
      *(int *)(param_1 + 2) = iVar5 + 1;
      param_1[1] = (long)pvVar4;
      if (-1 < iVar5) goto LAB_038f18f0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      goto LAB_038f1900;
    }
    lVar2 = param_3[1] + lVar6;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038f18dc;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038f18dc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[1] = (long)pvVar4;
LAB_038f18f0:
  *(undefined1 *)((long)pvVar4 + (long)iVar5) = 0;
LAB_038f1900:
  *param_1 = (long)(PTR_DAT_04bc9388 + 0x10);
  pvVar4 = (void *)param_1[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (pvVar4 != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_038f198c;
      lVar2 = param_3[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_038f198c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_038f198c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_038f198c:
    iVar5 = (int)lVar6;
    if ((int)param_1[2] <= (int)lVar6) {
      iVar5 = (int)param_1[2] + -1;
    }
    memcpy(pvVar4,__src,(long)iVar5);
    *(undefined1 *)((long)pvVar4 + (long)iVar5) = 0;
  }
  return;
}

