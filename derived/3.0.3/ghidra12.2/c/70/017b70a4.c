
undefined4 FUN_017b70a4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar1 = FUN_006bd550(*puVar2,0);
    if (iVar1 != 0x758f7eaf) {
      return 0;
    }
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      return *(undefined4 *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
    }
  }
  return 0;
}

