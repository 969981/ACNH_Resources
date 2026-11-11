
undefined8 FUN_003baba0(long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 local_70;
  ulong local_68;
  
  if ((*param_3 & 0xfff) == 0) {
    local_68 = FUN_003cd670();
    local_68 = local_68 & 0xffffffffffff0000;
    lVar5 = FUN_003c0150(&local_68);
    uVar4 = FUN_003b8374(param_2);
    lVar6 = FUN_003c0150(&local_68);
    uVar13 = *param_3;
    lVar2 = 0x88;
    if (lVar6 != 0) {
      lVar2 = lVar6 + 0xa0;
    }
    uVar14 = 0;
    uVar1 = uVar13 + (lVar2 * (ulong)uVar4 + 0xfff & 0xfffffffffffff000);
    if ((long)(uVar1 - param_4) < 1) {
      *param_3 = uVar1;
      *(ulong *)(param_1 + 0x48) = uVar13;
      *(uint *)(param_1 + 0x40) = uVar4;
      if (uVar4 != 0) {
        uVar11 = 0;
        puVar15 = (undefined8 *)(uVar13 + (ulong)uVar4 * 0x88);
        do {
          if (lVar5 == 0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = 0;
            FUN_003c01b0(puVar15,puVar15 + 3,lVar5,&local_68);
            puVar8 = puVar15;
            puVar15 = (undefined8 *)((long)(puVar15 + 3) + lVar5);
          }
          FUN_003cdeec(uVar13,puVar8);
          local_70 = 0;
          uVar7 = FUN_003b870c(param_2,&local_70,uVar11 | 0x4000000);
          if ((uVar7 & 1) != 0) {
            FUN_003ce530(uVar13,local_70 & 0xffffffff);
            if (local_70._4_4_ != 0) {
              if (0 < (int)local_70) {
                iVar12 = 0;
                do {
                  uVar7 = *param_3;
                  if (((uVar7 & 0xfff) != 0) ||
                     (uVar10 = uVar7 + 0x104f & 0xfffffffffffff000, 0 < (long)(uVar10 - param_4)))
                  goto LAB_003babcc;
                  uVar3 = local_70 >> 0x20;
                  *param_3 = uVar10;
                  FUN_003d2e3c(uVar7);
                  uVar9 = *param_3;
                  uVar10 = uVar9 + (uVar3 + 0xfff & 0x1fffff000);
                  if (0 < (long)(uVar10 - param_4)) goto LAB_003babcc;
                  *param_3 = uVar10;
                  uVar10 = FUN_003d2ec8(uVar7,uVar9,uVar3);
                  if ((uVar10 & 1) == 0) goto LAB_003babcc;
                  FUN_003ce660(uVar13,uVar7);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < (int)local_70);
              }
              FUN_003ce5c4(uVar13);
            }
          }
          uVar11 = uVar11 + 1;
          uVar13 = uVar13 + 0x88;
        } while (uVar11 != uVar4);
      }
      uVar14 = 1;
      if (*param_3 - uVar1 != 0) {
        FUN_003cd608(param_1 + 0x2e0,uVar1,*param_3 - uVar1);
        *(undefined1 *)(param_1 + 0x2e8) = 1;
      }
    }
  }
  else {
LAB_003babcc:
    uVar14 = 0;
  }
  return uVar14;
}

