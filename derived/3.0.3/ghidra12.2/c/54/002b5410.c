
void FUN_002b5410(uint *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  memset(param_1,0,4);
  for (lVar2 = *(long *)(param_2 + 0x20); lVar2 != param_2 + 0x18; lVar2 = *(long *)(lVar2 + 8)) {
    bVar1 = *(byte *)(*(long *)(lVar2 + 0x10) + 0x38);
    if ((bVar1 < 0x20) && (*(int *)(*(long *)(lVar2 + 0x10) + 0x4c) == 5)) {
      uVar3 = (ulong)(bVar1 >> 3) & 0x1c;
      *(uint *)((long)param_1 + uVar3) =
           *(uint *)((long)param_1 + uVar3) | 1 << (ulong)(bVar1 & 0x1f);
    }
  }
  if ((((param_3 & 1) == 0) && (*(long *)(param_2 + 0x98) != 0)) &&
     (bVar1 = *(byte *)(*(long *)(param_2 + 0x98) + 0x38), bVar1 < 0x20)) {
    *param_1 = *param_1 & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

