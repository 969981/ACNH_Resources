
uint FUN_017e4de8(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 local_28 [2];
  
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar5 + 7);
  if (iVar1 < 0x2922957e) {
    if (((iVar1 == 0x80e20d8) || (iVar1 == 0xb6a5301)) || (iVar1 == 0x1490248c)) goto LAB_017e4edc;
  }
  else if (((iVar1 == 0x2922957e) || (iVar1 == 0x7a616e2f)) || (iVar1 == 0x51b9e069)) {
LAB_017e4edc:
    lVar3 = FUN_02642ea0();
    if (lVar3 == 0) {
      uVar2 = 8;
    }
    else if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
            (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = *(uint *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
      if (8 < uVar2) {
        uVar2 = 0;
      }
    }
    else {
      uVar4 = (**(code **)*puVar5)();
      uVar2 = *(uint *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
      if (8 < uVar2) {
        uVar2 = 0;
      }
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    return uVar2;
  }
  local_28[0] = 0;
  uVar4 = FUN_02b5f400(local_28);
  uVar2 = 0;
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_0266ca90(local_28[0]);
  }
  return uVar2;
}

