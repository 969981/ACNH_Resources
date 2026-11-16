
void FUN_025761d8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *__dest;
  char *__dest_00;
  
  FUN_0173a0dc();
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x2e0);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar4 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_02576260;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2e0,8);
  }
LAB_02576260:
  FUN_00705c50(plVar6);
  plVar6[0x4f] = 0;
  puVar3 = PTR_DAT_04bb3300;
  plVar6[0x50] = 0;
  plVar6[0x53] = -0x100000000;
  plVar6[0x52] = (long)(plVar6 + 0x51);
  plVar6[0x51] = (long)(plVar6 + 0x51);
  *plVar6 = (long)(puVar3 + 0x10);
  FUN_038e18e4(plVar6 + 0x54);
  __dest_00 = (char *)plVar6[0xc];
  if (__dest_00 != "Family") {
    iVar1 = 6;
    if ((int)plVar6[0xd] < 7) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(__dest_00,"Family",(long)iVar1);
    __dest_00[iVar1] = '\0';
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar6 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x2e8);
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
      if (param_3 == (long *)0x0) goto LAB_02576364;
    }
    plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2e8,8);
  }
LAB_02576364:
  FUN_00705c50(plVar6);
  puVar3 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar6[0xc];
  plVar6[0x54] = (long)&DAT_3f8000003f800000;
  plVar6[0x4f] = 0;
  plVar6[0x50] = 0;
  plVar6[0x51] = 0;
  plVar6[0x52] = 0;
  plVar6[0x53] = 0;
  *(undefined4 *)(plVar6 + 0x55) = 0x3f800000;
  *plVar6 = (long)(puVar3 + 0x10);
  *(undefined8 *)((long)plVar6 + 700) = 0;
  *(undefined8 *)((long)plVar6 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar6 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar6 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar6 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar6 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar6 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar1 = 4;
    if ((int)plVar6[0xd] < 5) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar1);
    __dest[iVar1] = 0;
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  return;
}

