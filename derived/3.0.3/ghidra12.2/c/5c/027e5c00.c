
void FUN_027e5c00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_78;
  char *pcStack_70;
  uint local_64;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar5 = 0;
  puVar6 = &DAT_053febf8;
  lVar7 = param_1 + 0x1267c;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    pcStack_70 = "EarlyOrLate";
    local_78 = puVar1;
    local_64 = (uint)uVar5;
    iVar3 = FUN_02749340(lVar7,&local_78);
    if (iVar3 - 1U < 2) {
      uVar4 = FUN_027e5d4c(param_1,&local_64,iVar3 == 1);
      local_78 = puVar2 + 0x10;
      if ((uVar4 & 1) == 0) {
        pcStack_70 = "ContinuousNormalDay";
        FUN_02749650(lVar7,uVar5 & 0xffffffff,&local_78,0,0);
      }
      else {
        pcStack_70 = "EarlyOrLate";
        FUN_02749650(lVar7,uVar5 & 0xffffffff,&local_78,0,0);
        if (((uint)uVar5 < 10) && (puVar6[0x249] != '\0')) {
          FUN_0214f120(puVar6,uVar5 & 0xffffffff);
          FUN_0219d7e0(&DAT_053fe348,uVar5 & 0xffffffff,1,1);
        }
      }
    }
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 0xba0;
    lVar7 = lVar7 + 0x13230;
  } while (uVar5 != 10);
  return;
}

