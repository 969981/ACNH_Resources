
undefined8 FUN_002598b4(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_3c;
  undefined4 local_34;
  
  lVar1 = param_2 + 8;
  uVar3 = FUN_0025975c(param_1,lVar1);
  if ((uVar3 >> 0xf & 1) == 0) {
LAB_002598dc:
    local_34 = 0;
    local_3c = 0x20;
    FUN_00220138(lVar1,&local_3c);
    return 0;
  }
  lVar5 = param_1 + 0xb0;
  uVar4 = FUN_0024e270(lVar5);
  if ((uVar4 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = param_1 + 0xf0;
    uVar4 = FUN_0024e270(lVar5);
    if ((uVar4 & 1) == 0) {
      lVar6 = 1;
    }
    else {
      lVar5 = param_1 + 0x130;
      uVar4 = FUN_0024e270(lVar5);
      if ((uVar4 & 1) == 0) {
        lVar6 = 2;
      }
      else {
        lVar5 = param_1 + 0x170;
        uVar4 = FUN_0024e270(lVar5);
        if ((uVar4 & 1) == 0) {
          lVar6 = 3;
        }
        else {
          lVar5 = param_1 + 0x1b0;
          uVar4 = FUN_0024e270(lVar5);
          if ((uVar4 & 1) == 0) {
            lVar6 = 4;
          }
          else {
            lVar5 = param_1 + 0x1f0;
            uVar4 = FUN_0024e270(lVar5);
            if ((uVar4 & 1) == 0) {
              lVar6 = 5;
            }
            else {
              lVar5 = param_1 + 0x230;
              uVar4 = FUN_0024e270(lVar5);
              if ((uVar4 & 1) == 0) {
                lVar6 = 6;
              }
              else {
                lVar5 = param_1 + 0x270;
                uVar4 = FUN_0024e270(lVar5);
                if ((uVar4 & 1) != 0) goto LAB_002598dc;
                lVar6 = 7;
              }
            }
          }
        }
      }
    }
  }
  FUN_0024e2d8(lVar5,param_2);
  uVar2 = FUN_0025af00(param_1);
  local_34 = 0;
  *(undefined1 *)(param_1 + lVar6 * 0x40 + 0xe5) = uVar2;
  local_3c = 0x20;
  FUN_00220138(lVar1,&local_3c);
  return 1;
}

