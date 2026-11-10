
bool FUN_002730c0(long param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_88 [16];
  int local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  
  lVar5 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar5 = *(long *)(lVar5 + 0x98);
  bVar2 = false;
  if (lVar5 != 0) {
    uVar4 = FUN_0026bfe0(DAT_04c603c8);
    if (((uVar4 & 0xff) < 0x20) &&
       ((uint)*(byte *)(lVar5 + 0x38) == (uVar4 & 0xff) && *(char *)(param_1 + 0xa8) == '\0')) {
      uVar1 = *(ushort *)(DAT_04c603c8 + 0x98);
      FUN_0027a270(local_78,*(undefined8 *)(DAT_04c603c8 + 0x38),uVar4,
                   *(long *)(param_1 + 0xa0) + 0xc,&local_64,&local_68,1);
      bVar2 = local_78[0] == 0;
      if (local_78[0] == 0) {
        **(undefined1 **)(param_1 + 0xa0) = 0x49;
        *(char *)(*(long *)(param_1 + 0xa0) + 1) = (char)uVar4;
        uVar3 = FUN_0026aa40(DAT_04c603c8);
        *(undefined1 *)(*(long *)(param_1 + 0xa0) + 2) = uVar3;
        *(undefined1 *)(*(long *)(param_1 + 0xa0) + 3) = 0;
        FUN_00228480(*(long *)(param_1 + 0xa0) + 4,local_64);
        FUN_00228480(*(long *)(param_1 + 0xa0) + 8,local_68);
        uVar8 = 0;
        do {
          *(undefined1 *)(param_2 + uVar8) = 0;
          if (((uVar4 & 0xff) != ((uint)uVar8 & 0xff)) &&
             (uVar6 = FUN_00269a70(DAT_04c603c8,uVar8 & 0xffffffff), (uVar6 & 1) != 0)) {
            lVar5 = *(long *)(param_1 + 0x90);
            lVar10 = uVar8 - ((uVar4 & 0xff) <= ((uint)uVar8 & 0xff));
            lVar9 = lVar5 + lVar10 * 0x6b0;
            uVar6 = FUN_002aed20(lVar9);
            if ((uVar6 & 1) != 0) {
              FUN_002b0d5c(auStack_88,lVar9,*(undefined8 *)(param_1 + 0xa0),uVar1 + 0xc,0);
              FUN_00229780(local_78,auStack_88);
              if (local_78[0] == 0) {
                if (DAT_04c60320 != 0) {
                  uVar7 = FUN_002290b0(DAT_04c60320,9);
                  FUN_0022910c(uVar7,*(undefined2 *)(lVar5 + lVar10 * 0x6b0 + 0x32));
                }
                *(undefined1 *)(param_2 + uVar8) = 1;
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x20);
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

