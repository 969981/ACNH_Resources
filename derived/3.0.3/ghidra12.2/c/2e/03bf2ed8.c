
void FUN_03bf2ed8(undefined8 *param_1,char *param_2,long *param_3,long *param_4,undefined4 param_5)

{
  size_t __n;
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  param_1[0xb] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffff0000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[6] = 0xe000000000;
  param_1[7] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((int)param_4[5] < 1) goto LAB_03bf2fcc;
  __n = strlen(param_2);
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pcVar3 = malloc(__n + 1);
  }
  else {
    plVar2 = param_3;
    if (param_3 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      pcVar3 = (char *)0x0;
      if (plVar2 == (long *)0x0) goto LAB_03bf2fac;
    }
    pcVar3 = (char *)(**(code **)(*plVar2 + 0x30))(plVar2,__n + 1,8);
  }
LAB_03bf2fac:
  pcVar3 = strncpy(pcVar3,param_2,__n);
  pcVar3[__n] = '\0';
  param_1[2] = pcVar3;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
LAB_03bf2fcc:
  uVar4 = (**(code **)(*param_4 + 0x10))(param_4,param_1,param_3);
  param_1[3] = uVar4;
  return;
}

