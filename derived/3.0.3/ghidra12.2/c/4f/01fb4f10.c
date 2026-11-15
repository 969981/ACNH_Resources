
ushort FUN_01fb4f10(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  lVar4 = DAT_05abbc58;
  iVar2 = *(int *)(puVar6 + 7);
  if (((iVar2 == -0x7975b8e8 || iVar2 == -0x17df00c3) || iVar2 == -0x3e092032) &&
     (DAT_05abbc58 != 0)) {
    lVar5 = *(long *)puVar1;
    if (lVar5 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
        iVar2 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    if ((((*(int *)(puVar6 + 7) == -0x3e092032) || (*(int *)(puVar6 + 7) == -0x7975b8e8)) &&
        (uVar3 = FUN_037242d0(lVar4,*(long *)(param_1 + 8) + 0x3e0), (uVar3 & 1) != 0)) &&
       (*(char *)(lVar4 + 0x1231) < '\0')) {
      return 1;
    }
    iVar2 = FUN_03722560(lVar4,*(long *)(param_1 + 8) + 0x3e0);
    if (iVar2 != -1) {
      return *(ushort *)(*(long *)(*(long *)(lVar4 + 0xe8) + (long)iVar2 * 8) + 0x114) >> 7 & 1;
    }
  }
  return 0;
}

