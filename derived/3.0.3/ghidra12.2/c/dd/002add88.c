
void FUN_002add88(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                 undefined1 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((int)param_2[5] == 0) {
    local_34 = 0x10c0c;
  }
  else if ((param_5 == 0) || (param_3 == 0)) {
    local_34 = 0x10c07;
  }
  else {
    param_2[0xca] = param_3;
    param_2[0xcb] = param_4;
    param_2[1] = param_5;
    *(undefined1 *)(param_2 + 2) = param_6;
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar3 = (**(code **)(*param_2 + 0x38))();
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    *(ushort *)(param_2 + 0xcc) =
         ((short)uVar1 - ((ushort)((uVar3 & 0xff) + 0x1f >> 3) & 0x3c)) + -0x39;
    param_2[6] = 1;
    (**(code **)param_2[7])();
    param_2[0xa7] = 0;
    (**(code **)param_2[0xc])();
    param_2[0xa8] = 0;
    (**(code **)param_2[0x11])();
    param_2[0xa9] = 0;
    (**(code **)param_2[0x16])();
    param_2[0xaa] = 0;
    (**(code **)param_2[0x1b])(param_2 + 0x1b);
    param_2[0xab] = 0;
    (**(code **)param_2[0x20])(param_2 + 0x20);
    param_2[0xac] = 0;
    (**(code **)param_2[0x25])(param_2 + 0x25);
    param_2[0xad] = 0;
    (**(code **)param_2[0x2a])(param_2 + 0x2a);
    param_2[0xae] = 0;
    (**(code **)param_2[0x2f])(param_2 + 0x2f);
    param_2[0xaf] = 0;
    (**(code **)param_2[0x34])(param_2 + 0x34);
    param_2[0xb0] = 0;
    (**(code **)param_2[0x39])(param_2 + 0x39);
    param_2[0xb1] = 0;
    (**(code **)param_2[0x3e])(param_2 + 0x3e);
    param_2[0xb2] = 0;
    (**(code **)param_2[0x43])(param_2 + 0x43);
    param_2[0xb3] = 0;
    (**(code **)param_2[0x48])(param_2 + 0x48);
    param_2[0xb4] = 0;
    (**(code **)param_2[0x4d])(param_2 + 0x4d);
    param_2[0xb5] = 0;
    (**(code **)param_2[0x52])(param_2 + 0x52);
    param_2[0xb6] = 0;
    (**(code **)param_2[0x57])(param_2 + 0x57);
    param_2[0xb7] = 0;
    (**(code **)param_2[0x5c])(param_2 + 0x5c);
    param_2[0xb8] = 0;
    (**(code **)param_2[0x61])(param_2 + 0x61);
    param_2[0xb9] = 0;
    (**(code **)param_2[0x66])(param_2 + 0x66);
    param_2[0xba] = 0;
    (**(code **)param_2[0x6b])(param_2 + 0x6b);
    param_2[0xbb] = 0;
    (**(code **)param_2[0x70])(param_2 + 0x70);
    param_2[0xbc] = 0;
    (**(code **)param_2[0x75])(param_2 + 0x75);
    param_2[0xbd] = 0;
    (**(code **)param_2[0x7a])(param_2 + 0x7a);
    param_2[0xbe] = 0;
    (**(code **)param_2[0x7f])(param_2 + 0x7f);
    param_2[0xbf] = 0;
    (**(code **)param_2[0x84])(param_2 + 0x84);
    param_2[0xc0] = 0;
    (**(code **)param_2[0x89])(param_2 + 0x89);
    param_2[0xc1] = 0;
    (**(code **)param_2[0x8e])(param_2 + 0x8e);
    param_2[0xc2] = 0;
    (**(code **)param_2[0x93])(param_2 + 0x93);
    param_2[0xc3] = 0;
    (**(code **)param_2[0x98])(param_2 + 0x98);
    param_2[0xc4] = 0;
    (**(code **)param_2[0x9d])(param_2 + 0x9d);
    param_2[0xc5] = 0;
    (**(code **)param_2[0xa2])(param_2 + 0xa2);
    param_2[0xc6] = 0;
    memset(param_2 + 0xce,0,4);
    memset((void *)((long)param_2 + 0x674),0,4);
    memset(param_2 + 0xd5,0,4);
    puVar2 = PTR_DAT_04bcd020;
    *(undefined1 *)(param_2 + 199) = 0;
    param_2[200] = 0;
    param_2[0xd1] = 0;
    lVar4 = *(long *)puVar2;
    param_2[0xd2] = 0;
    *(undefined4 *)(param_2 + 0xd3) = 0;
    param_2[0xd4] = 0;
    local_34 = 0;
    *(undefined2 *)((long)param_2 + 0x69c) = 0xffff;
    param_2[0xcd] = lVar4 / 0x14;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

