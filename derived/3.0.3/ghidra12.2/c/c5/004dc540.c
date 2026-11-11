
void FUN_004dc540(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_78;
  long lStack_70;
  ulong local_68;
  undefined1 auStack_60 [16];
  uint local_48 [2];
  
  lVar5 = *param_2;
  uVar2 = FUN_00427270(param_4);
  FUN_004297c0(auStack_60,uVar2);
  uVar1 = FUN_004dc640(lVar5,auStack_60);
  puVar4 = (undefined8 *)(*(long *)(*param_2 + 0x228) + (long)(int)uVar1 * 0x18);
  local_78 = *puVar4;
  lStack_70 = puVar4[1];
  if (lStack_70 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00428370(lStack_70);
    if ((uVar3 & 1) != 0) {
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      local_68 = uVar3;
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      bVar6 = false;
      goto LAB_004dc5e8;
    }
  }
  bVar6 = true;
  local_68 = uVar3;
LAB_004dc5e8:
  local_48[0] = uVar1 & 0x7fffffff;
  FUN_004dc3c0(param_1,&local_78,*param_2,local_48);
  if (!bVar6) {
    FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
  }
  return;
}

