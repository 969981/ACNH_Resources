
long FUN_003ba7d0(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong local_70;
  int local_68;
  int local_5c;
  char local_50;
  undefined8 local_48;
  
  local_70 = FUN_003cd670();
  local_70 = local_70 & 0xffffffffffff0000;
  uVar1 = FUN_003b8374(param_1);
  lVar2 = FUN_003c0150(&local_70);
  lVar4 = 0x88;
  if (lVar2 != 0) {
    lVar4 = lVar2 + 0xa0;
  }
  uVar7 = lVar4 * (ulong)uVar1 + 0xfff & 0xfffffffffffff000;
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      local_48 = 0;
      uVar3 = FUN_003b870c(param_1,&local_48,uVar8 | 0x4000000);
      if ((((uVar3 & 1) != 0) && (local_48._4_4_ != 0)) && (0 < (int)local_48)) {
        lVar4 = (ulong)(local_48._4_4_ + 0xfffU & 0xfffff000) + 0x1000;
        uVar7 = lVar4 + uVar7 + lVar4 * (ulong)((int)local_48 - 1);
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  uVar3 = FUN_003b8780(param_1,&local_70);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_003e2a08(&local_70,0x40);
    lVar2 = FUN_003bc410(&local_70,0x40);
    if (local_50 == '\0') {
      lVar5 = FUN_003e0a18(&local_70,0x40);
    }
    else {
      lVar5 = FUN_003e1b08(&local_70,0x40);
    }
    lVar6 = FUN_003bc488(&local_70,0x40);
    uVar7 = lVar4 + uVar7 + lVar2 + lVar5 + lVar6;
  }
  uVar3 = (ulong)param_3 * 0x70 + 0x3f & 0xffffffffc0;
  if ((int)param_3 < 1) {
    uVar3 = 0;
  }
  lVar4 = uVar7 + uVar3;
  if (param_2 != 0) {
    lVar4 = lVar4 + (param_2 + 3U & 0xfffffffffffffffc) *
                    (ulong)(uint)(local_5c + (int)local_70 + local_68);
  }
  return lVar4;
}

