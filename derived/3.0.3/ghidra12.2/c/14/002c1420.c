
void FUN_002c1420(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  Result *pRVar9;
  long lVar10;
  undefined4 local_70 [4];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined8 local_50;
  long local_38;
  
  pRVar9 = (Result *)local_70;
  local_38 = 0;
  FUN_002282f0(&local_38);
  lVar5 = FUN_002c3ab4(param_2[0x12]);
  if (*(int *)(lVar5 + 8) == 4) {
LAB_002c1458:
    local_50 = 0;
    FUN_002282f0(&local_50);
    lVar5 = local_38;
    uVar8 = local_50;
    plVar6 = (long *)FUN_00228380();
    lVar10 = *plVar6;
    uVar7 = (**(code **)(*param_2 + 0x58))(param_2);
    if ((uVar7 & 1) != 0) {
      uVar2 = 0;
      if (lVar10 != 0) {
        uVar2 = (undefined2)((long)(uVar8 - lVar5) / lVar10);
      }
      *(undefined2 *)(PTR_DAT_04bccf00 + 0x58) = uVar2;
    }
    pRVar9 = (Result *)&local_60;
    local_50 = local_50 & 0xffffffff00000000;
    local_60 = 0;
  }
  else {
    local_60 = 0;
    local_50._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_50);
    lVar5 = FUN_002c3ab4(param_2[0x12]);
    *(undefined4 *)(lVar5 + 8) = 0;
    puVar3 = PTR_DAT_04bce368;
    uVar8 = FUN_0021f6f8(PTR_DAT_04bce368);
    if (((uVar8 & 1) != 0) ||
       (uVar8 = FUN_002270b0("nncs1-%.n.n.srv.nintendo.net",0,2,0,PTR_DAT_04bce368),
       (uVar8 & 1) != 0)) {
      puVar4 = PTR_DAT_04bce370;
      uVar8 = FUN_0021f6f8(PTR_DAT_04bce370);
      if (((uVar8 & 1) != 0) ||
         (uVar8 = FUN_002270b0("nncs2-%.n.n.srv.nintendo.net",0,2,0,PTR_DAT_04bce370),
         (uVar8 & 1) != 0)) {
        lVar5 = param_2[0x12];
        *(undefined2 *)(puVar3 + 0x18) = 0x2729;
        lVar5 = FUN_002c3ab4(lVar5);
        iVar1 = *(int *)(lVar5 + 8);
        if (iVar1 == 4) {
          local_50._0_4_ = 0x4c0d;
        }
        else {
          *(int *)(lVar5 + 8) = iVar1 + 1;
          FUN_0021f54c(lVar5 + (long)iVar1 * 0x20 + 0x10,PTR_DAT_04bce368);
          local_50._0_4_ = 0;
        }
        local_70[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)local_70);
        FUN_002296c4(local_70,&local_50);
        FUN_00229780(&local_60,local_70);
        if (local_60 == 0) {
          lVar5 = param_2[0x12];
          *(undefined2 *)(puVar3 + 0x18) = 0x278d;
          lVar5 = FUN_002c3ab4(lVar5);
          iVar1 = *(int *)(lVar5 + 8);
          if (iVar1 == 4) {
            local_50._0_4_ = 0x4c0d;
          }
          else {
            *(int *)(lVar5 + 8) = iVar1 + 1;
            FUN_0021f54c(lVar5 + (long)iVar1 * 0x20 + 0x10,PTR_DAT_04bce368);
            local_50._0_4_ = 0;
          }
          local_70[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)local_70);
          FUN_002296c4(local_70,&local_50);
          FUN_00229780(&local_60,local_70);
          if (local_60 == 0) {
            lVar5 = param_2[0x12];
            *(undefined2 *)(puVar4 + 0x18) = 0x2729;
            lVar5 = FUN_002c3ab4(lVar5);
            iVar1 = *(int *)(lVar5 + 8);
            if (iVar1 == 4) {
              local_50._0_4_ = 0x4c0d;
            }
            else {
              *(int *)(lVar5 + 8) = iVar1 + 1;
              FUN_0021f54c(lVar5 + (long)iVar1 * 0x20 + 0x10,PTR_DAT_04bce370);
              local_50._0_4_ = 0;
            }
            local_70[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)local_70);
            FUN_002296c4(local_70,&local_50);
            FUN_00229780(&local_60,local_70);
            if (local_60 == 0) {
              lVar5 = param_2[0x12];
              *(undefined2 *)(puVar4 + 0x18) = 0x278d;
              lVar5 = FUN_002c3ab4(lVar5);
              iVar1 = *(int *)(lVar5 + 8);
              if (iVar1 == 4) {
                local_50._0_4_ = 0x4c0d;
              }
              else {
                *(int *)(lVar5 + 8) = iVar1 + 1;
                FUN_0021f54c(lVar5 + (long)iVar1 * 0x20 + 0x10,PTR_DAT_04bce370);
                local_50._0_4_ = 0;
              }
              local_70[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)local_70);
              FUN_002296c4(local_70,&local_50);
              FUN_00229780(&local_60,local_70);
              if (local_60 == 0) {
                FUN_002cb5e8(PTR_DAT_04bce368,PTR_DAT_04bce370);
                goto LAB_002c1458;
              }
            }
          }
        }
      }
    }
    local_70[0] = 0;
    local_50 = CONCAT44(local_50._4_4_,0x6436);
  }
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),pRVar9);
  FUN_002296c4(param_1,&local_50);
  return;
}

