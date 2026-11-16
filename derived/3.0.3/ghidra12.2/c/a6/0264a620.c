
void FUN_0264a620(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar4 = param_1 + 1;
  *param_1 = &PTR_LAB_049ff3a8;
  memset(puVar4,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar1;
  *(uint *)(param_1 + 0xed) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(param_1);
  memset(__s,0,0x754);
  if ((DAT_05574040 != 0) && (lVar2 = FUN_026eec4c(DAT_05574040,*param_2), lVar2 != 0)) {
    lVar6 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
      plVar5 = *(long **)(lVar6 + 0x1090);
    }
    else {
      plVar5 = *(long **)(lVar2 + 0x1a540);
    }
    if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
      memcpy(puVar4,(void *)(*(long *)(lVar6 + 0x1078) + *(long *)(lVar6 + 0x1070)),0x754);
      return;
    }
    uVar3 = (*(code *)**(undefined8 **)*plVar5)();
    memcpy(puVar4,(void *)(*(long *)(lVar6 + 0x1078) + *(long *)(lVar6 + 0x1070)),0x754);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1090) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1090) + 8), puVar4 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0264a760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}

