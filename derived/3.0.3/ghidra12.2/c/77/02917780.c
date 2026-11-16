
void FUN_02917780(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if ((iVar2 == 0x758f7eaf) &&
       (((DAT_05aed670 != 0 && (lVar4 = *(long *)(DAT_05aed670 + 0x330), lVar4 != 0)) &&
        (param_1 < *(uint *)(lVar4 + 0x260))))) {
      param_1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
      lVar4 = lVar4 + 0x250;
      uVar5 = param_1 + 1;
      uVar1 = uVar5 & 3;
      if (2 < param_1) {
        uVar5 = uVar5 & 0xfffffffc;
        do {
          uVar5 = uVar5 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar5 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      if ((lVar4 != 0) && (lVar4 != 0x40)) {
        *(undefined1 *)(lVar4 + -4) = 0;
      }
    }
  }
  return;
}

