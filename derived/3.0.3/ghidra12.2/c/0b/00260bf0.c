
void FUN_00260bf0(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  uVar4 = (uint)param_3;
  if (uVar4 == 0) {
    local_50 = 0x10c07;
  }
  else if (*(long *)(param_2 + 0x40) == 0) {
    uVar6 = param_3 & 0xffffffff;
    uVar2 = FUN_0021f454();
    lVar3 = FUN_00285d10((ulong)((uVar4 & 0x7ffffff) << 2) << 3,uVar2);
    if (((param_3 & 0x7ffffff) == 0) || (lVar3 == 0)) {
      *(long *)(param_2 + 0x40) = lVar3;
      if (lVar3 == 0) {
        local_50 = 0x10c01;
        goto LAB_00260c38;
      }
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar5);
        lVar5 = lVar5 + 0x20;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      } while ((param_3 & 0x7ffffff) * 0x20 != lVar5);
      *(long *)(param_2 + 0x40) = lVar3;
    }
    lVar5 = 0;
    *(long *)(param_2 + 0x30) = lVar3;
    *(uint *)(param_2 + 0x38) = uVar4;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar5);
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_002236bc(param_2 + 0x18,param_2 + 0x18,(long)puVar1 + (long)*(int *)(param_2 + 0x2c));
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar6 != 0);
    *(uint *)(param_2 + 0x48) = uVar4;
    local_50 = 0;
  }
  else {
    local_50 = 0x10c02;
  }
LAB_00260c38:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

