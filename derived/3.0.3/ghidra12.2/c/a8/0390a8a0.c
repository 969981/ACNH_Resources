
void FUN_0390a8a0(long param_1,ushort param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar2 = *(ushort *)(param_1 + 0x3a);
  *(ushort *)(param_1 + 0x30) = param_2;
  *(ushort *)(param_1 + 0x32) = param_3;
  *(ushort *)(param_1 + 0x34) = param_4;
  if (uVar2 - 5 < 2) {
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return;
  }
  uVar1 = param_3;
  if (uVar2 != 3) {
    uVar1 = 1;
  }
  if (((uVar2 - 4 & 0xffff) < 6) && ((0x35U >> (ulong)(uVar2 - 4 & 0x1f) & 1) != 0)) {
    uVar7 = 1;
    do {
      uVar6 = (undefined1)uVar7;
      uVar2 = param_2 >> (ulong)(uVar7 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uVar3 = uVar7 - 1;
      uVar4 = param_2 >> (ulong)(uVar3 & 0x1f);
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      if (uVar2 == uVar4) {
        uVar4 = param_3 >> (ulong)(uVar7 & 0x1f);
        uVar5 = param_3 >> (ulong)(uVar3 & 0x1f);
        uVar2 = uVar1;
        if (uVar1 <= uVar4) {
          uVar2 = uVar4;
        }
        uVar4 = uVar1;
        if (uVar1 <= uVar5) {
          uVar4 = uVar5;
        }
        if (uVar2 == uVar4) {
          uVar5 = param_4 >> (ulong)(uVar7 & 0x1f);
          uVar4 = param_4 >> (ulong)(uVar3 & 0x1f);
          uVar2 = param_4;
          if (param_4 <= uVar5) {
            uVar2 = uVar5;
          }
          uVar5 = param_4;
          if (param_4 <= uVar4) {
            uVar5 = uVar4;
          }
          if (uVar2 == uVar5) goto LAB_0390a96c;
        }
      }
      uVar7 = uVar7 + 1;
    } while( true );
  }
  uVar7 = 1;
  do {
    uVar6 = (undefined1)uVar7;
    uVar2 = param_2 >> (ulong)(uVar7 & 0x1f);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar3 = uVar7 - 1;
    uVar4 = param_2 >> (ulong)(uVar3 & 0x1f);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    if (uVar2 == uVar4) {
      uVar4 = param_3 >> (ulong)(uVar7 & 0x1f);
      uVar5 = param_3 >> (ulong)(uVar3 & 0x1f);
      uVar2 = uVar1;
      if (uVar1 <= uVar4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar1;
      if (uVar1 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar2 == uVar4) {
        uVar2 = param_4 >> (ulong)(uVar7 & 0x1f);
        uVar4 = param_4 >> (ulong)(uVar3 & 0x1f);
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        if (uVar2 == uVar4) {
LAB_0390a96c:
          *(undefined1 *)(param_1 + 0x9a) = uVar6;
          return;
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

