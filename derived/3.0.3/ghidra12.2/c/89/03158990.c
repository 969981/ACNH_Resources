
bool FUN_03158990(long param_1)

{
  int iVar1;
  void *__src;
  long lVar2;
  byte bVar3;
  void *__dest;
  undefined **local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined **local_a0;
  long lStack_98;
  undefined **local_80 [4];
  undefined *local_60 [4];
  
  local_a8 = 0xffffffff;
  local_b0 = 0x59;
  local_a0 = &PTR_LAB_04b240e0;
  local_80[0] = &PTR_LAB_04b24108;
  local_c8 = 0;
  uStack_c0 = 0;
  local_60[0] = PTR_DAT_04bc9998 + 0x10;
  local_ac = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ac) {
    local_ac = 0xff;
  }
  local_a4._0_3_ = 0x10101;
  local_d8 = (void *)((long)&local_d0 + 4);
  local_d0 = 0x10;
  local_b8 = 0xfffe;
  local_e0 = &PTR_LAB_048fb098;
  FUN_0277d4ac(&local_b8);
  *(undefined4 *)(param_1 + 0x218) = 0;
  __dest = *(void **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x220) = 0;
  (*(code *)local_e0[3])(&local_e0);
  __src = local_d8;
  if (__dest != local_d8) {
    (*(code *)local_e0[3])(&local_e0);
    lVar2 = 0;
    do {
      if (*(char *)((long)local_d8 + lVar2) == '\0') goto LAB_03158adc;
      if (*(char *)((long)local_d8 + lVar2 + 1) == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_03158adc;
      }
      if (*(char *)((long)local_d8 + lVar2 + 2) == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_03158adc;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_03158adc:
    iVar1 = (int)lVar2;
    if (*(int *)(param_1 + 0x238) <= (int)lVar2) {
      iVar1 = *(int *)(param_1 + 0x238) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  *(undefined4 *)(param_1 + 0x250) = (undefined4)local_b8;
  *(undefined4 *)(param_1 + 0x254) = local_b8._4_4_;
  local_a0 = &PTR_LAB_04b050b0;
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x10);
  iVar1 = *(int *)(lVar2 + 0x90);
  if (iVar1 == 0) {
    *(undefined ***)(lVar2 + 0xe0) = &PTR_LAB_04b050b0;
    *(long *)(lVar2 + 0xe8) = param_1;
    *(undefined4 *)(lVar2 + 0xd0) = local_b0;
    bVar3 = local_ac;
    if (7 < local_ac) {
      bVar3 = 0xff;
    }
    *(byte *)(lVar2 + 0xd4) = bVar3;
    *(undefined4 *)(lVar2 + 0xd8) = local_a8;
    *(undefined1 *)(lVar2 + 0xdc) = local_a4[0];
    *(undefined2 *)(lVar2 + 0xdd) = local_a4._1_2_;
    lStack_98 = param_1;
    (*(code *)local_80[0][2])(local_80,lVar2 + 0x100);
    (**(code **)(local_60[0] + 0x10))(local_60,lVar2 + 0x120);
    FUN_03ebb160(lVar2 + 0x88,1);
  }
  return iVar1 == 0;
}

