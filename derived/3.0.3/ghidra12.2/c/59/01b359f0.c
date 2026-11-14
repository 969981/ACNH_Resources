
void FUN_01b359f0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "MailDelivery";
  plVar2 = (long *)FUN_038c6d48(0x20000,&local_50,param_1,8,1,1);
  lVar1 = DAT_05ae7600;
  DAT_0532d280 = plVar2;
  if (DAT_0532d278 != (void *)0x0) goto LAB_01b35b00;
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0x50);
  }
  else {
    plVar4 = plVar2;
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar1 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_01b35abc;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x50,8);
  }
LAB_01b35abc:
  FUN_038c69f0((long)pvVar5 + 0x30,plVar2,3);
  DAT_0532d270 = (long)pvVar5 + 0x30;
  *(void **)pvVar5 = pvVar5;
  *(void **)((long)pvVar5 + 8) = pvVar5;
  plVar2 = DAT_0532d280;
  *(undefined8 *)((long)pvVar5 + 0x28) = 0x1000000000;
  *(undefined ***)((long)pvVar5 + 0x30) = &PTR_FUN_04a37c18;
  *(undefined8 *)((long)pvVar5 + 0x10) = 0x1000000000;
  DAT_0532d278 = pvVar5;
  *(long *)((long)pvVar5 + 0x18) = (long)pvVar5 + 0x18;
  *(long *)((long)pvVar5 + 0x20) = (long)pvVar5 + 0x18;
LAB_01b35b00:
  (**(code **)(*plVar2 + 0xb0))(plVar2);
  return;
}

