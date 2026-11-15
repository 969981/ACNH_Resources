
void FUN_02119af0(undefined4 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar1 = FUN_02119c7c();
  if (uVar1 == 0xffffffff) {
    uVar4 = 0;
    goto LAB_02119c68;
  }
  if (uVar1 == 0xfffffffe) {
    if (*(int *)(param_2 + 0x1604) == 1) {
      if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        if ((iVar2 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))
           ) {
          uVar1 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
          param_2 = param_2 + 0x10;
LAB_02119c38:
          if (uVar1 < 8) {
            param_2 = param_2 + (ulong)uVar1 * 0x1c;
          }
          goto LAB_02119c64;
        }
      }
      param_2 = param_2 + 0x10;
    }
    else {
      param_2 = param_2 + 0xd4;
    }
  }
  else {
    if (uVar1 < *(uint *)(param_2 + 0x1e8)) {
      lVar5 = *(long *)(*(long *)(param_2 + 0x1f0) + (long)(int)uVar1 * 8);
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(param_2 + 0x1604) == 1) {
      if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        if ((iVar2 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))
           ) {
          uVar1 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
          param_2 = lVar5 + 8;
          goto LAB_02119c38;
        }
      }
      param_2 = lVar5 + 8;
    }
    else {
      param_2 = lVar5 + 0xcc;
    }
  }
LAB_02119c64:
  uVar4 = *(undefined4 *)(param_2 + 0x18);
LAB_02119c68:
  *param_1 = uVar4;
  return;
}

