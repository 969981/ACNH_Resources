
undefined8
FUN_0026dfe0(long param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 *param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint local_98 [4];
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_6[1] == '\0') && (lVar8 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),0), lVar8 != 0))
  {
    iVar5 = 0;
    do {
      lVar8 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),iVar5);
      uVar9 = FUN_002aa1e0(param_1,lVar8,param_6[2],param_4,param_6[3],param_5);
      if (((uVar9 & 1) != 0) &&
         (uVar2 = *(uint *)(lVar8 + 0x5fc), uVar2 != 0 && (uVar2 & param_2) == uVar2)) {
        param_2 = param_2 & (uVar2 ^ 0xffffffff);
        uVar7 = FUN_002aa480(param_1,lVar8,param_3);
        FUN_002ac58c(param_1 + 0x30,lVar8,uVar7,uVar2,*param_6,1,0,0);
      }
      iVar5 = iVar5 + 1;
      lVar8 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),iVar5);
    } while ((lVar8 != 0) && (param_2 != 0));
    if (param_2 == 0) {
      return 1;
    }
  }
  puVar3 = PTR_DAT_04bcba18;
  puVar1 = PTR_DAT_04bcba18 + 0x10;
  do {
    while( true ) {
      uVar4 = FUN_0028a680(param_2,*(undefined4 *)(param_1 + 0x938));
      uVar2 = (2 << (ulong)(uVar4 & 0x1f)) - 1;
      if ((int)uVar4 < 0) {
        uVar2 = 0xffffffff;
      }
      uVar2 = uVar2 & param_2;
      iVar5 = FUN_0028a648(uVar2);
      FUN_00227258(&local_88);
      if (iVar5 == 1) break;
      FUN_00227284(&local_88);
LAB_0026e128:
      memset(local_98,0,4);
      local_98[0] = uVar2;
      lVar8 = FUN_002aa2a0(param_1,&local_88,param_5,param_6);
      if ((lVar8 == 0) || (local_98[0] == 0)) {
        if (lVar8 == 0) {
          local_88 = puVar3 + 0x10;
          FUN_0021f584(auStack_80);
          return 0;
        }
      }
      else {
        FUN_0022b904(lVar8,local_98);
      }
      uVar7 = FUN_002aa480(param_1,lVar8,param_3);
      FUN_002ac58c(param_1 + 0x30,lVar8,uVar7,uVar2,*param_6,1,0,0);
      local_88 = puVar3 + 0x10;
      FUN_0021f584(auStack_80);
      param_2 = uVar2 ^ param_2;
      if (param_2 == 0) {
        return 1;
      }
    }
    uVar6 = FUN_0028a648(uVar2 - 1 & (uVar2 ^ 0xffffffff));
    uVar7 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    FUN_002b5350(local_98,uVar7,&local_88,uVar6);
    if (local_98[0] == 0) goto LAB_0026e128;
    local_88 = puVar1;
    FUN_0021f584(auStack_80);
    param_2 = uVar2 ^ param_2;
    if (param_2 == 0) {
      return 1;
    }
  } while( true );
}

