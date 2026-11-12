
void FUN_00821780(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
    iVar3 = FUN_006bd550(*puVar4,0);
    if (iVar3 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x141dbac3) {
      lVar6 = *(long *)PTR_DAT_04bb39b0;
      if (*(int *)(lVar6 + 0x15c) == 1) {
        FUN_00826090(lVar6);
        FUN_00824be0(lVar6,0);
        FUN_02509b80(*(undefined8 *)PTR_DAT_04bb4fb8);
        if (0 < *(int *)(lVar6 + 0xf8)) {
          lVar7 = 0;
          puVar4 = *(undefined8 **)(lVar6 + 0x108);
          do {
            puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x100) + lVar7 * 8);
            lVar7 = lVar7 + 1;
            *puVar8 = puVar4;
            *(undefined8 **)(lVar6 + 0x108) = puVar8;
            puVar4 = puVar8;
          } while (lVar7 < *(int *)(lVar6 + 0xf8));
        }
        *(undefined4 *)(lVar6 + 0xf8) = 0;
      }
      lVar6 = *(long *)PTR_DAT_04bb27b8;
      if (*(char *)(lVar6 + 0x28) != -1) {
        FUN_008a3a50(lVar6,3);
      }
      *(undefined1 *)(lVar6 + 0x68) = 0xff;
      lVar6 = *(long *)PTR_DAT_04bb27d0;
      *(undefined1 *)(*(long *)PTR_DAT_04bc1038 + 0x50) = 0;
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x8505) = 0;
        *(undefined1 *)(lVar6 + 0x8502) = 0;
        *(undefined2 *)(lVar6 + 0x84fc) = 0;
      }
      puVar1 = PTR_DAT_04bb5030;
      bVar5 = *PTR_DAT_04bb32e0;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      lVar6 = *(long *)PTR_DAT_04bb49f0;
      *(byte *)(lVar6 + 0xb1) = bVar5;
      puVar2 = PTR_DAT_04bb4848;
      lVar7 = *(long *)puVar1;
      *(undefined1 *)(lVar6 + 0xb0) = 1;
      lVar6 = *(long *)puVar2;
      *(undefined1 *)(lVar7 + 0x111) = 1;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x24) = 0x900000000;
      puVar1 = PTR_DAT_04bb4718;
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(undefined4 *)(lVar6 + 0x2c) = 0;
      *(undefined8 *)(lVar6 + 0xe8) = 0;
      *(undefined4 *)(lVar6 + 0xf0) = 0;
      *(undefined8 *)(lVar6 + 0xfc) = 0x900000001;
      *(undefined4 *)(lVar6 + 0x104) = 0;
      FUN_025176f0(*(undefined8 *)puVar1);
      return;
    }
  }
  return;
}

