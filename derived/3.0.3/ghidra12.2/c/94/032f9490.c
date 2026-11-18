
int FUN_032f9490(long param_1,short param_2,short *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ushort uVar8;
  
  if (param_3 == (short *)0x0) {
    iVar7 = 0x800f;
  }
  else {
    puVar1 = (ushort *)(param_1 + 0x83e00);
    uVar2 = *puVar1;
    uVar6 = (ulong)uVar2;
    if (uVar6 < 2) {
      lVar5 = param_1 + (ulong)*(byte *)(param_1 + 0x79e9d) * 0x88 + 0x83e08;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = FUN_001007d0(param_1 + 8,param_1 + 0x79ea0 + uVar6 * 0x88,lVar5,uVar6);
    if ((uVar3 >> 0xf & 1) == 0) {
      if ((short)uVar3 == 0) {
        iVar7 = (uint)*puVar1 - (uint)uVar2;
      }
      else {
        *puVar1 = *puVar1 + 1;
        *param_3 = (short)uVar3;
        uVar6 = (ulong)*puVar1;
        uVar3 = (uint)*puVar1;
        if (param_2 != 1) {
          uVar8 = 0;
          do {
            uVar4 = FUN_001007d0(param_1 + 8,0,param_1 + 0x79ea0 + (uVar6 & 0xffff) * 0x88);
            if ((uVar4 >> 0xf & 1) != 0) {
              return 0x806e;
            }
            uVar3 = (uint)*puVar1;
            if ((short)uVar4 == 0) break;
            uVar8 = uVar8 + 1;
            uVar3 = *puVar1 + 1;
            uVar6 = (ulong)uVar3;
            *puVar1 = (ushort)uVar3;
          } while (uVar8 < (ushort)(param_2 - 1U));
        }
        iVar7 = uVar3 - uVar2;
      }
    }
    else {
      iVar7 = 0x806e;
    }
  }
  return iVar7;
}

