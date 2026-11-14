
bool FUN_0180cee0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((DAT_05292338 != 0) && (uVar2 = FUN_0180b7a0(), (uVar2 & 1) == 0)) {
    iVar4 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar4 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        iVar4 = 0;
        if ((iVar1 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) {
          iVar4 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if ((DAT_052923e8._4_4_ != iVar4) &&
       (*(short *)(DAT_05292338 + 0xe5c) != *(short *)PTR_DAT_04bb3170)) {
      if (*(int *)(param_1 + 8) < *(int *)(DAT_05292338 + 0xd88)) {
        return false;
      }
      if (*(int *)(DAT_05292338 + 0xd98) < *(int *)(param_1 + 8)) {
        return false;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(DAT_05292338 + 0xd8c)) {
        return false;
      }
      return *(int *)(param_1 + 0xc) <= *(int *)(DAT_05292338 + 0xd9c);
    }
  }
  return false;
}

