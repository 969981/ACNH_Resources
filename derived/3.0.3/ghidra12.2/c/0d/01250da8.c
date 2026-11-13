
bool FUN_01250da8(long param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  iVar4 = FUN_0277d6c4(param_1 + 8);
  if ((iVar4 == 0xec9a) || (iVar4 = FUN_0277d6c4(param_1 + 8), iVar4 == 0xec97)) {
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  else {
    uVar6 = FUN_012509c0(param_1,0);
    if ((uVar6 & 1) == 0) {
      return false;
    }
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  if ((bVar1 & 1) != 0) {
    local_18 = FUN_01250cb0(param_1);
    local_16 = 0;
    local_14 = 0;
    FUN_0277d4ac(&local_18);
    puVar2 = PTR_DAT_04bb43c0;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_18);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        iVar4 = FUN_0277d6c4(&local_18);
        if (iVar4 == 0xcbf) {
          bVar3 = param_2 == 2;
        }
        else {
          iVar4 = FUN_0277d6c4(&local_18);
          if (iVar4 == 0x839) {
            bVar3 = param_2 == 0;
          }
          else {
            iVar4 = FUN_0277d6c4(&local_18);
            if (iVar4 == 0x842) {
              bVar3 = param_2 == 1;
            }
            else {
              bVar3 = param_2 == 3;
            }
          }
        }
        return bVar3;
      }
    }
  }
  return false;
}

