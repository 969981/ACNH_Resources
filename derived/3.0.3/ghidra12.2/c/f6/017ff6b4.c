
void FUN_017ff6b4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_036eb4c0(0);
  iVar3 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar3 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      iVar3 = 0;
      if (((iVar1 == 0x758f7eaf) && (iVar3 = 0, DAT_05aed670 != 0)) &&
         (iVar3 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
        iVar3 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
      }
    }
  }
  if (DAT_0529240c == iVar3) {
    *(undefined2 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e2) = 0x101;
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1ec) = 1;
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(DAT_04da6480 + 0x4060);
  }
  return;
}

