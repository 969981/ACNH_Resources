
void FUN_01d71cd4(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *(undefined4 *)(lVar6 + 0x6d0) = *param_3;
      *(undefined4 *)(lVar6 + 0x6d4) = param_3[1];
      uVar2 = *(undefined1 *)(param_3 + 2);
      *(undefined8 *)(lVar6 + 0x6d9) = 0;
      *(undefined8 *)(lVar6 + 0x6e1) = 0;
      *(undefined8 *)(lVar6 + 0x6e9) = 0;
      *(undefined8 *)(lVar6 + 0x6f0) = 0;
      *(undefined1 *)(lVar6 + 0x6d8) = uVar2;
      uVar3 = *(undefined8 *)((long)param_3 + 9);
      uVar4 = *(undefined8 *)((long)param_3 + 0x11);
      uVar5 = *(undefined8 *)((long)param_3 + 0x19);
      *(undefined8 *)(lVar6 + 0x6ef) = *(undefined8 *)((long)param_3 + 0x1f);
      *(undefined8 *)(lVar6 + 0x6e9) = uVar5;
      *(undefined8 *)(lVar6 + 0x6e1) = uVar4;
      *(undefined8 *)(lVar6 + 0x6d9) = uVar3;
      *(undefined1 *)(lVar6 + 0x6f8) = *(undefined1 *)(param_3 + 10);
      uVar2 = *(undefined1 *)((long)param_3 + 0x29);
      *(undefined8 *)(lVar6 + 0x6fa) = 0;
      *(undefined8 *)(lVar6 + 0x702) = 0;
      *(undefined8 *)(lVar6 + 0x70a) = 0;
      *(undefined8 *)(lVar6 + 0x712) = 0;
      *(undefined8 *)(lVar6 + 0x71a) = 0;
      *(undefined8 *)(lVar6 + 0x722) = 0;
      *(undefined8 *)(lVar6 + 0x72a) = 0;
      *(undefined8 *)(lVar6 + 0x72f) = 0;
      *(undefined1 *)(lVar6 + 0x6f9) = uVar2;
      uVar3 = *(undefined8 *)((long)param_3 + 0x2a);
      uVar4 = *(undefined8 *)((long)param_3 + 0x32);
      uVar5 = *(undefined8 *)((long)param_3 + 0x3a);
      *(undefined8 *)(lVar6 + 0x712) = *(undefined8 *)((long)param_3 + 0x42);
      *(undefined8 *)(lVar6 + 0x70a) = uVar5;
      *(undefined8 *)(lVar6 + 0x702) = uVar4;
      *(undefined8 *)(lVar6 + 0x6fa) = uVar3;
      uVar3 = *(undefined8 *)((long)param_3 + 0x4a);
      uVar4 = *(undefined8 *)((long)param_3 + 0x52);
      uVar5 = *(undefined8 *)((long)param_3 + 0x5a);
      *(undefined4 *)(lVar6 + 0x732) = *(undefined4 *)((long)param_3 + 0x62);
      *(undefined8 *)(lVar6 + 0x72a) = uVar5;
      *(undefined8 *)(lVar6 + 0x722) = uVar4;
      *(undefined8 *)(lVar6 + 0x71a) = uVar3;
      *(undefined1 *)(lVar6 + 0x737) = *(undefined1 *)((long)param_3 + 0x67);
      uVar3 = *(undefined8 *)(param_3 + 0x1a);
      *(undefined4 *)(lVar6 + 0x740) = param_3[0x1c];
      *(undefined8 *)(lVar6 + 0x738) = uVar3;
      *(undefined1 *)(lVar6 + 0x744) = *(undefined1 *)(param_3 + 0x1d);
      uVar3 = *(undefined8 *)(param_3 + 0x1e);
      *(undefined8 *)(lVar6 + 0x750) = 0;
      *(undefined8 *)(lVar6 + 0x748) = uVar3;
      uVar1 = param_3[0x20];
      *(undefined4 *)(lVar6 + 0x753) = *(undefined4 *)((long)param_3 + 0x83);
      *(undefined4 *)(lVar6 + 0x750) = uVar1;
      *(undefined8 *)(lVar6 + 0x758) = *(undefined8 *)(param_3 + 0x22);
      memset((void *)(lVar6 + 0x760),0,0x400);
      memcpy((void *)(lVar6 + 0x760),param_3 + 0x24,0x3ff);
    }
    *(bool *)(lVar6 + 0x6c8) = param_3 != (undefined4 *)0x0;
    *(byte *)(*param_2 + 0x1870) = *(byte *)(*param_2 + 0x1870) | 1;
  }
  return;
}

