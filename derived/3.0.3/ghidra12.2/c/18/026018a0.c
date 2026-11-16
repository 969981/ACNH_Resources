
void FUN_026018a0(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long local_d0;
  undefined1 *local_c8;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 auStack_64 [47];
  undefined1 local_35;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  pbVar4 = (byte *)param_3[1];
  bVar1 = *pbVar4;
  if (bVar1 == 0) {
    uVar3 = 0;
    lVar2 = *(long *)(param_1 + 8);
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = crc32b(uVar3,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar4;
    } while (bVar1 != 0);
    uVar3 = ~uVar3;
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_02605660(lVar2,param_2,uVar3);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_0071b954(&local_d0,"%s_str",param_2[1]);
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + 8) != 0)) {
    local_68 = 0x30;
    local_35 = 0;
    local_78 = &DAT_049c97f0;
    puStack_70 = auStack_64;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (auStack_64 != local_c8) {
      (**(code **)(local_d0 + 0x18))(&local_d0);
    }
  }
  return;
}

