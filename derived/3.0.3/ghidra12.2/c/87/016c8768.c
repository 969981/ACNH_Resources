
void FUN_016c8768(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  void *__s;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_34 [4];
  
  puVar5 = param_1 + 1;
  *param_1 = &PTR_LAB_049ff3a8;
  memset(puVar5,0,0x754);
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
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar2 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar2 != 0) {
    lVar6 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x2d128) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x2d128), puVar3 == (undefined8 *)0x0)) {
      memcpy(puVar5,(void *)(*(long *)(lVar6 + 0x2d110) + *(long *)(lVar6 + 0x2d108) + 0x38),0x754);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      memcpy(puVar5,(void *)(*(long *)(lVar6 + 0x2d110) + *(long *)(lVar6 + 0x2d108) + 0x38),0x754);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x2d128) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d128) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return;
}

