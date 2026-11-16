
void FUN_0262adc0(undefined8 param_1,long param_2,byte *param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  byte local_64 [4];
  
  puVar3 = PTR_DAT_04bb4f78;
  uVar8 = 0;
  do {
    uVar9 = (ulong)(uVar8 >> 3);
    uVar2 = 1 << (ulong)(uVar8 & 7);
    if (((uVar2 & *(byte *)(param_2 + uVar9)) == 0) && ((uVar2 & *(byte *)(param_4 + uVar9)) != 0))
    {
      local_64[0] = *param_3;
      if (7 < local_64[0]) {
        local_64[0] = 0xff;
      }
      lVar4 = FUN_025830c0(*(undefined8 *)puVar3,local_64,1);
      if (lVar4 != 0) {
        lVar7 = lVar4 + 0x194b0;
        if (*(long *)(lVar4 + 0x194b8) == 0) {
          lVar7 = *(long *)(DAT_05574040 + 0x20);
        }
        if (*(long **)(lVar7 + 0x86b0) == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(lVar7 + 0x86b0);
          uVar6 = 0;
          if (puVar5 != (undefined8 *)0x0) {
            uVar6 = (**(code **)*puVar5)();
          }
        }
        bVar1 = *(byte *)(*(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690) + uVar9);
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x86b0) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        if ((uVar2 & bVar1) != 0) {
          *(byte *)(param_2 + uVar9) = *(byte *)(param_2 + uVar9) | (byte)(1 << (ulong)(uVar8 & 7));
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x800);
  return;
}

