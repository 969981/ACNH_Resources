
void FUN_039f2928(long param_1,uint param_2,float *param_3,float *param_4)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  local_60 = *param_3;
  fStack_5c = param_3[1];
  fStack_54 = 0.0;
  local_58 = 0.0;
  if (0.0 < local_60) {
    local_58 = 1.0 / local_60;
  }
  if (0.0 < fStack_5c) {
    fStack_54 = 1.0 / fStack_5c;
  }
  local_70 = *param_4;
  fStack_6c = param_4[1];
  local_68 = 0.0;
  if (0.0 < local_70) {
    local_68 = 1.0 / local_70;
  }
  fStack_64 = 0.0;
  if (0.0 < fStack_6c) {
    fStack_64 = 1.0 / fStack_6c;
  }
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    param_2 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x410;
  lVar3 = *(long *)(lVar5 + 0x3a0);
  plVar1 = (long *)(lVar5 + 0x390);
  (**(code **)(*(long *)(lVar5 + 0x390) + 0x20))(plVar1);
  (**(code **)(*(long *)(lVar5 + 0x390) + 0x20))(plVar1);
  lVar4 = **(long **)(lVar5 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar4 + 0x68) * 4];
  (**(code **)(*(long *)(lVar5 + 0x390) + 0x18))(plVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar3 + (ulong)*(ushort *)(lVar4 + 100)),&local_60,(ulong)bVar2 << 2);
  }
  lVar3 = *(long *)(lVar5 + 0x3a0);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar4 = **(long **)(lVar5 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar4 + 0x74) * 4];
  (**(code **)(*plVar1 + 0x18))(plVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar3 + (ulong)*(ushort *)(lVar4 + 0x70)),&local_70,(ulong)bVar2 << 2);
  }
  return;
}

