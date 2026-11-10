
bool FUN_002b2900(long *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  bVar2 = true;
  do {
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1,uVar6);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x40))(param_1,uVar6);
      uVar4 = (uint)*(ushort *)(lVar3 + 0x1a);
      if (*(ushort *)(lVar3 + 0x1a) != 0) {
        uVar5 = *(uint *)(lVar3 + 0x14);
        do {
          uVar1 = 0;
          if (*(uint *)(lVar3 + 0x10) <= uVar5) {
            uVar1 = *(uint *)(lVar3 + 0x10);
          }
          if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - uVar1) * 0x5b0) == '\0') break;
          if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - uVar1) * 0x5b0 + 1) != '\0') {
            return bVar2;
          }
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    bVar2 = uVar6 < 0x1f;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x20) {
      return bVar2;
    }
  } while( true );
}

