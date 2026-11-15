
void FUN_0220fad4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_04bb30a0;
  uVar2 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  if (uVar2 < 4) {
LAB_0220fbc8:
    bVar4 = *(byte *)(param_1 + 0x24);
    uVar6 = 0;
    *(byte *)(param_1 + 0x24) = bVar4 & 0xfb;
  }
  else {
    uVar2 = FUN_00a867c8(*(undefined8 *)puVar1);
    uVar3 = FUN_00a86724(*(undefined8 *)puVar1);
    if (uVar2 < 4) {
      if ((uVar3 & 0xfffffffe) == 4) {
        piVar5 = (int *)(*(long *)puVar1 + 0x6533c);
      }
      else {
        uVar2 = FUN_00a86724();
        if ((uVar2 & 0xfffffffe) != 6) goto LAB_0220fbc8;
        piVar5 = (int *)(*(long *)puVar1 + 0x65340);
      }
      if (*piVar5 < 6) goto LAB_0220fbc8;
    }
    else {
      if ((uVar3 & 0xfffffffe) == 4) {
        piVar5 = (int *)(*(long *)puVar1 + 0x6533c);
      }
      else {
        uVar2 = FUN_00a86724();
        if ((uVar2 & 0xfffffffe) != 6) goto LAB_0220fbc8;
        piVar5 = (int *)(*(long *)puVar1 + 0x65340);
      }
      if (*piVar5 < 7) goto LAB_0220fbc8;
    }
    bVar4 = *(byte *)(param_1 + 0x24);
    uVar6 = 1;
    *(byte *)(param_1 + 0x24) = bVar4 | 4;
  }
  if ((bVar4 & 1) != 0) {
    uVar2 = FUN_00a86724(*(undefined8 *)puVar1);
    if ((uVar2 & 0xfffffffd) == 5) {
      uVar2 = FUN_00a867c8(*(undefined8 *)puVar1);
      uVar3 = FUN_00a86724(*(undefined8 *)puVar1);
      if (uVar2 < 4) {
        if ((uVar3 & 0xfffffffe) == 4) {
          piVar5 = (int *)(*(long *)puVar1 + 0x6533c);
        }
        else {
          uVar2 = FUN_00a86724();
          if ((uVar2 & 0xfffffffe) != 6) goto LAB_0220fca0;
          piVar5 = (int *)(*(long *)puVar1 + 0x65340);
        }
        if (5 < *piVar5) goto LAB_0220fc90;
      }
      else {
        if ((uVar3 & 0xfffffffe) == 4) {
          piVar5 = (int *)(*(long *)puVar1 + 0x6533c);
        }
        else {
          uVar2 = FUN_00a86724();
          if ((uVar2 & 0xfffffffe) != 6) goto LAB_0220fca0;
          piVar5 = (int *)(*(long *)puVar1 + 0x65340);
        }
        if (0x37 < *piVar5) {
LAB_0220fc90:
          uVar6 = 2;
          bVar4 = *(byte *)(param_1 + 0x24) | 8;
          goto LAB_0220fca8;
        }
      }
    }
  }
LAB_0220fca0:
  bVar4 = *(byte *)(param_1 + 0x24) & 0xf7;
LAB_0220fca8:
  *(byte *)(param_1 + 0x24) = bVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  return;
}

