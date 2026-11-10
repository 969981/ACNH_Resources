
void FUN_002677c8(long *param_1,uint param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  int local_58 [4];
  undefined *local_48;
  undefined1 auStack_40 [32];
  
  pbVar2 = (byte *)(param_1 + 0xb);
  if ((((((((uint)*pbVar2 != (param_2 & 0xff)) &&
          (pbVar2 = (byte *)(param_1 + 0xc), (uint)*pbVar2 != (param_2 & 0xff))) &&
         (pbVar2 = (byte *)(param_1 + 0xd), (uint)*pbVar2 != (param_2 & 0xff))) &&
        (((pbVar2 = (byte *)(param_1 + 0xe), (uint)*pbVar2 != (param_2 & 0xff) &&
          (pbVar2 = (byte *)(param_1 + 0xf), (uint)*pbVar2 != (param_2 & 0xff))) &&
         ((pbVar2 = (byte *)(param_1 + 0x10), (uint)*pbVar2 != (param_2 & 0xff) &&
          ((pbVar2 = (byte *)(param_1 + 0x11), (uint)*pbVar2 != (param_2 & 0xff) &&
           (pbVar2 = (byte *)(param_1 + 0x12), (uint)*pbVar2 != (param_2 & 0xff))))))))) &&
       ((pbVar2 = (byte *)(param_1 + 0x13), (uint)*pbVar2 != (param_2 & 0xff) &&
        (((pbVar2 = (byte *)(param_1 + 0x14), (uint)*pbVar2 != (param_2 & 0xff) &&
          (pbVar2 = (byte *)(param_1 + 0x15), (uint)*pbVar2 != (param_2 & 0xff))) &&
         (pbVar2 = (byte *)(param_1 + 0x16), (uint)*pbVar2 != (param_2 & 0xff))))))) &&
      (((pbVar2 = (byte *)(param_1 + 0x17), (uint)*pbVar2 != (param_2 & 0xff) &&
        (pbVar2 = (byte *)(param_1 + 0x18), (uint)*pbVar2 != (param_2 & 0xff))) &&
       (((pbVar2 = (byte *)(param_1 + 0x19), (uint)*pbVar2 != (param_2 & 0xff) &&
         ((pbVar2 = (byte *)(param_1 + 0x1a), (uint)*pbVar2 != (param_2 & 0xff) &&
          (pbVar2 = (byte *)(param_1 + 0x1b), (uint)*pbVar2 != (param_2 & 0xff))))) &&
        (pbVar2 = (byte *)(param_1 + 0x1c), (uint)*pbVar2 != (param_2 & 0xff))))))) &&
     (((pbVar2 = (byte *)(param_1 + 0x1d), (uint)*pbVar2 != (param_2 & 0xff) &&
       (pbVar2 = (byte *)(param_1 + 0x1e), (uint)*pbVar2 != (param_2 & 0xff))) &&
      (pbVar2 = (byte *)(param_1 + 0x1f), (uint)*pbVar2 != (param_2 & 0xff))))) {
    if ((uint)*(byte *)(param_1 + 0x20) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x20);
    }
    else if ((uint)*(byte *)(param_1 + 0x21) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x21);
    }
    else if ((uint)*(byte *)(param_1 + 0x22) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x22);
    }
    else if ((uint)*(byte *)(param_1 + 0x23) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x23);
    }
    else if ((uint)*(byte *)(param_1 + 0x24) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x24);
    }
    else if ((uint)*(byte *)(param_1 + 0x25) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x25);
    }
    else if ((uint)*(byte *)(param_1 + 0x26) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x26);
    }
    else if ((uint)*(byte *)(param_1 + 0x27) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x27);
    }
    else if ((uint)*(byte *)(param_1 + 0x28) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x28);
    }
    else if ((uint)*(byte *)(param_1 + 0x29) == (param_2 & 0xff)) {
      pbVar2 = (byte *)(param_1 + 0x29);
    }
    else {
      if ((uint)*(byte *)(param_1 + 0x2a) != (param_2 & 0xff)) {
        return;
      }
      pbVar2 = (byte *)(param_1 + 0x2a);
    }
  }
  *pbVar2 = 0xfd;
  FUN_00227258(&local_48);
  uVar1 = FUN_002ba790(DAT_04c61168);
  FUN_002b5350(local_58,uVar1,&local_48,param_2);
  if (local_58[0] == 0) {
    (**(code **)(*param_1 + 0x38))(param_1,&local_48);
  }
  local_48 = PTR_DAT_04bcba18 + 0x10;
  FUN_0021f584(auStack_40);
  return;
}

