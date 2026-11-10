
void FUN_00244c70(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_04bcd560;
  *(short *)((long)param_1 + 10) = (short)param_2;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10((param_2 & 0xffff) << 3,uVar2);
  if (((param_2 & 0xffff) != 0) && (lVar3 != 0)) {
    uVar4 = param_2 & 3;
    if (((uint)param_2 & 0xffff) < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar6 = (undefined8 *)(lVar3 + 0x10);
      do {
        lVar5 = lVar5 + -4;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = puVar6 + 4;
      } while (-lVar5 != (param_2 & 0xfffc));
      lVar5 = -lVar5;
    }
    if (uVar4 != 0) {
      puVar6 = (undefined8 *)(lVar3 + lVar5 * 8);
      do {
        uVar4 = uVar4 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  param_1[2] = lVar3;
  if (*(short *)((long)param_1 + 10) != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_0021f454();
      lVar3 = FUN_00285d10(0xbe8,uVar2);
      if (lVar3 != 0) {
        FUN_0024cf50(lVar3);
      }
      *(long *)(param_1[2] + uVar4 * 8) = lVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((long)param_1 + 10));
  }
  return;
}

