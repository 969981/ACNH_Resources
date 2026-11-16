
void FUN_0264a400(undefined8 *param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  void *__s;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  byte local_34 [4];
  
  puVar6 = param_1 + 1;
  *param_1 = &PTR_LAB_049ff3a8;
  memset(puVar6,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar2;
  *(uint *)(param_1 + 0xed) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(param_1);
  memset(__s,0,0x754);
  if ((*param_2 < 8) && (uVar2 = FUN_02582d8c(param_2,1), puVar1 = PTR_DAT_04bb4fb8, uVar2 < 8)) {
    if (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0') &&
        (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
          (*param_2 < 8)) && (uVar2 = FUN_02582d8c(param_2,1), uVar2 < 8)))) &&
       ((*(char *)(*(long *)puVar1 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0' &&
        (*(char *)(*(long *)puVar1 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')))) {
      local_34[0] = *param_2;
      if (7 < local_34[0]) {
        local_34[0] = 0xff;
      }
      lVar3 = FUN_02583354(DAT_055021a0,local_34,1);
      if (lVar3 != 0) {
        lVar7 = lVar3 + 0x194b0;
        if (*(long *)(lVar3 + 0x194b8) == 0) {
          lVar7 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar7 + 0x1090) == (long *)0x0) ||
           (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x1090), puVar4 == (undefined8 *)0x0)) {
          memcpy(puVar6,(void *)(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070)),0x754);
        }
        else {
          uVar5 = (**(code **)*puVar4)();
          memcpy(puVar6,(void *)(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070)),0x754);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x1090) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x1090) + 8), puVar6 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar6)();
          }
        }
      }
    }
  }
  return;
}

