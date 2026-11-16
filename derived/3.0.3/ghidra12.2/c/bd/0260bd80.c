
void FUN_0260bd80(undefined8 param_1,long param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_3;
  uStack_4c = param_3[1];
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_3);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
        local_48 = lVar5;
      }
    }
  }
  FUN_0277d6c4(param_3);
  iVar4 = FUN_01afcfa0(&local_58);
  if (iVar4 != 0) {
    FUN_01afd600(&local_58);
  }
  iVar4 = FUN_01ad7260(&local_58);
  if ((iVar4 != 0) && (lVar5 = FUN_01afd600(&local_58), lVar5 != 0)) {
    FUN_01ad7260(&local_58);
  }
  FUN_01ae3a80(&local_58);
  pcVar1 = (char *)(param_2 + 8);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add(pcVar1,0x40f7ef1);
  }
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add(pcVar1,0x40cca49);
  }
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add(pcVar1,0x4084f46);
  }
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add(pcVar1,0x40c113a);
  }
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add(pcVar1,0x4072fac);
  }
  return;
}

