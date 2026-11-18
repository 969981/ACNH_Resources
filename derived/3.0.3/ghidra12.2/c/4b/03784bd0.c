
ushort FUN_03784bd0(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *local_30;
  undefined2 local_28;
  
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  iVar2 = *(int *)(puVar5 + 7);
  if ((iVar2 == -0x7975b8e8 || iVar2 == -0x17df00c3) || iVar2 == -0x3e092032) {
    local_30 = PTR_DAT_04bb7648 + 0x10;
    local_28 = *DAT_05ab5ea8;
    lVar3 = FUN_03775b80(&local_30);
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar5 == (undefined8 *)0x0)) {
        return *(ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8)) >> 3 & 1;
      }
      uVar4 = (**(code **)*puVar5)();
      uVar1 = *(ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8)) >> 3 & 1;
      if ((uVar4 & 1) == 0) {
        return uVar1;
      }
      if (*(long *)(lVar3 + 0x28) == 0) {
        return uVar1;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return uVar1;
      }
      (**(code **)*puVar5)();
      return uVar1;
    }
  }
  return 0;
}

