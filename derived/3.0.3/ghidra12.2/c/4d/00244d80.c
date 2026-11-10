
void FUN_00244d80(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  *param_1 = (long)(PTR_DAT_04bcd560 + 0x10);
  uVar1 = (ulong)*(ushort *)((long)param_1 + 10);
  if (*(ushort *)((long)param_1 + 10) != 0) {
    uVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[2] + uVar4 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        FUN_00285dc0(puVar3);
        uVar1 = (ulong)*(ushort *)((long)param_1 + 10);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    return;
  }
  FUN_00285e00(lVar2);
  FUN_00285dc0(lVar2);
  return;
}

