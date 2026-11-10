
void FUN_00195740(long param_1)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  
  lVar5 = 0;
  do {
    lVar2 = param_1 + lVar5;
    cVar3 = (char)lVar5;
    *(char *)(lVar2 + 0x48) = cVar3;
    *(char *)(lVar2 + 0x49) = cVar3 + '\x01';
    lVar5 = lVar5 + 4;
    *(char *)(lVar2 + 0x4a) = cVar3 + '\x02';
    *(char *)(lVar2 + 0x4b) = cVar3 + '\x03';
  } while (lVar5 != 0x100);
  lVar5 = 0;
  bVar6 = 0;
  uVar7 = 0;
  *(undefined2 *)(param_1 + 0x248) = 0;
  uVar4 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  lVar2 = 0;
  if (uVar4 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  do {
    cVar3 = *(char *)(param_1 + 0x48 + lVar5);
    uVar1 = (uVar7 & 0xff) + 1;
    bVar6 = *(char *)(lVar2 + (uVar7 & 0xff)) + bVar6 + cVar3;
    *(undefined1 *)(param_1 + 0x48 + lVar5) = *(undefined1 *)(param_1 + (ulong)bVar6 + 0x48);
    *(char *)(param_1 + (ulong)bVar6 + 0x48) = cVar3;
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar1 / uVar4;
    }
    lVar5 = lVar5 + 1;
    uVar7 = uVar1 - uVar7 * uVar4;
  } while (lVar5 != 0x100);
  *(undefined2 *)(param_1 + 0x248) = 0;
  memcpy((void *)(param_1 + 0x148),(void *)(param_1 + 0x48),0x100);
  return;
}

