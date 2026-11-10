
bool FUN_00272f10(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 auStack_64 [16];
  int local_54 [4];
  undefined4 local_44;
  
  lVar6 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar6 = *(long *)(lVar6 + 0x98);
  bVar2 = false;
  if (lVar6 != 0) {
    bVar3 = FUN_0026bfe0(DAT_04c603c8);
    if ((bVar3 < 0x20) && (*(byte *)(lVar6 + 0x38) == bVar3)) {
      lVar6 = FUN_0026c88c(DAT_04c603c8);
      bVar2 = false;
      if ((lVar6 != 0) && (*(char *)(param_1 + 0xa8) == '\0')) {
        iVar5 = FUN_00282aec();
        puVar9 = *(undefined1 **)(param_1 + 0xa0);
        *puVar9 = 0x81;
        puVar9[1] = bVar3;
        uVar4 = FUN_0026aa40(DAT_04c603c8);
        puVar9[2] = uVar4;
        puVar9[3] = 0;
        FUN_00228480(puVar9 + 4,*(undefined4 *)(lVar6 + 0x38));
        FUN_00228480(puVar9 + 8,*(undefined4 *)(lVar6 + 0x34));
        local_44 = 0;
        FUN_002826b0(local_54,lVar6,puVar9 + 0xc,*(int *)(param_1 + 0x9c) + -0xc,&local_44);
        puVar1 = PTR_DAT_04bcd028;
        bVar2 = local_54[0] == 0;
        if ((local_54[0] == 0) && (*(short *)(param_1 + 0x8a) != 0)) {
          lVar6 = 0;
          uVar10 = 0;
          do {
            uVar7 = FUN_002aed20(*(long *)(param_1 + 0x90) + lVar6);
            if ((uVar7 & 1) != 0) {
              FUN_002b0d5c(auStack_64,*(long *)(param_1 + 0x90) + lVar6,
                           *(undefined8 *)(param_1 + 0xa0),iVar5 + 0xc,0);
              FUN_00229780(local_54,auStack_64);
              if ((local_54[0] == 0) && (*(long *)puVar1 != 0)) {
                uVar8 = FUN_002290b0(*(long *)puVar1,9);
                FUN_0022910c(uVar8,*(undefined2 *)(*(long *)(param_1 + 0x90) + lVar6 + 0x32));
              }
            }
            uVar10 = uVar10 + 1;
            lVar6 = lVar6 + 0x6b0;
          } while (uVar10 < *(ushort *)(param_1 + 0x8a));
        }
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

