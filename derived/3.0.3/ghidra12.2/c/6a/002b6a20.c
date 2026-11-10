
void FUN_002b6a20(long param_1)

{
  void *__s;
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_be8;
  ErrorResultVariant aEStack_be4 [12];
  undefined8 local_bd8;
  undefined1 local_bd0;
  char local_bcf;
  undefined1 local_bce;
  uint local_bcc;
  uint local_bc8;
  undefined1 auStack_bc4 [1440];
  int local_624 [4];
  undefined1 auStack_614 [1440];
  undefined1 auStack_74 [4];
  long local_70;
  undefined4 local_64;
  
  FUN_002a4ff4(local_624,param_1,&local_70,auStack_614,auStack_74,0x5a0);
  puVar2 = PTR_DAT_04bc1510;
  if (local_624[0] == 0) {
    __s = (void *)(param_1 + 0x94);
    puVar1 = PTR_DAT_04bce170 + 0x10;
    do {
      local_bd8 = puVar1;
      FUN_002b775c(&local_be8,&local_bd8,auStack_614,0x5a0);
      FUN_00229780(local_624,&local_be8);
      if (local_624[0] != 0) {
        return;
      }
      FUN_002ba1c4(&local_be8,*(undefined8 *)puVar2,&local_64,local_70);
      FUN_00229780(local_624,&local_be8);
      if (local_624[0] == 0) {
        switch(local_bd0) {
        case 0:
          if ((*(uint *)(param_1 + 0x78) < 0xb) &&
             ((1 << (ulong)(*(uint *)(param_1 + 0x78) & 0x1f) & 0x736U) != 0)) {
            *(undefined1 *)(param_1 + (ulong)(byte)local_64._0_1_ + 0xd3) = 1;
          }
          else {
            *(char *)(param_1 + (ulong)(byte)local_64._0_1_ + 0x94) = local_bcf;
            if (local_bcc < *(uint *)(param_1 + 0xb4)) {
              *(uint *)(param_1 + 0xb4) = local_bcc;
            }
          }
          break;
        case 1:
          *(undefined4 *)(param_1 + 0xc0) = 0;
          *(undefined1 *)(param_1 + 0xd2) = 0;
          if (*(int *)(param_1 + 0x78) == 4) {
            *(undefined4 *)(param_1 + 0x78) = 5;
LAB_002b6c2c:
            if ((*(char *)(param_1 + 0xb9) == local_bcf) && (*(long *)(param_1 + 200) == local_70))
            {
              if (*(long *)(param_1 + 0x88) == 0) {
                return;
              }
              if (*(uint *)(param_1 + 0x90) < local_bc8 + *(uint *)(param_1 + 0xc0)) {
                return;
              }
              memcpy((void *)((ulong)*(uint *)(param_1 + 0xc0) + *(long *)(param_1 + 0x88)),
                     auStack_bc4,(ulong)local_bc8);
              *(uint *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + local_bc8;
              *(undefined1 *)(param_1 + 0xd2) = local_bce;
            }
          }
          break;
        case 2:
          if (*(int *)(param_1 + 0x78) == 5) goto LAB_002b6c2c;
          break;
        case 3:
          if (*(int *)(param_1 + 0x78) == 4) {
            *(undefined4 *)(param_1 + 0x78) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
            *(undefined2 *)(param_1 + 0xb8) = 0xffff;
            *(undefined8 *)(param_1 + 0xbc) = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined2 *)(param_1 + 0xd0) = 0;
            *(undefined1 *)(param_1 + 0xd2) = 0;
            memset(__s,0xff,0x20);
            *(undefined4 *)(param_1 + 0x78) = 7;
          }
          break;
        case 4:
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
          *(undefined2 *)(param_1 + 0xb8) = 0xffff;
          *(undefined8 *)(param_1 + 0xbc) = 0;
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined2 *)(param_1 + 0xd0) = 0;
          *(undefined1 *)(param_1 + 0xd2) = 0;
          memset(__s,0xff,0x20);
          *(undefined4 *)(param_1 + 0x78) = 0xc;
          break;
        case 5:
          *(undefined1 *)(param_1 + (ulong)(byte)local_64._0_1_ + 0x94) = 0xff;
          *(undefined1 *)(param_1 + (ulong)(byte)local_64._0_1_ + 0xf3) = 1;
          break;
        case 6:
          if (*(int *)(param_1 + 0x78) == 10) {
            *(undefined4 *)(param_1 + 0x78) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
            *(undefined2 *)(param_1 + 0xb8) = 0xffff;
            *(undefined8 *)(param_1 + 0xbc) = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined2 *)(param_1 + 0xd0) = 0;
            *(undefined1 *)(param_1 + 0xd2) = 0;
            memset(__s,0xff,0x20);
            *(undefined4 *)(param_1 + 0x78) = 0xb;
          }
        }
      }
      FUN_002a4ff4(local_624,param_1,&local_70,auStack_614,auStack_74,0x5a0);
    } while (local_624[0] == 0);
  }
  local_be8 = 0;
  local_bd8 = (undefined *)CONCAT44(local_bd8._4_4_,0x2c09);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_bd8 + 4),(Result *)&local_be8);
  if (local_624[0] != (int)local_bd8) {
    local_64 = 0;
    local_be8 = 0x2c03;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_be4,(Result *)&local_64);
  }
  return;
}

