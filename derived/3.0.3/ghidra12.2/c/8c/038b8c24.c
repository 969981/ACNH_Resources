
void FUN_038b8c24(long *param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined1 uVar4;
  
  if ((*(byte *)((long)param_1 + 0x242) & 3) == 1) goto LAB_038b8c7c;
  cVar1 = *(char *)((long)param_1 + 0x244);
  if (cVar1 != '\0') {
    uVar4 = 1;
    if (cVar1 == '\x01') {
LAB_038b8c60:
      *(undefined1 *)((long)param_1 + 0x243) = uVar4;
    }
    else if (cVar1 == '\x02') {
      uVar4 = 0;
      goto LAB_038b8c60;
    }
    *(undefined1 *)((long)param_1 + 0x244) = 0;
  }
  if ((int)param_1[10] == 1) {
    *(undefined4 *)(param_1 + 10) = 2;
  }
LAB_038b8c7c:
  FUN_038bf420(param_1[7]);
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*param_1 + 0x70))(param_1);
  lVar3 = nn::os::GetSystemTick();
  param_1[0x26] = lVar3 - param_1[0x1f];
  (**(code **)(*param_1 + 0x110))(param_1);
  nn::os::GetSystemTick();
  (**(code **)(*param_1 + 0x118))(param_1);
  bVar2 = *(byte *)((long)param_1 + 0x242);
  if (((bVar2 ^ 0xff) & 3) != 0) {
    lVar3 = nn::os::GetSystemTick();
    param_1[0x1e] = lVar3 - param_1[0x1f];
    lVar3 = nn::os::GetSystemTick();
    bVar2 = *(byte *)((long)param_1 + 0x242);
    param_1[0x1f] = lVar3;
  }
  if ((bVar2 & 1) != 0) {
    *(byte *)((long)param_1 + 0x242) = bVar2 ^ 2;
  }
  return;
}

