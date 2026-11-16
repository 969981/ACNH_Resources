
long FUN_02917a1c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb2640;
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar4 = FUN_006bd550(*puVar6,0);
    if ((iVar4 == 0x758f7eaf) &&
       ((((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
         (uVar5 = FUN_02931830(&DAT_055c10d0,param_1,0), -1 < (int)uVar5)) &&
        ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))))) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)puVar3 + 0x18))
                         (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      if ((iVar4 == 0x758f7eaf) &&
         (((DAT_05aed670 != 0 && (lVar7 = *(long *)(DAT_05aed670 + 0x330), lVar7 != 0)) &&
          (uVar5 < *(uint *)(lVar7 + 0x260))))) {
        lVar7 = lVar7 + 0x250;
        uVar1 = uVar5 + 1 & 3;
        if (2 < uVar5) {
          uVar5 = uVar5 + 1 & 0xfffffffc;
          do {
            uVar5 = uVar5 - 4;
            lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
          } while (uVar5 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar7 = *(long *)(lVar7 + 8);
        }
        lVar2 = 0;
        if (lVar7 != 0) {
          lVar2 = lVar7 + -0x40;
        }
        return lVar2;
      }
    }
  }
  return 0;
}

