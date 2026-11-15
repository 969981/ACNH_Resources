
bool FUN_021c7440(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_28 = uVar7;
  uVar4 = FUN_00a8117c(&local_28);
  if ((uVar4 & 1) == 0) {
    iVar5 = (int)(char)((ulong)uVar7 >> 0x20);
    iVar2 = iVar5 + 0x18;
    if (4 < iVar5) {
      iVar2 = iVar5;
    }
    param_1 = param_1 & 0xffff;
    if (param_1 < 0x76c) {
      if (param_1 < 0x514) {
        if (param_1 == 700) {
          lVar6 = 0;
        }
        else if (param_1 == 900) {
          lVar6 = 1;
        }
        else {
          if (param_1 != 0x44c) {
            return true;
          }
          lVar6 = 2;
        }
      }
      else if (param_1 == 0x514) {
        lVar6 = 3;
      }
      else if (param_1 == 0x5dc) {
        lVar6 = 4;
      }
      else {
        if (param_1 != 0x6a4) {
          return true;
        }
        lVar6 = 5;
      }
    }
    else if (param_1 < 0x9c4) {
      if (param_1 == 0x76c) {
        lVar6 = 6;
      }
      else if (param_1 == 0x834) {
        lVar6 = 7;
      }
      else {
        if (param_1 != 0x8fc) {
          return true;
        }
        lVar6 = 8;
      }
    }
    else if (param_1 == 0x9c4) {
      lVar6 = 9;
    }
    else if (param_1 == 0xa8c) {
      lVar6 = 10;
    }
    else {
      if (param_1 != 0xb54) {
        return true;
      }
      lVar6 = 0xb;
    }
    uVar1 = iVar2 * 100 + ((int)((ulong)uVar7 >> 0x10) >> 0x18);
    bVar3 = param_1 <= uVar1 || uVar1 < (ushort)(&DAT_04179b34)[lVar6 * 2];
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

