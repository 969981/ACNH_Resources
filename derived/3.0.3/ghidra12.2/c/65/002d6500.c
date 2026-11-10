
void FUN_002d6500(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined *local_278;
  undefined2 local_270;
  undefined1 local_26e;
  undefined1 local_26d;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined1 local_269;
  undefined1 local_268 [512];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_48 [8];
  
  FUN_0030a250(param_3,*(undefined4 *)(param_2 + 100));
  FUN_0030a258(param_3,*(undefined4 *)(param_2 + 0xc));
  FUN_0030a268(param_3,*(undefined4 *)(param_2 + 0xa0));
  FUN_0030a270(param_3,*(undefined2 *)(param_2 + 0x20));
  FUN_0030a278(param_3,*(undefined2 *)(param_2 + 0x22));
  FUN_0030a280(param_3,*(undefined1 *)(param_2 + 0x80));
  uVar9 = FUN_00313bcc(param_2,0);
  FUN_0030a288(param_3,0,uVar9);
  uVar9 = FUN_00313bcc(param_2,1);
  FUN_0030a288(param_3,1,uVar9);
  uVar9 = FUN_00313bcc(param_2,2);
  FUN_0030a288(param_3,2,uVar9);
  uVar9 = FUN_00313bcc(param_2,3);
  FUN_0030a288(param_3,3,uVar9);
  uVar9 = FUN_00313bcc(param_2,4);
  FUN_0030a288(param_3,4,uVar9);
  uVar9 = FUN_00313bcc(param_2,5);
  FUN_0030a288(param_3,5,uVar9);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_002e7d60(&local_68,*(long *)(param_2 + 0x88),*(long *)(param_2 + 0x90),
               *(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88));
  lVar2 = local_68;
  uVar14 = (int)local_60 - (int)local_68;
  if (0x1ff < uVar14) {
    uVar14 = 0x200;
  }
  if (uVar14 != 0) {
    uVar12 = (ulong)uVar14 & 3;
    if (uVar14 < 4) {
      uVar15 = 0;
    }
    else {
      lVar1 = local_68 + 1;
      uVar16 = 0;
      do {
        puVar13 = (undefined1 *)(lVar1 + uVar16);
        local_268[uVar16] = puVar13[-1];
        uVar15 = uVar16 + 4;
        local_268[uVar16 + 1] = *puVar13;
        local_268[uVar16 + 2] = puVar13[1];
        local_268[uVar16 + 3] = puVar13[2];
        uVar16 = uVar15;
      } while (((ulong)uVar14 & 0x3fc) != uVar15);
    }
    if ((uVar14 & 3) != 0) {
      puVar13 = (undefined1 *)(lVar2 + uVar15);
      puVar17 = local_268 + uVar15;
      do {
        uVar12 = uVar12 - 1;
        *puVar17 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar17 = puVar17 + 1;
      } while (uVar12 != 0);
    }
  }
  FUN_0030a29c(param_3,local_268);
  FUN_0030a390(param_3,*(undefined1 *)(param_2 + 0x124));
  FUN_0030a398(param_3,*(undefined1 *)(param_2 + 0x125));
  iVar11 = *(int *)(param_2 + 0x84);
  if (iVar11 == 1) {
    iVar10 = FUN_0031a4b4(param_2);
    iVar11 = *(int *)(param_2 + 0x84);
    if (iVar10 == 1) {
      bVar3 = true;
      goto LAB_002d6740;
    }
  }
  if (iVar11 == 2) {
    iVar10 = FUN_0031a4b4(param_2);
    iVar11 = *(int *)(param_2 + 0x84);
    bVar3 = iVar10 != 1;
  }
  else {
    bVar3 = false;
  }
LAB_002d6740:
  FUN_0030a3a0(param_3,iVar11 == 2,bVar3);
  FUN_0030a3b4(param_3,*(undefined8 *)(param_2 + 0x18));
  FUN_0030a3c4(param_3,*(undefined1 *)(param_2 + 0xa4));
  FUN_0018652c(auStack_48,param_2 + 0xf0);
  uVar12 = FUN_00186b78(auStack_48);
  if ((uVar12 & 1) == 0) {
    uVar8 = FUN_00186b20(auStack_48);
    uVar4 = FUN_00186b2c(auStack_48);
    uVar5 = FUN_00186b38(auStack_48);
    uVar6 = FUN_00186b44(auStack_48);
    uVar7 = FUN_00186b50(auStack_48);
    local_26a = FUN_00186b5c(auStack_48);
    local_278 = PTR_DAT_04bce2b8 + 0x10;
    local_269 = 1;
    local_270 = uVar8;
    local_26e = uVar4;
    local_26d = uVar5;
    local_26c = uVar6;
    local_26b = uVar7;
    FUN_0030a3cc(param_3,&local_278);
  }
  FUN_0030a260(param_3,*(undefined4 *)(param_2 + 0x120));
  if (local_68 != 0) {
    local_60 = local_68;
    FUN_00187e4c();
  }
  return;
}

