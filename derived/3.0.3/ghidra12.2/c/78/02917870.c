
void FUN_02917870(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar1 = FUN_006bd550(*puVar2,0);
    if ((iVar1 == 0x758f7eaf) &&
       (((DAT_05aed670 != 0 && (lVar4 = *(long *)(DAT_05aed670 + 0x330), lVar4 != 0)) &&
        (lVar3 = *(long *)(lVar4 + 600), lVar3 != lVar4 + 0x250)))) {
      lVar5 = lVar3 + -0x40;
      do {
        *(undefined1 *)(lVar5 + 0x3c) = 1;
        lVar3 = *(long *)(lVar3 + 8);
        lVar5 = lVar3 + -0x40;
      } while (lVar5 != lVar4 + 0x210);
    }
  }
  return;
}

