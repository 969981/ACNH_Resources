
void FUN_02917b70(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar1 = FUN_006bd550(*puVar2,0);
    if ((iVar1 == 0x758f7eaf) &&
       (((DAT_05aed670 != 0 && (lVar4 = *(long *)(DAT_05aed670 + 0x330), lVar4 != 0)) &&
        (lVar3 = *(long *)(lVar4 + 600), lVar3 != lVar4 + 0x250)))) {
      lVar5 = lVar3 + -0x40;
      do {
        if (*(int *)(lVar3 + -0x40) == param_2) {
          *(undefined4 *)(lVar5 + 0xc) = *param_3;
          *(undefined4 *)(lVar5 + 0x10) = param_3[1];
          uVar6 = param_3[2];
          *(undefined4 *)(lVar5 + 0x20) = param_4;
          *(undefined4 *)(lVar5 + 0x18) = param_1;
          *(undefined4 *)(lVar5 + 0x14) = uVar6;
          DAT_055c116d = 1;
          return;
        }
        lVar3 = *(long *)(lVar3 + 8);
        lVar5 = lVar3 + -0x40;
      } while (lVar5 != lVar4 + 0x210);
    }
  }
  return;
}

