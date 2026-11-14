
void FUN_01d95830(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bc3a80;
  iVar1 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar1 != -0x8b34a75 && iVar1 != -0x7a57de51) {
    return;
  }
  plVar3 = (long *)*param_1;
  lVar6 = DAT_05ae7600;
  if (plVar3 == (long *)0x0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NetDreamLandMgr";
    plVar3 = (long *)FUN_038c6d48(0x200000,&local_40,param_2,8,1,0);
    *param_1 = (long)plVar3;
    iVar1 = *(int *)(puVar2 + 0x38);
    lVar6 = DAT_05ae7600;
  }
  if (iVar1 != -0x7a57de51) {
    DAT_05ae7600 = lVar6;
    return;
  }
  if (param_1[1] != 0) {
    DAT_05ae7600 = lVar6;
    return;
  }
  DAT_05ae7600 = lVar6;
  if (lVar6 == 0) {
    puVar5 = malloc(0xe30);
  }
  else {
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      puVar5 = (undefined8 *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_01d95930;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xe30,8);
  }
LAB_01d95930:
  puVar5[2] = puVar5 + 4;
  *puVar5 = 0;
  puVar5[1] = 0;
  for (lVar6 = 0; *(long *)((long)puVar5 + lVar6 + 0x20) = (long)puVar5 + lVar6 + 0x30,
      lVar6 != 0x940; lVar6 = lVar6 + 0x20) {
    *(long *)((long)puVar5 + lVar6 + 0x30) = (long)puVar5 + lVar6 + 0x40;
  }
  puVar5[0x12e] = 0;
  puVar5[3] = puVar5 + 4;
  if (puVar5 + 0x130 != (undefined8 *)0x0) {
    *puVar5 = 0x9600000000;
    puVar5[1] = puVar5 + 0x130;
  }
  param_1[1] = (long)puVar5;
  return;
}

