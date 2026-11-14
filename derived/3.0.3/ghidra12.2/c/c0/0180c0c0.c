
bool FUN_0180c0c0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  uVar3 = FUN_0180b7a0();
  if ((uVar3 & 1) == 0) {
    iVar5 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        iVar5 = 0;
        if (((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) &&
           (iVar5 = 0, *(long *)(DAT_05aed670 + 0x330) != 0)) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
    bVar1 = DAT_052923e8._4_4_ == iVar5;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

