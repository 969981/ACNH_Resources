
undefined8 FUN_00142750(undefined1 *param_1,ushort param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  short sVar2;
  ushort uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort local_48 [2];
  ushort local_44 [2];
  
  if (param_2 != 0) {
    if (param_4 == 0) {
      uVar3 = 0;
      do {
        if (CONCAT11(*param_1,param_1[1]) != CONCAT11(*param_3,param_3[1])) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 2;
        param_3 = param_3 + 2;
      } while (uVar3 < param_2);
    }
    else {
      uVar3 = 0;
      do {
        if (CONCAT11(*param_1,param_1[1]) == CONCAT11(*param_3,param_3[1])) {
          uVar4 = 1;
        }
        else {
          sVar2 = FUN_00113bf0(param_4,param_1,local_44,local_48);
          if ((sVar2 != 1) || (uVar5 = local_44[0], local_48[0] < local_44[0])) {
            return 0;
          }
          while( true ) {
            lVar1 = param_4 + (ulong)uVar5 * 8;
            uVar4 = FUN_001003e0(*(undefined8 *)(lVar1 + 0x800));
            sVar2 = FUN_00100470(*(undefined8 *)(lVar1 + 0x800),param_3,uVar4 & 0xffffffff);
            if (sVar2 == 0) break;
            uVar5 = uVar5 + 1;
            if (local_48[0] < uVar5) {
              return 0;
            }
          }
          uVar4 = uVar4 & 0xffff;
        }
        param_3 = param_3 + uVar4 * 2;
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 2;
      } while (uVar3 < param_2);
    }
  }
  return 1;
}

