
/* WARNING: Removing unreachable block (ram,0x009b3484) */

void FUN_009b3410(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bc95e0;
  lVar3 = *(long *)PTR_DAT_04bc95e0;
  if (*(long *)(lVar3 + 0x178) != lVar3 + 0x170) {
    lVar4 = (long)*(int *)(lVar3 + 0x184);
    lVar5 = *(long *)(lVar3 + 0x178) - lVar4;
    do {
      if (*(int *)(lVar5 + 0x18) == 0xd) break;
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (lVar3 + 0x170) - lVar4);
  }
  uVar2 = nn::hid::SetSupportedNpadStyleSet(DAT_04101628);
  FUN_009b5440(uVar2,0);
  *(undefined4 *)(param_1 + 0xf5b5c) = 0;
  lVar5 = (long)*(int *)(*(long *)puVar1 + 0x184);
  lVar3 = *(long *)(*(long *)puVar1 + 0x178) - lVar5;
  if (*(int *)(lVar3 + 0x18) != 0xd) {
    do {
      lVar3 = *(long *)(lVar3 + lVar5 + 8) - lVar5;
    } while (*(int *)(lVar3 + 0x18) != 0xd);
  }
  *(undefined4 *)(lVar3 + 0x28) = 4;
  return;
}

