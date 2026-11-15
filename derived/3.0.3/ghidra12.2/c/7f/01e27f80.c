
void FUN_01e27f80(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  puVar3 = PTR_DAT_04bb27d0;
  plVar6 = *(long **)PTR_DAT_04bb27d0;
  if ((((*(byte *)(*plVar6 + 0x476) < 2) && (uVar4 = FUN_01e28188(), (uVar4 & 1) != 0)) &&
      (*(int *)(param_1 + 0x41c) == 1)) && (DAT_04c487d4 != -1)) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x41c) = 2;
      FUN_01e32d80(param_1);
      plVar6 = *(long **)puVar3;
    }
  }
  *(undefined1 *)(param_1 + 0x57c) = 0;
  if (((*(byte *)(*plVar6 + 0x476) < 2) && (uVar4 = FUN_01e28188(), (uVar4 & 1) != 0)) &&
     (DAT_04c487d4 != -1)) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 3 & 1) != 0) && (uVar4 = FUN_02640eb0(), (uVar4 & 1) != 0)) {
      FUN_01e28340(param_1);
    }
  }
  uVar4 = FUN_01e28188();
  if ((uVar4 & 1) != 0) {
    if (DAT_04c487d4 != -1) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        return;
      }
    }
    lVar1 = param_1 + 0x580;
    if ((*(short *)(param_1 + 0x580) == 0) ||
       ((*(byte *)(**(long **)puVar3 + 0x476) < 2 &&
        (lVar5 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060,lVar1), 0x707 < lVar5)))) {
      FUN_0208b870(lVar1,1,0,0);
      FUN_0208c014(lVar1,0);
      return;
    }
  }
  return;
}

