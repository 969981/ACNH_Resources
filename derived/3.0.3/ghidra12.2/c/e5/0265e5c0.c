
undefined4 FUN_0265e5c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "NicknameOriginal";
  local_50 = puVar1;
  iVar3 = FUN_02746c30(0,param_1,&local_50);
  uVar4 = 0;
  if (iVar3 == 0) {
    pcStack_48 = "NicknameOriginal";
    uVar4 = 1;
    local_50 = puVar1;
    iVar3 = FUN_02746c30(1,param_1,&local_50);
    if (iVar3 == 0) {
      pcStack_48 = "NicknameOriginal";
      uVar4 = 2;
      local_50 = puVar2 + 0x10;
      iVar3 = FUN_02746c30(2,param_1,&local_50);
      if (iVar3 == 0) {
        pcStack_48 = "NicknameOriginal";
        uVar4 = 3;
        local_50 = puVar2 + 0x10;
        iVar3 = FUN_02746c30(3,param_1,&local_50);
        if (iVar3 == 0) {
          pcStack_48 = "NicknameOriginal";
          uVar4 = 4;
          local_50 = puVar2 + 0x10;
          iVar3 = FUN_02746c30(4,param_1,&local_50);
          if (iVar3 == 0) {
            uVar4 = 5;
            pcStack_48 = "NicknameOriginal";
            local_50 = puVar2 + 0x10;
            iVar3 = FUN_02746c30(5,param_1,&local_50);
            if (iVar3 == 0) {
              pcStack_48 = "NicknameOriginal";
              uVar4 = 6;
              local_50 = puVar2 + 0x10;
              iVar3 = FUN_02746c30(6,param_1,&local_50);
              if (iVar3 == 0) {
                pcStack_48 = "NicknameOriginal";
                uVar4 = 7;
                local_50 = puVar2 + 0x10;
                iVar3 = FUN_02746c30(7,param_1,&local_50);
                if (iVar3 == 0) {
                  pcStack_48 = "NicknameOriginal";
                  uVar4 = 8;
                  local_50 = puVar2 + 0x10;
                  iVar3 = FUN_02746c30(8,param_1,&local_50);
                  if (iVar3 == 0) {
                    pcStack_48 = "NicknameOriginal";
                    local_50 = puVar2 + 0x10;
                    iVar3 = FUN_02746c30(9,param_1,&local_50);
                    uVar4 = 9;
                    if (iVar3 == 0) {
                      uVar4 = 0xffffffff;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}

