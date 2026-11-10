
void FUN_00211690(long param_1,undefined4 param_2,long param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_250 [192];
  undefined1 auStack_190 [296];
  undefined1 auStack_68 [24];
  long local_50;
  long local_48;
  undefined4 local_24;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    local_24 = param_2;
    FUN_0019d7fc(auStack_68,0,0);
    FUN_0019da50(auStack_68,param_3,param_4);
    FUN_0018c3a4(auStack_190);
    FUN_00189ca0(auStack_190);
    FUN_00189c90(auStack_190);
    if ((local_48 != local_50) && ((int)local_48 != (int)local_50)) {
      uVar3 = 0;
      uVar4 = 1;
      do {
        FUN_0018c4a0(auStack_190,*(undefined1 *)(local_50 + uVar3));
        uVar3 = (ulong)((int)local_48 - (int)local_50);
        bVar1 = uVar4 <= uVar3;
        bVar2 = uVar3 != uVar4;
        uVar3 = uVar4;
        uVar4 = (ulong)((int)uVar4 + 1);
      } while ((local_48 != local_50 && bVar1) && (local_48 == local_50 || bVar2));
    }
    FUN_0018c438(auStack_190);
    FUN_001fb850(auStack_250,0);
    FUN_00201548(param_1 + 0x20,auStack_250,&local_24,auStack_68);
    FUN_001fbac0(auStack_250);
    FUN_0018c3d4(auStack_190);
    FUN_0019d9e8(auStack_68);
  }
  return;
}

