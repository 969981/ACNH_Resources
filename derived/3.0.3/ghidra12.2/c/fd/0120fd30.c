
undefined8 FUN_0120fd30(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_24 = 0;
  if (DAT_05574040 == 0) {
LAB_0120fddc:
    local_24 = 2;
    if (DAT_05574040 == 0) {
LAB_0120fe74:
      local_24 = 4;
      if (DAT_05574040 == 0) goto LAB_0120ff0c;
      lVar1 = FUN_026eec4c(DAT_05574040,4);
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
        local_2c = 0x34da;
        FUN_0277d4ac(&local_2c);
        uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
        if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
      }
      local_24 = 5;
      if (DAT_05574040 != 0) {
        lVar1 = FUN_026eec4c(DAT_05574040,5);
        if (lVar1 != 0) {
          uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
          local_2c = 0x34da;
          FUN_0277d4ac(&local_2c);
          uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
          if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
        }
        goto LAB_0120ff0c;
      }
    }
    else {
      lVar1 = FUN_026eec4c(DAT_05574040,2);
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
        local_2c = 0x34da;
        FUN_0277d4ac(&local_2c);
        uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
        if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
      }
      local_24 = 3;
      if (DAT_05574040 != 0) {
        lVar1 = FUN_026eec4c(DAT_05574040,3);
        if (lVar1 != 0) {
          uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
          local_2c = 0x34da;
          FUN_0277d4ac(&local_2c);
          uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
          if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
        }
        goto LAB_0120fe74;
      }
LAB_0120ff0c:
      local_24 = 6;
      if (DAT_05574040 != 0) {
        lVar1 = FUN_026eec4c(DAT_05574040,6);
        if (lVar1 != 0) {
          uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
          local_2c = 0x34da;
          FUN_0277d4ac(&local_2c);
          uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
          if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
        }
        local_24 = 7;
        if ((DAT_05574040 != 0) && (lVar1 = FUN_026eec4c(DAT_05574040,7), lVar1 != 0)) {
          uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
          local_2c = 0x34da;
          FUN_0277d4ac(&local_2c);
          uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
          if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
        }
      }
    }
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_026eec4c(DAT_05574040,0);
    if (lVar1 == 0) {
LAB_0120fd90:
      local_24 = 1;
      if (DAT_05574040 != 0) {
        lVar1 = FUN_026eec4c(DAT_05574040,1);
        if (lVar1 != 0) {
          uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
          local_2c = 0x34da;
          FUN_0277d4ac(&local_2c);
          uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
          if ((uVar2 & 1) != 0) goto LAB_0120ffa4;
        }
        goto LAB_0120fddc;
      }
      goto LAB_0120fe74;
    }
    uVar3 = *(undefined8 *)PTR_DAT_04bb46f0;
    local_2c = 0x34da;
    FUN_0277d4ac(&local_2c);
    uVar2 = FUN_0261f3b8(uVar3,&local_2c,&local_24);
    if ((uVar2 & 1) == 0) goto LAB_0120fd90;
LAB_0120ffa4:
    uVar3 = 1;
  }
  return uVar3;
}

