
void FUN_03d82c80(long *param_1,ulong param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  plVar3 = (long *)param_1[0x50];
  *(undefined2 *)(plVar3 + 4) = 1;
  *(undefined4 *)((long)plVar3 + 0x24) = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0x80000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,0);
  if ((long *)plVar3[10] != plVar3 + 9) {
    lVar5 = (long)*(int *)((long)plVar3 + 0x5c);
    puVar4 = (undefined8 *)(plVar3[10] - lVar5);
    do {
      (**(code **)*puVar4)(puVar4,*(undefined4 *)((long)plVar3 + 0x24));
      puVar4 = (undefined8 *)(*(long *)((long)puVar4 + lVar5 + 8) - lVar5);
    } while (puVar4 != (undefined8 *)((long)(plVar3 + 9) - lVar5));
  }
  lVar5 = param_1[0x50];
  if ((param_3 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(lVar5 + 0x2c) = 0xf;
      do {
        if (*(char *)(lVar5 + 0x20) == '\0') {
          FUN_03c83a50(lVar5,1);
        }
        FUN_03c835a0(lVar5);
      } while (*(int *)(lVar5 + 0x2c) != -0x80000000);
      bVar2 = *(byte *)((long)param_1 + 0x2c3) & 0xfe;
    }
    else {
      *(undefined4 *)(lVar5 + 0x2c) = 0xe;
      do {
        if (*(char *)(lVar5 + 0x20) == '\0') {
          FUN_03c83a50(lVar5,1);
        }
        FUN_03c835a0(lVar5);
      } while (*(int *)(lVar5 + 0x2c) != -0x80000000);
      bVar2 = *(byte *)((long)param_1 + 0x2c3) | 1;
    }
    bVar2 = bVar2 & 0xfd;
  }
  else {
    *(undefined4 *)(lVar5 + 0x2c) = 2;
    do {
      if (*(char *)(lVar5 + 0x20) == '\0') {
        FUN_03c83a50(lVar5,1);
      }
      FUN_03c835a0(lVar5);
    } while (*(int *)(lVar5 + 0x2c) != -0x80000000);
    bVar2 = *(byte *)((long)param_1 + 0x2c3) | 3;
  }
  lVar5 = param_1[0x54];
  *(byte *)((long)param_1 + 0x2c3) = bVar2 & 0xfb;
  if (lVar5 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(lVar5 + 0x40) = uVar1;
  }
  *(undefined1 *)((long)param_1 + 0x2c2) = 0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  return;
}

