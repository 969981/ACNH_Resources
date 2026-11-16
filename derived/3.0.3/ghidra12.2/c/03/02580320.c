
void FUN_02580320(byte *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  
  FUN_02507c6c(local_4c,1,1,1,0);
  local_54 = local_48;
  local_58[0] = 0xff;
  if (local_4c[0] < 8) {
    local_58[0] = local_4c[0];
  }
  local_50 = local_44;
  if (local_4c[0] < 8) {
    iVar1 = *(int *)(param_2 + 4);
    iVar4 = FUN_02582d8c(local_58,1);
    bVar3 = local_58[0] < 8;
    if (iVar1 != iVar4) {
      do {
        if (!bVar3) goto LAB_02580380;
        uVar2 = (ulong)local_58[0];
        do {
          uVar6 = uVar2;
          if (uVar6 == 7) goto LAB_02580380;
          uVar5 = FUN_02507924(local_58,&DAT_0548e169 + uVar6);
          uVar2 = uVar6 + 1;
        } while ((uVar5 & 1) == 0);
        local_58[0] = (&DAT_0548e169)[uVar6];
        if (7 < local_58[0]) goto LAB_02580380;
        iVar1 = *(int *)(param_2 + 4);
        iVar4 = FUN_02582d8c(local_58,1);
        bVar3 = local_58[0] < 8;
      } while (iVar1 != iVar4);
    }
    if (!bVar3) {
      local_58[0] = 0xff;
    }
  }
  else {
LAB_02580380:
    local_58[0] = DAT_0548e140;
    if (7 < DAT_0548e140) {
      local_58[0] = 0xff;
    }
  }
  *param_1 = local_58[0];
  return;
}

