
undefined8 FUN_001c2a70(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_8d4;
  undefined1 auStack_8d0 [144];
  undefined1 auStack_840 [144];
  undefined1 auStack_7b0 [144];
  undefined1 auStack_720 [144];
  undefined1 auStack_690 [144];
  undefined1 auStack_600 [144];
  undefined1 auStack_570 [144];
  undefined1 auStack_4e0 [144];
  undefined1 auStack_450 [144];
  undefined1 auStack_3c0 [144];
  undefined1 auStack_330 [144];
  undefined1 auStack_2a0 [144];
  undefined1 auStack_210 [144];
  undefined1 auStack_180 [144];
  undefined1 auStack_f0 [144];
  
  FUN_001e1500(auStack_8d0);
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500();
  FUN_001e1500(auStack_f0);
  local_8d4 = 0;
  FUN_001dffa0(auStack_8d0,0xf,&local_8d4);
  if (local_8d4 == 0) {
    uVar6 = 1;
  }
  else {
    uVar5 = 0;
    uVar6 = 1;
    puVar3 = auStack_8d0;
    do {
      if (*(char *)(param_1 + 0x440) == '\0') {
        uVar4 = 0;
        uVar1 = 0;
        if (*(char *)(param_1 + 0x468) != '\0') goto LAB_001c2be0;
      }
      else {
        uVar2 = FUN_001d681c(param_1 + 0x438,puVar3,0);
        uVar4 = uVar2 & 0xffffffff;
        if (*(char *)(param_1 + 0x468) == '\0') {
          if ((uVar2 & 1) != 0) {
LAB_001c2c14:
            FUN_001c2cd0(param_1 + 0x438,param_2,puVar3,param_3);
LAB_001c2c28:
            uVar1 = uVar6;
            goto LAB_001c2b84;
          }
        }
        else {
LAB_001c2be0:
          uVar2 = FUN_001bcf54(param_1 + 0x458,puVar3,0);
          if (((uVar4 & 1) != 0) || ((uVar2 & 1) != 0)) {
            if ((uVar2 & 1) == 0) goto LAB_001c2c14;
            FUN_001bd160(param_1 + 0x458,param_2,puVar3,param_3);
            goto LAB_001c2c28;
          }
        }
        uVar1 = 0;
      }
LAB_001c2b84:
      uVar6 = uVar1;
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 0x90;
    } while (uVar5 < local_8d4);
  }
  FUN_001e1868(auStack_f0);
  FUN_001e1868(auStack_180);
  FUN_001e1868(auStack_210);
  FUN_001e1868(auStack_2a0);
  FUN_001e1868(auStack_330);
  FUN_001e1868(auStack_3c0);
  FUN_001e1868(auStack_450);
  FUN_001e1868(auStack_4e0);
  FUN_001e1868(auStack_570);
  FUN_001e1868(auStack_600);
  FUN_001e1868(auStack_690);
  FUN_001e1868(auStack_720);
  FUN_001e1868(auStack_7b0);
  FUN_001e1868(auStack_840);
  FUN_001e1868(auStack_8d0);
  return uVar6;
}

