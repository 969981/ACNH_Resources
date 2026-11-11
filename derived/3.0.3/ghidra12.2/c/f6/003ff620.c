
void FUN_003ff620(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_4c;
  undefined4 local_48;
  byte local_44 [4];
  byte local_38 [4];
  int local_34;
  
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_38[0] = *(byte *)(param_2 + 8);
    local_44[0] = 1;
    pbVar1 = local_44;
    if (local_38[0] < 2) {
      pbVar1 = local_38;
    }
    FUN_00197478(param_1,pbVar1,1);
    local_48 = 0;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_48,4);
  }
  else {
    uVar6 = 0;
  }
  FUN_00197478(param_1,param_2 + 0x10,8);
  FUN_00197478(param_1,param_2 + 0x18,4);
  FUN_001f7044(param_1,param_2 + 0x20);
  FUN_003fde20(param_1,param_2 + 0x48);
  FUN_003fde20(param_1,param_2 + 0x70);
  FUN_00197478(param_1,param_2 + 0x98,2);
  FUN_001f77a4(param_1,param_2 + 0xa0);
  local_34 = (int)((ulong)(*(long *)(param_2 + 0xe0) - *(long *)(param_2 + 0xd8)) >> 3) *
             -0x33333333;
  FUN_00197478(param_1,&local_34,4);
  lVar3 = *(long *)(param_2 + 0xe0);
  for (lVar2 = *(long *)(param_2 + 0xd8); lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    FUN_001f7044(param_1,lVar2);
  }
  FUN_00197478(param_1,param_2 + 0xf0,8);
  FUN_00197478(param_1,param_2 + 0xf8,4);
  FUN_00197478(param_1,param_2 + 0xfc,2);
  FUN_00197478(param_1,param_2 + 0xfe,1);
  FUN_003ff820(param_1,param_2 + 0x100);
  if (cVar4 != '\0') {
    return;
  }
  if (*(char *)(param_2 + 8) != '\0') {
    FUN_004040d8(param_1,param_2 + 0x1e8);
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  FUN_00197454(param_1,uVar6);
  local_4c = ((int)uVar5 - (int)uVar6) + -4;
  FUN_00197478(param_1,&local_4c,4);
  FUN_00197454(param_1,uVar5);
  return;
}

