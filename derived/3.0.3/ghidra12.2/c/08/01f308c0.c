
void FUN_01f308c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_35;
  
  DAT_05453f6c = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
  if (*(uint *)(DAT_0537d558 + 0x80) < 2) {
    local_35 = 0;
    local_48 = 0x10;
    local_3c = 0;
    local_44 = 0x65636e6172746e45;
    puStack_50 = &local_44;
    local_58 = PTR_DAT_04bb2ab0 + 0x10;
    uVar2 = FUN_02931830(PTR_DAT_04bc39e0,&local_58,0);
    if (((-1 < (int)uVar2) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      if (((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
         ((lVar5 = *(long *)(DAT_05aed670 + 0x330), lVar5 != 0 && (uVar2 < *(uint *)(lVar5 + 0x260))
          ))) {
        lVar5 = lVar5 + 0x250;
        uVar1 = uVar2 + 1 & 3;
        if (2 < uVar2) {
          uVar2 = uVar2 + 1 & 0xfffffffc;
          do {
            uVar2 = uVar2 - 4;
            lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 8) + 8);
          } while (uVar2 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar5 = *(long *)(lVar5 + 8);
        }
        if ((lVar5 != 0) && (lVar5 != 0x40)) {
          *(undefined1 *)(lVar5 + -4) = 1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1358c) = 0x5a;
  return;
}

