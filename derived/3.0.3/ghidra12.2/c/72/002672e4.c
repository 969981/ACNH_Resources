
void FUN_002672e4(undefined8 param_1,long param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ushort uVar4;
  undefined4 local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  
  if ((param_3 & 0xff) < 0x20) {
    if (((((((((uint)*(byte *)(param_2 + 0x58) == (param_3 & 0xff)) ||
             ((uint)*(byte *)(param_2 + 0x60) == (param_3 & 0xff))) ||
            ((uint)*(byte *)(param_2 + 0x68) == (param_3 & 0xff))) ||
           ((((uint)*(byte *)(param_2 + 0x70) == (param_3 & 0xff) ||
             ((uint)*(byte *)(param_2 + 0x78) == (param_3 & 0xff))) ||
            (((uint)*(byte *)(param_2 + 0x80) == (param_3 & 0xff) ||
             (((uint)*(byte *)(param_2 + 0x88) == (param_3 & 0xff) ||
              ((uint)*(byte *)(param_2 + 0x90) == (param_3 & 0xff))))))))) ||
          ((uint)*(byte *)(param_2 + 0x98) == (param_3 & 0xff))) ||
         (((((((uint)*(byte *)(param_2 + 0xa0) == (param_3 & 0xff) ||
              ((uint)*(byte *)(param_2 + 0xa8) == (param_3 & 0xff))) ||
             ((uint)*(byte *)(param_2 + 0xb0) == (param_3 & 0xff))) ||
            (((uint)*(byte *)(param_2 + 0xb8) == (param_3 & 0xff) ||
             ((uint)*(byte *)(param_2 + 0xc0) == (param_3 & 0xff))))) ||
           ((uint)*(byte *)(param_2 + 200) == (param_3 & 0xff))) ||
          ((((uint)*(byte *)(param_2 + 0xd0) == (param_3 & 0xff) ||
            ((uint)*(byte *)(param_2 + 0xd8) == (param_3 & 0xff))) ||
           ((((uint)*(byte *)(param_2 + 0xe0) == (param_3 & 0xff) ||
             ((((uint)*(byte *)(param_2 + 0xe8) == (param_3 & 0xff) ||
               ((uint)*(byte *)(param_2 + 0xf0) == (param_3 & 0xff))) ||
              ((uint)*(byte *)(param_2 + 0xf8) == (param_3 & 0xff))))) ||
            ((((uint)*(byte *)(param_2 + 0x100) == (param_3 & 0xff) ||
              ((uint)*(byte *)(param_2 + 0x108) == (param_3 & 0xff))) ||
             ((uint)*(byte *)(param_2 + 0x110) == (param_3 & 0xff))))))))))) ||
        ((((uint)*(byte *)(param_2 + 0x118) == (param_3 & 0xff) ||
          ((uint)*(byte *)(param_2 + 0x120) == (param_3 & 0xff))) ||
         (((uint)*(byte *)(param_2 + 0x128) == (param_3 & 0xff) ||
          ((((uint)*(byte *)(param_2 + 0x130) == (param_3 & 0xff) ||
            ((uint)*(byte *)(param_2 + 0x138) == (param_3 & 0xff))) ||
           ((uint)*(byte *)(param_2 + 0x140) == (param_3 & 0xff))))))))) ||
       (((uint)*(byte *)(param_2 + 0x148) == (param_3 & 0xff) ||
        ((uint)*(byte *)(param_2 + 0x150) == (param_3 & 0xff))))) {
      local_74 = 0;
    }
    else {
      uVar4 = 0x20;
      if (0x1f < *(byte *)(param_2 + 0x60)) {
        uVar4 = 1;
      }
      if (0x1f < *(byte *)(param_2 + 0x58)) {
        uVar4 = 0;
      }
      uVar1 = 2;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x68) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 3;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x70) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 4;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x78) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 5;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x80) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 6;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x88) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 7;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x90) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 8;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x98) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 9;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0xa0) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 10;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0xa8) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0xb;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0xb0) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0xc;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0xb8) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0xd;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0xc0) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0xe;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 200) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0xf;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0xd0) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x10;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0xd8) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x11;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0xe0) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x12;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0xe8) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x13;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0xf0) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x14;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0xf8) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x15;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x100) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x16;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x108) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x17;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x110) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x18;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x118) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x19;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x120) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x1a;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x128) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x1b;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x130) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x1c;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x138) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x1d;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x140) < 0x20) {
        uVar4 = uVar1;
      }
      uVar1 = 0x1e;
      if (uVar4 != 0x20 || *(byte *)(param_2 + 0x148) < 0x20) {
        uVar1 = uVar4;
      }
      uVar4 = 0x1f;
      if (uVar1 != 0x20 || *(byte *)(param_2 + 0x150) < 0x20) {
        uVar4 = uVar1;
      }
      if (uVar4 < 0x20) {
        uVar2 = FUN_0026c420(DAT_04c603c8);
        uVar3 = FUN_00273424(uVar2,param_3,param_4);
        if ((uVar3 & 1) != 0) {
          local_74 = 0;
          param_2 = param_2 + (ulong)uVar4 * 8;
          *(char *)(param_2 + 0x58) = (char)param_3;
          *(undefined4 *)(param_2 + 0x5c) = param_4;
          goto LAB_002674bc;
        }
      }
      local_74 = 0x4c0d;
    }
  }
  else {
    local_74 = 0x10c07;
  }
LAB_002674bc:
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_64);
  FUN_002296c4(param_1,&local_74);
  return;
}

