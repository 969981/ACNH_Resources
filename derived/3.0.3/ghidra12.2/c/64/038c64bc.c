
long FUN_038c64bc(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_58;
  ulong uStack_50;
  uint local_48;
  ulong local_40;
  uint local_38;
  
  uVar1 = -param_3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  if (uVar1 < 9) {
    lVar2 = nn::mem::StandardAllocator::Allocate(param_1 + 0xd8U);
  }
  else {
    lVar2 = nn::mem::StandardAllocator::Allocate(param_1 + 0xd8U,param_2);
  }
  if (((lVar2 == 0) && (DAT_05ae7600 != 0)) &&
     (puVar3 = *(undefined8 **)(DAT_05ae7600 + 0x10), puVar3 != (undefined8 *)0x0)) {
    local_58 = param_1;
    uStack_50 = param_2;
    local_48 = param_3;
    local_40 = param_2;
    local_38 = param_3;
    (**(code **)*puVar3)(puVar3,&local_58);
  }
  return lVar2;
}

