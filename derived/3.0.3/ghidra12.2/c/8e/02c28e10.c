
bool FUN_02c28e10(int *param_1,byte *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int local_60;
  short sStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int iStack_4c;
  int local_44;
  long local_40;
  long lStack_38;
  int local_30;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar3 == 0) {
    return false;
  }
  if ((*(long **)(lVar3 + 0x17bb0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17bb0), puVar4 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90));
    local_40 = puVar4[4];
    lStack_38 = puVar4[5];
    local_30 = (int)puVar4[6];
    uVar1 = *puVar4;
    local_60 = (int)uVar1;
    sStack_5c = (short)((ulong)uVar1 >> 0x20);
    uStack_5a = (undefined2)((ulong)uVar1 >> 0x30);
    uStack_58 = (undefined4)puVar4[1];
    uStack_54 = (undefined4)((ulong)puVar4[1] >> 0x20);
    local_44 = (int)((ulong)puVar4[3] >> 0x20);
    local_50 = (undefined4)puVar4[2];
    iStack_4c = (int)((ulong)puVar4[2] >> 0x20);
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90));
    local_40 = puVar4[4];
    lStack_38 = puVar4[5];
    local_30 = (int)puVar4[6];
    uVar1 = *puVar4;
    local_60 = (int)uVar1;
    sStack_5c = (short)((ulong)uVar1 >> 0x20);
    uStack_5a = (undefined2)((ulong)uVar1 >> 0x30);
    uStack_58 = (undefined4)puVar4[1];
    uStack_54 = (undefined4)((ulong)puVar4[1] >> 0x20);
    local_44 = (int)((ulong)puVar4[3] >> 0x20);
    local_50 = (undefined4)puVar4[2];
    iStack_4c = (int)((ulong)puVar4[2] >> 0x20);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x17bb0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17bb0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  if ((local_44 == param_1[7]) &&
     ((*(long *)(param_1 + 8) == local_40 && *(long *)(param_1 + 10) == lStack_38) &&
      param_1[0xc] == local_30)) {
    if ((sStack_5c == 0) || ((short)param_1[1] == 0)) {
      bVar2 = local_60 == *param_1;
      goto LAB_02c28f20;
    }
    if (local_60 == *param_1) {
      bVar2 = (*(long *)(param_1 + 1) == CONCAT44(uStack_58,CONCAT22(uStack_5a,sStack_5c)) &&
              *(long *)(param_1 + 3) == CONCAT44(local_50,uStack_54)) && param_1[5] == iStack_4c;
      goto LAB_02c28f20;
    }
  }
  bVar2 = false;
LAB_02c28f20:
  return bVar2;
}

