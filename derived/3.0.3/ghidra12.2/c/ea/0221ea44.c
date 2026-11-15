
void FUN_0221ea44(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  char *__dest;
  
  FUN_02249a24();
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x288);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar4 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar6 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_0221eac8;
    }
    plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x288,8);
  }
LAB_0221eac8:
  FUN_00705c50(plVar6);
  puVar3 = PTR_DAT_04bb3088;
  __dest = (char *)plVar6[0xc];
  *(undefined2 *)(plVar6 + 0x4f) = 0;
  *(undefined1 *)((long)plVar6 + 0x27e) = 0;
  *(undefined1 *)(plVar6 + 0x50) = 0;
  *(undefined4 *)((long)plVar6 + 0x27a) = 0x101;
  *plVar6 = (long)(puVar3 + 0x10);
  if (__dest != "AnalogClock") {
    iVar1 = 0xb;
    if ((int)plVar6[0xd] < 0xc) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(__dest,"AnalogClock",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0 | 4;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  return;
}

