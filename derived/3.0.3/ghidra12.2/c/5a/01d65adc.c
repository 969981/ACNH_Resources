
void FUN_01d65adc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  undefined3 uStack_e4;
  undefined5 local_e1;
  undefined3 uStack_dc;
  undefined5 local_d9;
  undefined3 uStack_d4;
  undefined4 local_d1;
  undefined4 uStack_cd;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_ae;
  undefined8 local_a6;
  undefined4 local_9e;
  undefined8 local_9a;
  undefined8 local_92;
  undefined4 local_8a;
  undefined1 local_86;
  undefined8 local_85;
  undefined8 local_7d;
  undefined7 local_75;
  undefined4 uStack_6e;
  uint local_6a;
  undefined8 local_66;
  undefined8 local_5e;
  undefined8 local_56;
  undefined8 local_4e;
  undefined8 local_46;
  undefined8 local_3e;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_9a = *(undefined8 *)(param_5 + 1);
  local_92 = *(undefined8 *)(param_5 + 3);
  local_a6 = *param_3;
  local_8a = param_5[5];
  local_9e = *param_5;
  local_86 = *(undefined1 *)(param_5 + 6);
  local_6a = param_5[0xd];
  local_e1 = (undefined5)*(undefined8 *)(param_5 + 7);
  uStack_dc = (undefined3)((ulong)*(undefined8 *)(param_5 + 7) >> 0x28);
  local_d9 = (undefined5)*(undefined8 *)(param_5 + 9);
  uStack_d4 = (undefined3)((ulong)*(undefined8 *)(param_5 + 9) >> 0x28);
  local_d1 = (undefined4)*(undefined8 *)(param_5 + 0xb);
  uStack_cd = (undefined4)((ulong)*(undefined8 *)(param_5 + 0xb) >> 0x20);
  local_56 = param_4[2];
  local_4e = param_4[3];
  local_46 = param_4[4];
  local_3e = param_4[5];
  local_66 = *param_4;
  local_5e = param_4[1];
  local_ae = *param_2;
  plVar1 = *(long **)PTR_DAT_04bb27d0;
  local_30 = 0;
  local_36 = *(undefined1 *)(*plVar1 + 0x473);
  *(undefined8 *)(param_1 + 0x40) = 0;
  local_7d = CONCAT53(local_d9,uStack_dc);
  local_35 = 0;
  local_28 = 0;
  local_22 = 0;
  local_b0 = 0;
  local_af = 3;
  local_75 = CONCAT43(local_d1,uStack_d4);
  local_85 = CONCAT53(local_e1,uStack_e4);
  if (1 < local_6a) {
    local_6a = 0;
  }
  local_24 = 0xff01;
  if (-1 < DAT_0536e668) {
    uStack_6e = uStack_cd;
    FUN_01db1df0(*plVar1 + 0x480,DAT_0536e668,&local_28,&local_b0,0x82,0);
  }
  return;
}

