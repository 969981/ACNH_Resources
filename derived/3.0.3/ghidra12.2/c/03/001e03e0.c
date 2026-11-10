
bool FUN_001e03e0(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  uint *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  pollfd local_d0 [4];
  ushort local_cc [62];
  
  memset(local_d0,0,0x80);
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)param_2;
    puVar8 = (undefined4 *)(param_1 + 0xc);
    puVar5 = local_cc;
    uVar9 = uVar7;
    do {
      uVar3 = (**(code **)(**(long **)(puVar8 + -3) + 0x90))();
      uVar1 = puVar8[-1];
      *(undefined4 *)(puVar5 + -2) = uVar3;
      puVar5[1] = 0;
      *puVar8 = 0;
      if ((uVar1 & 1) != 0) {
        *puVar5 = 1;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        *puVar5 = 4;
      }
      puVar8 = puVar8 + 4;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar4 = nn::socket::Poll(local_d0,uVar7,param_3);
  if ((0 < iVar4) && (param_2 != 0)) {
    puVar6 = (uint *)(param_1 + 0xc);
    puVar5 = local_cc + 1;
    do {
      uVar2 = *puVar5;
      if ((uVar2 & 0x39) != 0) {
        *puVar6 = *puVar6 | 1;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        *puVar6 = *puVar6 | 2;
      }
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 4;
    } while (uVar7 != 0);
  }
  return 0 < iVar4;
}

