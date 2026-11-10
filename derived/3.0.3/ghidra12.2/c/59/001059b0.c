
uint FUN_001059b0(long param_1,long param_2,long param_3,void *param_4,uint param_5)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  void *__src;
  
  if (param_1 == 0) {
    uVar3 = 0xae34;
  }
  else if (param_2 == 0) {
    uVar3 = 0x8034;
  }
  else if (param_3 == 0) {
    uVar3 = 0x8134;
  }
  else {
    uVar1 = FUN_001003e0(param_3);
    if (uVar1 < 0x38) {
      if (param_4 == (void *)0x0) {
        uVar3 = 0x8534;
      }
      else {
        *(undefined2 *)(param_1 + 0x20) = 0;
        *(void **)(param_1 + 0x10) = param_4;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(short *)(param_1 + 0x1e) = (short)param_5;
        FUN_00101980(param_1 + 0x28);
        *(long *)(param_1 + 8) = param_3;
        *(undefined2 *)(param_1 + 0x31) = 0x201;
        *(long *)(param_1 + 0x28) = param_2;
        *(undefined1 *)(param_1 + 0x928e) = 0x37;
        sVar2 = FUN_00101df0(param_1,param_1 + 0x28);
        uVar3 = (uint)sVar2;
        if (((-1 < (int)uVar3) && (uVar3 = 0, (param_5 & 0xffff) != 0)) &&
           (*(ushort *)(param_1 + 0x9288) != 0)) {
          uVar3 = 0;
          __src = (void *)(param_1 + 0x38);
          do {
            memcpy(param_4,__src,0x88);
            uVar3 = uVar3 + 1;
            if ((param_5 & 0xffff) <= (uVar3 & 0xffff)) {
              return uVar3;
            }
            param_4 = (void *)((long)param_4 + 0x88);
            __src = (void *)((long)__src + 0x150);
          } while ((uVar3 & 0xffff) < (uint)*(ushort *)(param_1 + 0x9288));
        }
      }
    }
    else {
      uVar3 = 0x8634;
    }
  }
  return uVar3;
}

