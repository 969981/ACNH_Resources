
bool FUN_020d4530(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  undefined *local_60;
  char *pcStack_58;
  byte local_4c [12];
  
  FUN_02507c6c(local_4c,2,1,0,0);
  if (local_4c[0] < 8) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "MoveNpcTradeSkipCount";
    local_60 = puVar1;
    iVar4 = FUN_0274bce0(local_4c,&local_60);
    puVar3 = PTR_DAT_04bb5038;
    iVar9 = 1;
    while (local_4c[0] < 8) {
      uVar8 = (ulong)local_4c[0];
      do {
        if (uVar8 == 7) goto LAB_020d4614;
        uVar8 = uVar8 + 1;
        uVar7 = FUN_02507924(local_4c,puVar3 + uVar8);
      } while ((uVar7 & 1) == 0);
      local_4c[0] = puVar3[uVar8];
      if (7 < local_4c[0]) {
LAB_020d4614:
        local_4c[0] = 0xff;
        break;
      }
      pcStack_58 = "MoveNpcTradeSkipCount";
      local_60 = puVar1;
      iVar5 = FUN_0274bce0(local_4c,&local_60);
      iVar4 = iVar5 + iVar4;
      iVar9 = iVar9 + 1;
    }
    fVar10 = (float)iVar4;
  }
  else {
    iVar9 = 0;
    fVar10 = 0.0;
  }
  uVar6 = nn::os::GetSystemTick();
  uVar2 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar6 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return (uint)(int)(fVar10 / (float)iVar9 + (float)(iVar9 * 10)) <=
         (uint)((ulong)(uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2) * 100 >> 0x20);
}

