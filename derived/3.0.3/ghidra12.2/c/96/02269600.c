
void FUN_02269600(byte *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *__src;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  long local_1a4;
  undefined8 local_19c;
  undefined1 *local_190;
  undefined1 *puStack_188;
  int local_180;
  undefined1 local_17c [127];
  undefined1 local_fd;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined8 local_f0;
  long local_e8;
  undefined1 *local_e0;
  
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar3 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar3 = &DAT_04c9a0c8;
  }
  uVar2 = *puVar3;
  FUN_0074fda4(&local_e8,"%s/None/None/%s",
               (&PTR_s_IdrObjMuseumCafeCoffeeCup_04c48778)[(int)*param_2],
               (&PTR_s_IdrObjMuseumCafeCoffeeCup_04c48778)[(int)*param_2]);
  local_fd = 0;
  local_1c0 = 0xcb00000000;
  local_1b8 = 0;
  local_1ac = 0x3f800000;
  local_17c[0] = 0;
  local_180 = 0x80;
  local_f0 = 0;
  local_f4 = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_1b0 = 0;
  local_190 = &DAT_048fc708;
  local_f8 = 7;
  puStack_188 = local_17c;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  __src = local_e0;
  if (local_17c != local_e0) {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    lVar4 = 0;
    do {
      if (local_e0[lVar4] == '\0') goto LAB_0226974c;
      if (local_e0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0226974c;
      }
      if (local_e0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0226974c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0226974c:
    iVar1 = (int)lVar4;
    if (local_180 <= (int)lVar4) {
      iVar1 = local_180 + -1;
    }
    memcpy(local_17c,__src,(long)iVar1);
    local_17c[iVar1] = 0;
  }
  uVar5 = 0x3f59999a;
  local_1c0 = CONCAT44(local_1c0._4_4_,uVar2);
  local_1b8 = *(undefined8 *)(param_1 + 4);
  if (*param_2 != 6) {
    uVar5 = 0x3f800000;
  }
  local_1b0 = *(undefined4 *)(param_1 + 0xc);
  local_1ac = CONCAT44(*(undefined4 *)(param_1 + 0x10),uVar5);
  local_1a4 = (ulong)*param_2 << 0x20;
  local_19c = CONCAT44(local_19c._4_4_,(uint)(*param_2 == 0 && param_1[0x14] == 0) << 1);
  FUN_007402e0(DAT_04c93e08,&local_1c0,uVar2,1);
  return;
}

