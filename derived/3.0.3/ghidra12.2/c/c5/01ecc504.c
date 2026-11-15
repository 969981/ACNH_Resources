
byte FUN_01ecc504(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  
  lVar2 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
  if (lVar2 == 0) {
    pbVar5 = (byte *)&DAT_053e6f44;
  }
  else if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
    pbVar5 = (byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    pbVar5 = (byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  uVar4 = (ulong)*pbVar5;
  if ((uVar4 < 0x23) && (pbVar5[1] <= (byte)PTR_DAT_04bc27f0[uVar4])) {
    bVar1 = 0;
    if ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) & 1 << (ulong)(pbVar5[1] & 0x1f)) != 0) {
      bVar1 = *pbVar5;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

