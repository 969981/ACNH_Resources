
uint FUN_033f9f60(byte *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_70;
  short sStack_6c;
  undefined2 uStack_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_34 [4];
  
  if (param_2[7] == 0 || *param_2 == 0) {
    return 0;
  }
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_34,1);
  if (lVar2 != 0) {
    if ((*(long **)(lVar2 + 0x17bb0) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x17bb0), puVar3 == (undefined8 *)0x0)) {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x17b98) + *(long *)(lVar2 + 0x17b90));
      local_58 = puVar3[3];
      local_50 = puVar3[4];
      local_48 = puVar3[5];
      local_40 = puVar3[6];
      uVar5 = *puVar3;
      local_70 = (int)uVar5;
      sStack_6c = (short)((ulong)uVar5 >> 0x20);
      uStack_6a = (undefined2)((ulong)uVar5 >> 0x30);
      local_68 = (undefined4)puVar3[1];
      uStack_64 = (undefined4)((ulong)puVar3[1] >> 0x20);
      local_60 = (undefined4)puVar3[2];
      iStack_5c = (int)((ulong)puVar3[2] >> 0x20);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x17b98) + *(long *)(lVar2 + 0x17b90));
      local_58 = puVar3[3];
      local_50 = puVar3[4];
      local_48 = puVar3[5];
      local_40 = puVar3[6];
      uVar5 = *puVar3;
      local_70 = (int)uVar5;
      sStack_6c = (short)((ulong)uVar5 >> 0x20);
      uStack_6a = (undefined2)((ulong)uVar5 >> 0x30);
      local_68 = (undefined4)puVar3[1];
      uStack_64 = (undefined4)((ulong)puVar3[1] >> 0x20);
      local_60 = (undefined4)puVar3[2];
      iStack_5c = (int)((ulong)puVar3[2] >> 0x20);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x17bb0) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x17bb0) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    if ((sStack_6c == 0) || ((short)param_2[1] == 0)) {
      if (local_70 == *param_2) goto LAB_033fa10c;
    }
    else if ((local_70 == *param_2) &&
            ((*(long *)(param_2 + 1) == CONCAT44(local_68,CONCAT22(uStack_6a,sStack_6c)) &&
             *(long *)(param_2 + 3) == CONCAT44(local_60,uStack_64)) && param_2[5] == iStack_5c)) {
LAB_033fa10c:
      uVar1 = 0;
      goto LAB_033fa110;
    }
  }
  FUN_02645730(&local_70,param_1);
  uVar1 = FUN_026472d0(&local_70,param_3);
  uVar1 = uVar1 ^ 1;
LAB_033fa110:
  return uVar1 & 1;
}

