
bool FUN_02612720(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte local_64 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb46f0;
  local_64[0] = *param_1;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_64,1);
  if (lVar4 == 0) {
    bVar3 = false;
  }
  else {
    uVar9 = 0;
    bVar3 = true;
    do {
      uVar2 = 1 << (ulong)(uVar9 & 7);
      if ((uVar2 & *(byte *)(lVar8 + 0xe99e0 + (ulong)(uVar9 >> 3))) != 0) {
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
        bVar1 = *(byte *)(*(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690) +
                         (ulong)(uVar9 >> 3));
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x86b0) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        if ((uVar2 & bVar1) != 0) {
          return bVar3;
        }
      }
      bVar3 = uVar9 < 0x7ff;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x800);
  }
  return bVar3;
}

