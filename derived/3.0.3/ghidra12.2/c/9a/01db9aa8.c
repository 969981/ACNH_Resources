
undefined8 FUN_01db9aa8(long param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar2 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar1 = FUN_006bd550(*puVar2,0);
    if (((((iVar1 == 0x758f7eaf) && (*(char *)(param_1 + 0x8505) != '\0')) &&
         (((((lVar7 = *DAT_0537d558, lVar7 == 0 ||
             (*(int *)(lVar7 + 0x508) == 0 || *(char *)(lVar7 + 0x55d) == '\0')) &&
            (*(byte *)(lVar7 + 0x474) < 2)) && (*(byte *)(lVar7 + 0x476) < 2)) &&
          ((DAT_0537d558[5] == 0 || ((int)DAT_0537d558[0x10] != 1)))))) &&
        (((param_3 & 1) == 0 || (uVar3 = FUN_02640eb0(), (uVar3 & 1) != 0)))) &&
       ((uVar3 = FUN_02640ff0(), (uVar3 & 1) != 0 &&
        (uVar3 = FUN_02658470(param_2), (uVar3 & 1) != 0)))) {
      if (*(int *)(param_1 + 0x84f4) != -1) {
        bVar5 = *param_2;
        bVar6 = *(byte *)(param_1 + 0x84f1);
        if (7 < bVar5) {
          bVar5 = 0xff;
        }
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        if (bVar5 != bVar6) {
          return 0;
        }
      }
      uVar4 = nn::pctl::CheckFreeCommunicationPermission(false);
      return uVar4;
    }
  }
  return 0;
}

