
undefined8 FUN_01f32410(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  undefined1 local_45;
  
  local_45 = 0;
  local_58 = 0x10;
  local_4c = 0;
  local_54 = 0x65636e6172746e45;
  puStack_60 = &local_54;
  local_68 = PTR_DAT_04bb2ab0 + 0x10;
  uVar2 = FUN_02931830(PTR_DAT_04bc39e0,&local_68,0);
  lVar4 = FUN_0252d9bc(0);
  puVar1 = PTR_DAT_04bb2640;
  if ((((-1 < (int)uVar2) && (lVar4 != 0)) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar3 = FUN_006bd550(*puVar5,0);
    if (iVar3 != 0x758f7eaf) {
      return 0;
    }
    if (((DAT_05aed670 != 0) && (lVar7 = *(long *)(DAT_05aed670 + 0x330), lVar7 != 0)) &&
       (uVar2 < *(uint *)(lVar7 + 0x260))) {
      lVar7 = lVar7 + 0x250;
      uVar8 = uVar2 + 1 & 3;
      if (2 < uVar2) {
        uVar9 = uVar2 + 1 & 0xfffffffc;
        do {
          uVar9 = uVar9 - 4;
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
        } while (uVar9 != 0);
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        lVar7 = *(long *)(lVar7 + 8);
      }
      if (lVar7 == 0) {
        return 0;
      }
      if (lVar7 == 0x40) {
        return 0;
      }
      if (*(char *)(lVar7 + -4) != '\0') {
        puVar5 = (undefined8 *)
                 (**(code **)(**(long **)puVar1 + 0x18))
                           (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar5,0);
        if (((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
           ((lVar7 = *(long *)(DAT_05aed670 + 0x330), lVar7 != 0 &&
            (uVar2 < *(uint *)(lVar7 + 0x260))))) {
          uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
          lVar7 = lVar7 + 0x250;
          uVar8 = uVar2 + 1;
          uVar9 = uVar8 & 3;
          if (2 < uVar2) {
            uVar8 = uVar8 & 0xfffffffc;
            do {
              uVar8 = uVar8 - 4;
              lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
            } while (uVar8 != 0);
          }
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            lVar7 = *(long *)(lVar7 + 8);
          }
          if (((lVar7 != 0) && (lVar7 + -0x40 != 0)) &&
             (uVar6 = FUN_02932e20(lVar7 + -0x40,lVar4), (uVar6 & 1) != 0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

