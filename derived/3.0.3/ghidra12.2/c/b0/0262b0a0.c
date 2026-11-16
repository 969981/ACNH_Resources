
void FUN_0262b0a0(undefined8 param_1,long param_2,byte *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_64 [4];
  
  puVar2 = PTR_DAT_04bb4f78;
  uVar8 = 0;
  do {
    uVar9 = uVar8 >> 3;
    uVar1 = 1 << (ulong)((uint)uVar8 & 7);
    bVar6 = *(byte *)(param_2 + uVar9);
    if ((uVar1 & bVar6) != 0) {
      if ((uVar1 & *(byte *)(param_4 + uVar9)) == 0) {
LAB_0262b0ec:
        *(byte *)(param_2 + uVar9) = bVar6 & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
      }
      else {
        local_64[0] = *param_3;
        if (7 < local_64[0]) {
          local_64[0] = 0xff;
        }
        lVar3 = FUN_025830c0(*(undefined8 *)puVar2,local_64,1);
        if (lVar3 != 0) {
          lVar7 = lVar3 + 0x194b0;
          if (*(long *)(lVar3 + 0x194b8) == 0) {
            lVar7 = *(long *)(DAT_05574040 + 0x20);
          }
          if (*(long **)(lVar7 + 0x86b0) == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            puVar4 = (undefined8 *)**(long **)(lVar7 + 0x86b0);
            uVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar4)();
            }
          }
          bVar6 = *(byte *)(*(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690) + uVar9);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x86b0) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 8), puVar4 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar4)();
          }
          if ((uVar1 & bVar6) != 0) {
            bVar6 = *(byte *)(param_2 + uVar9);
            goto LAB_0262b0ec;
          }
        }
      }
    }
    uVar1 = (uint)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    if (uVar1 == 0x800) {
      return;
    }
  } while( true );
}

